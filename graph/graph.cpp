t e m p l a t e   < t y p e n a m e   T >  
 c l a s s   g r a p h   {  
     p u b l i c :  
     s t r u c t   e d g e   {  
         i n t   f r o m ;  
         i n t   t o ;  
         T   c o s t ;  
     } ;  
  
     v e c t o r < e d g e >   e d g e s ;  
     v e c t o r <   v e c t o r < i n t >   >   g ;  
     i n t   n ;  
  
     g r a p h ( i n t   n )   :   n ( n )   {  
         g . r e s i z e ( n ) ;  
     }  
  
     v i r t u a l   v o i d   a d d ( i n t   f r o m ,   i n t   t o ,   T   c o s t )   =   0 ;  
 } ; 