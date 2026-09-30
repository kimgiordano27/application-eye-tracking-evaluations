/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 02bf082c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,int param_2,int param_3)

{
  long lVar1;
  long unaff_x22;
  
  if (param_2 < 0) {
    FUN_03060c80(0);
  }
  if (param_3 < 0) {
    FUN_030608c4(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_03060400(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  lVar1 = thunk_FUN_01afaadc();
  FUN_02bef520(lVar1,param_3,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148))
  ;
  if (lVar1 != 0) {
    FUN_0306273c(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(lVar1 + 0x10),0,param_3,0);
    *(int *)(lVar1 + 0x18) = param_3;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


