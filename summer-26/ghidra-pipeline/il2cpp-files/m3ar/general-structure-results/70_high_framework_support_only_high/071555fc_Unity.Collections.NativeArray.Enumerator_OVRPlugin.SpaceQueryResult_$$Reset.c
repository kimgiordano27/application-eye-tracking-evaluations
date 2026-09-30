/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 071555fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__Reset(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_04097b88(*(undefined8 *)(param_1 + 0x788));
  uVar1 = thunk_FUN_0406deb8();
  uVar2 = thunk_FUN_04097b88(&DAT_091d1870);
  FUN_074e4878(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar1);
}


