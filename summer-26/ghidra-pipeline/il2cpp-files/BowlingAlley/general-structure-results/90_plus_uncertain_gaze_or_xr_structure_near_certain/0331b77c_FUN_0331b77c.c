/*
FUNCTION_NAME: FUN_0331b77c
ENTRY_POINT: 0331b77c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long FUN_0331b77c(undefined8 *param_1,ulong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 auStack_38 [8];
  
  puVar11 = (undefined8 *)FUN_032e1be4(*param_1);
  if (puVar11 == (undefined8 *)0x0) {
    if ((param_2 & 1) != 0) {
      uVar13 = FUN_032fa9b4();
                    /* WARNING: Subroutine does not return */
      FUN_032f94d8(uVar13,0);
    }
    lVar15 = 0;
  }
  else {
    FUN_03296828(auStack_38,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    plVar16 = param_1 + 3;
    lVar15 = *plVar16;
    if (lVar15 == 0) {
      puVar12 = (undefined8 *)
                FUN_032fb70c(1,(ulong)*(ushort *)((long)puVar11 + 0x12a) * 0x10 + 0x138);
      puVar12[0xf] = puVar12;
      uVar13 = puVar11[2];
      puVar12[3] = puVar11[3];
      puVar12[2] = uVar13;
      *puVar12 = *puVar11;
      uVar4 = *(undefined4 *)(puVar11 + 0x23);
      puVar12[0xc] = param_1;
      *(undefined4 *)(puVar12 + 0x23) = uVar4;
      lVar15 = FUN_032e1be4(*param_1);
      lVar14 = puVar12[0xc];
      if (*(long *)(lVar15 + 0x58) != 0) {
        uVar13 = FUN_032d8e54(*(long *)(lVar15 + 0x58) + 0x20,lVar14 + 8,0);
        uVar13 = FUN_032dca64(uVar13,1);
        puVar12[0xb] = uVar13;
      }
      if (*(long *)(lVar15 + 0x50) != 0) {
        uVar13 = FUN_032d8e54(*(long *)(lVar15 + 0x50) + 0x20,lVar14 + 8,0);
        uVar13 = FUN_032dca64(uVar13,1);
        puVar12[10] = uVar13;
      }
      uVar5 = *(uint *)(puVar12 + 5);
      uVar3 = uVar5 & 0xffff | 0x150000;
      *(uint *)(puVar12 + 5) = uVar5 & 0xff000000 | uVar3;
      puVar12[4] = param_1;
      puVar12[6] = param_1;
      *(uint *)(puVar12 + 7) = *(uint *)(puVar12 + 7) & 0xff01ffff | 0x20150000;
      puVar1 = (ushort *)((long)puVar11 + 0x135);
      puVar2 = (ushort *)((long)puVar12 + 0x135);
      *(uint *)(puVar12 + 5) = *(uint *)(lVar15 + 0x28) & 0x80000000 | uVar5 & 0x7f000000 | uVar3;
      *(undefined2 *)((long)puVar12 + 300) = *(undefined2 *)((long)puVar11 + 300);
      puVar12[0x24] = puVar11[0x24];
      uVar6 = *puVar2;
      uVar8 = uVar6 & 3 | (*puVar1 >> 2 & 1) << 2;
      *puVar2 = uVar6 & 0xfff8 | uVar8;
      puVar12[8] = puVar12;
      puVar12[9] = puVar12;
      uVar7 = (*puVar1 >> 10 & 1) << 10;
      *puVar2 = uVar6 & 0xf800 | uVar6 & 0x3f8 | uVar8 | uVar7;
      *(uint *)(puVar12 + 0x1c) = (*puVar1 >> 10 ^ 0xffffffff) & 1;
      *puVar2 = *puVar1 & 0x200 | uVar6 & 0xf800 | uVar6 & 0x1f8 | uVar8 | uVar7;
      *(undefined4 *)((long)puVar12 + 0x114) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x21) = 0xffffffff;
      *(undefined4 *)((long)puVar12 + 0x11c) = *(undefined4 *)((long)puVar11 + 0x11c);
      uVar13 = FUN_032e193c();
      puVar12[0xe] = uVar13;
      lVar15 = FUN_032e1be4(*(undefined8 *)puVar12[0xc]);
      if (lVar15 == *(long *)(Method_OVRSpaceQuery_ForComponentThrow__ + 0x1a8)) {
        uVar13 = FUN_032dca64(**(undefined8 **)(*(long *)(puVar12[0xc] + 8) + 8),1);
        puVar12[8] = uVar13;
        puVar12[9] = uVar13;
        uVar8 = *puVar2;
        uVar7 = uVar8 | 8;
        *puVar2 = uVar7;
        uVar8 = uVar8 & 4;
      }
      else {
        uVar7 = *puVar2;
        uVar8 = uVar7 >> 2 & 1;
      }
      if (uVar8 != 0) {
        uVar13 = puVar11[8];
        puVar12[8] = uVar13;
        puVar12[9] = uVar13;
      }
      *puVar2 = uVar7 & 0xefff | *puVar1 & 0x1000;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *plVar16 = (long)puVar12;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      lVar15 = *plVar16;
    }
    FUN_03296ccc(auStack_38);
  }
  return lVar15;
}


