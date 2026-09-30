/*
FUNCTION_NAME: FUN_02c8d5ec
ENTRY_POINT: 02c8d5ec
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_02c8d5ec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_4b0 [72];
  undefined1 auStack_468 [176];
  undefined1 auStack_3b8 [72];
  undefined1 auStack_370 [8];
  undefined1 auStack_368 [20];
  int iStack_354;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [168];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1c0 [176];
  byte abStack_110 [4];
  int iStack_10c;
  undefined4 uStack_108;
  
  if ((bRam0000000007235ec1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06de12b8);
    thunk_FUN_0159f088(PTR_DAT_06e4caf8);
    thunk_FUN_0159f088(PTR_DAT_06e48008);
    thunk_FUN_0159f088(PTR_DAT_06e66688);
    bRam0000000007235ec1 = 1;
  }
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  memset(auStack_2c0,0,0xb0);
  memset(auStack_370,0,0xb0);
  iVar5 = FUN_0322c7a8(0);
  puVar4 = PTR_DAT_06e66688;
  puVar3 = PTR_DAT_06e48008;
  if (iVar5 < 1) {
    return 0;
  }
  iVar5 = FUN_0322c7a8(0);
  puVar2 = PTR_DAT_06de12b8;
  if (0 < iVar5) {
    iVar10 = 0;
    do {
      FUN_0322c388(abStack_110,iVar10,0);
      memcpy(&uStack_210,abStack_110,0x44);
      lVar8 = *(long *)(param_1 + 0x368);
      if (lVar8 == 0) goto LAB_02c8da58;
      iVar11 = 0;
      while (iVar11 < *(int *)(lVar8 + 0x18)) {
        iVar6 = FUN_0322bb64(&uStack_210,0);
        if (*(long *)(param_1 + 0x368) == 0) goto LAB_02c8da58;
        FUN_0326b504(abStack_110,*(long *)(param_1 + 0x368),iVar11,*(undefined8 *)puVar3);
        if (iVar6 == iStack_10c) {
          if (iVar11 < 0) goto LAB_02c8d754;
          goto LAB_02c8d904;
        }
        lVar8 = *(long *)(param_1 + 0x368);
        iVar11 = iVar11 + 1;
        if (lVar8 == 0) goto LAB_02c8da58;
      }
      iVar11 = -1;
LAB_02c8d754:
      lVar8 = *(long *)(param_1 + 0x368);
      if (lVar8 == 0) goto LAB_02c8da58;
      iVar6 = 0;
      while (iVar6 < *(int *)(lVar8 + 0x18)) {
        FUN_0326b504(abStack_110,lVar8,iVar6,*(undefined8 *)puVar3);
        if ((abStack_110[0] & 1) == 0) {
          if (*(long *)(param_1 + 0x368) == 0) goto LAB_02c8da58;
          FUN_0326b504(abStack_110,*(long *)(param_1 + 0x368),iVar6,*(undefined8 *)puVar3);
          uVar7 = uStack_108;
          lVar8 = *(long *)(param_1 + 0x368);
          memcpy(auStack_3b8,&uStack_210,0x44);
          memset(auStack_1c0,0,0xb0);
          FUN_02c8e31c(auStack_1c0,auStack_3b8,uVar7);
          if (lVar8 == 0) goto LAB_02c8da58;
          uVar12 = *(undefined8 *)puVar4;
          memcpy(abStack_110,auStack_1c0,0xb0);
          FUN_0326b568(lVar8,iVar6,abStack_110,uVar12);
          iVar11 = iVar6;
          break;
        }
        lVar8 = *(long *)(param_1 + 0x368);
        iVar6 = iVar6 + 1;
        if (lVar8 == 0) goto LAB_02c8da58;
      }
      if (iVar11 < 0) {
        lVar8 = *(long *)(param_1 + 0x368);
        if (lVar8 == 0) goto LAB_02c8da58;
        iVar11 = *(int *)(lVar8 + 0x18);
        memcpy(auStack_4b0,&uStack_210,0x44);
        iVar6 = *(int *)(param_1 + 400);
        *(int *)(param_1 + 400) = iVar6 + 1;
        memset(auStack_468,0,0xb0);
        FUN_02c8e31c(auStack_468,auStack_4b0,iVar6);
        lVar13 = *(long *)puVar2;
        memcpy(auStack_1c0,auStack_468,0xb0);
        lVar9 = *(long *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_02c8da58;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0xb0;
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar9 + 0x20),auStack_1c0,0xb0);
          thunk_FUN_01656ef8(lVar9 + 0x48,0);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
          pcVar14 = *(code **)(*(long *)(lVar9 + 0x58) + 8);
          memcpy(abStack_110,auStack_1c0,0xb0);
          (*pcVar14)(lVar8,abStack_110,*(undefined8 *)(lVar9 + 0x58));
        }
      }
LAB_02c8d904:
      if (*(long *)(param_1 + 0x368) == 0) goto LAB_02c8da58;
      FUN_0326b504(abStack_110,*(long *)(param_1 + 0x368),iVar11,*(undefined8 *)puVar3);
      memcpy(auStack_2c0,abStack_110,0xb0);
      uVar7 = OVRPlugin__StartBodyTracking2(&uStack_210,0);
      FUN_02e4ab8c(auStack_2b8,uVar7,0);
      FUN_0322bb6c(&uStack_210,0);
      FUN_02e4abfc(auStack_2b8,0);
      lVar8 = *(long *)(param_1 + 0x368);
      memcpy(auStack_1c0,auStack_2c0,0xb0);
      if (lVar8 == 0) goto LAB_02c8da58;
      uVar12 = *(undefined8 *)puVar4;
      memcpy(abStack_110,auStack_1c0,0xb0);
      FUN_0326b568(lVar8,iVar11,abStack_110,uVar12);
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar5);
  }
  lVar8 = *(long *)(param_1 + 0x368);
  if (lVar8 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar5) {
        return 1;
      }
      FUN_0326b504(abStack_110,lVar8,iVar5,*(undefined8 *)puVar3);
      memcpy(auStack_370,abStack_110,0xb0);
      FUN_02c8a530(param_1,auStack_368);
      if (iStack_354 - 3U < 2) {
        auStack_370[0] = 0;
      }
      lVar8 = *(long *)(param_1 + 0x368);
      memcpy(auStack_1c0,auStack_370,0xb0);
      if (lVar8 == 0) break;
      uVar12 = *(undefined8 *)puVar4;
      memcpy(abStack_110,auStack_1c0,0xb0);
      FUN_0326b568(lVar8,iVar5,abStack_110,uVar12);
      lVar8 = *(long *)(param_1 + 0x368);
      iVar5 = iVar5 + 1;
    } while (lVar8 != 0);
  }
LAB_02c8da58:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


