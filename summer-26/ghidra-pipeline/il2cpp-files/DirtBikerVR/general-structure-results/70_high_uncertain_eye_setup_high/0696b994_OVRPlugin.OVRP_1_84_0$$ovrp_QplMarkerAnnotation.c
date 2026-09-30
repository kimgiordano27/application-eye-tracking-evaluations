/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerAnnotation
ENTRY_POINT: 0696b994
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerAnnotation(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float unaff_s8;
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
  
  if (param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x4d8))(param_1,*(undefined8 *)(*param_1 + 0x4e0));
    fVar4 = 0.0;
                    /* try { // try from 0696b9ac to 06a6b9af has its CatchHandler @ 0696c36c */
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 0696b9b0 to 06a6b9cf has its CatchHandler @ 0696c4cc */
      if ((*(long *)(unaff_x20 + 0x78) == 0) ||
         (plVar3 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar3 == (long *)0x0))
      goto LAB_0696bba4;
      fVar4 = (float)(**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
      fVar4 = fVar4 * *(float *)(unaff_x20 + 0x14);
    }
    if (*unaff_x23 != 0) {
      fVar4 = unaff_s8 + fVar4;
      uVar15 = 0;
      fVar7 = 1.0;
      if (fVar4 <= 1.0) {
        fVar7 = fVar4;
      }
      fVar5 = *(float *)(unaff_x19 + 0x28);
      fVar11 = 0.0;
      if (0.0 <= fVar4) {
        fVar11 = fVar7;
      }
      fVar4 = 1.0;
      if (fVar5 <= 1.0) {
        fVar4 = fVar5;
      }
                    /* try { // try from 0696ba10 to 06a6ba1b has its CatchHandler @ 0696c4c4 */
      fVar7 = 0.0;
      if (0.0 <= fVar5) {
        fVar7 = fVar4;
      }
      *(float *)(unaff_x20 + 0xd0) =
           *(float *)(unaff_x20 + 0xd0) +
           (fVar11 * *(float *)(*unaff_x23 + 0x2c) - *(float *)(unaff_x20 + 0xd0)) * fVar7;
                    /* try { // try from 0696ba38 to 06a6ba3b has its CatchHandler @ 0696c358 */
      FUN_07d1cd00(&stack0x000001e8);
                    /* try { // try from 0696ba3c to 06a6ba5b has its CatchHandler @ 0696c474 */
      uVar8 = (undefined4)unaff_x24[0x1c];
      uVar12 = (undefined4)unaff_x24[0x1e];
      uVar6 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                        (&stack0x00000220,0);
      *(undefined4 *)(unaff_x20 + 0x80) = uVar6;
      *(undefined4 *)(unaff_x20 + 0x84) = uVar8;
      *(undefined4 *)(unaff_x20 + 0x88) = uVar12;
      *(undefined4 *)(unaff_x20 + 0x8c) = uVar15;
      FUN_07d1cd00(&stack0x00000118);
      uVar1 = *unaff_x24;
      uVar10 = unaff_x24[3];
      uVar9 = unaff_x24[2];
      uVar14 = unaff_x24[5];
      uVar13 = unaff_x24[4];
      *(undefined8 *)(unaff_x20 + 0x98) = unaff_x24[1];
      *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
      *(undefined8 *)(unaff_x20 + 0xa8) = uVar10;
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar9;
      *(undefined8 *)(unaff_x20 + 0xb8) = uVar14;
      *(undefined8 *)(unaff_x20 + 0xb0) = uVar13;
      *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
      thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
      if (*(long *)(unaff_x20 + 200) != 0) {
        fVar7 = *(float *)(unaff_x20 + 0xd0);
        fVar4 = 1.0;
        if (fVar7 <= 1.0) {
          fVar4 = fVar7;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar7) {
          fVar11 = fVar4;
        }
        FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                     *(undefined4 *)(unaff_x20 + 0x88),
                     fVar11 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
        in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 0x98);
        in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 0x90);
        in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 0xa8);
        in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 0xa0);
        in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0xb8);
        in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0xb0);
        in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0xc0);
        FUN_07d1ce50();
        if (*(long *)(unaff_x20 + 0x70) != 0) {
          fVar7 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
          fVar7 = fVar7 * DAT_015c58f8;
          fVar4 = 1.0;
          if (fVar7 <= 1.0) {
            fVar4 = fVar7;
          }
          fVar11 = 0.0;
          if (0.0 <= fVar7) {
            fVar11 = fVar4;
          }
          fVar4 = *(float *)(unaff_x20 + 0xd0) * fVar11;
          *(float *)(unaff_x20 + 0x60) = fVar4;
          *(float *)(unaff_x20 + 100) = *(float *)(unaff_x20 + 0xd0) * (1.0 - fVar11);
          FUN_07d1d580(&stack0x00000170,*(float *)(unaff_x20 + 0x1c) * fVar4,0);
          in_stack_000000c8 = in_stack_00000178;
          in_stack_000000c0 = in_stack_00000170;
          in_stack_000000d8 = in_stack_00000188;
          in_stack_000000d0 = in_stack_00000180;
          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                    ();
          FUN_07d1d580(&stack0x000000a0,*(float *)(unaff_x20 + 100) * *(float *)(unaff_x20 + 0x1c),0
                      );
          FUN_07d1d0d8();
          uVar15 = *(undefined4 *)(unaff_x19 + 0x28);
          uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
          FUN_07ca4ee0(uVar15,uVar1,0);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar1);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return;
        }
      }
    }
  }
LAB_0696bba4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


