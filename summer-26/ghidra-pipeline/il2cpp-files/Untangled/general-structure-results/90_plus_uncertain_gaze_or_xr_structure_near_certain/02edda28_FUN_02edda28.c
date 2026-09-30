/*
FUNCTION_NAME: FUN_02edda28
ENTRY_POINT: 02edda28
PROGRAM: Untangled-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long * FUN_02edda28(long *param_1,ulong param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  undefined4 local_90;
  undefined4 uStack_8c;
  long *local_88;
  char local_80;
  long *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *plStack_68;
  long local_60;
  char local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  FUN_02ea5460(auStack_48,Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__);
  local_70 = 0;
  plStack_68 = param_1;
  uVar7 = FUN_02edd938(&DAT_071d83f0,&local_70,&local_50);
  if ((uVar7 & 1) != 0) goto LAB_02eddddc;
  local_70 = 0;
  plStack_68 = param_1;
  uVar7 = FUN_02edd938(&DAT_071d8460,&local_70,&local_50);
  if ((uVar7 & 1) != 0) goto LAB_02eddddc;
  if ((param_2 & 1) != 0) {
    param_1 = (long *)FUN_02f22d10(*param_1,param_1[1],param_1[2]);
  }
  lVar11 = *param_1;
  lVar13 = *(long *)(lVar11 + 0x20);
  if (param_1[1] != 0) {
    uVar8 = FUN_02ec88b8(lVar13);
    lVar13 = FUN_02ebc87c(uVar8,1);
    if (lVar13 == 0) {
      local_50 = (long *)0x0;
      goto LAB_02eddddc;
    }
  }
  plVar1 = param_1 + 1;
  lVar9 = FUN_02ec8530(*(undefined8 *)(lVar11 + 0x30),*(undefined1 *)(lVar11 + 0x52),plVar1,1);
  FUN_02f22f9c(&local_70,lVar11,plVar1);
  if (local_58 == '\0') {
LAB_02eddb5c:
    bVar12 = 0;
    uVar8 = 0x58;
  }
  else {
    lVar14 = *param_1;
    uVar7 = FUN_02ec093c(*(undefined8 *)(lVar14 + 0x28));
    if ((uVar7 & 1) == 0) {
      bVar12 = *(byte *)(lVar14 + 0x52);
      if (bVar12 != 0) {
        uVar7 = 0;
        do {
          if (*(int *)(*(long *)(lVar9 + uVar7 * 8) + 8) < 0) {
            uVar10 = FUN_02ec093c(*(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar7 * 8));
            if ((uVar10 & 1) != 0) goto LAB_02eddb18;
            bVar12 = *(byte *)(lVar14 + 0x52);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < bVar12);
      }
      goto LAB_02eddb5c;
    }
LAB_02eddb18:
    bVar12 = 8;
    uVar8 = 0x70;
  }
  local_78 = (long *)FUN_02ea7c94(1,uVar8);
  local_90 = 0;
  local_88 = param_1;
  FUN_02edde48(&DAT_071d8460,&local_90,&local_78);
  local_78[4] = lVar13;
  *(undefined2 *)((long)local_78 + 0x4c) = *(undefined2 *)(lVar11 + 0x4c);
  *(undefined2 *)((long)local_78 + 0x4e) = *(undefined2 *)(lVar11 + 0x4e);
  *(undefined2 *)(local_78 + 10) = *(undefined2 *)(lVar11 + 0x50);
  local_78[3] = *(long *)(lVar11 + 0x18);
  *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) & 0xfc | 2;
  *(undefined4 *)(local_78 + 9) = *(undefined4 *)(lVar11 + 0x48);
  lVar14 = FUN_02ec85a4(*(undefined8 *)(lVar11 + 0x28),plVar1,1);
  local_78[5] = lVar14;
  uVar3 = *(undefined1 *)(lVar11 + 0x52);
  local_78[6] = lVar9;
  local_78[8] = (long)param_1;
  *(undefined1 *)((long)local_78 + 0x52) = uVar3;
  if (param_1[2] == 0) {
    if ((*(byte *)(lVar11 + 0x53) & 1) != 0) {
      *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) | 1;
    }
    if (*(long *)(lVar13 + 0x60) == 0) {
      local_78[8] = *(long *)(lVar11 + 0x40);
    }
    lVar11 = *(long *)(lVar11 + 0x38);
LAB_02eddc78:
    local_78[7] = lVar11;
  }
  else if ((*(long *)(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__ +
                     0x2f0) == 0) && (uVar7 = FUN_02ec8f20(), (uVar7 & 1) == 0)) {
    lVar11 = FUN_02ec8cc4(**(undefined8 **)(*param_1 + 0x20),*(undefined4 *)(*param_1 + 0x48),plVar1
                          ,auStack_48);
    goto LAB_02eddc78;
  }
  local_78[1] = (long)plStack_68;
  *local_78 = CONCAT44(uStack_6c,local_70);
  if (CONCAT44(uStack_6c,local_70) == 0) {
    lVar11 = FUN_02f15108();
    local_78[2] = lVar11;
    FUN_02f207b4(&local_90,local_78);
    *local_78 = CONCAT44(uStack_8c,local_90);
    local_78[1] = (long)local_88;
  }
  else {
    local_78[2] = local_60;
  }
  puVar6 = Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__;
  *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) & 0xf7 | bVar12;
  plVar1 = (long *)(puVar6 + 0x30);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar7 = FUN_02eb37c0(local_78);
  if ((uVar7 & 1) != 0) {
    lVar11 = *local_78;
    lVar9 = local_78[1];
    pcVar2 = FUN_02eddef8;
    if (lVar11 != lVar9) {
      pcVar2 = FUN_02edded8;
    }
    local_78[0xb] = lVar9;
    local_78[0xc] = lVar11;
    local_78[0xd] = local_78[2];
    local_78[2] = (long)pcVar2;
    FUN_02f207b4(&local_90);
    if (local_80 == '\0') {
      *local_78 = (long)FUN_02eddf00;
      local_78[1] = (long)FUN_02eddf00;
      if (lVar11 != lVar9) {
        *local_78 = (long)FUN_02eddf18;
      }
    }
    else {
      *local_78 = CONCAT44(uStack_8c,local_90);
      local_78[1] = (long)local_88;
    }
  }
  uVar7 = FUN_02eb33f4(local_78);
  if ((uVar7 & 1) != 0) {
    FUN_02f20018(lVar13,auStack_48);
  }
  local_90 = 0;
  local_88 = param_1;
  FUN_02edde48(&DAT_071d83f0,&local_90,&local_78);
  local_90 = 0;
  local_88 = param_1;
  FUN_02eddf30(&DAT_071d8460,&local_90);
  local_50 = local_78;
LAB_02eddddc:
  FUN_02ea552c(auStack_48);
  return local_50;
}


