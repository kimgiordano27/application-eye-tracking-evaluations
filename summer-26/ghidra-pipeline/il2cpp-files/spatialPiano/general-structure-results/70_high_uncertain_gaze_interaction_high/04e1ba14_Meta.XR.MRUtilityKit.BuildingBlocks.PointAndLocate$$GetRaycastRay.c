/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$GetRaycastRay
ENTRY_POINT: 04e1ba14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__GetRaycastRay(void)

{
  uint uVar1;
  
                    /* try { // try from 04e1ba20 to 04f1ba2f has its CatchHandler @ 04e1ba30 */
  uVar1 = FUN_050b6884();
                    /* catch() { ... } // from try @ 04e1b980 with catch @ 04e1ba30
                       catch() { ... } // from try @ 04e1b9ac with catch @ 04e1ba30
                       catch() { ... } // from try @ 04e1ba20 with catch @ 04e1ba30 */
                    /* try { // try from 04e1ba34 to 04f1ba37 has its CatchHandler @ 04e1ba40 */
  return uVar1 & 1;
}


