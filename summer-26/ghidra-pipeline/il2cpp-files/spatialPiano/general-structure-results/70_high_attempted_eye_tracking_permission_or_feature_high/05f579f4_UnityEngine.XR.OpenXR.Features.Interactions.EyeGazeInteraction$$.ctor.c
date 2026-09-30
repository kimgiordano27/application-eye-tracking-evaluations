/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 05f579f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
    FUN_05f5781c();
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 != 0) {
      in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0x10);
      uStack0000000000000054 = *(undefined8 *)(unaff_x19 + 0x24);
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x2c);
      in_stack_00000048 = (undefined4)*(undefined8 *)(unaff_x19 + 0x18);
      uStack0000000000000034 = *(undefined8 *)(unaff_x19 + 0x40);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x19 + 0x1c);
      in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x1c) >> 0x20);
      uStack0000000000000014 = *(undefined8 *)(unaff_x19 + 0x5c);
      in_stack_00000028 = (undefined4)*(undefined8 *)(unaff_x19 + 0x34);
      uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x19 + 0x38);
      in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x38) >> 0x20);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x50) >> 0x20);
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),&stack0x00000040,&stack0x00000020);
    }
  }
  return;
}


