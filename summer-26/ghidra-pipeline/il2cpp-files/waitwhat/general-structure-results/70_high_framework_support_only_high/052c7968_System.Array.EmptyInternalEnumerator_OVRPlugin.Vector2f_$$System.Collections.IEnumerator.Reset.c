/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 052c7968
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset
               (long *param_1,int param_2,undefined2 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  if (*param_1 == 0) {
    FUN_05950954(0x32,0);
  }
  if ((param_2 < 0) || (*(int *)((long)param_1 + 0xc) <= param_2)) {
    FUN_05950c3c(0);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar1 = (int)param_1[1] + param_2;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(undefined2 *)(lVar2 + (long)(int)uVar1 * 2 + 0x20) = param_3;
  return;
}


