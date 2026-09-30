/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 033d38ec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * OVRPlugin__RequestSceneCapture(long param_1)

{
  byte bVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(param_1 + 0x1b8))();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
    if (bVar1 <= *(byte *)(*plVar2 + 0x130)) {
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_1554
         ) {
        return plVar2;
      }
      return (long *)0x0;
    }
  }
                    /* try { // try from 033d3948 to 034d3bb3 has its CatchHandler @ 033d3948
                       catch() { ... } // from try @ 033d3948 with catch @ 033d3948
                       catch() { ... } // from try @ 033d3c80 with catch @ 033d3948
                       catch() { ... } // from try @ 033d3d20 with catch @ 033d3948
                       catch() { ... } // from try @ 033d3d28 with catch @ 033d3948
                       catch() { ... } // from try @ 033d3dd8 with catch @ 033d3948 */
  return (long *)0x0;
}


