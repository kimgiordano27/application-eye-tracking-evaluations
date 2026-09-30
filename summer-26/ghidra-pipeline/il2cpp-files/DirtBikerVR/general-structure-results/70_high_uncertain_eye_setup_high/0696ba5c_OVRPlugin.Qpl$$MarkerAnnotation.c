/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 0696ba5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
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
  
  uVar2 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty__get_ussName
                    ();
  *(undefined4 *)(unaff_x20 + 0x80) = uVar2;
  *(undefined4 *)(unaff_x20 + 0x84) = param_2;
  *(undefined4 *)(unaff_x20 + 0x88) = param_3;
  *(undefined4 *)(unaff_x20 + 0x8c) = param_4;
  FUN_07d1cd00(&stack0x00000118);
  uVar1 = *unaff_x24;
  uVar6 = unaff_x24[3];
  uVar5 = unaff_x24[2];
  uVar8 = unaff_x24[5];
  uVar7 = unaff_x24[4];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x24[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000148;
  thunk_FUN_03afed3c(unaff_x20 + 0x98,0);
                    /* try { // try from 0696ba9c to 06a6baa7 has its CatchHandler @ 0696c470 */
  if (*(long *)(unaff_x20 + 200) != 0) {
    fVar3 = *(float *)(unaff_x20 + 0xd0);
                    /* try { // try from 0696baac to 06a6bab7 has its CatchHandler @ 0696c3a0 */
    fVar9 = 1.0;
    if (fVar3 <= 1.0) {
      fVar9 = fVar3;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar9;
    }
    FUN_07d1d76c(*(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84),
                 *(undefined4 *)(unaff_x20 + 0x88),
                 fVar4 * *(float *)(*(long *)(unaff_x20 + 200) + 0x44),unaff_x20 + 0x90,0);
    in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 0x98);
    in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 0x90);
    in_stack_000000f8 = *(undefined8 *)(unaff_x20 + 0xa8);
    in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 0xa0);
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0xb8);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0xb0);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0xc0);
                    /* try { // try from 0696baf8 to 06a6bb03 has its CatchHandler @ 0696c4c0 */
    FUN_07d1ce50();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
                    /* try { // try from 0696bb0c to 06a6bb2b has its CatchHandler @ 0696c4ac */
      fVar3 = (float)FUN_06926524(*(long *)(unaff_x20 + 0x70),0);
      fVar3 = fVar3 * DAT_015c58f8;
      fVar9 = 1.0;
      if (fVar3 <= 1.0) {
        fVar9 = fVar3;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar3) {
        fVar4 = fVar9;
      }
      fVar9 = *(float *)(unaff_x20 + 0xd0) * fVar4;
      *(float *)(unaff_x20 + 0x60) = fVar9;
      *(float *)(unaff_x20 + 100) = *(float *)(unaff_x20 + 0xd0) * (1.0 - fVar4);
      FUN_07d1d580(&stack0x00000170,*(float *)(unaff_x20 + 0x1c) * fVar9,0);
                    /* try { // try from 0696bb5c to 06a6bb67 has its CatchHandler @ 0696c4b8 */
      in_stack_000000c8 = in_stack_00000178;
      in_stack_000000c0 = in_stack_00000170;
      in_stack_000000d8 = in_stack_00000188;
      in_stack_000000d0 = in_stack_00000180;
      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                ();
      FUN_07d1d580(&stack0x000000a0,*(float *)(unaff_x20 + 100) * *(float *)(unaff_x20 + 0x1c),0);
      FUN_07d1d0d8();
      uVar2 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar2,uVar1,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar1);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


