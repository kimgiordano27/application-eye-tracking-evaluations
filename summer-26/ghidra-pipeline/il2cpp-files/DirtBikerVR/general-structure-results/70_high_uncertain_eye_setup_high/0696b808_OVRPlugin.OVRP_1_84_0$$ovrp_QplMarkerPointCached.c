/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 0696b808
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPointCached(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 in_s3;
  undefined4 uVar14;
  float fVar15;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  uVar1 = (**(code **)(param_1 + 0x4d8))(param_2,*(undefined8 *)(param_1 + 0x4e0));
  if ((uVar1 & 1) == 0) {
LAB_0696b84c:
    FUN_0696acf0();
LAB_0696b854:
    uVar14 = *(undefined4 *)(unaff_x19 + 0x28);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
                    /* try { // try from 0696b86c to 06a6b86f has its CatchHandler @ 0696c370 */
                    /* try { // try from 0696b870 to 06a6b87b has its CatchHandler @ 0696c42c */
    FUN_07ca4ee0(uVar14,uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
                    /* try { // try from 0696b890 to 06a6b89b has its CatchHandler @ 0696c43c */
    return;
  }
  if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
  fVar5 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
  if (fVar5 < 0.5) {
    if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
                    /* try { // try from 0696b844 to 06a6b84f has its CatchHandler @ 0696c4f0 */
    if (*(float *)(*(long *)(unaff_x20 + 0x70) + 0xa4) < 0.5) goto LAB_0696b84c;
  }
  lVar4 = *(long *)(unaff_x20 + 0x78);
  if (*(char *)(unaff_x20 + 0x20) == '\0') {
    if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 0x80), plVar3 == (long *)0x0))
    goto LAB_0696bba4;
    uVar1 = (**(code **)(*plVar3 + 0x518))(plVar3,*(undefined8 *)(*plVar3 + 0x520));
    fVar5 = 0.0;
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar3 == (long *)0x0))
      goto LAB_0696bba4;
      fVar5 = (float)(**(code **)(*plVar3 + 0x528))(plVar3,*(undefined8 *)(*plVar3 + 0x530));
                    /* try { // try from 0696b984 to 06a6b98f has its CatchHandler @ 0696c4a0 */
      fVar5 = fVar5 * *(float *)(unaff_x20 + 0x10);
    }
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar3 == (long *)0x0))
    goto LAB_0696bba4;
    uVar1 = (**(code **)(*plVar3 + 0x4d8))(plVar3,*(undefined8 *)(*plVar3 + 0x4e0));
    fVar15 = 0.0;
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar3 == (long *)0x0))
      goto LAB_0696bba4;
      fVar15 = (float)(**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
      fVar15 = fVar15 * *(float *)(unaff_x20 + 0x14);
    }
    if (*unaff_x23 == 0) goto LAB_0696bba4;
    fVar5 = fVar5 + fVar15;
    in_s3 = 0;
    fVar15 = 1.0;
    if (fVar5 <= 1.0) {
      fVar15 = fVar5;
    }
    fVar6 = *(float *)(unaff_x19 + 0x28);
    fVar7 = 0.0;
    if (0.0 <= fVar5) {
      fVar7 = fVar15;
    }
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar6) {
      fVar15 = fVar5;
    }
    fVar5 = *(float *)(unaff_x20 + 0xd0) +
            (fVar7 * *(float *)(*unaff_x23 + 0x2c) - *(float *)(unaff_x20 + 0xd0)) * fVar15;
  }
  else {
    if ((lVar4 == 0) || (plVar3 = *(long **)(lVar4 + 0x80), plVar3 == (long *)0x0))
    goto LAB_0696bba4;
    uVar1 = (**(code **)(*plVar3 + 0x518))(plVar3,*(undefined8 *)(*plVar3 + 0x520));
    fVar15 = 0.0;
    if ((uVar1 & 1) != 0) {
      fVar15 = *(float *)(unaff_x20 + 0x10);
    }
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar3 == (long *)0x0))
    goto LAB_0696bba4;
                    /* try { // try from 0696b8f8 to 06a6b903 has its CatchHandler @ 0696c4b0 */
    uVar1 = (**(code **)(*plVar3 + 0x4d8))(plVar3,*(undefined8 *)(*plVar3 + 0x4e0));
    fVar5 = 0.0;
    if ((uVar1 & 1) != 0) {
      fVar5 = *(float *)(unaff_x20 + 0x14);
    }
    if (*unaff_x23 == 0) goto LAB_0696bba4;
    fVar15 = fVar15 + fVar5;
                    /* try { // try from 0696b920 to 06a6b923 has its CatchHandler @ 0696c354 */
                    /* try { // try from 0696b924 to 06a6b943 has its CatchHandler @ 0696c478 */
    fVar7 = 1.0;
    if (fVar15 <= 1.0) {
      fVar7 = fVar15;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar15) {
      fVar5 = fVar7;
    }
    fVar5 = fVar5 * *(float *)(*unaff_x23 + 0x2c);
  }
  *(float *)(unaff_x20 + 0xd0) = fVar5;
  FUN_07d1cd00(&stack0x000001e8);
  uVar8 = (undefined4)unaff_x24[0x1c];
  uVar11 = (undefined4)unaff_x24[0x1e];
  uVar14 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                     (&stack0x00000220,0);
  *(undefined4 *)(unaff_x20 + 0x80) = uVar14;
  *(undefined4 *)(unaff_x20 + 0x84) = uVar8;
  *(undefined4 *)(unaff_x20 + 0x88) = uVar11;
  *(undefined4 *)(unaff_x20 + 0x8c) = in_s3;
  FUN_07d1cd00(&stack0x00000118);
  uVar2 = *unaff_x24;
  uVar10 = unaff_x24[3];
  uVar9 = unaff_x24[2];
  uVar13 = unaff_x24[5];
  uVar12 = unaff_x24[4];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x24[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar12;
  *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
  thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
  if (*(long *)(unaff_x20 + 200) != 0) {
    fVar15 = *(float *)(unaff_x20 + 0xd0);
    fVar5 = 1.0;
    if (fVar15 <= 1.0) {
      fVar5 = fVar15;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar15) {
      fVar7 = fVar5;
    }
    FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                 *(undefined4 *)(unaff_x20 + 0x88),
                 fVar7 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
    in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 0x98);
    in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 0x90);
    in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 0xa8);
    in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 0xa0);
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0xb8);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0xb0);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0xc0);
    FUN_07d1ce50();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      fVar15 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
      fVar15 = fVar15 * DAT_015c58f8;
      fVar5 = 1.0;
      if (fVar15 <= 1.0) {
        fVar5 = fVar15;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar15) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(unaff_x20 + 0xd0) * fVar7;
      *(float *)(unaff_x20 + 0x60) = fVar5;
      *(float *)(unaff_x20 + 100) = *(float *)(unaff_x20 + 0xd0) * (1.0 - fVar7);
      FUN_07d1d580(&stack0x00000170,*(float *)(unaff_x20 + 0x1c) * fVar5,0);
      in_stack_000000c8 = in_stack_00000178;
      in_stack_000000c0 = in_stack_00000170;
      in_stack_000000d8 = in_stack_00000188;
      in_stack_000000d0 = in_stack_00000180;
      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                ();
      FUN_07d1d580(&stack0x000000a0,*(float *)(unaff_x20 + 100) * *(float *)(unaff_x20 + 0x1c),0);
      FUN_07d1d0d8();
      goto LAB_0696b854;
    }
  }
LAB_0696bba4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


