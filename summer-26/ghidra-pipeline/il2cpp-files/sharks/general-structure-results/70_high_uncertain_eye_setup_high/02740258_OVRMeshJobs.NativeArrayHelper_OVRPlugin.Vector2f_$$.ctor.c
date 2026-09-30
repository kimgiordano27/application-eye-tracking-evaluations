/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02740258
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor(undefined8 param_1,int param_2)

{
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  
  if (param_2 < 0) {
    FUN_02befb2c(0);
  }
                    /* try { // try from 027402c8 to 028402e7 has its CatchHandler @ 02740204 */
  if (unaff_w21 < 0) {
    FUN_02bef770(0x10,4,0);
  }
  if (*(int *)(unaff_x19 + 0x18) - unaff_w22 < unaff_w21) {
    FUN_02bef2ac(0x17,0);
  }
  if (1 < unaff_w21) {
                    /* try { // try from 02740288 to 028402af has its CatchHandler @ 02740204 */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02740230 with catch @ 02740298
                        */
    FUN_01ad2aa8(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
  }
                    /* try { // try from 027402b0 to 028402c7 has its CatchHandler @ 02740398 */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


