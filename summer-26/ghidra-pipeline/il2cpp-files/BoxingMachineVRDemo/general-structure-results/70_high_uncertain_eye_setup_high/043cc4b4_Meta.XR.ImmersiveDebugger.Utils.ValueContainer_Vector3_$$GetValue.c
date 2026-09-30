/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$GetValue
ENTRY_POINT: 043cc4b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1 Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__GetValue(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = FUN_02d9a2e0();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  return *(undefined1 *)(*(long *)(lVar1 + 0xb8) + 1);
}


