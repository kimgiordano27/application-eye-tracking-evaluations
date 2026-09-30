/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 089f8f60
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


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x20 + 0x1a) = 1;
  puVar5 = PTR_DAT_0ac51220;
  puVar4 = PTR_DAT_0ac51218;
  puVar3 = PTR_DAT_0ac51210;
  puVar2 = PTR_DAT_0ac51208;
  puVar1 = PTR_DAT_0ac4e4a8;
  lVar6 = *unaff_x19;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *unaff_x19;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_063d4f5c(uVar7,uVar8,*(undefined8 *)puVar5,0);
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
  FUN_06ec46b8(uVar8,uVar7,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar8;
  thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar8);
  return;
}


