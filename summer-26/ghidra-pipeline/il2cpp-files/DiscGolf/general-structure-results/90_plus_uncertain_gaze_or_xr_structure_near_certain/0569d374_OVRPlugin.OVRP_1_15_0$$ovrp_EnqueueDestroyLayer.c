/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueDestroyLayer
ENTRY_POINT: 0569d374
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
                    /* try { // try from 0569d374 to 0579d7d3 has its CatchHandler @ 0569d374
                       catch() { ... } // from try @ 0569d374 with catch @ 0569d374
                       catch() { ... } // from try @ 0569d910 with catch @ 0569d374
                       catch() { ... } // from try @ 0569dd14 with catch @ 0569d374
                       catch() { ... } // from try @ 0569df64 with catch @ 0569d374
                       catch() { ... } // from try @ 0569df6c with catch @ 0569d374
                       catch() { ... } // from try @ 0569e034 with catch @ 0569d374
                       catch() { ... } // from try @ 0569e06c with catch @ 0569d374 */
  FUN_054a5c7c(param_1,0);
  if (unaff_x21 == 0 && unaff_x20 == 0) {
    FUN_059af2cc();
    return;
  }
  uVar1 = FUN_05362cb4();
  if (*(int *)(*(long *)Oculus_Platform_Request<UserList>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)Oculus_Platform_Request<UserList>_TypeInfo);
  }
  FUN_0569d85c();
  FUN_059af2cc(uVar1);
  FUN_054a667c(uVar1,1,0);
  return;
}


