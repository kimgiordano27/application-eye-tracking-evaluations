/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 04a2e2f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long unaff_x23;
  undefined4 unaff_w27;
  long unaff_x28;
  ulong unaff_x29;
  undefined4 *in_stack_00000010;
  
  iVar1 = *(int *)(unaff_x23 + 0x38);
  uVar2 = *(undefined4 *)(unaff_x23 + 0x28);
  iVar3 = *(int *)(unaff_x23 + 0x20) + -1;
  *(int *)(unaff_x23 + 0x20) = iVar3;
  *in_stack_00000010 = 0xffffffff;
  *(undefined4 *)(unaff_x28 + (unaff_x29 & 0xffffffff) * (param_1 & 0xffffffff) + 4) = uVar2;
  *(int *)(unaff_x23 + 0x38) = iVar1 + 1;
  if (iVar3 == 0) {
    unaff_w27 = 0xffffffff;
    *(undefined4 *)(unaff_x23 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_x23 + 0x28) = unaff_w27;
  return 1;
}


