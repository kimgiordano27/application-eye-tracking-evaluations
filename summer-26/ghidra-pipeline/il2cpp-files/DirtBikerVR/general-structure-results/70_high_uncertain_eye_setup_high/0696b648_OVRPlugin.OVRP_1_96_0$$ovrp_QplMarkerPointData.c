/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerPointData
ENTRY_POINT: 0696b648
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerPointData(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 in_s3;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  fVar2 = 0.0;
  if ((param_1 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0696bba4;
    fVar2 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
    if (*unaff_x23 == 0) goto LAB_0696bba4;
    fVar3 = fVar2 * 0.125 + DAT_015c5aec;
                    /* try { // try from 0696b680 to 06a6b6a7 has its CatchHandler @ 0696c510 */
    fVar6 = 1.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar3) {
      fVar2 = fVar6;
    }
    fVar2 = fVar2 * *(float *)(*unaff_x23 + 0x2c);
  }
                    /* try { // try from 0696b6a8 to 06a6b6b7 has its CatchHandler @ 0696c508 */
  FUN_07d1cd00(&stack0x000001e8);
  uVar7 = (undefined4)unaff_x24[0x1c];
  uVar10 = (undefined4)unaff_x24[0x1e];
  uVar4 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                    (&stack0x00000220,0);
  *(undefined4 *)(unaff_x20 + 0x80) = uVar4;
  *(undefined4 *)(unaff_x20 + 0x84) = uVar7;
  *(undefined4 *)(unaff_x20 + 0x88) = uVar10;
  *(undefined4 *)(unaff_x20 + 0x8c) = in_s3;
  FUN_07d1cd00(&stack0x00000118);
  uVar1 = *unaff_x24;
  uVar9 = unaff_x24[3];
  uVar8 = unaff_x24[2];
  uVar12 = unaff_x24[5];
  uVar11 = unaff_x24[4];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x24[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar12;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar11;
                    /* try { // try from 0696b704 to 06a6b70f has its CatchHandler @ 0696c4dc */
  *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
  thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
  if (*(long *)(unaff_x20 + 200) != 0) {
    fVar3 = fVar2 + fVar2;
    fVar6 = 1.0;
    if (fVar3 <= 1.0) {
      fVar6 = fVar3;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar6;
    }
    FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                 *(undefined4 *)(unaff_x20 + 0x88),
                 fVar5 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
    FUN_07d1ce50();
    FUN_07d1d580(&stack0x00000170,0,0);
    FUN_07d1d0d8();
    FUN_07d1d580(&stack0x000000a0,fVar2 * *(float *)(unaff_x20 + 0x1c),0);
    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName();
    uVar4 = *(undefined4 *)(unaff_x19 + 0x28);
    uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
    FUN_07ca4ee0(uVar4,uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar1);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return;
  }
LAB_0696bba4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


