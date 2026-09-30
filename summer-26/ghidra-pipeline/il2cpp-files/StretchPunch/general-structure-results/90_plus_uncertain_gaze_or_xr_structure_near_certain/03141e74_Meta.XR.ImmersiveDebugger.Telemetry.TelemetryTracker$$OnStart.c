/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 03141e74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
                    /* try { // try from 03141e74 to 03241e77 has its CatchHandler @ 03141e78 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03141e74 with catch @ 03141e78
                       try { // try from 03141e78 to 03241e9b has its CatchHandler @ 03141c20 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03141e4c with catch @ 03141e7c
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03141dd8 with catch @ 03141e80
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 03141e50 with catch @ 03141e84
                        */
  uVar1 = FUN_02198a4c(param_2,0,param_4,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_1 + 0xd0) + 0x20) + 0xc0) + 0x150));
  if (-1 < (int)uVar1) {
                    /* try { // try from 03141e9c to 03241eb3 has its CatchHandler @ 03141ee8 */
    FUN_031420f4();
  }
  return ~uVar1 >> 0x1f;
}


