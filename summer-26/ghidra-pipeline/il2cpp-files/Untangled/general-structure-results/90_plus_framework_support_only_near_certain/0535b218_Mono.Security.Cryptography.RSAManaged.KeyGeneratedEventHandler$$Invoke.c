/*
FUNCTION_NAME: Mono.Security.Cryptography.RSAManaged.KeyGeneratedEventHandler$$Invoke
ENTRY_POINT: 0535b218
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler__Invoke(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x7;
  undefined8 unaff_x30;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int in_stack_00000224;
  undefined4 in_stack_00000228;
  undefined8 *in_stack_00000230;
  undefined4 *in_stack_00000238;
  long in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 *in_stack_00000270;
  undefined8 *in_stack_00000278;
  undefined8 *in_stack_00000280;
  undefined8 *in_stack_00000288;
  undefined4 *in_stack_00000290;
  undefined4 in_stack_00000298;
  undefined8 *in_stack_000002a0;
  undefined8 *in_stack_000002a8;
  uint in_stack_000002c0;
  undefined8 *in_stack_000002c8;
  undefined8 *in_stack_000002d0;
  undefined8 *in_stack_000002d8;
  undefined8 *in_stack_000002e0;
  undefined8 *in_stack_000002e8;
  undefined8 *in_stack_000002f0;
  int in_stack_000002f8;
  int in_stack_00000300;
  long in_stack_00000308;
  int in_stack_00000310;
  undefined8 *in_stack_00000320;
  undefined4 in_stack_00000328;
  undefined4 in_stack_0000032c;
  undefined8 *in_stack_00000330;
  undefined8 *in_stack_00000338;
  undefined8 *in_stack_000003c0;
  undefined8 *in_stack_000003c8;
  undefined4 in_stack_000003d0;
  undefined8 *in_stack_000003d8;
  undefined8 *in_stack_000003e0;
  undefined8 *in_stack_000003e8;
  undefined8 *in_stack_000003f0;
  undefined8 *in_stack_000003f8;
  long in_stack_00000400;
  undefined8 *in_stack_00000408;
  undefined8 *in_stack_00000410;
  long in_stack_00000418;
  long in_stack_00000420;
  long in_stack_00000428;
  long in_stack_00000430;
  long *in_stack_00000438;
  undefined4 in_stack_00000440;
  undefined4 in_stack_0000044c;
  int in_stack_00000458;
  undefined8 *in_stack_00000460;
  undefined8 *in_stack_00000468;
  undefined8 *in_stack_00000470;
  undefined8 *in_stack_00000478;
  undefined8 *in_stack_00000aa8;
  
  auVar6._8_8_ = unaff_x30;
  auVar6._0_8_ = in_x7;
  while( true ) {
    uVar3 = *in_stack_00000408;
    in_stack_000003c8[1] = in_stack_00000408[1];
    *in_stack_000003c8 = uVar3;
    uVar4 = *in_stack_000003f8;
    uVar3 = *(undefined8 *)PTR_DAT_06d40c48;
    in_stack_000003c0[1] = in_stack_000003f8[1];
    *in_stack_000003c0 = uVar4;
    auVar6 = FUN_03abd2a8(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
         (*(long *)(in_stack_00000420 + 0x40) == 0)) ||
        ((*(long *)(in_stack_00000420 + 0x58) == 0 || (*(long *)(in_stack_00000420 + 200) == 0))))
       || (((*(long *)(in_stack_00000420 + 0xd0) == 0 ||
            ((*(long *)(in_stack_00000420 + 0xd8) == 0 || (*(long *)(in_stack_00000420 + 0x48) == 0)
             ))) || ((*(long *)(in_stack_00000420 + 0x50) == 0 ||
                     ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x38) == 0)))))))) goto LAB_0535dca8;
    uVar3 = *in_stack_00000408;
    in_stack_000003f0[1] = in_stack_00000408[1];
    *in_stack_000003f0 = uVar3;
    uVar4 = *in_stack_000003f8;
    uVar3 = *(undefined8 *)PTR_DAT_06d40c50;
    in_stack_000003e8[1] = in_stack_000003f8[1];
    *in_stack_000003e8 = uVar4;
    auVar6 = FUN_03abd348(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    if ((((*in_stack_00000438 == 0) ||
         (((*(long *)(in_stack_00000430 + 0x48) == 0 || (*(long *)(in_stack_00000430 + 0x40) == 0))
          || (*(long *)(in_stack_00000420 + 0x18) == 0)))) ||
        (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0x40) == 0))
         || (*(long *)(in_stack_00000418 + 0x18) == 0)))) ||
       (((*(long *)(in_stack_00000418 + 0x30) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
        (((*(long *)(in_stack_00000418 + 0x70) == 0 ||
          (((lVar2 = *(long *)(in_stack_00000418 + 0x88), lVar2 == 0 ||
            (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0)))) ||
         (*(long *)(lVar2 + 0x20) == 0)))))) goto LAB_0535dca8;
    uVar4 = *in_stack_00000408;
    uVar3 = *(undefined8 *)PTR_DAT_06d40c58;
    in_stack_00000338[1] = in_stack_00000408[1];
    *in_stack_00000338 = uVar4;
    auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<XRRaycast>
                       (&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
        (((*(long *)(in_stack_00000420 + 0x18) == 0 ||
          ((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0x40) == 0)))
          ) || (*(long *)(in_stack_00000420 + 0x58) == 0)))) ||
       ((((((*(long *)(in_stack_00000420 + 200) == 0 || (*(long *)(in_stack_00000420 + 0xd0) == 0))
           || (*(long *)(in_stack_00000420 + 0xd8) == 0)) ||
          ((*(long *)(in_stack_00000418 + 0x18) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0)))
          ) || (*(long *)(in_stack_00000418 + 0x70) == 0)) ||
        (((lVar2 = *(long *)(in_stack_00000418 + 0x88), lVar2 == 0 || (*(long *)(lVar2 + 0x10) == 0)
          ) || ((*(long *)(lVar2 + 0x18) == 0 || (*(long *)(lVar2 + 0x20) == 0))))))))
    goto LAB_0535dca8;
    uVar3 = *in_stack_00000408;
    in_stack_00000330[1] = in_stack_00000408[1];
    *in_stack_00000330 = uVar3;
    uVar3 = *in_stack_000003f8;
    ((undefined8 *)CONCAT44(in_stack_0000032c,in_stack_00000328))[1] = in_stack_000003f8[1];
    *(undefined8 *)CONCAT44(in_stack_0000032c,in_stack_00000328) = uVar3;
    uVar3 = *in_stack_00000410;
    in_stack_000002f0[1] = in_stack_00000410[1];
    *in_stack_000002f0 = uVar3;
    uVar3 = *in_stack_000003e0;
    in_stack_000002e8[1] = in_stack_000003e0[1];
    *in_stack_000002e8 = uVar3;
    uVar3 = *in_stack_000003d8;
    in_stack_000002e0[1] = in_stack_000003d8[1];
    *in_stack_000002e0 = uVar3;
    uVar3 = *in_stack_000002d8;
    in_stack_000003c8[1] = in_stack_000002d8[1];
    *in_stack_000003c8 = uVar3;
    uVar4 = *in_stack_000002d0;
    uVar3 = *(undefined8 *)PTR_DAT_06d40c40;
    in_stack_000003c0[1] = in_stack_000002d0[1];
    *in_stack_000003c0 = uVar4;
    auVar6 = FUN_03abd208(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
        (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
       (((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
        ((*(long *)(in_stack_00000418 + 0x70) == 0 ||
         (((lVar2 = *(long *)(in_stack_00000418 + 0x90), lVar2 == 0 ||
           (*(long *)(lVar2 + 0x10) == 0)) ||
          ((*(long *)(lVar2 + 0x18) == 0 || (*(long *)(lVar2 + 0x20) == 0))))))))))
    goto LAB_0535dca8;
    uVar3 = *in_stack_00000410;
    in_stack_00000320[1] = in_stack_00000410[1];
    *in_stack_00000320 = uVar3;
    uVar4 = *in_stack_00000aa8;
    uVar3 = *(undefined8 *)PTR_DAT_06d40c88;
    in_stack_000003f0[1] = in_stack_00000aa8[1];
    *in_stack_000003f0 = uVar4;
    auVar6 = FUN_03abd7a8(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
         (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
        ((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000418 + 0x18) == 0))))
       || ((*(long *)(in_stack_00000418 + 0x30) == 0 ||
           (((*(long *)(in_stack_00000418 + 0x50) == 0 || (*(long *)(in_stack_00000418 + 0x70) == 0)
             ) || ((*(long *)(in_stack_00000418 + 0x80) == 0 ||
                   ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                    (*(long *)(in_stack_00000400 + 0x90) == 0)))))))))) goto LAB_0535dca8;
    uVar3 = *in_stack_00000410;
    in_stack_000003e8[1] = in_stack_00000410[1];
    *in_stack_000003e8 = uVar3;
    uVar4 = *in_stack_00000aa8;
    uVar3 = *(undefined8 *)PTR_DAT_06d40c60;
    in_stack_000002c8[1] = in_stack_00000aa8[1];
    *in_stack_000002c8 = uVar4;
    auVar6 = FUN_03abd488(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    if (0 < in_stack_00000300) {
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
           (*(long *)(in_stack_00000420 + 0x18) == 0)) ||
          ((*(long *)(in_stack_00000420 + 0x38) == 0 || (*(long *)(in_stack_00000420 + 0xa8) == 0)))
          ) || ((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                 (*(long *)(in_stack_00000400 + 0x90) == 0)))))) goto LAB_0535dca8;
      uVar3 = *in_stack_00000410;
      in_stack_000002a8[1] = in_stack_00000410[1];
      *in_stack_000002a8 = uVar3;
      uVar3 = *in_stack_000003e0;
      in_stack_00000320[1] = in_stack_000003e0[1];
      *in_stack_00000320 = uVar3;
      uVar3 = *in_stack_00000aa8;
      in_stack_000003f0[1] = in_stack_00000aa8[1];
      *in_stack_000003f0 = uVar3;
      uVar4 = *in_stack_000003d8;
      uVar3 = *(undefined8 *)PTR_DAT_06d40c68;
      in_stack_000003e8[1] = in_stack_000003d8[1];
      *in_stack_000003e8 = uVar4;
      auVar6 = FUN_03abd528(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    }
    if (in_stack_000002f8 < 1) {
      if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
           (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
          ((*(long *)(in_stack_00000420 + 0x18) == 0 || (*(long *)(in_stack_00000420 + 0x38) == 0)))
          ) || (((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                 ((*(long *)(in_stack_00000418 + 0x20) == 0 ||
                  (*(long *)(in_stack_00000418 + 0x30) == 0)))) ||
                (((*(long *)(in_stack_00000418 + 0x38) == 0 ||
                  (((*(long *)(in_stack_00000418 + 0x50) == 0 ||
                    (*(long *)(in_stack_00000418 + 0x60) == 0)) ||
                   (*(long *)(in_stack_00000418 + 0x68) == 0)))) ||
                 (((((*(long *)(in_stack_00000418 + 0x70) == 0 ||
                     (*(long *)(in_stack_00000418 + 0x78) == 0)) ||
                    ((*(long *)(in_stack_00000418 + 0x80) == 0 ||
                     ((*(long *)(in_stack_00000400 + 0x58) == 0 ||
                      (*(long *)(in_stack_00000400 + 0x60) == 0)))))) ||
                   (*(long *)(in_stack_00000400 + 0x68) == 0)) ||
                  ((((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                     (lVar2 = *(long *)(in_stack_00000418 + 0x88), lVar2 == 0)) ||
                    (*(long *)(lVar2 + 0x10) == 0)) ||
                   ((*(long *)(lVar2 + 0x18) == 0 || (*(long *)(lVar2 + 0x20) == 0))))))))))))
      goto LAB_0535dca8;
      uVar3 = *in_stack_00000410;
      in_stack_00000288[1] = in_stack_00000410[1];
      *in_stack_00000288 = uVar3;
      uVar3 = *in_stack_000003e0;
      in_stack_00000280[1] = in_stack_000003e0[1];
      *in_stack_00000280 = uVar3;
      uVar3 = *in_stack_00000aa8;
      in_stack_00000278[1] = in_stack_00000aa8[1];
      *in_stack_00000278 = uVar3;
      uVar4 = *in_stack_000003d8;
      uVar3 = *(undefined8 *)PTR_DAT_06d40c70;
      in_stack_00000270[1] = in_stack_000003d8[1];
      *in_stack_00000270 = uVar4;
      auVar6 = FUN_03abd5c8(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
    }
    else {
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
          ((((*(long *)(in_stack_00000420 + 0x18) == 0 ||
             (((*(long *)(in_stack_00000420 + 0x38) == 0 ||
               (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
              (*(long *)(in_stack_00000418 + 0x30) == 0)))) ||
            (((*(long *)(in_stack_00000418 + 0x38) == 0 ||
              (*(long *)(in_stack_00000418 + 0x50) == 0)) ||
             (*(long *)(in_stack_00000418 + 0x70) == 0)))) ||
           ((*(long *)(in_stack_00000418 + 0x80) == 0 ||
            (lVar2 = *(long *)(in_stack_00000418 + 0x88), lVar2 == 0)))))) ||
         ((*(long *)(lVar2 + 0x10) == 0 ||
          ((*(long *)(lVar2 + 0x18) == 0 || (*(long *)(lVar2 + 0x20) == 0)))))) goto LAB_0535dca8;
      uVar3 = *in_stack_00000410;
      in_stack_00000338[1] = in_stack_00000410[1];
      *in_stack_00000338 = uVar3;
      uVar3 = *in_stack_000003e0;
      in_stack_000002a0[1] = in_stack_000003e0[1];
      *in_stack_000002a0 = uVar3;
      uVar3 = *in_stack_00000aa8;
      in_stack_00000330[1] = in_stack_00000aa8[1];
      *in_stack_00000330 = uVar3;
      uVar4 = *in_stack_000003d8;
      uVar3 = *(undefined8 *)PTR_DAT_06d40c78;
      ((undefined8 *)CONCAT44(in_stack_0000032c,in_stack_00000328))[1] = in_stack_000003d8[1];
      *(undefined8 *)CONCAT44(in_stack_0000032c,in_stack_00000328) = uVar4;
      auVar6 = FUN_03abd668(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,uVar3);
      if (((in_stack_000002c0 ^ 1) & 1) == 0 && in_stack_00000458 == 0) {
        auVar6 = FUN_06689568(in_stack_00000250,in_stack_00000258,auVar6._0_8_,auVar6._8_8_,0);
      }
      if (in_stack_00000458 == 0) {
        if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
             (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
            ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x70) == 0)
             ))) || ((lVar2 = *(long *)(in_stack_00000418 + 0xc0), lVar2 == 0 ||
                     (*(long *)(lVar2 + 0x10) == 0)))) goto LAB_0535dca8;
        uVar5 = *(undefined8 *)(lVar2 + 0x58);
        uVar4 = *(undefined8 *)(lVar2 + 0x50);
        uVar3 = *(undefined8 *)PTR_DAT_06d40be8;
        *(undefined4 *)((long)in_stack_00000238 + 3) = 0;
        *in_stack_00000238 = 0;
        in_stack_00000230[1] = uVar5;
        *in_stack_00000230 = uVar4;
        auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRRaycastHit>
                           (&stack0x00000528,in_stack_00000298,1,auVar6._0_8_,auVar6._8_8_,uVar3);
        if ((((*in_stack_00000438 == 0) || (lVar2 = *(long *)(in_stack_00000418 + 0xc0), lVar2 == 0)
             ) || (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(lVar2 + 0x18) == 0))
        goto LAB_0535dca8;
        auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeText>
                           (&stack0x00000528,in_stack_00000298,1,auVar6._0_8_,auVar6._8_8_,
                            *(undefined8 *)PTR_DAT_06d40be0);
        if (((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
             (*(long *)(in_stack_00000418 + 0x20) == 0)) ||
            ((lVar2 = *(long *)(in_stack_00000418 + 0xc0), lVar2 == 0 ||
             (*(long *)(lVar2 + 0x10) == 0)))) || (*(long *)(lVar2 + 0x18) == 0)) goto LAB_0535dca8;
        FUN_042cd400(lVar2 + 0x20,*(undefined8 *)PTR_DAT_06d40c90);
        auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Keyframe>
                           (&stack0x00000528,in_stack_00000228,1,auVar6._0_8_,auVar6._8_8_,
                            *(undefined8 *)PTR_DAT_06d40bd0);
        lVar2 = *(long *)(in_stack_00000418 + 0xc0);
        if (lVar2 == 0) goto LAB_0535dca8;
        auVar6 = FUN_03ab36f4(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                              auVar6._0_8_,auVar6._8_8_,*(undefined8 *)PTR_DAT_06d40ba0);
      }
      else {
        lVar2 = *(long *)(in_stack_00000418 + 0xc0);
        if (((lVar2 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0)) ||
           ((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(lVar2 + 0x10) == 0))))
        goto LAB_0535dca8;
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)PTR_DAT_06d40bb8;
        *(undefined4 *)((long)in_stack_00000290 + 3) = 0;
        *in_stack_00000290 = 0;
        auVar6 = FUN_03ab5914(&stack0x00000528,uVar3,0x100,auVar6._0_8_,auVar6._8_8_,uVar4);
      }
      iVar1 = 4;
      do {
        if (((*(long *)(in_stack_00000418 + 0x18) == 0) ||
            (lVar2 = *(long *)(in_stack_00000418 + 0xc0), lVar2 == 0)) ||
           (*(long *)(lVar2 + 0x10) == 0)) goto LAB_0535dca8;
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *in_stack_00000410;
        in_stack_00000478[1] = in_stack_00000410[1];
        *in_stack_00000478 = uVar4;
        uVar5 = *in_stack_00000aa8;
        uVar4 = *(undefined8 *)PTR_DAT_06d40bb0;
        in_stack_00000470[1] = in_stack_00000aa8[1];
        *in_stack_00000470 = uVar5;
        auVar6 = FUN_03ab58a8(&stack0x00000528,uVar3,0x80,auVar6._0_8_,auVar6._8_8_,uVar4);
        if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0x18) == 0))
        goto LAB_0535dca8;
        uVar3 = *in_stack_00000410;
        in_stack_00000468[1] = in_stack_00000410[1];
        *in_stack_00000468 = uVar3;
        uVar4 = *in_stack_00000aa8;
        uVar3 = *(undefined8 *)PTR_DAT_06d40bd8;
        in_stack_00000460[1] = in_stack_00000aa8[1];
        *in_stack_00000460 = uVar4;
        auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<float>
                           (&stack0x00000528,in_stack_000003d0,1,auVar6._0_8_,auVar6._8_8_,uVar3);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if ((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
          ((*(long *)(in_stack_00000430 + 0x40) == 0 ||
           (((*(long *)(in_stack_00000420 + 0x18) == 0 || (*(long *)(in_stack_00000420 + 0x38) == 0)
             ) || (*(long *)(in_stack_00000418 + 0x18) == 0)))))) ||
         (((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x50) == 0))
          || ((*(long *)(in_stack_00000418 + 0x60) == 0 ||
              (((*(long *)(in_stack_00000418 + 0x68) == 0 ||
                (*(long *)(in_stack_00000418 + 0x70) == 0)) ||
               ((*(long *)(in_stack_00000418 + 0x78) == 0 ||
                ((((*(long *)(in_stack_00000418 + 0x80) == 0 ||
                   (*(long *)(in_stack_00000400 + 0x58) == 0)) ||
                  (*(long *)(in_stack_00000400 + 0x60) == 0)) ||
                 ((*(long *)(in_stack_00000400 + 0x68) == 0 ||
                  (*(long *)(in_stack_00000400 + 0x70) == 0)))))))))))))) goto LAB_0535dca8;
      auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector4f>
                         (&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,
                          *(undefined8 *)PTR_DAT_06d40c80);
    }
    in_stack_00000458 = in_stack_00000458 + 1;
    if (in_stack_00000458 == in_stack_00000310) break;
    if (((((((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000430 + 0x48) == 0)) ||
           (*(long *)(in_stack_00000430 + 0x18) == 0)) ||
          (((*(long *)(in_stack_00000430 + 0x40) == 0 || (*(long *)(in_stack_00000400 + 0x18) == 0))
           || ((*(long *)(in_stack_00000400 + 0x28) == 0 ||
               ((*(long *)(in_stack_00000400 + 0x30) == 0 ||
                (*(long *)(in_stack_00000400 + 0x38) == 0)))))))) ||
         ((*(long *)(in_stack_00000400 + 0x40) == 0 ||
          ((((*(long *)(in_stack_00000400 + 0x48) == 0 || (*(long *)(in_stack_00000400 + 0x50) == 0)
             ) || (*(long *)(in_stack_00000400 + 0x58) == 0)) ||
           (((*(long *)(in_stack_00000400 + 0x60) == 0 || (*(long *)(in_stack_00000400 + 0x68) == 0)
             ) || ((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                   ((*(long *)(in_stack_00000400 + 0x90) == 0 ||
                    (auVar6 = FUN_03abd168(&stack0x00000528,in_stack_000003d0,1,auVar6._0_8_,
                                           auVar6._8_8_,*(undefined8 *)PTR_DAT_06d40c38),
                    *in_stack_00000438 == 0)))))))))))) ||
        ((*(long *)(in_stack_00000430 + 0x48) == 0 ||
         (((((((*(long *)(in_stack_00000430 + 0x18) == 0 ||
               (*(long *)(in_stack_00000430 + 0x40) == 0)) ||
              (FUN_05369508(in_stack_00000308,0), *(long *)(in_stack_00000308 + 0x10) == 0)) ||
             ((*(long *)(in_stack_00000420 + 0x18) == 0 ||
              (*(long *)(in_stack_00000420 + 0x38) == 0)))) ||
            (*(long *)(in_stack_00000420 + 0x118) == 0)) ||
           ((*(long *)(in_stack_00000420 + 0x120) == 0 || (*(long *)(in_stack_00000420 + 0x40) == 0)
            ))) || (((*(long *)(in_stack_00000418 + 0x18) == 0 ||
                     (((*(long *)(in_stack_00000418 + 0x20) == 0 ||
                       (*(long *)(in_stack_00000418 + 0x30) == 0)) ||
                      (*(long *)(in_stack_00000418 + 0x38) == 0)))) ||
                    (((*(long *)(in_stack_00000418 + 0x40) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x48) == 0)) ||
                     (*(long *)(in_stack_00000418 + 0x50) == 0)))))))))) ||
       ((*(long *)(in_stack_00000418 + 0x60) == 0 || (*(long *)(in_stack_00000418 + 0x70) == 0))))
    goto LAB_0535dca8;
  }
  lVar2 = FUN_053461ec(0);
  if ((((lVar2 == 0) || (*in_stack_00000438 == 0)) ||
      (((*(long *)(in_stack_00000420 + 0x18) == 0 ||
        (((*(long *)(in_stack_00000420 + 0x118) == 0 || (*(long *)(in_stack_00000420 + 0x120) == 0))
         || (*(long *)(in_stack_00000420 + 0x40) == 0)))) ||
       (((*(long *)(in_stack_00000418 + 0x20) == 0 || (*(long *)(in_stack_00000418 + 0x40) == 0)) ||
        (*(long *)(in_stack_00000418 + 0x48) == 0)))))) ||
     ((*(long *)(in_stack_00000418 + 0x58) == 0 || (*(long *)(in_stack_00000418 + 0x68) == 0))))
  goto LAB_0535dca8;
  auVar6 = FUN_03abcda8(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,
                        *(undefined8 *)PTR_DAT_06d40c08);
  if (in_stack_000002c0 == 0) {
    auVar7 = ZEXT816(0);
  }
  else {
    if ((*in_stack_00000438 == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0)) goto LAB_0535dca8;
    auVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeQueue<SelfCollisionConstraint_ContactInfo>>
                       (&stack0x00000528,in_stack_000003d0,1,auVar6._0_8_,auVar6._8_8_,
                        *(undefined8 *)PTR_DAT_06d40bc0);
    if ((*(long *)(in_stack_00000418 + 0x18) == 0) || (*(long *)(in_stack_00000418 + 0xc0) == 0))
    goto LAB_0535dca8;
    auVar7 = FUN_03ab583c(&stack0x00000528,
                          *(undefined8 *)(*(long *)(in_stack_00000418 + 0xc0) + 0x38),0x80,
                          auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_06d40ba8);
  }
  if (((((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000430 + 0x40) != 0)) &&
       (*(long *)(in_stack_00000420 + 0x18) != 0)) &&
      ((((*(long *)(in_stack_00000420 + 0x118) != 0 && (*(long *)(in_stack_00000420 + 0x120) != 0))
        && ((*(long *)(in_stack_00000420 + 200) != 0 &&
            ((*(long *)(in_stack_00000420 + 0xd0) != 0 && (*(long *)(in_stack_00000420 + 0xd8) != 0)
             ))))) && (*(long *)(in_stack_00000420 + 0x48) != 0)))) &&
     ((((*(long *)(in_stack_00000420 + 0x50) != 0 && (*(long *)(in_stack_00000420 + 0x60) != 0)) &&
       (*(long *)(in_stack_00000420 + 0x68) != 0)) && (*(long *)(in_stack_00000420 + 0xb8) != 0))))
  {
    auVar6 = FUN_03abcd08(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,
                          *(undefined8 *)PTR_DAT_06d40c00);
    if (((*in_stack_00000438 != 0) && (*(long *)(in_stack_00000420 + 0x118) != 0)) &&
       (((*(long *)(in_stack_00000420 + 0x88) != 0 &&
         ((*(long *)(in_stack_00000420 + 0x90) != 0 && (*(long *)(in_stack_00000420 + 0x98) != 0))))
        && (*(long *)(in_stack_00000420 + 0x78) != 0)))) {
      auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<SelfCollisionConstraint_GridInfo>
                         (&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,
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
        auVar6 = FUN_03abce48(&stack0x00000528,in_stack_00000440,1,auVar6._0_8_,auVar6._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c10);
        lVar2 = FUN_053461ec(0);
        if ((((lVar2 != 0) && (*in_stack_00000438 != 0)) &&
            (*(long *)(in_stack_00000430 + 0x48) != 0)) &&
           (((*(long *)(in_stack_00000400 + 0x30) != 0 && (*(long *)(in_stack_00000400 + 0x38) != 0)
             ) && ((((*(long *)(in_stack_00000400 + 0x48) != 0 &&
                     ((*(long *)(in_stack_00000400 + 0x50) != 0 &&
                      (*(long *)(in_stack_00000248 + 0x28) != 0)))) &&
                    (*(long *)(in_stack_00000248 + 0x30) != 0)) &&
                   ((((*(long *)(in_stack_00000248 + 0x38) != 0 &&
                      (*(long *)(in_stack_00000248 + 0x40) != 0)) &&
                     (*(long *)(in_stack_00000248 + 0x48) != 0)) &&
                    ((*(long *)(in_stack_00000420 + 0x18) != 0 &&
                     (*(long *)(in_stack_00000420 + 0x58) != 0)))))))))) {
          auVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DecalEntity>
                             (&stack0x00000528,in_stack_000003d0,1,auVar6._0_8_,auVar6._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c18);
          if (in_stack_000002c0 != 0) {
            auVar6 = FUN_06689568(auVar6._0_8_,auVar6._8_8_,auVar7._0_8_,auVar7._8_8_,0);
          }
          if (in_stack_00000224 < 1) {
            auVar7 = ZEXT816(0);
          }
          else {
            if (((((in_stack_00000428 == 0) ||
                  (FUN_0536a17c(in_stack_00000430,0), *(long *)(in_stack_00000430 + 0x10) == 0)) ||
                 ((*(long *)(in_stack_00000430 + 0x48) == 0 ||
                  (((*(long *)(in_stack_00000430 + 0x18) == 0 ||
                    (*(long *)(in_stack_00000430 + 0x40) == 0)) || (in_stack_00000308 == 0)))))) ||
                (((((FUN_05369508(in_stack_00000308,0), *(long *)(in_stack_00000308 + 0x10) == 0 ||
                    (in_stack_00000248 == 0)) ||
                   ((*(long *)(in_stack_00000248 + 0x28) == 0 ||
                    (((*(long *)(in_stack_00000248 + 0x30) == 0 ||
                      (*(long *)(in_stack_00000248 + 0x38) == 0)) ||
                     ((*(long *)(in_stack_00000248 + 0x58) == 0 ||
                      (((*(long *)(in_stack_00000248 + 0x40) == 0 ||
                        (*(long *)(in_stack_00000248 + 0x48) == 0)) ||
                       (*(long *)(in_stack_00000248 + 0x50) == 0)))))))))) ||
                  ((in_stack_00000420 == 0 || (*(long *)(in_stack_00000420 + 0x18) == 0)))) ||
                 (*(long *)(in_stack_00000420 + 0x38) == 0)))) ||
               ((((((((*(long *)(in_stack_00000420 + 0xe0) == 0 ||
                      (*(long *)(in_stack_00000420 + 0xe8) == 0)) ||
                     ((*(long *)(in_stack_00000420 + 0xf0) == 0 ||
                      ((((((*(long *)(in_stack_00000420 + 0xf8) == 0 ||
                           (*(long *)(in_stack_00000420 + 0x100) == 0)) ||
                          (*(long *)(in_stack_00000420 + 0x108) == 0)) ||
                         ((*(long *)(in_stack_00000420 + 0x118) == 0 ||
                          (*(long *)(in_stack_00000420 + 0x120) == 0)))) ||
                        (*(long *)(in_stack_00000420 + 0x30) == 0)) ||
                       ((*(long *)(in_stack_00000420 + 0x40) == 0 ||
                        (*(long *)(in_stack_00000420 + 0x58) == 0)))))))) ||
                    (*(long *)(in_stack_00000420 + 200) == 0)) ||
                   (((((*(long *)(in_stack_00000420 + 0xd0) == 0 ||
                       (*(long *)(in_stack_00000420 + 0xd8) == 0)) ||
                      (*(long *)(in_stack_00000420 + 0x48) == 0)) ||
                     ((*(long *)(in_stack_00000420 + 0x50) == 0 ||
                      (*(long *)(in_stack_00000420 + 0x60) == 0)))) ||
                    ((*(long *)(in_stack_00000420 + 0x68) == 0 ||
                     ((*(long *)(in_stack_00000420 + 0xb8) == 0 ||
                      (*(long *)(in_stack_00000420 + 0x88) == 0)))))))) ||
                  (((*(long *)(in_stack_00000420 + 0x90) == 0 ||
                    (((*(long *)(in_stack_00000420 + 0x98) == 0 ||
                      (*(long *)(in_stack_00000420 + 0x78) == 0)) ||
                     (*(long *)(in_stack_00000420 + 0x20) == 0)))) ||
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
                    (((*(long *)(in_stack_00000418 + 0x78) == 0 ||
                      (*(long *)(in_stack_00000418 + 0x80) == 0)) || (in_stack_00000400 == 0)))) ||
                   ((*(long *)(in_stack_00000400 + 0x18) == 0 ||
                    (*(long *)(in_stack_00000400 + 0x20) == 0)))) ||
                  (((((*(long *)(in_stack_00000400 + 0x28) == 0 ||
                      ((*(long *)(in_stack_00000400 + 0x30) == 0 ||
                       (*(long *)(in_stack_00000400 + 0x38) == 0)))) ||
                     (*(long *)(in_stack_00000400 + 0x40) == 0)) ||
                    (((((*(long *)(in_stack_00000400 + 0x48) == 0 ||
                        (*(long *)(in_stack_00000400 + 0x50) == 0)) ||
                       (*(long *)(in_stack_00000400 + 0x58) == 0)) ||
                      (((*(long *)(in_stack_00000400 + 0x60) == 0 ||
                        (*(long *)(in_stack_00000400 + 0x68) == 0)) ||
                       ((*(long *)(in_stack_00000400 + 0x70) == 0 ||
                        ((*(long *)(in_stack_00000400 + 0x90) == 0 ||
                         (*(long *)(in_stack_00000400 + 0x78) == 0)))))))) ||
                     (*(long *)(in_stack_00000418 + 0xa8) == 0)))) ||
                   (((((*(long *)(*(long *)(in_stack_00000418 + 0xa8) + 0x10) == 0 ||
                       (lVar2 = *(long *)(in_stack_00000418 + 0x88), lVar2 == 0)) ||
                      (*(long *)(lVar2 + 0x10) == 0)) ||
                     ((*(long *)(lVar2 + 0x18) == 0 || (*(long *)(lVar2 + 0x20) == 0)))) ||
                    ((lVar2 = *(long *)(in_stack_00000418 + 0x90), lVar2 == 0 ||
                     ((*(long *)(lVar2 + 0x10) == 0 || (*(long *)(lVar2 + 0x18) == 0)))))))))))) ||
                (*(long *)(lVar2 + 0x20) == 0)))) goto LAB_0535dca8;
            auVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Hammersley_Hammersley2dSeq16>
                               (&stack0x00000528,in_stack_00000224,1,in_stack_00000260,
                                in_stack_00000268,*(undefined8 *)PTR_DAT_06d40bf0);
          }
          auVar6 = FUN_06689568(auVar6._0_8_,auVar6._8_8_,auVar7._0_8_,auVar7._8_8_,0);
          uVar4 = auVar6._8_8_;
          uVar3 = auVar6._0_8_;
          lVar2 = FUN_0533f874(0);
          if (lVar2 != 0) {
            iVar1 = FUN_0536a17c(lVar2,0);
            if (iVar1 < 1) {
              if (in_stack_00000248 != 0) {
                FUN_05377fe0(in_stack_00000248,uVar3,uVar4,0);
                return;
              }
            }
            else if (in_stack_00000420 != 0) {
              auVar6 = FUN_0537d688(in_stack_00000420,uVar3,uVar4,in_stack_0000044c,0);
              if (in_stack_00000248 != 0) {
                auVar7 = FUN_05377fe0(in_stack_00000248,uVar3,uVar4,0);
                FUN_06689568(auVar6._0_8_,auVar6._8_8_,auVar7._0_8_,auVar7._8_8_,0);
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


