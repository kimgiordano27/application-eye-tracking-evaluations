/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 058312d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x26;
  long unaff_x29;
  
                    /* try { // try from 058312dc to 0593141f has its CatchHandler @ 058312dc
                       catch() { ... } // from try @ 058312dc with catch @ 058312dc
                       catch() { ... } // from try @ 05831454 with catch @ 058312dc
                       catch() { ... } // from try @ 0583151c with catch @ 058312dc
                       catch() { ... } // from try @ 058315c8 with catch @ 058312dc
                       catch() { ... } // from try @ 05831620 with catch @ 058312dc */
  thunk_FUN_040d6b00(param_2,*(undefined8 *)(param_1 + 0x80));
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


