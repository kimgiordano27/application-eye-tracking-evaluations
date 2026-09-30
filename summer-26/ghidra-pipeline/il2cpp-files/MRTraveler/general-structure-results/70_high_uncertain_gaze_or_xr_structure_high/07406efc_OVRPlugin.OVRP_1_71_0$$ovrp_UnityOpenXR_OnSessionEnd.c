/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 07406efc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_x10;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lStack0000000000000030;
  undefined8 uStack0000000000000038;
  long lStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  
  lStack0000000000000030 = param_1 + 0x85a;
  lStack0000000000000040 = in_x10 + 0x6a7;
  uStack0000000000000038 = 0xe;
  uStack0000000000000048 = 0x17;
  uStack0000000000000058 = 0xc;
  uStack000000000000005c = 0;
  uStack0000000000000050 = param_2;
  uVar2 = thunk_FUN_03cf54f0(&stack0x00000030);
  *(undefined8 *)(unaff_x21 + 0xa08) = uVar2;
  memset(&stack0x00000030,0,0x19c);
  FUN_03bdd804();
  uVar1 = (**(code **)(unaff_x21 + 0xa08))(unaff_w20,&stack0x00000030);
  FUN_03bdd874(&stack0x00000030);
  unaff_x19[4] = 0;
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  thunk_FUN_03d233cc();
  return uVar1;
}


