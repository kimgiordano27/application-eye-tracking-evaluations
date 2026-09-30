/*
FUNCTION_NAME: Mono.Security.Cryptography.RSAManaged$$Dispose
ENTRY_POINT: 0535a6a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void Mono_Security_Cryptography_RSAManaged__Dispose(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int in_stack_00000224;
  long in_stack_00000248;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  int in_stack_00000300;
  long in_stack_00000308;
  int in_stack_00000310;
  int in_stack_000003d0;
  long in_stack_00000400;
  long in_stack_00000418;
  long in_stack_00000420;
  long in_stack_00000428;
  long in_stack_00000430;
  long *in_stack_00000438;
  int in_stack_00000440;
  undefined4 in_stack_0000044c;
  int in_stack_00000470;
  undefined8 in_stack_00000478;
  
  auVar10 = FUN_03abd028();
                    /* try { // try from 0535a70c to 0545a713 has its CatchHandler @ 0535a7e0 */
                    /* try { // try from 0535a714 to 0545a7bf has its CatchHandler @ 0535a254 */
                    /* try { // try from 0535a7c0 to 0545a7c3 has its CatchHandler @ 0535a898 */
                    /* try { // try from 0535a7c4 to 0545a7c7 has its CatchHandler @ 0535a888 */
                    /* try { // try from 0535a7c8 to 0545a7d3 has its CatchHandler @ 0535a254 */
                    /* try { // try from 0535a7d4 to 0545a7d7 has its CatchHandler @ 0535a7dc */
                    /* try { // try from 0535a7d8 to 0545a7ff has its CatchHandler @ 0535a254 */
                    /* catch() { ... } // from try @ 0535a7d4 with catch @ 0535a7dc */
                    /* catch() { ... } // from try @ 0535a450 with catch @ 0535a7e0
                       catch() { ... } // from try @ 0535a70c with catch @ 0535a7e0 */
                    /* catch() { ... } // from try @ 0535a66c with catch @ 0535a7e4 */
                    /* catch() { ... } // from try @ 0535a410 with catch @ 0535a7e8 */
                    /* try { // try from 0535a800 to 0545a803 has its CatchHandler @ 0535a810 */
                    /* catch() { ... } // from try @ 0535a800 with catch @ 0535a810 */
                    /* try { // try from 0535a850 to 0545a883 has its CatchHandler @ 0535a950 */
  if (((((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
           (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
          ((*(long *)(in_stack_00000248 + 0x28) == 0 || (*(long *)(in_stack_00000248 + 0x30) == 0)))
          ) || ((*(long *)(in_stack_00000248 + 0x38) == 0 ||
                ((*(long *)(in_stack_00000248 + 0x40) == 0 ||
                 (*(long *)(in_stack_00000248 + 0x48) == 0)))))) ||
        ((*(long *)(in_stack_00000248 + 0x50) == 0 ||
         ((((*(long *)(in_stack_00000420 + 0x118) == 0 ||
            (*(long *)(in_stack_00000420 + 0x120) == 0)) ||
           (*(long *)(in_stack_00000420 + 0x38) == 0)) ||
          (((*(long *)(in_stack_00000418 + 0x18) == 0 || (*(long *)(in_stack_00000418 + 0x20) == 0))
           || ((*(long *)(in_stack_00000418 + 0x28) == 0 ||
               ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                (*(long *)(in_stack_00000418 + 0x38) == 0)))))))))))) ||
       (*(long *)(in_stack_00000418 + 0x40) == 0)) ||
      ((((*(long *)(in_stack_00000418 + 0x48) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
        (*(long *)(in_stack_00000418 + 0x58) == 0)) ||
       (((*(long *)(in_stack_00000418 + 0x60) == 0 || (*(long *)(in_stack_00000418 + 0x68) == 0)) ||
        (((*(long *)(in_stack_00000418 + 0x70) == 0 ||
          ((*(long *)(in_stack_00000418 + 0x78) == 0 || (*(long *)(in_stack_00000418 + 0x80) == 0)))
          ) || (in_stack_00000400 == 0)))))))) ||
     (((((*(long *)(in_stack_00000400 + 0x18) == 0 || (*(long *)(in_stack_00000400 + 0x20) == 0)) ||
        (*(long *)(in_stack_00000400 + 0x30) == 0)) ||
       ((*(long *)(in_stack_00000400 + 0x38) == 0 || (*(long *)(in_stack_00000400 + 0x40) == 0))))
      || (((*(long *)(in_stack_00000400 + 0x48) == 0 ||
           ((*(long *)(in_stack_00000400 + 0x50) == 0 || (*(long *)(in_stack_00000400 + 0x58) == 0))
           )) || ((*(long *)(in_stack_00000400 + 0x60) == 0 ||
                  (((*(long *)(in_stack_00000400 + 0x68) == 0 ||
                    (*(long *)(in_stack_00000400 + 0x70) == 0)) ||
                   (*(long *)(in_stack_00000400 + 0x78) == 0)))))))))) goto LAB_0535dca8;
                    /* catch() { ... } // from try @ 0535a658 with catch @ 0535a884
                       try { // try from 0535a884 to 0545a8c3 has its CatchHandler @ 0535a254 */
                    /* catch() { ... } // from try @ 0535a7c4 with catch @ 0535a888 */
                    /* catch() { ... } // from try @ 0535a644 with catch @ 0535a894 */
                    /* catch() { ... } // from try @ 0535a7c0 with catch @ 0535a898 */
                    /* catch() { ... } // from try @ 0535a594 with catch @ 0535a8a8 */
                    /* catch() { ... } // from try @ 0535a5d4 with catch @ 0535a8ac */
                    /* try { // try from 0535a8c4 to 0545a8c7 has its CatchHandler @ 0535a8d4 */
                    /* catch() { ... } // from try @ 0535a8c4 with catch @ 0535a8d4 */
                    /* try { // try from 0535a914 to 0545a93b has its CatchHandler @ 0535a950 */
  bVar1 = 0 < in_stack_00000470;
  iVar4 = (int)((ulong)in_stack_00000478 >> 0x20);
  bVar2 = 0 < iVar4;
  auVar10 = FUN_03abd0c8(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                         *(undefined8 *)PTR_DAT_06d40c30);
  bVar3 = 0 < in_stack_00000310;
  if ((bVar3 && bVar2) && bVar1) {
    FUN_066d1868(0);
    if (((*in_stack_00000438 == 0) || (lVar7 = *(long *)(in_stack_00000418 + 0xc0), lVar7 == 0)) ||
       ((*(long *)(lVar7 + 0x10) == 0 || (*(long *)(lVar7 + 0x18) == 0)))) goto LAB_0535dca8;
    FUN_042cd940(lVar7 + 0x30,*(undefined8 *)PTR_DAT_06d40c98);
    auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CullingSplit>
                        (&stack0x00000528,in_stack_00000440,1,in_stack_00000260,in_stack_00000268,
                         *(undefined8 *)PTR_DAT_06d40bc8);
    lVar7 = *(long *)(in_stack_00000418 + 0xc0);
    if (lVar7 == 0) goto LAB_0535dca8;
    auVar11 = FUN_03ab3674(*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38),auVar11._0_8_
                           ,auVar11._8_8_,*(undefined8 *)PTR_DAT_06d40b98);
  }
  else {
    auVar11 = ZEXT816(0);
  }
  if (0 < in_stack_00000310) {
    if (in_stack_00000428 == 0) goto LAB_0535dca8;
    iVar8 = 0;
    do {
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
          ((*(long *)(in_stack_00000430 + 0x18) == 0 ||
           (((*(long *)(in_stack_00000430 + 0x40) == 0 || (*(long *)(in_stack_00000400 + 0x18) == 0)
             ) || (*(long *)(in_stack_00000400 + 0x28) == 0)))))) ||
         (((((*(long *)(in_stack_00000400 + 0x30) == 0 || (*(long *)(in_stack_00000400 + 0x38) == 0)
             ) || (*(long *)(in_stack_00000400 + 0x40) == 0)) ||
           ((*(long *)(in_stack_00000400 + 0x48) == 0 || (*(long *)(in_stack_00000400 + 0x50) == 0))
           )) || ((*(long *)(in_stack_00000400 + 0x58) == 0 ||
                  ((((*(long *)(in_stack_00000400 + 0x60) == 0 ||
                     (*(long *)(in_stack_00000400 + 0x68) == 0)) ||
                    (*(long *)(in_stack_00000400 + 0x70) == 0)) ||
                   (*(long *)(in_stack_00000400 + 0x90) == 0)))))))) goto LAB_0535dca8;
      auVar10 = FUN_03abd168(&stack0x00000528,in_stack_000003d0,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c38);
      if ((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
            ((*(long *)(in_stack_00000430 + 0x18) == 0 ||
             (((*(long *)(in_stack_00000430 + 0x40) == 0 ||
               (FUN_05369508(in_stack_00000308,0), *(long *)(in_stack_00000308 + 0x10) == 0)) ||
              ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
               (((*(long *)(in_stack_00000420 + 0x38) == 0 ||
                 (*(long *)(in_stack_00000420 + 0x118) == 0)) ||
                (*(long *)(in_stack_00000420 + 0x120) == 0)))))))))) ||
           ((*(long *)(in_stack_00000420 + 0x40) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0))
           )) || ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
                  (((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                    (*(long *)(in_stack_00000418 + 0x38) == 0)) ||
                   ((*(long *)(in_stack_00000418 + 0x40) == 0 ||
                    (((*(long *)(in_stack_00000418 + 0x48) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
                     (*(long *)(in_stack_00000418 + 0x60) == 0)))))))))) ||
         (*(long *)(in_stack_00000418 + 0x70) == 0)) goto LAB_0535dca8;
      auVar10 = FUN_03abd2a8(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c48);
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          (((*(long *)(in_stack_00000420 + 0x40) == 0 ||
            ((*(long *)(in_stack_00000420 + 0x58) == 0 || (*(long *)(in_stack_00000420 + 200) == 0))
            )) || (*(long *)(in_stack_00000420 + 0xd0) == 0)))) ||
         ((((*(long *)(in_stack_00000420 + 0xd8) == 0 || (*(long *)(in_stack_00000420 + 0x48) == 0))
           || (*(long *)(in_stack_00000420 + 0x50) == 0)) ||
          ((*(long *)(in_stack_00000418 + 0x30) == 0 || (*(long *)(in_stack_00000418 + 0x38) == 0)))
          ))) goto LAB_0535dca8;
      auVar10 = FUN_03abd348(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c50);
      if (((((*in_stack_00000438 == 0) ||
            ((*(long *)(in_stack_00000430 + 0x48) == 0 || (*(long *)(in_stack_00000430 + 0x40) == 0)
             ))) || ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
                     ((((*(long *)(in_stack_00000420 + 0x38) == 0 ||
                        (*(long *)(in_stack_00000420 + 0x40) == 0)) ||
                       (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
                      (((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                        (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
                       ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
                        ((lVar7 = *(long *)(in_stack_00000418 + 0x88), lVar7 == 0 ||
                         (*(long *)(lVar7 + 0x10) == 0)))))))))))) || (*(long *)(lVar7 + 0x18) == 0)
          ) || (*(long *)(lVar7 + 0x20) == 0)) goto LAB_0535dca8;
      auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<XRRaycast>
                          (&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c58);
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
           (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0x40) == 0))
           || ((*(long *)(in_stack_00000420 + 0x58) == 0 ||
               ((*(long *)(in_stack_00000420 + 200) == 0 ||
                (*(long *)(in_stack_00000420 + 0xd0) == 0)))))))) ||
         ((*(long *)(in_stack_00000420 + 0xd8) == 0 ||
          ((((((*(long *)(in_stack_00000418 + 0x18) == 0 ||
               (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x70) == 0)) ||
             ((lVar7 = *(long *)(in_stack_00000418 + 0x88), lVar7 == 0 ||
              (*(long *)(lVar7 + 0x10) == 0)))) || (*(long *)(lVar7 + 0x18) == 0)) ||
           (*(long *)(lVar7 + 0x20) == 0)))))) goto LAB_0535dca8;
      auVar10 = FUN_03abd208(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c40);
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
           ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
            (((*(long *)(in_stack_00000420 + 0x38) == 0 ||
              (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
             (*(long *)(in_stack_00000418 + 0x70) == 0)))))) ||
          ((lVar7 = *(long *)(in_stack_00000418 + 0x90), lVar7 == 0 ||
           (*(long *)(lVar7 + 0x10) == 0)))) ||
         ((*(long *)(lVar7 + 0x18) == 0 || (*(long *)(lVar7 + 0x20) == 0)))) goto LAB_0535dca8;
      auVar10 = FUN_03abd7a8(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c88);
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
          ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
           (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0)
             ) || (*(long *)(in_stack_00000418 + 0x30) == 0)))))) ||
         (((*(long *)(in_stack_00000418 + 0x50) == 0 || (*(long *)(in_stack_00000418 + 0x70) == 0))
          || ((*(long *)(in_stack_00000418 + 0x80) == 0 ||
              ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
               (*(long *)(in_stack_00000400 + 0x90) == 0)))))))) goto LAB_0535dca8;
      auVar10 = FUN_03abd488(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c60);
      if (0 < in_stack_00000300) {
        if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
             (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
            ((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0xa8) == 0)
             ))) || ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                     ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                      (*(long *)(in_stack_00000400 + 0x90) == 0)))))) goto LAB_0535dca8;
        auVar10 = FUN_03abd528(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c68);
      }
      if (iVar4 < 1) {
        if ((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
              (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
             (((*(long *)(in_stack_00000420 + 0x18) == 0 ||
               (*(long *)(in_stack_00000420 + 0x38) == 0)) ||
              ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
               ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
                (*(long *)(in_stack_00000418 + 0x30) == 0)))))))) ||
            (*(long *)(in_stack_00000418 + 0x38) == 0)) ||
           (((((*(long *)(in_stack_00000418 + 0x50) == 0 ||
               (*(long *)(in_stack_00000418 + 0x60) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x68) == 0)) ||
             ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
              (*(long *)(in_stack_00000418 + 0x78) == 0)))) ||
            ((((*(long *)(in_stack_00000418 + 0x80) == 0 ||
               ((*(long *)(in_stack_00000400 + 0x58) == 0 ||
                (*(long *)(in_stack_00000400 + 0x60) == 0)))) ||
              (*(long *)(in_stack_00000400 + 0x68) == 0)) ||
             ((((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                (lVar7 = *(long *)(in_stack_00000418 + 0x88), lVar7 == 0)) ||
               (*(long *)(lVar7 + 0x10) == 0)) ||
              ((*(long *)(lVar7 + 0x18) == 0 || (*(long *)(lVar7 + 0x20) == 0))))))))))
        goto LAB_0535dca8;
        auVar10 = FUN_03abd5c8(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c70);
      }
      else {
        if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
            ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
             (((*(long *)(in_stack_00000420 + 0x38) == 0 ||
               (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x30) == 0)))))) ||
           (((*(long *)(in_stack_00000418 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0)
             ) || ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
                   (((*(long *)(in_stack_00000418 + 0x80) == 0 ||
                     (lVar7 = *(long *)(in_stack_00000418 + 0x88), lVar7 == 0)) ||
                    ((*(long *)(lVar7 + 0x10) == 0 ||
                     ((*(long *)(lVar7 + 0x18) == 0 || (*(long *)(lVar7 + 0x20) == 0))))))))))))
        goto LAB_0535dca8;
        auVar10 = FUN_03abd668(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c78);
        if (((bVar3 && bVar2) && bVar1) && iVar8 == 0) {
          auVar10 = FUN_06689568(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_,0);
        }
        if (iVar8 == 0) {
          if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
               (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
               (*(long *)(in_stack_00000418 + 0x70) == 0)))) ||
             ((*(long *)(in_stack_00000418 + 0xc0) == 0 ||
              (*(long *)(*(long *)(in_stack_00000418 + 0xc0) + 0x10) == 0)))) goto LAB_0535dca8;
          auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRRaycastHit>
                              (&stack0x00000528,in_stack_000003d0 * 3,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40be8);
          if ((((*in_stack_00000438 == 0) ||
               (lVar7 = *(long *)(in_stack_00000418 + 0xc0), lVar7 == 0)) ||
              (*(long *)(lVar7 + 0x10) == 0)) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_0535dca8;
          auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeText>
                              (&stack0x00000528,in_stack_000003d0 * 3,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40be0);
          if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
               (*(long *)(in_stack_00000418 + 0x20) == 0)) ||
              ((lVar7 = *(long *)(in_stack_00000418 + 0xc0), lVar7 == 0 ||
               (*(long *)(lVar7 + 0x10) == 0)))) || (*(long *)(lVar7 + 0x18) == 0))
          goto LAB_0535dca8;
          FUN_042cd400(lVar7 + 0x20,*(undefined8 *)PTR_DAT_06d40c90);
          auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Keyframe>
                              (&stack0x00000528,in_stack_00000440 * 6,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40bd0);
          lVar7 = *(long *)(in_stack_00000418 + 0xc0);
          if (lVar7 == 0) goto LAB_0535dca8;
          auVar10 = FUN_03ab36f4(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                                 auVar10._0_8_,auVar10._8_8_,*(undefined8 *)PTR_DAT_06d40ba0);
        }
        else {
          lVar7 = *(long *)(in_stack_00000418 + 0xc0);
          if (((lVar7 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
             ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(lVar7 + 0x10) == 0))))
          goto LAB_0535dca8;
          uVar5 = *(undefined8 *)(lVar7 + 0x28);
          uVar6 = *(undefined8 *)PTR_DAT_06d40bb8;
          *(undefined4 *)((long)((ulong)&stack0x00000528 | 1) + 3) = 0;
          *(undefined4 *)((ulong)&stack0x00000528 | 1) = 0;
          auVar10 = FUN_03ab5914(&stack0x00000528,uVar5,0x100,auVar10._0_8_,auVar10._8_8_,uVar6);
        }
        iVar9 = 4;
        do {
          if (((*(long *)(in_stack_00000418 + 0x18) == 0) ||
              (lVar7 = *(long *)(in_stack_00000418 + 0xc0), lVar7 == 0)) ||
             (*(long *)(lVar7 + 0x10) == 0)) goto LAB_0535dca8;
          auVar10 = FUN_03ab58a8(&stack0x00000528,*(undefined8 *)(lVar7 + 0x28),0x80,auVar10._0_8_,
                                 auVar10._8_8_,*(undefined8 *)PTR_DAT_06d40bb0);
          if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0))
          goto LAB_0535dca8;
          auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<float>
                              (&stack0x00000528,in_stack_000003d0,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40bd8);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
            ((*(long *)(in_stack_00000430 + 0x40) == 0 ||
             (((*(long *)(in_stack_00000420 + 0x18) == 0 ||
               (*(long *)(in_stack_00000420 + 0x38) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x18) == 0)))))) ||
           (((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0)
             ) || ((*(long *)(in_stack_00000418 + 0x60) == 0 ||
                   (((*(long *)(in_stack_00000418 + 0x68) == 0 ||
                     (*(long *)(in_stack_00000418 + 0x70) == 0)) ||
                    ((*(long *)(in_stack_00000418 + 0x78) == 0 ||
                     ((((*(long *)(in_stack_00000418 + 0x80) == 0 ||
                        (*(long *)(in_stack_00000400 + 0x58) == 0)) ||
                       (*(long *)(in_stack_00000400 + 0x60) == 0)) ||
                      ((*(long *)(in_stack_00000400 + 0x68) == 0 ||
                       (*(long *)(in_stack_00000400 + 0x70) == 0)))))))))))))) goto LAB_0535dca8;
        auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector4f>
                            (&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c80);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != in_stack_00000310);
  }
  lVar7 = FUN_053461ec(0);
  if (((lVar7 == 0) || (*in_stack_00000438 == 0)) ||
     ((((*(long *)(in_stack_00000420 + 0x18) == 0 ||
        (((*(long *)(in_stack_00000420 + 0x118) == 0 || (*(long *)(in_stack_00000420 + 0x120) == 0))
         || (*(long *)(in_stack_00000420 + 0x40) == 0)))) ||
       (((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x40) == 0)) ||
        (*(long *)(in_stack_00000418 + 0x48) == 0)))) ||
      ((*(long *)(in_stack_00000418 + 0x58) == 0 || (*(long *)(in_stack_00000418 + 0x68) == 0))))))
  goto LAB_0535dca8;
  auVar10 = FUN_03abcda8(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                         *(undefined8 *)PTR_DAT_06d40c08);
  if ((bVar3 && bVar2) && bVar1) {
    if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0)) goto LAB_0535dca8;
    auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeQueue<SelfCollisionConstraint_ContactInfo>>
                        (&stack0x00000528,in_stack_000003d0,1,auVar10._0_8_,auVar10._8_8_,
                         *(undefined8 *)PTR_DAT_06d40bc0);
    if ((*(long *)(in_stack_00000418 + 0x18) == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0))
    goto LAB_0535dca8;
    auVar11 = FUN_03ab583c(&stack0x00000528,
                           *(undefined8 *)(*(long *)(in_stack_00000418 + 0xc0) + 0x38),0x80,
                           auVar11._0_8_,auVar11._8_8_,*(undefined8 *)PTR_DAT_06d40ba8);
  }
  else {
    auVar11 = ZEXT816(0);
  }
  if ((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000430 + 0x40) != 0)) &&
      (*(long *)(in_stack_00000420 + 0x18) != 0)) &&
     (((((*(long *)(in_stack_00000420 + 0x118) != 0 && (*(long *)(in_stack_00000420 + 0x120) != 0))
        && ((*(long *)(in_stack_00000420 + 200) != 0 &&
            ((*(long *)(in_stack_00000420 + 0xd0) != 0 && (*(long *)(in_stack_00000420 + 0xd8) != 0)
             ))))) && (*(long *)(in_stack_00000420 + 0x48) != 0)) &&
      ((((*(long *)(in_stack_00000420 + 0x50) != 0 && (*(long *)(in_stack_00000420 + 0x60) != 0)) &&
        (*(long *)(in_stack_00000420 + 0x68) != 0)) && (*(long *)(in_stack_00000420 + 0xb8) != 0))))
     )) {
    auVar10 = FUN_03abcd08(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c00);
    if (((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000420 + 0x118) != 0)) &&
       (((*(long *)(in_stack_00000420 + 0x88) != 0 &&
         ((*(long *)(in_stack_00000420 + 0x90) != 0 && (*(long *)(in_stack_00000420 + 0x98) != 0))))
        && (*(long *)(in_stack_00000420 + 0x78) != 0)))) {
      auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<SelfCollisionConstraint_GridInfo>
                          (&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                           *(undefined8 *)PTR_DAT_06d40bf8);
      if (((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000248 + 0x28) != 0)) &&
           (*(long *)(in_stack_00000248 + 0x30) != 0)) &&
          (((*(long *)(in_stack_00000420 + 0x118) != 0 &&
            (*(long *)(in_stack_00000420 + 0x120) != 0)) &&
           ((*(long *)(in_stack_00000420 + 0x90) != 0 &&
            ((*(long *)(in_stack_00000420 + 0x98) != 0 && (*(long *)(in_stack_00000420 + 0x20) != 0)
             ))))))) &&
         ((*(long *)(in_stack_00000420 + 0x70) != 0 && (*(long *)(in_stack_00000420 + 0x110) != 0)))
         ) {
        auVar10 = FUN_03abce48(&stack0x00000528,in_stack_00000440,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c10);
        lVar7 = FUN_053461ec(0);
        if (((((lVar7 != 0) && (*in_stack_00000438 != 0)) &&
             (*(long *)(in_stack_00000430 + 0x48) != 0)) &&
            ((*(long *)(in_stack_00000400 + 0x30) != 0 && (*(long *)(in_stack_00000400 + 0x38) != 0)
             ))) && ((((*(long *)(in_stack_00000400 + 0x48) != 0 &&
                       ((*(long *)(in_stack_00000400 + 0x50) != 0 &&
                        (*(long *)(in_stack_00000248 + 0x28) != 0)))) &&
                      (*(long *)(in_stack_00000248 + 0x30) != 0)) &&
                     ((((*(long *)(in_stack_00000248 + 0x38) != 0 &&
                        (*(long *)(in_stack_00000248 + 0x40) != 0)) &&
                       (*(long *)(in_stack_00000248 + 0x48) != 0)) &&
                      ((*(long *)(in_stack_00000420 + 0x18) != 0 &&
                       (*(long *)(in_stack_00000420 + 0x58) != 0)))))))) {
          auVar10 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DecalEntity>
                              (&stack0x00000528,in_stack_000003d0,1,auVar10._0_8_,auVar10._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c18);
          if ((bVar3 && bVar2) && bVar1) {
            auVar10 = FUN_06689568(auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_,0);
          }
          if (in_stack_00000224 < 1) {
            auVar11 = ZEXT816(0);
          }
          else {
            if (((((in_stack_00000428 == 0) ||
                  (FUN_0536a17c(in_stack_00000430,0), *(long *)(in_stack_00000430 + 0x10) == 0)) ||
                 ((*(long *)(in_stack_00000430 + 0x48) == 0 ||
                  (((*(long *)(in_stack_00000430 + 0x18) == 0 ||
                    (*(long *)(in_stack_00000430 + 0x40) == 0)) || (in_stack_00000308 == 0)))))) ||
                ((((((FUN_05369508(in_stack_00000308,0), *(long *)(in_stack_00000308 + 0x10) == 0 ||
                     (in_stack_00000248 == 0)) ||
                    ((*(long *)(in_stack_00000248 + 0x28) == 0 ||
                     (((*(long *)(in_stack_00000248 + 0x30) == 0 ||
                       (*(long *)(in_stack_00000248 + 0x38) == 0)) ||
                      ((*(long *)(in_stack_00000248 + 0x58) == 0 ||
                       (((*(long *)(in_stack_00000248 + 0x40) == 0 ||
                         (*(long *)(in_stack_00000248 + 0x48) == 0)) ||
                        (*(long *)(in_stack_00000248 + 0x50) == 0)))))))))) ||
                   ((in_stack_00000420 == 0 || (*(long *)(in_stack_00000420 + 0x18) == 0)))) ||
                  ((*(long *)(in_stack_00000420 + 0x38) == 0 ||
                   (((((*(long *)(in_stack_00000420 + 0xe0) == 0 ||
                       (*(long *)(in_stack_00000420 + 0xe8) == 0)) ||
                      ((*(long *)(in_stack_00000420 + 0xf0) == 0 ||
                       (((((*(long *)(in_stack_00000420 + 0xf8) == 0 ||
                           (*(long *)(in_stack_00000420 + 0x100) == 0)) ||
                          (*(long *)(in_stack_00000420 + 0x108) == 0)) ||
                         ((*(long *)(in_stack_00000420 + 0x118) == 0 ||
                          (*(long *)(in_stack_00000420 + 0x120) == 0)))) ||
                        (*(long *)(in_stack_00000420 + 0x30) == 0)))))) ||
                     ((*(long *)(in_stack_00000420 + 0x40) == 0 ||
                      (*(long *)(in_stack_00000420 + 0x58) == 0)))) ||
                    ((*(long *)(in_stack_00000420 + 200) == 0 ||
                     ((((((*(long *)(in_stack_00000420 + 0xd0) == 0 ||
                          (*(long *)(in_stack_00000420 + 0xd8) == 0)) ||
                         (*(long *)(in_stack_00000420 + 0x48) == 0)) ||
                        (((*(long *)(in_stack_00000420 + 0x50) == 0 ||
                          (*(long *)(in_stack_00000420 + 0x60) == 0)) ||
                         ((*(long *)(in_stack_00000420 + 0x68) == 0 ||
                          ((*(long *)(in_stack_00000420 + 0xb8) == 0 ||
                           (*(long *)(in_stack_00000420 + 0x88) == 0)))))))) ||
                       (*(long *)(in_stack_00000420 + 0x90) == 0)) ||
                      (((*(long *)(in_stack_00000420 + 0x98) == 0 ||
                        (*(long *)(in_stack_00000420 + 0x78) == 0)) ||
                       (*(long *)(in_stack_00000420 + 0x20) == 0)))))))))))) ||
                 ((((*(long *)(in_stack_00000420 + 0x70) == 0 ||
                    (*(long *)(in_stack_00000420 + 0x110) == 0)) ||
                   ((*(long *)(in_stack_00000420 + 0xa8) == 0 ||
                    ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                     (*(long *)(in_stack_00000418 + 0x20) == 0)))))) ||
                  (*(long *)(in_stack_00000418 + 0x28) == 0)))))) ||
               (((((((((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                       (*(long *)(in_stack_00000418 + 0x38) == 0)) ||
                      (*(long *)(in_stack_00000418 + 0x40) == 0)) ||
                     ((*(long *)(in_stack_00000418 + 0x48) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x50) == 0)))) ||
                    ((*(long *)(in_stack_00000418 + 0x58) == 0 ||
                     ((*(long *)(in_stack_00000418 + 0x60) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x68) == 0)))))) ||
                   (*(long *)(in_stack_00000418 + 0x70) == 0)) ||
                  ((((*(long *)(in_stack_00000418 + 0x78) == 0 ||
                     (*(long *)(in_stack_00000418 + 0x80) == 0)) || (in_stack_00000400 == 0)) ||
                   (((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                     (*(long *)(in_stack_00000400 + 0x20) == 0)) ||
                    ((*(long *)(in_stack_00000400 + 0x28) == 0 ||
                     ((*(long *)(in_stack_00000400 + 0x30) == 0 ||
                      (*(long *)(in_stack_00000400 + 0x38) == 0)))))))))) ||
                 (((*(long *)(in_stack_00000400 + 0x40) == 0 ||
                   (((*(long *)(in_stack_00000400 + 0x48) == 0 ||
                     (*(long *)(in_stack_00000400 + 0x50) == 0)) ||
                    (*(long *)(in_stack_00000400 + 0x58) == 0)))) ||
                  ((*(long *)(in_stack_00000400 + 0x60) == 0 ||
                   (*(long *)(in_stack_00000400 + 0x68) == 0)))))) ||
                ((((((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                     ((*(long *)(in_stack_00000400 + 0x90) == 0 ||
                      (*(long *)(in_stack_00000400 + 0x78) == 0)))) ||
                    (*(long *)(in_stack_00000418 + 0xa8) == 0)) ||
                   ((((*(long *)(*(long *)(in_stack_00000418 + 0xa8) + 0x10) == 0 ||
                      (lVar7 = *(long *)(in_stack_00000418 + 0x88), lVar7 == 0)) ||
                     (*(long *)(lVar7 + 0x10) == 0)) ||
                    ((*(long *)(lVar7 + 0x18) == 0 || (*(long *)(lVar7 + 0x20) == 0)))))) ||
                  ((lVar7 = *(long *)(in_stack_00000418 + 0x90), lVar7 == 0 ||
                   ((*(long *)(lVar7 + 0x10) == 0 || (*(long *)(lVar7 + 0x18) == 0)))))) ||
                 (*(long *)(lVar7 + 0x20) == 0)))))) goto LAB_0535dca8;
            auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Hammersley_Hammersley2dSeq16>
                                (&stack0x00000528,in_stack_00000224,1,in_stack_00000260,
                                 in_stack_00000268,*(undefined8 *)PTR_DAT_06d40bf0);
          }
          auVar10 = FUN_06689568(auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_,0);
          uVar6 = auVar10._8_8_;
          uVar5 = auVar10._0_8_;
          lVar7 = FUN_0533f874(0);
          if (lVar7 != 0) {
            iVar4 = FUN_0536a17c(lVar7,0);
            if (iVar4 < 1) {
              if (in_stack_00000248 != 0) {
                FUN_05377fe0(in_stack_00000248,uVar5,uVar6,0);
                return;
              }
            }
            else if (in_stack_00000420 != 0) {
              auVar10 = FUN_0537d688(in_stack_00000420,uVar5,uVar6,in_stack_0000044c,0);
              if (in_stack_00000248 != 0) {
                auVar11 = FUN_05377fe0(in_stack_00000248,uVar5,uVar6,0);
                FUN_06689568(auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0535dca8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


