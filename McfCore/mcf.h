#ifndef STAR_MCH_DEFINE_H
#define STAR_MCH_DEFINE_H

#include <string>
#include <iostream>
#include <vector>
#include <boost/config/compiler/visualc.hpp>
#include <opencv2/opencv.hpp>

// Define standard data types for portability.
typedef bool				MCF_BOOL;
typedef unsigned char		MCF_BYTE;
typedef char				MCF_CHAR;
typedef unsigned short  	MCF_USHORT;
typedef short				MCF_SSHORT;
typedef unsigned long      	MCF_UINT;
typedef long 				MCF_SINT;
typedef unsigned long long	MCF_UINT64;
typedef long long			MCF_SINT64;
typedef float				MCF_FLOAT;
typedef double				MCF_DOUBLE;


#define MCF_TRUE			true
#define MCF_FALSE			false

#define MCF_FAIL			-1
#define MCF_SUCCESS			0

#ifdef UNICODE
typedef std::wstring		MCF_STRING;
typedef std::wstringstream	MCF_STRINGSTREAM;
typedef std::wifstream		MCF_IFSTREAM;
typedef std::wofstream		MCF_OFSTREAM;
typedef std::wfstream		MCF_FSTREAM;
typedef wchar_t				MCF_TCHAR;
#define _L(x)				L ##x
#else
typedef std::string			MCF_STRING;
typedef std::stringstream	MCF_STRINGSTREAM;
typedef std::ifstream		MCF_IFSTREAM;
typedef std::ofstream		MCF_OFSTREAM;
typedef std::fstream		MCF_FSTREAM;
typedef char				MCF_TCHAR;
#define _L(x)				x
#endif

template<class T>
struct MCF_SIZE
{
    T cx;
    T cy;

    MCF_SIZE():cx(0),cy(0){}
    MCF_SIZE(T cx,T cy):cx(cx),cy(cy){}
    void operator = (const MCF_SIZE<T> & sz)
    {
        cx = sz.cx;
        cy = sz.cy;
    }
};
//-----------------------------------
template<class T>
struct MCF_POINT
{
    T	x;
    T	y;

    MCF_POINT() : x(0), y(0) {}
    MCF_POINT(T x, T y) : x(x), y(y) {}

    void operator = (const MCF_POINT<T> & pt)
    {
        x = pt.x;
        y = pt.y;
    }
};
//----------------------------------
template<class T>
struct MCF_POINT_3D
{
    T	x;
    T	y;
    T   z;

    MCF_POINT_3D() : x(0), y(0), z(0) {}
    MCF_POINT_3D(T x, T y, T z) : x(x), y(y), z(z) {}

    void operator = (const MCF_POINT_3D<T> & pt)
    {
        x = pt.x;
        y = pt.y;
        z = pt.z;
    }
};

template<class T>
struct MCF_RECT
{
    T	x;
    T	y;
    T   width;
    T   height;

    MCF_RECT() : x(0), y(0), width(0), height(0) {}
    MCF_RECT(T x, T y, T width, T height) : x(x), y(y), width(width), height(height) {}
    MCF_RECT(MCF_POINT<T> point, MCF_SIZE<T> size) : x(point.x), y(point.y), width(size.cx), height(size.cy) {}

    void operator = (const MCF_RECT<T> & rect)
    {
        x = rect.x;
        y = rect.y;
        width = rect.width;
        height = rect.height;
    }
};

//----------------------------------
typedef MCF_SIZE<MCF_SINT>		MCF_SINT_SIZE;
typedef MCF_SIZE<MCF_UINT>		MCF_UINT_SIZE;
typedef MCF_SIZE<MCF_FLOAT>		MCF_FLOAT_SIZE;
typedef MCF_SIZE<MCF_DOUBLE>	MCF_DOUBLE_SIZE;

typedef MCF_POINT<MCF_SINT>		MCF_SINT_POINT;
typedef MCF_POINT<MCF_UINT>		MCF_UINT_POINT;
typedef MCF_POINT<MCF_FLOAT>	MCF_FLOAT_POINT;
typedef MCF_POINT<MCF_DOUBLE>	MCF_DOUBLE_POINT;

typedef MCF_POINT_3D<MCF_SINT>		MCF_SINT_POINT_3D;
typedef MCF_POINT_3D<MCF_UINT>		MCF_UINT_POINT_3D;
typedef MCF_POINT_3D<MCF_FLOAT>     MCF_FLOAT_POINT_3D;
typedef MCF_POINT_3D<MCF_DOUBLE>	MCF_DOUBLE_POINT_3D;

typedef MCF_RECT<MCF_SINT>		MCF_SINT_RECT;
typedef MCF_RECT<MCF_UINT>		MCF_UINT_RECT;
typedef MCF_RECT<MCF_FLOAT>     MCF_FLOAT_RECT;
typedef MCF_RECT<MCF_DOUBLE>	MCF_DOUBLE_RECT;


//-------------------------------------
typedef std::vector<MCF_BYTE>	MCF_BYTE_VEC;
typedef std::vector<MCF_CHAR>	MCF_CHAR_VEC;
typedef std::vector<MCF_SINT>	MCF_SINT_VEC;
typedef std::vector<MCF_UINT>	MCF_UINT_VEC;
typedef std::vector<MCF_SSHORT>	MCF_SSHORT_VEC;
typedef std::vector<MCF_USHORT>	MCF_USHORT_VEC;
typedef std::vector<MCF_FLOAT>	MCF_FLOAT_VEC;
typedef std::vector<MCF_DOUBLE>	MCF_DOUBLE_VEC;
typedef std::vector<MCF_STRING>	MCF_STRING_VEC;

typedef std::vector<MCF_SINT_SIZE>		MCF_SINT_SIZE_VEC;
typedef std::vector<MCF_UINT_SIZE>		MCF_UINT_SIZE_VEC;
typedef std::vector<MCF_FLOAT_SIZE>		MCF_FLOAT_SIZE_VEC;
typedef std::vector<MCF_DOUBLE_SIZE>	MCF_DOUBLE_SIZE_VEC;

typedef std::vector<MCF_SINT_POINT>		MCF_SINT_POINT_VEC;
typedef std::vector<MCF_UINT_POINT>		MCF_UINT_POINT_VEC;
typedef std::vector<MCF_FLOAT_POINT>	MCF_FLOAT_POINT_VEC;
typedef std::vector<MCF_DOUBLE_POINT>	MCF_DOUBLE_POINT_VEC;

//---------------------------------
#define MCF_SAFE_RELEASE_PTR(p) if (p) { delete p; p = NULL; }
#define MCF_SAFE_RELEASE_PTR_FOR_DLL(p) if (p) { p->Release(); }
#define MCF_SAFE_RELEASE_ARRAY(p) if (p) { delete [] p; p = NULL; }
#define ROUND(x)    ((MCF_SINT)((x) > 0 ? floor((x) + 0.5) : ceil((x) - 0.5)))
#define DOUBLE_ROUND(x, precision)   (ROUND(x * pow(10, precision)) / pow(10, precision))
#define FLOAT_ROUND(x, precision)   ((MCF_FLOAT)DOUBLE_ROUND(x, precision))

#ifndef MIN
#  define MIN(a,b)  ((a) > (b) ? (b) : (a))
#endif

#ifndef MAX
#  define MAX(a,b)  ((a) < (b) ? (b) : (a))
#endif

#define PI  3.1415926535897932
#define CM_TO_MM    10
#define MM_TO_UM    1000
#define IN_TO_MM    25.4



#endif // STAR_MCH_DEFINE_H
