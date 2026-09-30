/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Item
ENTRY_POINT: 0417aa4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar3;
  
  iVar1 = *(int *)(unaff_x19 + 0x18);
  if (1 < iVar1) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1b0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_042374e8(uVar3,0,iVar1);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


