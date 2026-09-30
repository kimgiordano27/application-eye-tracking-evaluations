/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 05bef00c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice
               (undefined8 param_1,undefined4 param_2,undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
               undefined8 param_7)

{
  long lVar1;
  long *unaff_x19;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  
  uVar4 = param_4._0_4_;
  uVar3 = param_3._0_4_;
  uStack0000000000000010 = param_3._0_8_;
  uStack0000000000000030 = param_4._0_8_;
  uStack0000000000000020 = param_1;
  uStack0000000000000040 = param_7;
  uVar2 = FUN_069c54a4();
  lVar1 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined4 *)(lVar1 + 0x54) = unaff_s8;
  *(undefined4 *)(lVar1 + 0x58) = uVar2;
  *(undefined4 *)(lVar1 + 0x5c) = param_2;
  *(undefined4 *)(lVar1 + 0x60) = uVar3;
  *(undefined8 *)(lVar1 + 0x4c) = uStack0000000000000040;
  *(undefined8 *)(lVar1 + 0x44) = in_stack_00000000;
  *(undefined4 *)(lVar1 + 100) = uVar4;
  *(ulong *)(lVar1 + 0x3c) = CONCAT44((int)uStack0000000000000030,(int)uStack0000000000000010);
  *(undefined8 *)(lVar1 + 0x34) = uStack0000000000000020;
  return;
}


