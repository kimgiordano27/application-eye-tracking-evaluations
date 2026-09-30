/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 03145c04
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor(void)

{
  int in_w8;
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (in_w8 - unaff_w21 < unaff_w20) {
                    /* try { // try from 03145c18 to 03245c2f has its CatchHandler @ 03145c64 */
    FUN_033b2d60(0x17,0);
  }
  in_stack_00000030 = unaff_x23[2];
  in_stack_00000028 = unaff_x23[1];
  in_stack_00000020 = *unaff_x23;
                    /* try { // try from 03145c30 to 03245c53 has its CatchHandler @ 031459a8 */
                    /* try { // try from 03145c54 to 03245c63 has its CatchHandler @ 03145c64 */
  FUN_02038d38(*(undefined8 *)(unaff_x24 + 0x10),unaff_w21,unaff_w20,&stack0x00000020);
                    /* catch() { ... } // from try @ 03145c18 with catch @ 03145c64
                       catch() { ... } // from try @ 03145c54 with catch @ 03145c64 */
                    /* try { // try from 03145c68 to 03245c6b has its CatchHandler @ 03145c74 */
                    /* try { // try from 03145c6c to 03245c77 has its CatchHandler @ 031459a8 */
  return;
}


