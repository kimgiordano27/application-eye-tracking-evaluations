/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0558cd1c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  int iStack0000000000000048;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0558cd10 with catch @ 0558cd1c
                        */
  *(undefined8 *)(param_1 + unaff_x20 * 8) = unaff_x19;
                    /* try { // try from 0558cd20 to 0568cd5b has its CatchHandler @ 0558cd20
                       catch() { ... } // from try @ 0558cd20 with catch @ 0558cd20
                       catch() { ... } // from try @ 0558ce48 with catch @ 0558cd20
                       catch() { ... } // from try @ 0558ce98 with catch @ 0558cd20
                       catch() { ... } // from try @ 0558cefc with catch @ 0558cd20
                       catch() { ... } // from try @ 0558cf5c with catch @ 0558cd20 */
  iStack0000000000000048 = (int)unaff_x20 + 1;
  __cxa_end_catch();
  FUN_08c8187c();
  return;
}


