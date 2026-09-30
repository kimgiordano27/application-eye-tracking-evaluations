/*
FUNCTION_NAME: OVRPlugin$$SetControllerHaptics
ENTRY_POINT: 05d16b64
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRPlugin__SetControllerHaptics(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x20;
  uint unaff_w21;
  undefined8 uVar2;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar1 = FUN_068f8810();
  if ((((unaff_w21 >> 1 & 1) != 0) && ((uVar1 & 1) != 0)) &&
     (uVar1 = OVRPlugin__GetAppCpuStartToGpuEndTime(), (uVar1 & 1) == 0)) {
    unaff_w21 = unaff_w21 & 0xfffffffd;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x160);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar1 = FUN_068f8810(uVar2,0,0);
  if (((unaff_w21 & 1) != 0) && ((uVar1 & 1) != 0)) {
    uVar1 = OVRPlugin__GetAppCpuStartToGpuEndTime();
    if ((uVar1 & 1) == 0) {
      unaff_w21 = unaff_w21 & 0xfffffffe;
    }
  }
  return unaff_w21;
}


