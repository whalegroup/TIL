# matrix(행렬)
# 데이터의 형태가 2차원으로 행(row)과 열(column로 구성
# 하나의 데이터 유형만 가능, 역행렬은 solve()로 구함
#                                 false:기본 '열'방향
# matrix(data=NA, nrow=1, ncol=1, byrow=FALSE, dimnames=NULL) 
# rbind(vectors or matrices), cbind(vectors or matrices)


rm(list=ls())

m1 <- matrix(seq(1,10),nrow=5, byrow=TRUE)
m2 = matrix(seq(1,6), ncol=3)
m3 = rbind(seq(1,3), seq(4,6))    #1,2,3이 하나의 행
m4 = rbind(seq(1,3), seq(4,6), seq(7,12))   #error. but 알아서 채워줌?!

m5 = cbind(seq(1,3), seq(4,6))   #1,2,3 이 하나의 열

m <- matrix(seq(1,12), nrow=4, ncol=3)   #byrow=TRUE

#Index
m1 <- m[2,3]
m2 <- m[3,]  
m3 <- m[,-2]
m4 <- m[c(2,3),2]  #2,3번 행과 2번열
m5 <- m[c(TRUE,FALSE,FALSE,TRUE), ]   #1,4번 행

#List
rm(list=ls())

a1 = array(1:12, dim=c(3,2,2))  #3개의 행, 2개의 열, 이것이 2개



