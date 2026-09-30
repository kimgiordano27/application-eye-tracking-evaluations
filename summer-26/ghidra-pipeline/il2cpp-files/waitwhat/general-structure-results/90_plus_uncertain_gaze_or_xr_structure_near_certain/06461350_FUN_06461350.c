/*
FUNCTION_NAME: FUN_06461350
ENTRY_POINT: 06461350
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


long FUN_06461350(long param_1,undefined4 param_2)

{
  byte bVar1;
  long *plVar2;
  
  if ((DAT_07556a67 & 1) == 0) {
    FUN_03188a78(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_07556a67 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2f0))
    ;
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo +
                       0x130);
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo)) {
        return plVar2[2];
      }
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


