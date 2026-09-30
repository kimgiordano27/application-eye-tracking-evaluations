/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 04f8eb64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_02b3c81c(System_Runtime_Remoting_IEnvoyInfo_var);
  FUN_02b3c81c(System_Collections_Generic_IDictionary<TKey,_TValue>_var);
  *(undefined1 *)(unaff_x19 + 0xda7) = 1;
  puVar1 = System_Collections_Generic_IDictionary<TKey,_TValue>_var;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *unaff_x20;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x54);
  uVar11 = *(undefined8 *)(lVar2 + 0x88);
  uVar12 = *(undefined4 *)(lVar2 + 0x5c);
  uVar8 = *(undefined8 *)(lVar2 + 0x6c);
  uVar9 = *(undefined4 *)(lVar2 + 0x84);
  uVar13 = *(undefined4 *)(lVar2 + 0x74);
  uVar6 = (undefined4)((ulong)uVar5 >> 0x20);
  uVar10 = uVar9;
  uVar7 = uVar12;
  uVar4 = FUN_05c7bac0(0);
  puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(puVar3 + 4) = uVar13;
  *(undefined4 *)((long)puVar3 + 0x24) = uVar4;
  *(undefined4 *)(puVar3 + 5) = uVar6;
  *(undefined4 *)((long)puVar3 + 0x2c) = uVar7;
  *(undefined4 *)(puVar3 + 6) = uVar10;
  puVar3[1] = CONCAT44(uVar9,uVar12);
  *puVar3 = uVar5;
  puVar3[3] = uVar8;
  puVar3[2] = uVar11;
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0xc);
  uVar8 = *(undefined8 *)(lVar2 + 0x40);
  uVar9 = *(undefined4 *)(lVar2 + 0x14);
  uVar12 = *(undefined4 *)(lVar2 + 0x3c);
  uVar11 = *(undefined8 *)(lVar2 + 0x24);
  uVar13 = *(undefined4 *)(lVar2 + 0x2c);
  uVar6 = (undefined4)((ulong)uVar5 >> 0x20);
  uVar10 = uVar12;
  uVar7 = uVar9;
  uVar4 = FUN_05c7bac0(0);
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(lVar2 + 0x54) = uVar13;
  *(undefined4 *)(lVar2 + 0x58) = uVar4;
  *(undefined4 *)(lVar2 + 0x5c) = uVar6;
  *(undefined4 *)(lVar2 + 0x60) = uVar7;
  *(undefined8 *)(lVar2 + 0x4c) = uVar11;
  *(undefined8 *)(lVar2 + 0x44) = uVar8;
  *(undefined4 *)(lVar2 + 100) = uVar10;
  *(ulong *)(lVar2 + 0x3c) = CONCAT44(uVar12,uVar9);
  *(undefined8 *)(lVar2 + 0x34) = uVar5;
  return;
}


