/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 089f8f94
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(long param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar3;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  plVar3 = *(long **)(unaff_x21 + 0x4a8);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x19;
  }
  uVar2 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_04983f60(*unaff_x24);
  FUN_063d4f5c(uVar1,uVar2,*unaff_x20,0);
  uVar2 = thunk_FUN_04983f60(*unaff_x23);
  FUN_06ec46b8(uVar2,uVar1,*unaff_x22);
  **(undefined8 **)(*plVar3 + 0xb8) = uVar2;
  thunk_FUN_049ee3d8(*(undefined8 *)(*plVar3 + 0xb8),uVar2);
  return;
}


