/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeGazeVisualizerController$$UpdatePermissions
ENTRY_POINT: 042a2984
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 106
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeGazeVisualizerController__UpdatePermissions
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  long unaff_x19;
  long *unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  
  uStack00000000000000e0 = param_1;
  uStack00000000000000f0 = param_3;
  FUN_089b6460();
  uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
  if (DAT_09885777 == '\0') {
    FUN_04077588(PTR_DAT_09286e28);
    DAT_09885777 = '\x01';
  }
  fVar1 = (float)uVar5 - (float)**(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8);
  fVar4 = (float)((ulong)uVar5 >> 0x20) -
          (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8) >> 0x20);
  if (fVar1 * fVar1 + fVar4 * fVar4 < DAT_01aeb71c) {
    fVar1 = *(float *)(unaff_x19 + 0x10);
    fVar4 = *(float *)(unaff_x19 + 0x18);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08a1e3c4(&stack0x00000080,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    uStack00000000000000e8 = in_stack_000000a8;
    uStack00000000000000e0 = in_stack_000000a0;
    uStack00000000000000f8 = in_stack_000000b8;
    uStack00000000000000f0 = in_stack_000000b0;
    fVar2 = (float)FUN_089b6460(&stack0x000000c0,0xc,0);
    fVar6 = *(float *)(unaff_x19 + 0x14);
    fVar7 = *(float *)(unaff_x19 + 0x1c);
    FUN_08a1e3c4(&stack0x00000040,0);
    in_stack_000000c8 = in_stack_00000048;
    in_stack_000000c0 = in_stack_00000040;
    in_stack_000000d8 = in_stack_00000058;
    in_stack_000000d0 = in_stack_00000050;
    uStack00000000000000e8 = in_stack_00000068;
    uStack00000000000000e0 = in_stack_00000060;
    uStack00000000000000f8 = in_stack_00000078;
    uStack00000000000000f0 = in_stack_00000070;
    fVar3 = (float)FUN_089b6460(&stack0x000000c0,0xd,0);
    *(float *)(unaff_x19 + 0x28) = unaff_s8 * (fVar1 + fVar4 * 0.5) + fVar2;
    *(float *)(unaff_x19 + 0x2c) = unaff_s9 * (fVar6 + fVar7 * 0.5) + fVar3;
  }
  return;
}


