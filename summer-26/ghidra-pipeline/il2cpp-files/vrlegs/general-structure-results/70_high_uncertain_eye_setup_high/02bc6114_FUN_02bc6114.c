/*
FUNCTION_NAME: FUN_02bc6114
ENTRY_POINT: 02bc6114
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bc639c) */
/* WARNING: Removing unreachable block (ram,0x02bc6788) */
/* WARNING: Removing unreachable block (ram,0x02bc647c) */

void FUN_02bc6114(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  undefined8 local_a0;
  int *piStack_98;
  long *local_90;
  undefined8 *puStack_88;
  char *local_80;
  int **ppiStack_78;
  undefined1 local_70 [16];
  char local_54 [4];
  undefined8 local_50;
  long local_48;
  int local_3c;
  int *local_38;
  long local_28;
  
  local_38 = param_1;
  if ((DAT_04128f9c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d14150);
    FUN_01ab69ac(PTR_DAT_03cf0d08);
    FUN_01ab69ac(PTR_DAT_03cf0c78);
    FUN_01ab69ac(PTR_DAT_03d14118);
    FUN_01ab69ac(PTR_DAT_03d14120);
    FUN_01ab69ac(PTR_DAT_03d14128);
    FUN_01ab69ac(PTR_DAT_03d14130);
    DAT_04128f9c = 1;
  }
  local_54[0] = '\0';
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_3c = *param_1;
  local_48 = *(long *)(param_1 + 8);
  local_50 = 0;
  if (local_3c != 0) {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02bc4140(local_48,1,param_1[10] != 0);
    if (local_38[10] == 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = FUN_01aa50f0(local_48 + 0x50,*(undefined8 *)(local_38 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02bc43c8();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14158);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar5);
      }
    }
    else if (local_38[10] == 2) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = FUN_01aa50f0(local_48 + 0x48,*(undefined8 *)(local_38 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02bc43c8();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14158);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar5);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = FUN_01aa50f0(local_48 + 0x50,*(undefined8 *)(local_38 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02bc43c8();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14158);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar5);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = FUN_01aa50f0(local_48 + 0x58,*(undefined8 *)(local_38 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02bc43c8();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14158);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar5);
      }
    }
    else {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = FUN_01aa50f0(local_48 + 0x58,*(undefined8 *)(local_38 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02bc43c8();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14158);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar5);
      }
    }
  }
  puVar2 = PTR_DAT_03cf0c78;
  piStack_98 = &local_3c;
  local_90 = &local_48;
  puStack_88 = &local_50;
  local_a0 = 0;
  local_80 = local_54;
  ppiStack_78 = &local_38;
  if (local_3c == 0) {
    local_70 = *(undefined1 (*) [16])(local_38 + 0x10);
    local_38[0x10] = 0;
    local_38[0x11] = 0;
    local_38[0x12] = 0;
    local_38[0x13] = 0;
    local_3c = -1;
    *local_38 = -1;
  }
  else {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_50 = *(undefined8 *)(local_48 + 0x70);
    local_54[0] = '\0';
    FUN_027e0bd8(local_50,local_54,0);
    if (local_38[10] == 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(local_48 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02bc0d7c();
    }
    else {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(local_48 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02bc0d7c();
    }
    if ((local_3c < 0) && (local_54[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(local_50,0);
    }
    if (*(long *)(local_38 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = FUN_02bc112c(*(long *)(local_38 + 0xc),*(undefined8 *)(local_38 + 0xe));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_70 = FUN_020a2c64(lVar4,0,*(undefined8 *)PTR_DAT_03d14130);
    uVar6 = FUN_02189a30(local_70,*(undefined8 *)PTR_DAT_03d14128);
    if ((uVar6 & 1) == 0) {
      local_3c = 0;
      *local_38 = 0;
      *(undefined1 (*) [16])(local_38 + 0x10) = local_70;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_38 + 0x10,0);
      piVar8 = local_38;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(piVar8 + 2,local_70,local_38,*(undefined8 *)PTR_DAT_03d14150);
      lVar4 = 0;
      iVar7 = 0x16;
      goto LAB_02bc678c;
    }
  }
  FUN_02189a7c(local_70,&local_28,*(undefined8 *)PTR_DAT_03d14120);
  iVar7 = 0x19;
  lVar4 = local_28;
LAB_02bc678c:
  FUN_019b94b0(&local_a0);
  if ((iVar7 == 0x19) || (iVar7 == 0)) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02677078(*(long *)(lVar4 + 0x18),0);
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x10);
    piVar8 = local_38 + 2;
    *local_38 = -2;
    puVar3 = PTR_DAT_03cf0d08;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    local_a0 = CONCAT44(local_a0._4_4_,uVar1);
    FUN_02145584(piVar8,&local_a0,*(undefined8 *)puVar3);
  }
  return;
}


