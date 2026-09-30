/*
FUNCTION_NAME: FUN_032f1b14
ENTRY_POINT: 032f1b14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


long * FUN_032f1b14(long *param_1,ulong param_2)

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
  long lVar12;
  byte bVar13;
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
  
  FUN_03296828(auStack_48,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
  local_70 = 0;
  plStack_68 = param_1;
  uVar7 = FUN_032f1a24(&DAT_076ec220,&local_70,&local_50);
  if ((uVar7 & 1) != 0) goto LAB_032f1ec8;
  local_70 = 0;
  plStack_68 = param_1;
  uVar7 = FUN_032f1a24(&DAT_076ec290,&local_70,&local_50);
  if ((uVar7 & 1) != 0) goto LAB_032f1ec8;
  if ((param_2 & 1) != 0) {
    param_1 = (long *)FUN_032e1128(*param_1,param_1[1],param_1[2]);
  }
  lVar11 = *param_1;
  lVar12 = *(long *)(lVar11 + 0x20);
  if (param_1[1] != 0) {
    uVar8 = FUN_032d9168(lVar12);
    lVar12 = FUN_0331b764(uVar8,1);
    if (lVar12 == 0) {
      local_50 = (long *)0x0;
      goto LAB_032f1ec8;
    }
  }
  plVar1 = param_1 + 1;
  lVar9 = FUN_032d8de0(*(undefined8 *)(lVar11 + 0x30),*(undefined1 *)(lVar11 + 0x52),plVar1,1);
  FUN_032e13b4(&local_70,lVar11,plVar1);
  if (local_58 == '\0') {
LAB_032f1c48:
    bVar13 = 0;
    uVar8 = 0x58;
  }
  else {
    lVar14 = *param_1;
    uVar7 = ThrowCollider__RestartDeleay(*(undefined8 *)(lVar14 + 0x28));
    if ((uVar7 & 1) == 0) {
      if (*(char *)(lVar14 + 0x52) != '\0') {
        uVar7 = 0;
        do {
          uVar10 = FUN_0331f9a0(*(undefined8 *)(lVar9 + uVar7 * 8));
          if (((uVar10 & 1) != 0) &&
             (uVar10 = ThrowCollider__RestartDeleay
                                 (*(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar7 * 8)),
             (uVar10 & 1) != 0)) goto LAB_032f1c04;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(byte *)(lVar14 + 0x52));
      }
      goto LAB_032f1c48;
    }
LAB_032f1c04:
    bVar13 = 8;
    uVar8 = 0x70;
  }
  local_78 = (long *)FUN_032fb70c(1,uVar8);
  local_90 = 0;
  local_88 = param_1;
  FUN_032f1f34(&DAT_076ec290,&local_90,&local_78);
  local_78[4] = lVar12;
  *(undefined2 *)((long)local_78 + 0x4c) = *(undefined2 *)(lVar11 + 0x4c);
  *(undefined2 *)((long)local_78 + 0x4e) = *(undefined2 *)(lVar11 + 0x4e);
  *(undefined2 *)(local_78 + 10) = *(undefined2 *)(lVar11 + 0x50);
  local_78[3] = *(long *)(lVar11 + 0x18);
  *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) & 0xfc | 2;
  *(undefined4 *)(local_78 + 9) = *(undefined4 *)(lVar11 + 0x48);
  lVar14 = FUN_032d8e54(*(undefined8 *)(lVar11 + 0x28),plVar1,1);
  local_78[5] = lVar14;
  uVar3 = *(undefined1 *)(lVar11 + 0x52);
  local_78[6] = lVar9;
  local_78[8] = (long)param_1;
  *(undefined1 *)((long)local_78 + 0x52) = uVar3;
  if (param_1[2] == 0) {
    if ((*(byte *)(lVar11 + 0x53) & 1) != 0) {
      *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) | 1;
    }
    if (*(long *)(lVar12 + 0x60) == 0) {
      local_78[8] = *(long *)(lVar11 + 0x40);
    }
    lVar11 = *(long *)(lVar11 + 0x38);
LAB_032f1d64:
    local_78[7] = lVar11;
  }
  else if ((*(long *)(Method_OVRSpaceQuery_ForComponentThrow__ + 0x2f0) == 0) &&
          (uVar7 = FUN_032d97d0(), (uVar7 & 1) == 0)) {
    lVar11 = FUN_032d9574(**(undefined8 **)(*param_1 + 0x20),*(undefined4 *)(*param_1 + 0x48),plVar1
                          ,auStack_48);
    goto LAB_032f1d64;
  }
  local_78[1] = (long)plStack_68;
  *local_78 = CONCAT44(uStack_6c,local_70);
  if (CONCAT44(uStack_6c,local_70) == 0) {
    lVar11 = FUN_032cfd78();
    local_78[2] = lVar11;
    FUN_032debcc(&local_90,local_78);
    *local_78 = CONCAT44(uStack_8c,local_90);
    local_78[1] = (long)local_88;
  }
  else {
    local_78[2] = local_60;
  }
  puVar6 = Method_OVRSpatialAnchor_OnSpaceSaveComplete__;
  *(byte *)((long)local_78 + 0x53) = *(byte *)((long)local_78 + 0x53) & 0xf7 | bVar13;
  plVar1 = (long *)(puVar6 + 0x30);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar7 = FUN_0330472c(local_78);
  if ((uVar7 & 1) != 0) {
    lVar11 = *local_78;
    lVar9 = local_78[1];
    pcVar2 = FUN_032f1fe4;
    if (lVar11 != lVar9) {
      pcVar2 = FUN_032f1fc4;
    }
    local_78[0xb] = lVar9;
    local_78[0xc] = lVar11;
    local_78[0xd] = local_78[2];
    local_78[2] = (long)pcVar2;
    FUN_032debcc(&local_90);
    if (local_80 == '\0') {
      *local_78 = (long)FUN_032f1fec;
      local_78[1] = (long)FUN_032f1fec;
      if (lVar11 != lVar9) {
        *local_78 = (long)FUN_032f2004;
      }
    }
    else {
      *local_78 = CONCAT44(uStack_8c,local_90);
      local_78[1] = (long)local_88;
    }
  }
  uVar7 = FUN_03304380(local_78);
  if ((uVar7 & 1) != 0) {
    FUN_032de43c(lVar12,auStack_48);
  }
  local_90 = 0;
  local_88 = param_1;
  FUN_032f1f34(&DAT_076ec220,&local_90,&local_78);
  local_90 = 0;
  local_88 = param_1;
  FUN_032f201c(&DAT_076ec290,&local_90);
  local_50 = local_78;
LAB_032f1ec8:
  FUN_03296ccc(auStack_48);
  return local_50;
}


