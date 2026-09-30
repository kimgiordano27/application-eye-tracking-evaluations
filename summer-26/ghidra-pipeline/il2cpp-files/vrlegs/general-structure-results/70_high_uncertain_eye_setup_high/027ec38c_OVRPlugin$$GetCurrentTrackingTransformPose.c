/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 027ec38c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__GetCurrentTrackingTransformPose(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  plVar4 = *(long **)(unaff_x20 + 0xad8);
  if ((*(byte *)(unaff_x19 + 0x118) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ad8);
    *(undefined1 *)(unaff_x19 + 0x118) = 1;
  }
  if (*(int *)(*plVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar2 = FUN_027d9860(0);
  iVar3 = thunk_FUN_01a4a380(0);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  return (iVar3 - iVar1 * iVar2) * 0x32 + 100;
}


