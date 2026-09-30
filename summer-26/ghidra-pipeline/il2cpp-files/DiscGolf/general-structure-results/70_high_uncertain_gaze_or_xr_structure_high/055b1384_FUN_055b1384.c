/*
FUNCTION_NAME: FUN_055b1384
ENTRY_POINT: 055b1384
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_055b1384(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_06dbb635 & 1) == 0) {
    FUN_02d965b8(System_Action<XRInteractionManager,_bool>_TypeInfo);
    FUN_02d965b8(System_Action<XRLayout,_Camera>_TypeInfo);
    FUN_02d965b8(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
    FUN_02d965b8(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_06dbb635 = 1;
  }
  if (param_2 != 0) {
    uVar1 = *(int *)(param_2 + 0x24) - 1;
    if (uVar1 < 7) {
      return *(undefined8 *)(&PTR_DAT_066b9020)[uVar1];
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar2 = thunk_FUN_02dd3144();
    FUN_05453f1c(uVar2,0);
    uVar3 = thunk_FUN_02dfd288(
                              System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


