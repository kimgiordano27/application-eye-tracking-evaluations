/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetColorAtPosition
ENTRY_POINT: 077499a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SpaceMap__GetColorAtPosition(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar1 = FUN_04eb2a30();
  if (lVar1 != 0) {
    FUN_094fb0c8(lVar1,0);
    uVar2 = FUN_094f61e8(lVar1,0);
    FUN_07758e9c(lVar1,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


