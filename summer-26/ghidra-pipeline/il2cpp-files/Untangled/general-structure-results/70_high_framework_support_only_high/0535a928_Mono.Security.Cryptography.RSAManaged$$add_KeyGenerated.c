/*
FUNCTION_NAME: Mono.Security.Cryptography.RSAManaged$$add_KeyGenerated
ENTRY_POINT: 0535a928
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Mono_Security_Cryptography_RSAManaged__add_KeyGenerated(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int in_stack_00000224;
  long in_stack_00000248;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  int in_stack_00000300;
  long in_stack_00000308;
  int in_stack_00000310;
  undefined8 in_stack_000003c8;
  int in_stack_000003d0;
  undefined8 in_stack_000003d8;
  long in_stack_00000400;
  long in_stack_00000418;
  long in_stack_00000420;
  long in_stack_00000428;
  long in_stack_00000430;
  long *in_stack_00000438;
  int in_stack_00000440;
  undefined4 in_stack_0000044c;
  undefined8 in_stack_00000478;
  
                    /* try { // try from 0535a93c to 0545a947 has its CatchHandler @ 0535a254 */
                    /* try { // try from 0535a948 to 0545a94f has its CatchHandler @ 0535a950 */
                    /* catch() { ... } // from try @ 0535a850 with catch @ 0535a950
                       catch() { ... } // from try @ 0535a914 with catch @ 0535a950
                       catch() { ... } // from try @ 0535a948 with catch @ 0535a950 */
  bVar1 = !in_ZR;
  bVar2 = in_NG == in_OV;
  iVar5 = (int)((ulong)in_stack_00000478 >> 0x20);
  bVar3 = 0 < iVar5;
  auVar11 = FUN_03abd0c8(&stack0x00000528,in_stack_00000440,1,in_stack_000003d8,in_stack_000003c8,
                         *(undefined8 *)PTR_DAT_06d40c30);
  bVar4 = 0 < in_stack_00000310;
  if ((bVar4 && bVar3) && (bVar1 && bVar2)) {
    FUN_066d1868(0);
    if ((((*in_stack_00000438 == 0) || (lVar8 = *(long *)(in_stack_00000418 + 0xc0), lVar8 == 0)) ||
        (*(long *)(lVar8 + 0x10) == 0)) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_0535dca8;
    FUN_042cd940(lVar8 + 0x30,*(undefined8 *)PTR_DAT_06d40c98);
    auVar12 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CullingSplit>
                        (&stack0x00000528,in_stack_00000440,1,in_stack_00000260,in_stack_00000268,
                         *(undefined8 *)PTR_DAT_06d40bc8);
    lVar8 = *(long *)(in_stack_00000418 + 0xc0);
    if (lVar8 == 0) goto LAB_0535dca8;
    auVar12 = FUN_03ab3674(*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x38),auVar12._0_8_
                           ,auVar12._8_8_,*(undefined8 *)PTR_DAT_06d40b98);
  }
  else {
    auVar12 = ZEXT816(0);
  }
  if (0 < in_stack_00000310) {
    if (in_stack_00000428 == 0) goto LAB_0535dca8;
    iVar9 = 0;
    do {
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
           ((*(long *)(in_stack_00000430 + 0x18) == 0 ||
            ((*(long *)(in_stack_00000430 + 0x40) == 0 || (*(long *)(in_stack_00000400 + 0x18) == 0)
             ))))) ||
          ((*(long *)(in_stack_00000400 + 0x28) == 0 ||
           (((*(long *)(in_stack_00000400 + 0x30) == 0 || (*(long *)(in_stack_00000400 + 0x38) == 0)
             ) || (*(long *)(in_stack_00000400 + 0x40) == 0)))))) ||
         (((*(long *)(in_stack_00000400 + 0x48) == 0 || (*(long *)(in_stack_00000400 + 0x50) == 0))
          || ((((*(long *)(in_stack_00000400 + 0x58) == 0 ||
                ((*(long *)(in_stack_00000400 + 0x60) == 0 ||
                 (*(long *)(in_stack_00000400 + 0x68) == 0)))) ||
               (*(long *)(in_stack_00000400 + 0x70) == 0)) ||
              (*(long *)(in_stack_00000400 + 0x90) == 0)))))) goto LAB_0535dca8;
      auVar11 = FUN_03abd168(&stack0x00000528,in_stack_000003d0,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c38);
      if (((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
             (*(long *)(in_stack_00000430 + 0x18) == 0)) ||
            (((*(long *)(in_stack_00000430 + 0x40) == 0 ||
              (FUN_05369508(in_stack_00000308,0), *(long *)(in_stack_00000308 + 0x10) == 0)) ||
             ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
              ((*(long *)(in_stack_00000420 + 0x38) == 0 ||
               (*(long *)(in_stack_00000420 + 0x118) == 0)))))))) ||
           (*(long *)(in_stack_00000420 + 0x120) == 0)) ||
          ((((((*(long *)(in_stack_00000420 + 0x40) == 0 ||
               (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x20) == 0)) ||
             ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
              (*(long *)(in_stack_00000418 + 0x38) == 0)))) ||
            (*(long *)(in_stack_00000418 + 0x40) == 0)) ||
           ((*(long *)(in_stack_00000418 + 0x48) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0))
           )))) || ((*(long *)(in_stack_00000418 + 0x60) == 0 ||
                    (*(long *)(in_stack_00000418 + 0x70) == 0)))) goto LAB_0535dca8;
      auVar11 = FUN_03abd2a8(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c48);
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          (*(long *)(in_stack_00000420 + 0x40) == 0)) ||
         (((((*(long *)(in_stack_00000420 + 0x58) == 0 || (*(long *)(in_stack_00000420 + 200) == 0))
            || (*(long *)(in_stack_00000420 + 0xd0) == 0)) ||
           ((*(long *)(in_stack_00000420 + 0xd8) == 0 || (*(long *)(in_stack_00000420 + 0x48) == 0))
           )) || ((*(long *)(in_stack_00000420 + 0x50) == 0 ||
                  ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                   (*(long *)(in_stack_00000418 + 0x38) == 0)))))))) goto LAB_0535dca8;
      auVar11 = FUN_03abd348(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c50);
      if ((((*in_stack_00000438 == 0) ||
           ((((*(long *)(in_stack_00000430 + 0x48) == 0 ||
              (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
             (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
            ((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0x40) == 0)
             ))))) ||
          (((*(long *)(in_stack_00000418 + 0x18) == 0 ||
            ((*(long *)(in_stack_00000418 + 0x30) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0)
             ))) || (*(long *)(in_stack_00000418 + 0x70) == 0)))) ||
         ((((lVar8 = *(long *)(in_stack_00000418 + 0x88), lVar8 == 0 ||
            (*(long *)(lVar8 + 0x10) == 0)) || (*(long *)(lVar8 + 0x18) == 0)) ||
          (*(long *)(lVar8 + 0x20) == 0)))) goto LAB_0535dca8;
      auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<XRRaycast>
                          (&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c58);
      if ((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
            ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
             ((*(long *)(in_stack_00000420 + 0x38) == 0 ||
              (*(long *)(in_stack_00000420 + 0x40) == 0)))))) ||
           ((*(long *)(in_stack_00000420 + 0x58) == 0 ||
            (((*(long *)(in_stack_00000420 + 200) == 0 || (*(long *)(in_stack_00000420 + 0xd0) == 0)
              ) || (*(long *)(in_stack_00000420 + 0xd8) == 0)))))) ||
          (((*(long *)(in_stack_00000418 + 0x18) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0))
           || (((*(long *)(in_stack_00000418 + 0x70) == 0 ||
                ((lVar8 = *(long *)(in_stack_00000418 + 0x88), lVar8 == 0 ||
                 (*(long *)(lVar8 + 0x10) == 0)))) || (*(long *)(lVar8 + 0x18) == 0)))))) ||
         (*(long *)(lVar8 + 0x20) == 0)) goto LAB_0535dca8;
      auVar11 = FUN_03abd208(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c40);
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
           (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0))
           || ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
               ((lVar8 = *(long *)(in_stack_00000418 + 0x90), lVar8 == 0 ||
                (*(long *)(lVar8 + 0x10) == 0)))))))) ||
         ((*(long *)(lVar8 + 0x18) == 0 || (*(long *)(lVar8 + 0x20) == 0)))) goto LAB_0535dca8;
      auVar11 = FUN_03abd7a8(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c88);
      if (((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
             (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
            ((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0)
             ))) || ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                     ((*(long *)(in_stack_00000418 + 0x50) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x70) == 0)))))) ||
          (*(long *)(in_stack_00000418 + 0x80) == 0)) ||
         ((*(long *)(in_stack_00000400 + 0x18) == 0 || (*(long *)(in_stack_00000400 + 0x90) == 0))))
      goto LAB_0535dca8;
      auVar11 = FUN_03abd488(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c60);
      if (0 < in_stack_00000300) {
        if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
            (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
           (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0xa8) == 0)
             ) || ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                   ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                    (*(long *)(in_stack_00000400 + 0x90) == 0)))))))) goto LAB_0535dca8;
        auVar11 = FUN_03abd528(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c68);
      }
      if (iVar5 < 1) {
        if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
            (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
           ((((*(long *)(in_stack_00000420 + 0x18) == 0 ||
              (*(long *)(in_stack_00000420 + 0x38) == 0)) ||
             ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
              ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
               (*(long *)(in_stack_00000418 + 0x30) == 0)))))) ||
            (((*(long *)(in_stack_00000418 + 0x38) == 0 ||
              (((((((*(long *)(in_stack_00000418 + 0x50) == 0 ||
                    (*(long *)(in_stack_00000418 + 0x60) == 0)) ||
                   (*(long *)(in_stack_00000418 + 0x68) == 0)) ||
                  ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
                   (*(long *)(in_stack_00000418 + 0x78) == 0)))) ||
                 (*(long *)(in_stack_00000418 + 0x80) == 0)) ||
                ((*(long *)(in_stack_00000400 + 0x58) == 0 ||
                 (*(long *)(in_stack_00000400 + 0x60) == 0)))) ||
               (*(long *)(in_stack_00000400 + 0x68) == 0)))) ||
             ((((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                (lVar8 = *(long *)(in_stack_00000418 + 0x88), lVar8 == 0)) ||
               (*(long *)(lVar8 + 0x10) == 0)) ||
              ((*(long *)(lVar8 + 0x18) == 0 || (*(long *)(lVar8 + 0x20) == 0))))))))))
        goto LAB_0535dca8;
        auVar11 = FUN_03abd5c8(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c70);
      }
      else {
        if ((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
              ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
               (((*(long *)(in_stack_00000420 + 0x38) == 0 ||
                 (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
                (*(long *)(in_stack_00000418 + 0x30) == 0)))))) ||
             ((*(long *)(in_stack_00000418 + 0x38) == 0 ||
              (*(long *)(in_stack_00000418 + 0x50) == 0)))) ||
            (*(long *)(in_stack_00000418 + 0x70) == 0)) ||
           (((*(long *)(in_stack_00000418 + 0x80) == 0 ||
             (lVar8 = *(long *)(in_stack_00000418 + 0x88), lVar8 == 0)) ||
            ((*(long *)(lVar8 + 0x10) == 0 ||
             ((*(long *)(lVar8 + 0x18) == 0 || (*(long *)(lVar8 + 0x20) == 0))))))))
        goto LAB_0535dca8;
        auVar11 = FUN_03abd668(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c78);
        if (((bVar4 && bVar3) && (bVar1 && bVar2)) && iVar9 == 0) {
          auVar11 = FUN_06689568(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_,0);
        }
        if (iVar9 == 0) {
          if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
               (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
               (*(long *)(in_stack_00000418 + 0x70) == 0)))) ||
             ((*(long *)(in_stack_00000418 + 0xc0) == 0 ||
              (*(long *)(*(long *)(in_stack_00000418 + 0xc0) + 0x10) == 0)))) goto LAB_0535dca8;
          auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRRaycastHit>
                              (&stack0x00000528,in_stack_000003d0 * 3,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40be8);
          if (((*in_stack_00000438 == 0) ||
              (lVar8 = *(long *)(in_stack_00000418 + 0xc0), lVar8 == 0)) ||
             ((*(long *)(lVar8 + 0x10) == 0 || (*(long *)(lVar8 + 0x18) == 0)))) goto LAB_0535dca8;
          auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeText>
                              (&stack0x00000528,in_stack_000003d0 * 3,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40be0);
          if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x20) == 0)) ||
             (((lVar8 = *(long *)(in_stack_00000418 + 0xc0), lVar8 == 0 ||
               (*(long *)(lVar8 + 0x10) == 0)) || (*(long *)(lVar8 + 0x18) == 0))))
          goto LAB_0535dca8;
          FUN_042cd400(lVar8 + 0x20,*(undefined8 *)PTR_DAT_06d40c90);
          auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Keyframe>
                              (&stack0x00000528,in_stack_00000440 * 6,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40bd0);
          lVar8 = *(long *)(in_stack_00000418 + 0xc0);
          if (lVar8 == 0) goto LAB_0535dca8;
          auVar11 = FUN_03ab36f4(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                                 auVar11._0_8_,auVar11._8_8_,*(undefined8 *)PTR_DAT_06d40ba0);
        }
        else {
          lVar8 = *(long *)(in_stack_00000418 + 0xc0);
          if (((lVar8 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
             ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(lVar8 + 0x10) == 0))))
          goto LAB_0535dca8;
          uVar6 = *(undefined8 *)(lVar8 + 0x28);
          uVar7 = *(undefined8 *)PTR_DAT_06d40bb8;
          *(undefined4 *)((long)((ulong)&stack0x00000528 | 1) + 3) = 0;
          *(undefined4 *)((ulong)&stack0x00000528 | 1) = 0;
          auVar11 = FUN_03ab5914(&stack0x00000528,uVar6,0x100,auVar11._0_8_,auVar11._8_8_,uVar7);
        }
        iVar10 = 4;
        do {
          if (((*(long *)(in_stack_00000418 + 0x18) == 0) ||
              (lVar8 = *(long *)(in_stack_00000418 + 0xc0), lVar8 == 0)) ||
             (*(long *)(lVar8 + 0x10) == 0)) goto LAB_0535dca8;
          auVar11 = FUN_03ab58a8(&stack0x00000528,*(undefined8 *)(lVar8 + 0x28),0x80,auVar11._0_8_,
                                 auVar11._8_8_,*(undefined8 *)PTR_DAT_06d40bb0);
          if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0))
          goto LAB_0535dca8;
          auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<float>
                              (&stack0x00000528,in_stack_000003d0,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40bd8);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
             ((*(long *)(in_stack_00000430 + 0x40) == 0 ||
              ((((*(long *)(in_stack_00000420 + 0x18) == 0 ||
                 (*(long *)(in_stack_00000420 + 0x38) == 0)) ||
                (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
               ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
                (*(long *)(in_stack_00000418 + 0x50) == 0)))))))) ||
            (*(long *)(in_stack_00000418 + 0x60) == 0)) ||
           (((*(long *)(in_stack_00000418 + 0x68) == 0 || (*(long *)(in_stack_00000418 + 0x70) == 0)
             ) || (((*(long *)(in_stack_00000418 + 0x78) == 0 ||
                    (((*(long *)(in_stack_00000418 + 0x80) == 0 ||
                      (*(long *)(in_stack_00000400 + 0x58) == 0)) ||
                     (*(long *)(in_stack_00000400 + 0x60) == 0)))) ||
                   ((*(long *)(in_stack_00000400 + 0x68) == 0 ||
                    (*(long *)(in_stack_00000400 + 0x70) == 0)))))))) goto LAB_0535dca8;
        auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector4f>
                            (&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                             *(undefined8 *)PTR_DAT_06d40c80);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != in_stack_00000310);
  }
  lVar8 = FUN_053461ec(0);
  if (((((lVar8 == 0) || (*in_stack_00000438 == 0)) ||
       ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
        (((*(long *)(in_stack_00000420 + 0x118) == 0 || (*(long *)(in_stack_00000420 + 0x120) == 0))
         || (*(long *)(in_stack_00000420 + 0x40) == 0)))))) ||
      ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x40) == 0)))) ||
     ((*(long *)(in_stack_00000418 + 0x48) == 0 ||
      ((*(long *)(in_stack_00000418 + 0x58) == 0 || (*(long *)(in_stack_00000418 + 0x68) == 0))))))
  goto LAB_0535dca8;
  auVar11 = FUN_03abcda8(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)PTR_DAT_06d40c08);
  if ((bVar4 && bVar3) && (bVar1 && bVar2)) {
    if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0)) goto LAB_0535dca8;
    auVar12 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeQueue<SelfCollisionConstraint_ContactInfo>>
                        (&stack0x00000528,in_stack_000003d0,1,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)PTR_DAT_06d40bc0);
    if ((*(long *)(in_stack_00000418 + 0x18) == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0))
    goto LAB_0535dca8;
    auVar12 = FUN_03ab583c(&stack0x00000528,
                           *(undefined8 *)(*(long *)(in_stack_00000418 + 0xc0) + 0x38),0x80,
                           auVar12._0_8_,auVar12._8_8_,*(undefined8 *)PTR_DAT_06d40ba8);
  }
  else {
    auVar12 = ZEXT816(0);
  }
  if (((((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000430 + 0x40) != 0)) &&
         (*(long *)(in_stack_00000420 + 0x18) != 0)) &&
        ((*(long *)(in_stack_00000420 + 0x118) != 0 && (*(long *)(in_stack_00000420 + 0x120) != 0)))
        ) && (*(long *)(in_stack_00000420 + 200) != 0)) &&
      (((*(long *)(in_stack_00000420 + 0xd0) != 0 && (*(long *)(in_stack_00000420 + 0xd8) != 0)) &&
       ((*(long *)(in_stack_00000420 + 0x48) != 0 &&
        (((*(long *)(in_stack_00000420 + 0x50) != 0 && (*(long *)(in_stack_00000420 + 0x60) != 0))
         && (*(long *)(in_stack_00000420 + 0x68) != 0)))))))) &&
     (*(long *)(in_stack_00000420 + 0xb8) != 0)) {
    auVar11 = FUN_03abcd08(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                           *(undefined8 *)PTR_DAT_06d40c00);
    if ((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000420 + 0x118) != 0)) &&
        ((*(long *)(in_stack_00000420 + 0x88) != 0 &&
         ((*(long *)(in_stack_00000420 + 0x90) != 0 && (*(long *)(in_stack_00000420 + 0x98) != 0))))
        )) && (*(long *)(in_stack_00000420 + 0x78) != 0)) {
      auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<SelfCollisionConstraint_GridInfo>
                          (&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                           *(undefined8 *)PTR_DAT_06d40bf8);
      if ((((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000248 + 0x28) != 0)) &&
            (*(long *)(in_stack_00000248 + 0x30) != 0)) &&
           (((*(long *)(in_stack_00000420 + 0x118) != 0 &&
             (*(long *)(in_stack_00000420 + 0x120) != 0)) &&
            ((*(long *)(in_stack_00000420 + 0x90) != 0 &&
             ((*(long *)(in_stack_00000420 + 0x98) != 0 &&
              (*(long *)(in_stack_00000420 + 0x20) != 0)))))))) &&
          (*(long *)(in_stack_00000420 + 0x70) != 0)) && (*(long *)(in_stack_00000420 + 0x110) != 0)
         ) {
        auVar11 = FUN_03abce48(&stack0x00000528,in_stack_00000440,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c10);
        lVar8 = FUN_053461ec(0);
        if (((((((lVar8 != 0) && (*in_stack_00000438 != 0)) &&
               (*(long *)(in_stack_00000430 + 0x48) != 0)) &&
              ((*(long *)(in_stack_00000400 + 0x30) != 0 &&
               (*(long *)(in_stack_00000400 + 0x38) != 0)))) &&
             ((*(long *)(in_stack_00000400 + 0x48) != 0 &&
              ((*(long *)(in_stack_00000400 + 0x50) != 0 &&
               (*(long *)(in_stack_00000248 + 0x28) != 0)))))) &&
            ((*(long *)(in_stack_00000248 + 0x30) != 0 &&
             (((*(long *)(in_stack_00000248 + 0x38) != 0 &&
               (*(long *)(in_stack_00000248 + 0x40) != 0)) &&
              (*(long *)(in_stack_00000248 + 0x48) != 0)))))) &&
           ((*(long *)(in_stack_00000420 + 0x18) != 0 && (*(long *)(in_stack_00000420 + 0x58) != 0))
           )) {
          auVar11 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DecalEntity>
                              (&stack0x00000528,in_stack_000003d0,1,auVar11._0_8_,auVar11._8_8_,
                               *(undefined8 *)PTR_DAT_06d40c18);
          if ((bVar4 && bVar3) && (bVar1 && bVar2)) {
            auVar11 = FUN_06689568(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
          }
          if (in_stack_00000224 < 1) {
            auVar12 = ZEXT816(0);
          }
          else {
            if (((((((in_stack_00000428 == 0) ||
                    (FUN_0536a17c(in_stack_00000430,0), *(long *)(in_stack_00000430 + 0x10) == 0))
                   || ((*(long *)(in_stack_00000430 + 0x48) == 0 ||
                       (((*(long *)(in_stack_00000430 + 0x18) == 0 ||
                         (*(long *)(in_stack_00000430 + 0x40) == 0)) || (in_stack_00000308 == 0)))))
                   ) || ((FUN_05369508(in_stack_00000308,0),
                         *(long *)(in_stack_00000308 + 0x10) == 0 || (in_stack_00000248 == 0)))) ||
                 (((((*(long *)(in_stack_00000248 + 0x28) == 0 ||
                     (((*(long *)(in_stack_00000248 + 0x30) == 0 ||
                       (*(long *)(in_stack_00000248 + 0x38) == 0)) ||
                      ((*(long *)(in_stack_00000248 + 0x58) == 0 ||
                       ((((*(long *)(in_stack_00000248 + 0x40) == 0 ||
                          (*(long *)(in_stack_00000248 + 0x48) == 0)) ||
                         (*(long *)(in_stack_00000248 + 0x50) == 0)) ||
                        ((in_stack_00000420 == 0 || (*(long *)(in_stack_00000420 + 0x18) == 0)))))))
                      ))) || (*(long *)(in_stack_00000420 + 0x38) == 0)) ||
                   (((*(long *)(in_stack_00000420 + 0xe0) == 0 ||
                     (*(long *)(in_stack_00000420 + 0xe8) == 0)) ||
                    ((((((*(long *)(in_stack_00000420 + 0xf0) == 0 ||
                         (((*(long *)(in_stack_00000420 + 0xf8) == 0 ||
                           (*(long *)(in_stack_00000420 + 0x100) == 0)) ||
                          (*(long *)(in_stack_00000420 + 0x108) == 0)))) ||
                        (((*(long *)(in_stack_00000420 + 0x118) == 0 ||
                          (*(long *)(in_stack_00000420 + 0x120) == 0)) ||
                         (*(long *)(in_stack_00000420 + 0x30) == 0)))) ||
                       ((*(long *)(in_stack_00000420 + 0x40) == 0 ||
                        (*(long *)(in_stack_00000420 + 0x58) == 0)))) ||
                      ((*(long *)(in_stack_00000420 + 200) == 0 ||
                       (((*(long *)(in_stack_00000420 + 0xd0) == 0 ||
                         (*(long *)(in_stack_00000420 + 0xd8) == 0)) ||
                        (*(long *)(in_stack_00000420 + 0x48) == 0)))))) ||
                     ((*(long *)(in_stack_00000420 + 0x50) == 0 ||
                      (*(long *)(in_stack_00000420 + 0x60) == 0)))))))) ||
                  ((*(long *)(in_stack_00000420 + 0x68) == 0 ||
                   (((*(long *)(in_stack_00000420 + 0xb8) == 0 ||
                     (*(long *)(in_stack_00000420 + 0x88) == 0)) ||
                    ((*(long *)(in_stack_00000420 + 0x90) == 0 ||
                     (((((*(long *)(in_stack_00000420 + 0x98) == 0 ||
                         (*(long *)(in_stack_00000420 + 0x78) == 0)) ||
                        (*(long *)(in_stack_00000420 + 0x20) == 0)) ||
                       ((*(long *)(in_stack_00000420 + 0x70) == 0 ||
                        (*(long *)(in_stack_00000420 + 0x110) == 0)))) ||
                      (*(long *)(in_stack_00000420 + 0xa8) == 0)))))))))))) ||
                ((((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                   (*(long *)(in_stack_00000418 + 0x20) == 0)) ||
                  ((*(long *)(in_stack_00000418 + 0x28) == 0 ||
                   (((((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                       (*(long *)(in_stack_00000418 + 0x38) == 0)) ||
                      (*(long *)(in_stack_00000418 + 0x40) == 0)) ||
                     (((*(long *)(in_stack_00000418 + 0x48) == 0 ||
                       (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
                      ((*(long *)(in_stack_00000418 + 0x58) == 0 ||
                       ((*(long *)(in_stack_00000418 + 0x60) == 0 ||
                        (*(long *)(in_stack_00000418 + 0x68) == 0)))))))) ||
                    ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
                     (((*(long *)(in_stack_00000418 + 0x78) == 0 ||
                       (*(long *)(in_stack_00000418 + 0x80) == 0)) || (in_stack_00000400 == 0)))))))
                   ))) || ((((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                             (*(long *)(in_stack_00000400 + 0x20) == 0)) ||
                            (((*(long *)(in_stack_00000400 + 0x28) == 0 ||
                              ((*(long *)(in_stack_00000400 + 0x30) == 0 ||
                               (*(long *)(in_stack_00000400 + 0x38) == 0)))) ||
                             (*(long *)(in_stack_00000400 + 0x40) == 0)))) ||
                           (((((*(long *)(in_stack_00000400 + 0x48) == 0 ||
                               (*(long *)(in_stack_00000400 + 0x50) == 0)) ||
                              (*(long *)(in_stack_00000400 + 0x58) == 0)) ||
                             ((*(long *)(in_stack_00000400 + 0x60) == 0 ||
                              (*(long *)(in_stack_00000400 + 0x68) == 0)))) ||
                            ((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                             ((*(long *)(in_stack_00000400 + 0x90) == 0 ||
                              (*(long *)(in_stack_00000400 + 0x78) == 0)))))))))))) ||
               ((*(long *)(in_stack_00000418 + 0xa8) == 0 ||
                (((((*(long *)(*(long *)(in_stack_00000418 + 0xa8) + 0x10) == 0 ||
                    (lVar8 = *(long *)(in_stack_00000418 + 0x88), lVar8 == 0)) ||
                   (*(long *)(lVar8 + 0x10) == 0)) ||
                  (((*(long *)(lVar8 + 0x18) == 0 || (*(long *)(lVar8 + 0x20) == 0)) ||
                   ((lVar8 = *(long *)(in_stack_00000418 + 0x90), lVar8 == 0 ||
                    ((*(long *)(lVar8 + 0x10) == 0 || (*(long *)(lVar8 + 0x18) == 0)))))))) ||
                 (*(long *)(lVar8 + 0x20) == 0)))))) goto LAB_0535dca8;
            auVar12 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Hammersley_Hammersley2dSeq16>
                                (&stack0x00000528,in_stack_00000224,1,in_stack_00000260,
                                 in_stack_00000268,*(undefined8 *)PTR_DAT_06d40bf0);
          }
          auVar11 = FUN_06689568(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
          uVar7 = auVar11._8_8_;
          uVar6 = auVar11._0_8_;
          lVar8 = FUN_0533f874(0);
          if (lVar8 != 0) {
            iVar5 = FUN_0536a17c(lVar8,0);
            if (iVar5 < 1) {
              if (in_stack_00000248 != 0) {
                FUN_05377fe0(in_stack_00000248,uVar6,uVar7,0);
                return;
              }
            }
            else if (in_stack_00000420 != 0) {
              auVar11 = FUN_0537d688(in_stack_00000420,uVar6,uVar7,in_stack_0000044c,0);
              if (in_stack_00000248 != 0) {
                auVar12 = FUN_05377fe0(in_stack_00000248,uVar6,uVar7,0);
                FUN_06689568(auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_,0);
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


