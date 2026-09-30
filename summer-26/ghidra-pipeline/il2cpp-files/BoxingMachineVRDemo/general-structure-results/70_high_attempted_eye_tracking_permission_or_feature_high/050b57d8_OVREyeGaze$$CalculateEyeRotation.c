/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 050b57d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(void)

{
  long in_x9;
  long in_x10;
  
                    /* try { // try from 050b57dc to 051b57df has its CatchHandler @ 050b57e4 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 050b5778 with catch @ 050b57e0
                       try { // try from 050b57e0 to 051b57fb has its CatchHandler @ 050b573c */
                    /* WARNING: Could not recover jumptable at 0x050b57e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 050b5798 with catch @ 050b57e4
                       catch(type#1 @ 0638da48) { ... } // from try @ 050b57dc with catch @ 050b57e4
                        */
  (*(code *)((ulong)*(ushort *)(in_x10 + in_x9 * 2) * 4 + 0x50b57e8))();
  return;
}


