/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryConsentWindow
ENTRY_POINT: 0696d3f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryConsentWindow(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  thunk_FUN_03afed3c();
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  thunk_FUN_03afed3c();
  uVar2 = DAT_015c5280;
  uVar1 = *unaff_x28;
  *(undefined8 *)(unaff_x19 + 0x48) = 0x1f403f000000;
  *(undefined4 *)(unaff_x19 + 0x58) = 0xbf800000;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *(undefined1 *)(unaff_x19 + 0x5c) = 1;
  uVar2 = thunk_FUN_03ac74bc(uVar1);
                    /* try { // try from 0696d454 to 06a6d51b has its CatchHandler @ 0696d128 */
  FUN_04de7d48(uVar2,*unaff_x27);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x60),uVar2);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x26);
  FUN_054c51e0(uVar2,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x70),uVar2);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x24);
  FUN_04de7d48(uVar2,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x78),uVar2);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_04de7d48(uVar2,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x80),uVar2);
  thunk_FUN_07c988f8();
  return;
}


