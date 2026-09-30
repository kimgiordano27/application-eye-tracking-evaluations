/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$.cctor
ENTRY_POINT: 056a6ef8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_97_0___cctor(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xbe0);
  if ((*(byte *)(unaff_x21 + 0xa4e) & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_List<ProbeReferenceVolume_CellStreamingRequest>_TypeInfo
                );
    *(undefined1 *)(unaff_x21 + 0xa4e) = 1;
  }
  puVar3 = System_Collections_Generic_Dictionary<string,_AppContext_SwitchValueState>_TypeInfo;
  lVar4 = FUN_036ec8d4(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),*puVar8);
  if (*(int *)(unaff_x19 + 4) != 0) {
    lVar5 = 0;
    iVar7 = 1;
    do {
      puVar8 = (undefined8 *)(*(long *)(unaff_x19 + 8) + lVar5 * 0x28);
      puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x28);
      uVar12 = puVar8[1];
      uVar11 = *puVar8;
      uVar10 = puVar8[3];
      uVar9 = puVar8[2];
      puVar1[4] = puVar8[4];
      puVar1[1] = uVar12;
      *puVar1 = uVar11;
      puVar1[3] = uVar10;
      puVar1[2] = uVar9;
      lVar5 = (long)iVar7;
      iVar7 = iVar7 + 1;
    } while (lVar5 < (long)(ulong)*(uint *)(unaff_x19 + 4));
  }
  lVar4 = FUN_036ec8cc(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)puVar3);
  uVar2 = *(uint *)(unaff_x19 + 0x18);
  if (uVar2 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    lVar6 = 0;
    iVar7 = 1;
    do {
      *(undefined4 *)(lVar4 + lVar6 * 4) = *(undefined4 *)(lVar5 + lVar6 * 4);
      lVar6 = (long)iVar7;
      iVar7 = iVar7 + 1;
    } while (lVar6 < (long)(ulong)uVar2);
  }
  return;
}


