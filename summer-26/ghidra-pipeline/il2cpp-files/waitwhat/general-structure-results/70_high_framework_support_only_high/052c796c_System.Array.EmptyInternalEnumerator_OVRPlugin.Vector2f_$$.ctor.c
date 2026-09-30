/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 052c796c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___ctor
               (long param_1,long *param_2,int param_3,undefined2 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_031c09d4(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if (*param_2 == 0) {
    FUN_05950954(0x32,0);
  }
  if ((param_3 < 0) || (*(int *)((long)param_2 + 0xc) <= param_3)) {
    FUN_05950c3c(0);
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar1 = (int)param_2[1] + param_3;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(undefined2 *)(lVar2 + (long)(int)uVar1 * 2 + 0x20) = param_4;
  return;
}


