/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSetupLayer
ENTRY_POINT: 0569d2f0
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


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSetupLayer(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  
  if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fc268);
  }
  uVar1 = FUN_054c537c(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_054a76dc();
  if (unaff_x21 == 0 && unaff_x20 == 0) {
    FUN_059af2cc();
    return;
  }
  uVar2 = FUN_05362cb4();
  if (*(int *)(*(long *)Oculus_Platform_Request<UserList>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)Oculus_Platform_Request<UserList>_TypeInfo);
  }
  FUN_0569d85c();
  FUN_059af2cc(uVar2);
  FUN_054a667c(uVar2,1,0);
  return;
}


