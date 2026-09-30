/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$AsReadOnly
ENTRY_POINT: 02346ef4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__AsReadOnly(long param_1,uint param_2)

{
  uint in_w8;
  uint uVar1;
  long lVar2;
  
  if (in_w8 <= param_2) {
    FUN_033b35a8(0);
    in_w8 = *(uint *)(param_1 + 0x18);
  }
  uVar1 = in_w8 - 1;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (uVar1 - param_2 != 0 && (int)param_2 <= (int)uVar1) {
    FUN_033b4f38(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*(undefined8 *)(param_1 + 0x10),param_2
                 ,uVar1 - param_2,0);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar1 * 0x40;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      thunk_FUN_01e10808(lVar2 + 0x20,0);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


