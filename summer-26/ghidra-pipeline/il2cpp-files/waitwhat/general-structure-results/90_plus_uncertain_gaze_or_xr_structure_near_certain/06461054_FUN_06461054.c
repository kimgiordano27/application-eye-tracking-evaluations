/*
FUNCTION_NAME: FUN_06461054
ENTRY_POINT: 06461054
PROGRAM: waitwhat-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


long * FUN_06461054(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  
  if ((DAT_07556a63 & 1) == 0) {
    FUN_03188a78(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_07556a63 = 1;
  }
  if (param_2 == 0) {
                    /* try { // try from 064610f0 to 0656111b has its CatchHandler @ 06462248 */
    plVar2 = *(long **)(param_1 + 0x30);
    thunk_FUN_03195150();
  }
  else {
    plVar2 = *(long **)(param_1 + 0x28);
                    /* try { // try from 0646108c to 065610b3 has its CatchHandler @ 06462250 */
    thunk_FUN_03195150();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x2f8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x300))
    ;
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo +
                       0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar2);
      }
    }
  }
  return plVar2;
}


