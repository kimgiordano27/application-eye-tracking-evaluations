/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04182504
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = unaff_x22[1];
  uStack0000000000000000 = *unaff_x22;
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_1;
  thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
                    /* try { // try from 04182528 to 04282533 has its CatchHandler @ 04182714 */
  FUN_0701e7b4();
                    /* try { // try from 04182540 to 0428254b has its CatchHandler @ 0418268c */
  FUN_05ac7d68();
  return;
}


