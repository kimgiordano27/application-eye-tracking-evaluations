/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 03c6b114
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  
  if (in_NG == in_OV) {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    uVar2 = FUN_02d60934(lVar1,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_05029918(*unaff_x19,0,uVar2,0,*(int *)(unaff_x20 + 0x18),0);
    }
    *unaff_x19 = uVar2;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    *unaff_x19 = **(undefined8 **)(lVar1 + 0xb8);
  }
  thunk_FUN_02dd37b4();
  return;
}


