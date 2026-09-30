/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 044ec6f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  
  uVar1 = FUN_031c09d4();
                    /* try { // try from 044ec6fc to 045ec73b has its CatchHandler @ 044ec6fc
                       catch() { ... } // from try @ 044ec6fc with catch @ 044ec6fc
                       catch() { ... } // from try @ 044ec750 with catch @ 044ec6fc
                       catch() { ... } // from try @ 044ec78c with catch @ 044ec6fc
                       catch() { ... } // from try @ 044ec7cc with catch @ 044ec6fc */
  uVar1 = FUN_03188b1c(uVar1,unaff_w21);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  return;
}


