/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 0573a41c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(void)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02f07e70(PTR_DAT_06d0e120);
  *(undefined1 *)(unaff_x20 + 0xbfa) = 1;
  puVar1 = PTR_DAT_06d58920;
  lVar2 = *unaff_x19;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x19;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  return;
}


