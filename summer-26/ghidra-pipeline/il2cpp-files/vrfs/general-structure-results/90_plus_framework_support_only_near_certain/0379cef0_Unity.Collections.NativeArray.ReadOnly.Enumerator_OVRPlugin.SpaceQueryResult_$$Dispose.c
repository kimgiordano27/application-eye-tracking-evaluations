/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0379cef0
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  long lVar1;
  long unaff_x21;
  
  thunk_FUN_016466fc();
  lVar1 = FUN_047a50f0(0);
  if ((lVar1 != 0) && (unaff_x21 != 0)) {
    FUN_02783288();
    FUN_0379cf50();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


