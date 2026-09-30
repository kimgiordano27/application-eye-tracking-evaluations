/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$Load
ENTRY_POINT: 0789a5f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1
Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__Load(ushort *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_04980b34();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  return *(undefined1 *)(*(long *)(lVar1 + 0xb8) + 4);
}


