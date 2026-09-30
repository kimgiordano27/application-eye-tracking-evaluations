/*
FUNCTION_NAME: Photon.Pun.Demo.Cockpit.CurrentRoomIsOpenToggle$$Update
ENTRY_POINT: 02d50b84
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 Photon_Pun_Demo_Cockpit_CurrentRoomIsOpenToggle__Update(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x12;
  long unaff_x21;
  char *pcStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *(undefined8 *)(in_x12 + 0x708);
  pcStack0000000000000000 = "OVRPlugin";
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_SendEvent";
  uStack0000000000000018 = 0xe;
  uStack0000000000000028 = 0x10;
  uStack000000000000002c = 0;
  uVar2 = thunk_FUN_01861e78();
  *(undefined8 *)(unaff_x21 + 0xea8) = uVar2;
  uVar2 = thunk_FUN_01862198();
  uVar3 = thunk_FUN_01862198();
  uVar1 = (**(code **)(unaff_x21 + 0xea8))(uVar2,uVar3);
  thunk_FUN_0186218c(uVar2);
  thunk_FUN_0186218c(uVar3);
  return uVar1;
}


