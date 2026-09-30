/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 0530a118
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  long lVar1;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 0530a050 with catch @ 0530a118 */
  lVar1 = thunk_FUN_02f45174();
                    /* catch() { ... } // from try @ 05309ec8 with catch @ 0530a11c */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 05309e48 with catch @ 0530a120 */
                    /* catch() { ... } // from try @ 05309e14 with catch @ 0530a124 */
    *(long *)(unaff_x19 + 0x68) = lVar1;
                    /* catch() { ... } // from try @ 05309d8c with catch @ 0530a128 */
                    /* catch() { ... } // from try @ 05309cdc with catch @ 0530a12c */
                    /* catch() { ... } // from try @ 05309eb8 with catch @ 0530a130
                       catch() { ... } // from try @ 0530a060 with catch @ 0530a130 */
    lVar1 = thunk_FUN_02f45174();
                    /* catch() { ... } // from try @ 05309edc with catch @ 0530a134
                       catch() { ... } // from try @ 0530a058 with catch @ 0530a134 */
    if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 05309d60 with catch @ 0530a148 */
                    /* catch() { ... } // from try @ 05309dd0 with catch @ 0530a14c */
                    /* catch() { ... } // from try @ 05309d48 with catch @ 0530a150 */
                    /* catch() { ... } // from try @ 05309c98 with catch @ 0530a154 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 05309e5c with catch @ 0530a138
                       catch() { ... } // from try @ 0530a054 with catch @ 0530a138 */
                    /* catch() { ... } // from try @ 05309ef4 with catch @ 0530a13c
                       catch() { ... } // from try @ 0530a05c with catch @ 0530a13c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05309de8 with catch @ 0530a140 */
  FUN_02f08d48();
}


