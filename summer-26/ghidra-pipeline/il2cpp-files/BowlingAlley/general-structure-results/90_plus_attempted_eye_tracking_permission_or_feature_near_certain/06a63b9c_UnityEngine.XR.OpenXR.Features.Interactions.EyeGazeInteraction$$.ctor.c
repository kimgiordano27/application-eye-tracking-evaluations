/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 06a63b9c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 133
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor(long param_1)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x710));
  thunk_FUN_032e1da0(
                    Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                    );
                    /* try { // try from 06a63bb0 to 06b63bbf has its CatchHandler @ 06a63bc0 */
  thunk_FUN_032e1da0(PTR_DAT_072a5ff0);
                    /* catch() { ... } // from try @ 06a63b34 with catch @ 06a63bc0
                       catch() { ... } // from try @ 06a63bb0 with catch @ 06a63bc0 */
  *(undefined1 *)(unaff_x21 + 0xda3) = 1;
                    /* try { // try from 06a63bc4 to 06b63bc7 has its CatchHandler @ 06a63bd0 */
                    /* try { // try from 06a63bc8 to 06b63bd3 has its CatchHandler @ 06a63a1c */
  if (*(long *)(unaff_x20 + 0x50) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06a63bc4 with catch @ 06a63bd0
                        */
                    /* try { // try from 06a63bd4 to 06b63eeb has its CatchHandler @ 06a63bd4
                       catch() { ... } // from try @ 06a63bd4 with catch @ 06a63bd4
                       catch() { ... } // from try @ 06a642e8 with catch @ 06a63bd4
                       catch() { ... } // from try @ 06a643b4 with catch @ 06a63bd4
                       catch() { ... } // from try @ 06a643bc with catch @ 06a63bd4
                       catch() { ... } // from try @ 06a64514 with catch @ 06a63bd4 */
    FUN_04b19bd4(*(long *)(unaff_x20 + 0x50),unaff_w19 & 1,
                 *(undefined8 *)
                  Method_UnityEngine_SubsystemsImplementation_SubsystemProvider<XRSessionSubsystem>__ctor__
                );
    if (*(long *)(unaff_x20 + 0x50) != 0) {
      if (*(char *)(*(long *)(unaff_x20 + 0x50) + 0x18) == '\0') {
        lVar1 = *(long *)(unaff_x20 + 0x40);
      }
      else {
        lVar1 = *(long *)(unaff_x20 + 0x38);
      }
      if (lVar1 != 0) {
        FUN_06bfba38(lVar1,0);
      }
      if (*(long *)(unaff_x20 + 0x48) != 0) {
        FUN_04af65e8(*(long *)(unaff_x20 + 0x48),unaff_w19 & 1,*(undefined8 *)PTR_DAT_072a5ff0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


