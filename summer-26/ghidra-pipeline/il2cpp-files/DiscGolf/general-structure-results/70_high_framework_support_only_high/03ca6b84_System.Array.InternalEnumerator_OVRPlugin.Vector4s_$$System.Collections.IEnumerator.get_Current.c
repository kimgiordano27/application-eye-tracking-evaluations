/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ca6b84
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
               (int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar1 = thunk_FUN_02dd3144();
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
    FUN_05453f78(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar1,param_5);
  }
  if (param_2 == 0) {
    param_1 = param_1 + 2;
    *(undefined8 *)param_1 = param_3;
  }
  else {
    lVar3 = *(long *)(param_1 + 6);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar3 + 0x18) <= param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1 = (int *)(lVar3 + (ulong)(param_2 - 1U) * 0x10 + 0x20);
    *(undefined8 *)param_1 = param_3;
  }
  *(undefined8 *)(param_1 + 2) = param_4;
  LeanTween__value(param_1,0);
  return;
}


