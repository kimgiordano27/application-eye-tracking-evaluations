/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03c6eb8c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6ebec) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_02d6ec70();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e42304(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar2);
  }
  return;
}


