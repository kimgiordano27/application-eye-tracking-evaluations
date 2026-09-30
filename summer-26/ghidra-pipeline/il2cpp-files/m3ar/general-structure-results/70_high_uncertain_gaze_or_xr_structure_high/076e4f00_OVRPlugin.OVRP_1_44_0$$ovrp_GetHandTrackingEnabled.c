/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 076e4f00
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  int iVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = FUN_08589e5c();
  if ((uVar2 & 1) == 0) {
    if (unaff_s10 <= ABS(unaff_s9 + unaff_s11)) {
      if (*(float *)(unaff_x19 + 0x1c) <= -unaff_s9) {
        return;
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_x21 + 0x548))();
      if (iVar1 < 1) {
        return;
      }
    }
  }
  *(float *)(unaff_x19 + 0x1c) = -unaff_s9;
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  return;
}


