/*
FUNCTION_NAME: Photon.Pun.PhotonStream$$Serialize
ENTRY_POINT: 061420b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 Photon_Pun_PhotonStream__Serialize(uint *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined1 uStack000000000000003c;
  
  if (*(long *)(unaff_x22 + 0xed0) == 0) {
    pcStack0000000000000010 = "OVRPlugin";
    uStack0000000000000018 = 9;
    in_stack_00000020 = "ovrp_RequestSceneCapture";
    in_stack_00000028 = 0x18;
    uStack0000000000000038 = 0x10;
    in_stack_00000030 = DAT_014bb208;
    uStack000000000000003c = 0;
    uVar2 = thunk_FUN_0322f404(&stack0x00000010);
    *(undefined8 *)(unaff_x22 + 0xed0) = uVar2;
  }
  uStack0000000000000018 = 0;
  pcStack0000000000000010 = (char *)(ulong)*param_1;
  uStack0000000000000018 = thunk_FUN_0322f724(*(undefined8 *)(param_1 + 2));
  uVar1 = (**(code **)(unaff_x22 + 0xed0))(&stack0x00000010,param_2);
  FUN_031816dc(&stack0x00000010);
  thunk_FUN_0322f718(uStack0000000000000018);
  uStack0000000000000018 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  thunk_FUN_0329bf60(param_1 + 2,0);
  return uVar1;
}


