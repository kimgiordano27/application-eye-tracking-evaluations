/*
FUNCTION_NAME: Mono.Security.Cryptography.RSAManaged$$ToXmlString
ENTRY_POINT: 0535aa60
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


void Mono_Security_Cryptography_RSAManaged__ToXmlString(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte unaff_w20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  
  iVar2 = (int)((ulong)in_stack_00000478 >> 0x20);
  auVar8 = FUN_03abd0c8(&stack0x00000528,in_stack_00000440,1,in_stack_000003d8,in_stack_000003c8,
                        *(undefined8 *)PTR_DAT_06d40c30);
  bVar1 = (0 < in_stack_00000310 && 0 < iVar2) & unaff_w20;
  if (bVar1 == 1) {
    FUN_066d1868(0);
    if ((((*in_stack_00000438 == 0) || (lVar5 = *(long *)(in_stack_00000418 + 0xc0), lVar5 == 0)) ||
        (*(long *)(lVar5 + 0x10) == 0)) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_0535dca8;
    FUN_042cd940(lVar5 + 0x30,*(undefined8 *)PTR_DAT_06d40c98);
    auVar9 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CullingSplit>
                       (&stack0x00000528,in_stack_00000440,1,in_stack_00000260,in_stack_00000268,
                        *(undefined8 *)PTR_DAT_06d40bc8);
    lVar5 = *(long *)(in_stack_00000418 + 0xc0);
    if (lVar5 == 0) goto LAB_0535dca8;
    auVar9 = FUN_03ab3674(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x38),auVar9._0_8_,
                          auVar9._8_8_,*(undefined8 *)PTR_DAT_06d40b98);
  }
  else {
    auVar9 = ZEXT816(0);
  }
  if (0 < in_stack_00000310) {
    if (in_stack_00000428 == 0) goto LAB_0535dca8;
    iVar6 = 0;
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
      auVar8 = FUN_03abd168(&stack0x00000528,in_stack_000003d0,1,auVar8._0_8_,auVar8._8_8_,
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
      auVar8 = FUN_03abd2a8(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c48);
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          (*(long *)(in_stack_00000420 + 0x40) == 0)) ||
         (((((*(long *)(in_stack_00000420 + 0x58) == 0 || (*(long *)(in_stack_00000420 + 200) == 0))
            || (*(long *)(in_stack_00000420 + 0xd0) == 0)) ||
           ((*(long *)(in_stack_00000420 + 0xd8) == 0 || (*(long *)(in_stack_00000420 + 0x48) == 0))
           )) || ((*(long *)(in_stack_00000420 + 0x50) == 0 ||
                  ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                   (*(long *)(in_stack_00000418 + 0x38) == 0)))))))) goto LAB_0535dca8;
      auVar8 = FUN_03abd348(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
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
         ((((lVar5 = *(long *)(in_stack_00000418 + 0x88), lVar5 == 0 ||
            (*(long *)(lVar5 + 0x10) == 0)) || (*(long *)(lVar5 + 0x18) == 0)) ||
          (*(long *)(lVar5 + 0x20) == 0)))) goto LAB_0535dca8;
      auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<XRRaycast>
                         (&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
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
                ((lVar5 = *(long *)(in_stack_00000418 + 0x88), lVar5 == 0 ||
                 (*(long *)(lVar5 + 0x10) == 0)))) || (*(long *)(lVar5 + 0x18) == 0)))))) ||
         (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0535dca8;
      auVar8 = FUN_03abd208(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c40);
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
           (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0))
           || ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
               ((lVar5 = *(long *)(in_stack_00000418 + 0x90), lVar5 == 0 ||
                (*(long *)(lVar5 + 0x10) == 0)))))))) ||
         ((*(long *)(lVar5 + 0x18) == 0 || (*(long *)(lVar5 + 0x20) == 0)))) goto LAB_0535dca8;
      auVar8 = FUN_03abd7a8(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
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
      auVar8 = FUN_03abd488(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c60);
      if (0 < in_stack_00000300) {
        if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
            (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
           (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0xa8) == 0)
             ) || ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                   ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                    (*(long *)(in_stack_00000400 + 0x90) == 0)))))))) goto LAB_0535dca8;
        auVar8 = FUN_03abd528(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c68);
      }
      if (iVar2 < 1) {
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
                (lVar5 = *(long *)(in_stack_00000418 + 0x88), lVar5 == 0)) ||
               (*(long *)(lVar5 + 0x10) == 0)) ||
              ((*(long *)(lVar5 + 0x18) == 0 || (*(long *)(lVar5 + 0x20) == 0))))))))))
        goto LAB_0535dca8;
        auVar8 = FUN_03abd5c8(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
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
             (lVar5 = *(long *)(in_stack_00000418 + 0x88), lVar5 == 0)) ||
            ((*(long *)(lVar5 + 0x10) == 0 ||
             ((*(long *)(lVar5 + 0x18) == 0 || (*(long *)(lVar5 + 0x20) == 0))))))))
        goto LAB_0535dca8;
        auVar8 = FUN_03abd668(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c78);
        if (bVar1 == 1 && iVar6 == 0) {
          auVar8 = FUN_06689568(auVar9._0_8_,auVar9._8_8_,auVar8._0_8_,auVar8._8_8_,0);
        }
        if (iVar6 == 0) {
          if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
               (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
               (*(long *)(in_stack_00000418 + 0x70) == 0)))) ||
             ((*(long *)(in_stack_00000418 + 0xc0) == 0 ||
              (*(long *)(*(long *)(in_stack_00000418 + 0xc0) + 0x10) == 0)))) goto LAB_0535dca8;
          auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRRaycastHit>
                             (&stack0x00000528,in_stack_000003d0 * 3,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40be8);
          if (((*in_stack_00000438 == 0) ||
              (lVar5 = *(long *)(in_stack_00000418 + 0xc0), lVar5 == 0)) ||
             ((*(long *)(lVar5 + 0x10) == 0 || (*(long *)(lVar5 + 0x18) == 0)))) goto LAB_0535dca8;
          auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeText>
                             (&stack0x00000528,in_stack_000003d0 * 3,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40be0);
          if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x20) == 0)) ||
             (((lVar5 = *(long *)(in_stack_00000418 + 0xc0), lVar5 == 0 ||
               (*(long *)(lVar5 + 0x10) == 0)) || (*(long *)(lVar5 + 0x18) == 0))))
          goto LAB_0535dca8;
          FUN_042cd400(lVar5 + 0x20,*(undefined8 *)PTR_DAT_06d40c90);
          auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Keyframe>
                             (&stack0x00000528,in_stack_00000440 * 6,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40bd0);
          lVar5 = *(long *)(in_stack_00000418 + 0xc0);
          if (lVar5 == 0) goto LAB_0535dca8;
          auVar8 = FUN_03ab36f4(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
                                auVar8._0_8_,auVar8._8_8_,*(undefined8 *)PTR_DAT_06d40ba0);
        }
        else {
          lVar5 = *(long *)(in_stack_00000418 + 0xc0);
          if (((lVar5 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
             ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(lVar5 + 0x10) == 0))))
          goto LAB_0535dca8;
          uVar3 = *(undefined8 *)(lVar5 + 0x28);
          uVar4 = *(undefined8 *)PTR_DAT_06d40bb8;
          *(undefined4 *)((long)((ulong)&stack0x00000528 | 1) + 3) = 0;
          *(undefined4 *)((ulong)&stack0x00000528 | 1) = 0;
          auVar8 = FUN_03ab5914(&stack0x00000528,uVar3,0x100,auVar8._0_8_,auVar8._8_8_,uVar4);
        }
        iVar7 = 4;
        do {
          if (((*(long *)(in_stack_00000418 + 0x18) == 0) ||
              (lVar5 = *(long *)(in_stack_00000418 + 0xc0), lVar5 == 0)) ||
             (*(long *)(lVar5 + 0x10) == 0)) goto LAB_0535dca8;
          auVar8 = FUN_03ab58a8(&stack0x00000528,*(undefined8 *)(lVar5 + 0x28),0x80,auVar8._0_8_,
                                auVar8._8_8_,*(undefined8 *)PTR_DAT_06d40bb0);
          if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0))
          goto LAB_0535dca8;
          auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<float>
                             (&stack0x00000528,in_stack_000003d0,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40bd8);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
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
        auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector4f>
                           (&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c80);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != in_stack_00000310);
  }
  lVar5 = FUN_053461ec(0);
  if (((((lVar5 == 0) || (*in_stack_00000438 == 0)) ||
       ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
        (((*(long *)(in_stack_00000420 + 0x118) == 0 || (*(long *)(in_stack_00000420 + 0x120) == 0))
         || (*(long *)(in_stack_00000420 + 0x40) == 0)))))) ||
      ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x40) == 0)))) ||
     ((*(long *)(in_stack_00000418 + 0x48) == 0 ||
      ((*(long *)(in_stack_00000418 + 0x58) == 0 || (*(long *)(in_stack_00000418 + 0x68) == 0))))))
  goto LAB_0535dca8;
  auVar8 = FUN_03abcda8(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                        *(undefined8 *)PTR_DAT_06d40c08);
  if (bVar1 == 0) {
    auVar9 = ZEXT816(0);
  }
  else {
    if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0)) goto LAB_0535dca8;
    auVar9 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeQueue<SelfCollisionConstraint_ContactInfo>>
                       (&stack0x00000528,in_stack_000003d0,1,auVar8._0_8_,auVar8._8_8_,
                        *(undefined8 *)PTR_DAT_06d40bc0);
    if ((*(long *)(in_stack_00000418 + 0x18) == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0))
    goto LAB_0535dca8;
    auVar9 = FUN_03ab583c(&stack0x00000528,
                          *(undefined8 *)(*(long *)(in_stack_00000418 + 0xc0) + 0x38),0x80,
                          auVar9._0_8_,auVar9._8_8_,*(undefined8 *)PTR_DAT_06d40ba8);
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
    auVar8 = FUN_03abcd08(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                          *(undefined8 *)PTR_DAT_06d40c00);
    if ((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000420 + 0x118) != 0)) &&
        ((*(long *)(in_stack_00000420 + 0x88) != 0 &&
         ((*(long *)(in_stack_00000420 + 0x90) != 0 && (*(long *)(in_stack_00000420 + 0x98) != 0))))
        )) && (*(long *)(in_stack_00000420 + 0x78) != 0)) {
      auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<SelfCollisionConstraint_GridInfo>
                         (&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
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
        auVar8 = FUN_03abce48(&stack0x00000528,in_stack_00000440,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c10);
        lVar5 = FUN_053461ec(0);
        if (((((((lVar5 != 0) && (*in_stack_00000438 != 0)) &&
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
          auVar8 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DecalEntity>
                             (&stack0x00000528,in_stack_000003d0,1,auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c18);
          if (bVar1 != 0) {
            auVar8 = FUN_06689568(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0);
          }
          if (in_stack_00000224 < 1) {
            auVar9 = ZEXT816(0);
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
                    (lVar5 = *(long *)(in_stack_00000418 + 0x88), lVar5 == 0)) ||
                   (*(long *)(lVar5 + 0x10) == 0)) ||
                  (((*(long *)(lVar5 + 0x18) == 0 || (*(long *)(lVar5 + 0x20) == 0)) ||
                   ((lVar5 = *(long *)(in_stack_00000418 + 0x90), lVar5 == 0 ||
                    ((*(long *)(lVar5 + 0x10) == 0 || (*(long *)(lVar5 + 0x18) == 0)))))))) ||
                 (*(long *)(lVar5 + 0x20) == 0)))))) goto LAB_0535dca8;
            auVar9 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Hammersley_Hammersley2dSeq16>
                               (&stack0x00000528,in_stack_00000224,1,in_stack_00000260,
                                in_stack_00000268,*(undefined8 *)PTR_DAT_06d40bf0);
          }
          auVar8 = FUN_06689568(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0);
          uVar4 = auVar8._8_8_;
          uVar3 = auVar8._0_8_;
          lVar5 = FUN_0533f874(0);
          if (lVar5 != 0) {
            iVar2 = FUN_0536a17c(lVar5,0);
            if (iVar2 < 1) {
              if (in_stack_00000248 != 0) {
                FUN_05377fe0(in_stack_00000248,uVar3,uVar4,0);
                return;
              }
            }
            else if (in_stack_00000420 != 0) {
              auVar8 = FUN_0537d688(in_stack_00000420,uVar3,uVar4,in_stack_0000044c,0);
              if (in_stack_00000248 != 0) {
                auVar9 = FUN_05377fe0(in_stack_00000248,uVar3,uVar4,0);
                FUN_06689568(auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0);
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


