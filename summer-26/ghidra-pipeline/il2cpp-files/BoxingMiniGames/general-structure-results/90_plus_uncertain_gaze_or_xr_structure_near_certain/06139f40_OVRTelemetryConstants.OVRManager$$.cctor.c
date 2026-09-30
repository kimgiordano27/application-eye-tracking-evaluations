/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 06139f40
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryConstants_OVRManager___cctor(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x410));
  *(undefined1 *)(unaff_x21 + 0xd87) = 1;
  puVar1 = PTR_DAT_07a26410;
  FUN_05e5ae34();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_0610d1d4();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  uVar2 = FUN_0610d250();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_036b7ad0();
  uVar2 = FUN_0610d324();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  thunk_FUN_036b7ad0();
  uVar2 = FUN_0610d3f8();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  thunk_FUN_036b7ad0();
  uVar2 = FUN_0610d4cc();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  thunk_FUN_036b7ad0();
  lVar3 = FUN_0610d5a0();
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0613a088(uVar2,lVar3);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x40),uVar2);
  if (lVar3 == 0) {
    uVar2 = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  }
  thunk_FUN_036b7ad0(unaff_x19 + 0x38,uVar2);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_0610d61c();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x48),uVar2);
  return;
}


