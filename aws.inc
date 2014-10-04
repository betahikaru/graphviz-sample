#if defined(_GRAPHVIZ_FILETYPE_pdf)
#define _AWS_EXT "-fit.svg"
#elif defined(_GRAPHVIZ_FILETYPE_ps)
#define _AWS_EXT "-fit.svg"
#elif defined(_GRAPHVIZ_FILETYPE_ps2)
#define _AWS_EXT "-fit.svg"
#else
#define _AWS_EXT ".png"
#endif

#define _AWS_SHAPE(name) shape=box regular=true margin=0 peripheries=0 image="awsicons/"+name+_AWS_EXT

#define _AWS_INTERNET _AWS_SHAPE("internet")
#define _AWS_ELB _AWS_SHAPE("elb")
#define _AWS_INSTANCE _AWS_SHAPE("instance")
#define _AWS_INSTANCES _AWS_SHAPE("instances")
#define _AWS_S3 _AWS_SHAPE("s3")
#define _AWS_ROUTE53 _AWS_SHAPE("route53")
#define _AWS_USERS _AWS_SHAPE("users")

#define _AWS_REGION(name) style="filled,dashed" fillcolor=lightyellow label="Region:"+name
#define _AWS_AZ(name) style="filled" fillcolor=pink label="AZ:"+name
