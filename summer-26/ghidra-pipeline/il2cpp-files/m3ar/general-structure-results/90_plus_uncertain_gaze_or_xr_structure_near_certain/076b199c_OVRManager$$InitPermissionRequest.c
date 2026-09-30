/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 076b199c
PROGRAM: m3ar-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(undefined8 *param_1)

{
  long unaff_x20;
  
  thunk_FUN_0406deb8(*param_1);
  FUN_0532cba4();
  if (unaff_x20 != 0) {
                    /* try { // try from 076b19c4 to 077b19c7 has its CatchHandler @ 076b19e8 */
                    /* try { // try from 076b19c8 to 077b19cb has its CatchHandler @ 076b19e4 */
                    /* try { // try from 076b19cc to 077b19cf has its CatchHandler @ 076b19e0 */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076b1938 with catch @ 076b19d0
                       try { // try from 076b19d0 to 077b19ff has its CatchHandler @ 076b1880 */
    FUN_0769f8bc();
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076b18f0 with catch @ 076b19e0
                       catch(type#1 @ 08931438) { ... } // from try @ 076b19cc with catch @ 076b19e0
                        */
  FUN_0403188c();
}


