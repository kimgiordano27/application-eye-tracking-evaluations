/*
FUNCTION_NAME: ES3Reader$$Create
ENTRY_POINT: 02ebc8ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long ES3Reader__Create(undefined8 param_1,ulong param_2)

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
  undefined8 *unaff_x21;
  long *plVar16;
  
  puVar11 = (undefined8 *)FUN_02f23820();
  if (puVar11 == (undefined8 *)0x0) {
    if ((param_2 & 1) != 0) {
      uVar13 = FUN_02ea6f14();
                    /* WARNING: Subroutine does not return */
      FUN_02ea5a38(uVar13,0);
    }
    lVar15 = 0;
  }
  else {
    FUN_02ea5460(&stack0x00000008,
                 Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
    plVar16 = unaff_x21 + 3;
    lVar15 = *plVar16;
    if (lVar15 == 0) {
      puVar12 = (undefined8 *)
                FUN_02ea7c94(1,(ulong)*(ushort *)((long)puVar11 + 0x12a) * 0x10 + 0x138);
      puVar12[0xf] = puVar12;
      uVar13 = puVar11[2];
      puVar12[3] = puVar11[3];
      puVar12[2] = uVar13;
      *puVar12 = *puVar11;
      uVar4 = *(undefined4 *)(puVar11 + 0x23);
      puVar12[0xc] = unaff_x21;
      *(undefined4 *)(puVar12 + 0x23) = uVar4;
      lVar15 = FUN_02f23820(*unaff_x21);
      lVar14 = puVar12[0xc];
      if (*(long *)(lVar15 + 0x58) != 0) {
        uVar13 = FUN_02ec85a4(*(long *)(lVar15 + 0x58) + 0x20,lVar14 + 8,0);
        uVar13 = FUN_02f1e62c(uVar13,1);
        puVar12[0xb] = uVar13;
      }
      if (*(long *)(lVar15 + 0x50) != 0) {
        uVar13 = FUN_02ec85a4(*(long *)(lVar15 + 0x50) + 0x20,lVar14 + 8,0);
        uVar13 = FUN_02f1e62c(uVar13,1);
        puVar12[10] = uVar13;
      }
      uVar5 = *(uint *)(puVar12 + 5);
      uVar3 = uVar5 & 0xffff | 0x150000;
      *(uint *)(puVar12 + 5) = uVar5 & 0xff000000 | uVar3;
      puVar12[4] = unaff_x21;
      puVar12[6] = unaff_x21;
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
      uVar13 = FUN_02f23524();
      puVar12[0xe] = uVar13;
      lVar15 = FUN_02f23820(*(undefined8 *)puVar12[0xc]);
      if (lVar15 == *(long *)(
                             Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__
                             + 0x1a8)) {
        uVar13 = FUN_02f1e62c(**(undefined8 **)(*(long *)(puVar12[0xc] + 8) + 8),1);
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
    FUN_02ea552c(&stack0x00000008);
  }
  return lVar15;
}


