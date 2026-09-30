/*
FUNCTION_NAME: OVRManager$$InitOVRManager
ENTRY_POINT: 027d9130
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__InitOVRManager(void)

{
  int in_w8;
  
                    /* try { // try from 027d9130 to 028d9137 has its CatchHandler @ 027d913c */
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d90b4 with catch @ 027d9138
                       try { // try from 027d9138 to 028d9167 has its CatchHandler @ 027d9098 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d90e0 with catch @ 027d913c
                       catch(type#1 @ 03abd138) { ... } // from try @ 027d9130 with catch @ 027d913c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d90d8 with catch @ 027d9148
                       catch(type#1 @ 03abd138) { ... } // from try @ 027d912c with catch @ 027d9148
                        */
  FUN_027d9630();
  return;
}


