/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$get_Length
ENTRY_POINT: 0234a068
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  
  if (unaff_w20 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01dde7f8();
    }
    uVar2 = FUN_01d7d9bc(lVar1,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  }
  thunk_FUN_01e10808(unaff_x19 + 0x10,uVar2);
  return;
}


