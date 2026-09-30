/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 07ca0888
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


void OVRPlugin_UnityOpenXR__OnSessionStateChange(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  puVar2 = PTR_DAT_09f4d0d8;
  if ((DAT_0a5269e7 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4d0d8);
    FUN_04447ba8(PTR_DAT_09f4d0a8);
                    /* try { // try from 07ca08cc to 07da0dcb has its CatchHandler @ 07ca08cc
                       catch() { ... } // from try @ 07ca08cc with catch @ 07ca08cc
                       catch() { ... } // from try @ 07ca0ed0 with catch @ 07ca08cc
                       catch() { ... } // from try @ 07ca0f1c with catch @ 07ca08cc
                       catch() { ... } // from try @ 07ca106c with catch @ 07ca08cc */
    DAT_0a5269e7 = 1;
  }
  puVar1 = PTR_DAT_09f4d0a8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  uVar9 = *(undefined4 *)(lVar3 + 0x54);
  uVar10 = *(undefined4 *)(lVar3 + 0x58);
  uVar11 = *(undefined4 *)(lVar3 + 0x5c);
  uVar12 = *(undefined4 *)(lVar3 + 0x84);
  uVar13 = *(undefined4 *)(lVar3 + 0x88);
  uVar14 = *(undefined4 *)(lVar3 + 0x8c);
  uVar15 = *(undefined8 *)(lVar3 + 0x6c);
  uVar16 = *(undefined4 *)(lVar3 + 0x74);
  uVar6 = uVar10;
  uVar7 = uVar11;
  uVar8 = uVar12;
  uVar5 = FUN_09516bac(uVar9,0);
  puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  *puVar4 = uVar9;
  puVar4[1] = uVar10;
  puVar4[2] = uVar11;
  puVar4[3] = uVar12;
  puVar4[4] = uVar13;
  puVar4[5] = uVar14;
  *(undefined8 *)(puVar4 + 6) = uVar15;
  puVar4[8] = uVar16;
  puVar4[9] = uVar5;
  puVar4[10] = uVar6;
  puVar4[0xb] = uVar7;
  puVar4[0xc] = uVar8;
  lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
  uVar9 = *(undefined4 *)(lVar3 + 0xc);
  uVar10 = *(undefined4 *)(lVar3 + 0x10);
  uVar11 = *(undefined4 *)(lVar3 + 0x14);
  uVar12 = *(undefined4 *)(lVar3 + 0x3c);
  uVar13 = *(undefined4 *)(lVar3 + 0x40);
  uVar14 = *(undefined4 *)(lVar3 + 0x44);
  uVar15 = *(undefined8 *)(lVar3 + 0x24);
  uVar16 = *(undefined4 *)(lVar3 + 0x2c);
  uVar6 = uVar10;
  uVar7 = uVar11;
  uVar8 = uVar12;
  uVar5 = FUN_09516bac(uVar9,0);
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  *(undefined4 *)(lVar3 + 0x34) = uVar9;
  *(undefined4 *)(lVar3 + 0x38) = uVar10;
  *(undefined4 *)(lVar3 + 0x3c) = uVar11;
  *(undefined4 *)(lVar3 + 0x40) = uVar12;
  *(undefined4 *)(lVar3 + 0x44) = uVar13;
  *(undefined4 *)(lVar3 + 0x48) = uVar14;
  *(undefined8 *)(lVar3 + 0x4c) = uVar15;
  *(undefined4 *)(lVar3 + 0x54) = uVar16;
  *(undefined4 *)(lVar3 + 0x58) = uVar5;
  *(undefined4 *)(lVar3 + 0x5c) = uVar6;
  *(undefined4 *)(lVar3 + 0x60) = uVar7;
  *(undefined4 *)(lVar3 + 100) = uVar8;
  return;
}


