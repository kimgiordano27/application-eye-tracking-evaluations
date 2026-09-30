/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 0466896c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02ba3594(*(undefined8 *)(param_1 + 0xb60));
  uVar1 = thunk_FUN_02b79644();
  uVar2 = thunk_FUN_02ba3594(&DAT_0649f190);
  FUN_04d7b3f4(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,param_2);
}


