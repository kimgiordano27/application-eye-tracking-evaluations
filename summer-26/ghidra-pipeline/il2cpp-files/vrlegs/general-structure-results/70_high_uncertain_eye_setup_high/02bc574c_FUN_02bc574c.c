/*
FUNCTION_NAME: FUN_02bc574c
ENTRY_POINT: 02bc574c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bc5ae8) */
/* WARNING: Removing unreachable block (ram,0x02bc5f64) */
/* WARNING: Removing unreachable block (ram,0x02bc5c84) */

void FUN_02bc574c(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 local_a8;
  int *piStack_a0;
  long **local_98;
  long *plStack_90;
  char *local_88;
  undefined1 local_80 [16];
  char local_64 [4];
  long local_60;
  undefined4 local_54;
  long *local_50;
  int local_44;
  long local_38;
  
  if ((DAT_04128f9a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d14108);
    FUN_01ab69ac(PTR_DAT_03d14110);
    FUN_01ab69ac(PTR_DAT_03cc9270);
    FUN_01ab69ac(PTR_DAT_03d14118);
    FUN_01ab69ac(PTR_DAT_03d14120);
    FUN_01ab69ac(PTR_DAT_03d14128);
    FUN_01ab69ac(PTR_DAT_03d13df0);
    FUN_01ab69ac(PTR_DAT_03d14130);
    FUN_01ab69ac(PTR_DAT_03cc5008);
    DAT_04128f9a = 1;
  }
  local_54 = 0;
  local_60 = 0;
  local_64[0] = '\0';
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_44 = *param_1;
  local_50 = *(long **)(param_1 + 10);
  if (local_44 == 0) {
    lVar4 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    plVar2 = *(long **)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (lVar4 == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar5 = thunk_FUN_01a89e68();
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d14148);
        FUN_026b274c(uVar5,uVar6,0);
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d14140);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar6);
      }
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      puVar1 = PTR_DAT_03d13df0;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar4 + 0x10) == 0) {
        plVar2 = *(long **)(param_1 + 8);
        lVar4 = *(long *)PTR_DAT_03d13df0;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        local_54 = FusionStats__get_GraphColorBad(*(undefined8 *)(lVar4 + 0xb8),0);
        uVar5 = FUN_0270b27c(0);
        uVar5 = FUN_02767a80(&local_54,uVar5,0);
        uVar5 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cc5008,uVar5,0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar5,uVar5);
        }
        (**(code **)(*plVar2 + 0x1d8))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x1e0));
      }
      plVar2 = local_50;
      plVar7 = *(long **)(param_1 + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar2 = plVar2 + 0x14;
      *plVar2 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2);
    }
    else {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      if (lVar4 == 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar5 = thunk_FUN_01a89e68();
          uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d14138);
          FUN_026b274c(uVar5,uVar6,0);
          uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d14140);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar5,uVar6);
        }
      }
    }
    plVar2 = local_50;
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (local_50[8] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02677078(local_50[8],0);
    }
    iVar9 = param_1[0xc];
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d14108);
    FUN_02bc0fc4(lVar4,plVar2,(char)iVar9 != '\0');
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_01aa50f0(local_50 + 9,lVar4,0);
    if (lVar8 != 0) {
      lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02bc43c8();
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14140);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar5);
    }
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_01aa50f0(local_50 + 10,lVar4,0);
    if (lVar8 != 0) {
      lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02bc43c8();
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14140);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar5);
    }
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = FUN_01aa50f0(local_50 + 0xb,lVar4,0);
    if (lVar8 != 0) {
      lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13df0);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02bc43c8();
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d14140);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar5);
    }
  }
  puVar1 = PTR_DAT_03cc9270;
  piStack_a0 = &local_44;
  local_98 = &local_50;
  plStack_90 = &local_60;
  local_88 = local_64;
  local_a8 = 0;
  if (local_44 == 0) {
LAB_02bc5b90:
    local_80 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    local_44 = -1;
    *param_1 = -1;
  }
  else {
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_60 = local_50[0xe];
    local_64[0] = '\0';
    FUN_027e0bd8(local_60,local_64,0);
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (local_50[7] != 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar5 = thunk_FUN_01a89e68();
      FUN_0276a44c(uVar5,0);
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d14140);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar6);
    }
    if (local_50[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02bc0d7c();
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (local_50[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02bc0d7c();
    plVar2 = local_50;
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = (**(code **)(*local_50 + 0x418))
                      (local_50,*(undefined8 *)(param_1 + 8),*(undefined8 *)(*local_50 + 0x420));
    plVar2[7] = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2 + 7);
    if ((local_44 < 0) && (local_64[0] != '\0')) {
      OVRManager_<>c__<InitOVRManager>b__424_0(local_60,0);
    }
    if (local_44 == 0) goto LAB_02bc5b90;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = FUN_02bc112c(lVar4,*(undefined8 *)(param_1 + 0xe));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_80 = FUN_020a2c64(lVar4,0,*(undefined8 *)PTR_DAT_03d14130);
    uVar3 = FUN_02189a30(local_80,*(undefined8 *)PTR_DAT_03d14128);
    if ((uVar3 & 1) == 0) {
      local_44 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_80;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f2e2b8(param_1 + 2,local_80,param_1,*(undefined8 *)PTR_DAT_03d14110);
      iVar9 = 0x1a;
      lVar4 = 0;
      goto LAB_02bc5f68;
    }
  }
  FUN_02189a7c(local_80,&local_38,*(undefined8 *)PTR_DAT_03d14120);
  iVar9 = 0x1d;
  lVar4 = local_38;
LAB_02bc5f68:
  FUN_019b92e8(&local_a8);
  if ((iVar9 == 0x1d) || (iVar9 == 0)) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02677078(*(long *)(lVar4 + 0x18),0);
    }
    *param_1 = -2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02679adc(param_1 + 2,0);
  }
  return;
}


