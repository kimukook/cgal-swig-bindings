#ifndef SWIG_CGAL_COMMON_REFERENCE_WRAPPER_H
#define SWIG_CGAL_COMMON_REFERENCE_WRAPPER_H

template <class Object>
class Reference_wrapper{
  Object i;
public:
  Reference_wrapper(){}
  Reference_wrapper(const Object& k):i(k){}

  #ifndef SWIG
  Object& object_ref(){return i;}
  #endif
  void set(Object t){i=t;}
  Object object() const {return i;}
};

#endif //SWIG_CGAL_COMMON_REFERENCE_WRAPPER_H
