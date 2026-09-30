/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 036beeb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryConstants_OVRManager___cctor
               (undefined4 *param_1,undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  
  uVar3 = *(undefined4 *)(param_4 + 0x18);
  uStack0000000000000000 = *(undefined8 *)(param_4 + 0x38);
  uStack0000000000000008 = *(undefined4 *)(param_4 + 0x40);
  uVar5 = *(undefined4 *)(param_4 + 0x54);
  uStack0000000000000010 = uVar5;
  uVar1 = FUN_036be514();
  uVar6 = *(undefined4 *)(param_4 + 0x24);
  uVar4 = *(undefined4 *)(param_4 + 0x28);
  uVar2 = *(undefined4 *)(param_4 + 0x20);
  uStack0000000000000000 = CONCAT44(uStack0000000000000000._4_4_,uVar5);
  uVar5 = FUN_04067050(*(undefined4 *)(param_4 + 0x1c),0);
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  param_1[6] = uVar4;
  return;
}


