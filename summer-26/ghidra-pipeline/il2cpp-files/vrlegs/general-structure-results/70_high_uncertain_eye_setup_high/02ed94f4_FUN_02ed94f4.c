/*
FUNCTION_NAME: FUN_02ed94f4
ENTRY_POINT: 02ed94f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ed9a30) */
/* WARNING: Removing unreachable block (ram,0x02ed9a20) */

void FUN_02ed94f4(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 local_80;
  int *piStack_78;
  int **local_70;
  char local_64 [4];
  undefined1 local_60 [16];
  int local_4c;
  int *local_48;
  
  local_48 = param_1;
  if ((DAT_0412a791 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb9c0);
    FUN_01ab69ac(PTR_DAT_03cdb9d8);
    FUN_01ab69ac(PTR_DAT_03d20980);
    FUN_01ab69ac(PTR_DAT_03cc9270);
    DAT_0412a791 = 1;
  }
  puVar1 = PTR_DAT_03cc9270;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_64[0] = '\0';
  local_4c = *param_1;
  lVar7 = *(long *)(param_1 + 8);
  if (local_4c == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_4c = -1;
    *param_1 = -1;
LAB_02ed960c:
    FUN_02679308(local_60,0);
    auVar10 = local_60;
  }
  else {
    auVar10 = ZEXT816(0);
    if (local_4c == 1) goto LAB_02ed96c0;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar10 = ZEXT816(0);
    if (*(char *)(lVar7 + 0x5d) == '\0') {
      lVar2 = FUN_02ed3bfc(lVar7,param_1[10],*(undefined8 *)(param_1 + 0xc),
                           *(undefined8 *)(param_1 + 0xe));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_60 = FUN_027e9a10(lVar2,0,0);
      uVar3 = FUN_026792ec(local_60,0);
      if ((uVar3 & 1) == 0) {
        local_4c = 0;
        *local_48 = 0;
        *(undefined1 (*) [16])(local_48 + 0x12) = local_60;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_48 + 0x12,0);
        piVar6 = local_48;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f2e2b8(piVar6 + 2,local_60,local_48,*(undefined8 *)PTR_DAT_03d20980);
        return;
      }
      goto LAB_02ed960c;
    }
  }
  local_60 = auVar10;
  if (*(int *)(*(long *)PTR_DAT_03cdb9d8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar8 = *(long *)PTR_DAT_03cdb9c0;
  lVar2 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  plVar4 = (long *)**(long **)(lVar2 + 0xb8);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,0x8b,*(undefined8 *)(*plVar4 + 0x180));
  *(undefined8 *)(local_48 + 0x10) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  auVar10 = local_60;
LAB_02ed96c0:
  lVar2 = 0;
  piStack_78 = &local_4c;
  local_70 = &local_48;
  local_80 = 0;
  local_60 = auVar10;
  if (local_4c != 1) goto LAB_02ed9830;
  lVar2 = 0;
  local_60 = *(undefined1 (*) [16])(local_48 + 0x12);
  local_48[0x12] = 0;
  local_48[0x13] = 0;
  local_48[0x14] = 0;
  local_48[0x15] = 0;
  local_4c = -1;
  *local_48 = -1;
  do {
    FUN_02679308(local_60,0);
LAB_02ed9830:
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(char *)(lVar7 + 0x5e) != '\0') {
LAB_02ed9938:
      iVar9 = 0xe;
      goto LAB_02ed9964;
    }
    uVar5 = *(undefined8 *)(lVar7 + 0x48);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar5,local_64,0);
    if (*(char *)(lVar7 + 0x5e) == '\0') {
      plVar4 = (long *)(lVar7 + 0xa8);
      lVar2 = FUN_02ed5e18(lVar7,*plVar4,*(undefined8 *)(local_48 + 0x10),
                           *(undefined8 *)(local_48 + 0xe));
      *plVar4 = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar2);
      iVar9 = 0xc;
    }
    else {
      iVar9 = 0xb;
    }
    if ((local_4c < 0) && (local_64[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    if ((iVar9 != 0) && (iVar9 != 0xc)) {
      if (iVar9 == 0xb) goto LAB_02ed9938;
      goto LAB_02ed9964;
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar10 = FUN_027e9a10(lVar2,0,0);
    local_60 = auVar10;
    uVar3 = FUN_026792ec(local_60,0);
  } while ((uVar3 & 1) != 0);
  local_4c = 1;
  *local_48 = 1;
  *(undefined1 (*) [16])(local_48 + 0x12) = local_60;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_48 + 0x12,0);
  piVar6 = local_48;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_01f2e2b8(piVar6 + 2,local_60,local_48,*(undefined8 *)PTR_DAT_03d20980);
  iVar9 = 6;
LAB_02ed9964:
  FUN_019a12e8(&local_80);
  if ((iVar9 == 0xe) || (iVar9 == 0)) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = *(undefined8 *)(lVar7 + 0x30);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar5,local_64,0);
    FUN_02ed2854(lVar7);
    if (*(int *)(lVar7 + 0x58) < 5) {
      *(undefined4 *)(lVar7 + 0x58) = 5;
    }
    if ((local_4c < 0) && (local_64[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    *local_48 = -2;
    piVar6 = local_48 + 0x10;
    piVar6[0] = 0;
    piVar6[1] = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar6,0);
    piVar6 = local_48 + 2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02679adc(piVar6,0);
  }
  return;
}


