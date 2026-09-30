/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 0321c824
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  uint uVar1;
  uint uVar2;
  int in_w8;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  
  if (in_w8 != 0) {
    thunk_FUN_0159f088(PTR_DAT_06dab2e8);
    *(undefined1 *)(unaff_x22 + 0xeaf) = 1;
  }
  uVar2 = unaff_w21 ^ unaff_w20;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = uVar2 + (unaff_w20 >> 0xc | unaff_w20 << 0x14);
  uVar2 = uVar1 ^ (uVar2 >> 0x17 | uVar2 << 9);
                    /* try { // try from 0321c87c to 0331c88b has its CatchHandler @ 0321c88c */
  return uVar2 + (uVar1 >> 5 | uVar1 * 0x8000000) ^ (uVar2 >> 0xd | uVar2 << 0x13);
}


