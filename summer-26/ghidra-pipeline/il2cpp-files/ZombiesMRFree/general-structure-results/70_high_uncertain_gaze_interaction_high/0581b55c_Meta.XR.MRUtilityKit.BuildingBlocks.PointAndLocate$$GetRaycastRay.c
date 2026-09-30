/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$GetRaycastRay
ENTRY_POINT: 0581b55c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_interaction_hits_2
*/


undefined8
Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__GetRaycastRay(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0581b570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    return uVar1;
  }
  return 0;
}


