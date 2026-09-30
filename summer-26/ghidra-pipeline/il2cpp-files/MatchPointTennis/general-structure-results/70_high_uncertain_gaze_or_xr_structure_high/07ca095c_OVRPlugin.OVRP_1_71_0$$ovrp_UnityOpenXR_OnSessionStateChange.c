/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 07ca095c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(long param_1)

{
  long lVar1;
  long *unaff_x19;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x3c);
  uVar10 = *(undefined4 *)(param_1 + 0x40);
  uVar11 = *(undefined4 *)(param_1 + 0x44);
  uVar12 = *(undefined8 *)(param_1 + 0x24);
  uVar13 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = uVar7;
  uVar4 = uVar8;
  uVar5 = uVar9;
  uVar2 = FUN_09516bac(uVar6);
  lVar1 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined4 *)(lVar1 + 0x34) = uVar6;
  *(undefined4 *)(lVar1 + 0x38) = uVar7;
  *(undefined4 *)(lVar1 + 0x3c) = uVar8;
  *(undefined4 *)(lVar1 + 0x40) = uVar9;
  *(undefined4 *)(lVar1 + 0x44) = uVar10;
  *(undefined4 *)(lVar1 + 0x48) = uVar11;
  *(undefined8 *)(lVar1 + 0x4c) = uVar12;
  *(undefined4 *)(lVar1 + 0x54) = uVar13;
  *(undefined4 *)(lVar1 + 0x58) = uVar2;
  *(undefined4 *)(lVar1 + 0x5c) = uVar3;
  *(undefined4 *)(lVar1 + 0x60) = uVar4;
  *(undefined4 *)(lVar1 + 100) = uVar5;
  return;
}


