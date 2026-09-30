/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$GetRaycastRay
ENTRY_POINT: 04e1b298
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__GetRaycastRay
               (undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined1 in_ZR;
  int in_w8;
  uint in_w9;
  long in_x10;
  
  while( true ) {
    if ((bool)in_ZR) {
      return param_4;
    }
    param_4 = param_4 - 1;
    if ((int)param_4 < in_w8) break;
    if (in_w9 <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    in_ZR = *(int *)(in_x10 + (long)(int)param_4 * 4) == param_3;
  }
  return 0xffffffff;
}


