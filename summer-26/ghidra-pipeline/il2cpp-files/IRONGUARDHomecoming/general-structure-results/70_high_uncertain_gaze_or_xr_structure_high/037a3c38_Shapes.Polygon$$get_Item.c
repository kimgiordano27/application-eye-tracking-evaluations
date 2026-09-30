/*
FUNCTION_NAME: Shapes.Polygon$$get_Item
ENTRY_POINT: 037a3c38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 Shapes_Polygon__get_Item(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_x12;
  uint *unaff_x19;
  long unaff_x22;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  char *pcStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  uStack0000000000000030 = *(undefined8 *)(in_x12 + 0x6e0);
  pcStack0000000000000010 = "OVRPlugin";
  uStack0000000000000018 = 9;
  pcStack0000000000000020 = "ovrp_RequestSceneCapture";
  uStack0000000000000028 = 0x18;
  uStack0000000000000038 = 0x10;
  uStack000000000000003c = 0;
  uVar2 = thunk_FUN_01f11a88(&stack0x00000010);
  *(undefined8 *)(unaff_x22 + 0x218) = uVar2;
  uStack0000000000000018 = 0;
  pcStack0000000000000010 = (char *)(ulong)*unaff_x19;
  uStack0000000000000018 = thunk_FUN_01f11da8(*(undefined8 *)(unaff_x19 + 2));
  uVar1 = (**(code **)(unaff_x22 + 0x218))(&stack0x00000010);
  FUN_01e3db64(&stack0x00000010);
  thunk_FUN_01f11d9c(uStack0000000000000018);
  uStack0000000000000018 = 0;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  unaff_x19[0] = 0;
  unaff_x19[1] = 0;
  thunk_FUN_01f51358(unaff_x19 + 2,0);
  return uVar1;
}


