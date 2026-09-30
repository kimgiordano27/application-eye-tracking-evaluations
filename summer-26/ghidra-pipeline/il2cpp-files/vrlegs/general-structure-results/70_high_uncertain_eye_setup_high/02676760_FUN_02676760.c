/*
FUNCTION_NAME: FUN_02676760
ENTRY_POINT: 02676760
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x026769d8) */
/* WARNING: Removing unreachable block (ram,0x02676cd8) */
/* WARNING: Removing unreachable block (ram,0x02676c74) */

long FUN_02676760(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_90;
  char local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  undefined *puVar9;
  
  puVar2 = PTR_DAT_03cf3c50;
  puVar9 = PTR_DAT_03cc4fe8;
  if ((DAT_04124271 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf3c58);
    FUN_01ab69ac(PTR_DAT_03cf3c60);
    FUN_01ab69ac(PTR_DAT_03cf3c68);
    FUN_01ab69ac(PTR_DAT_03cf3c70);
    FUN_01ab69ac(PTR_DAT_03cf3c78);
    FUN_01ab69ac(PTR_DAT_03cf3c80);
    FUN_01ab69ac(PTR_DAT_03cc4fe8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cf2d18);
    FUN_01ab69ac(PTR_DAT_03cc5270);
    FUN_01ab69ac(PTR_DAT_03cc07a8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cf3c88);
    FUN_01ab69ac(PTR_DAT_03cf3c90);
    FUN_01ab69ac(PTR_DAT_03cf3c50);
    FUN_01ab69ac(PTR_DAT_03cf3c98);
    DAT_04124271 = 1;
  }
  puVar3 = PTR_DAT_03cf3c90;
  local_80 = 0;
  uStack_78 = 0;
  local_48 = 0;
  local_84[0] = '\0';
  local_90 = 0;
  FUN_020f03e8(&local_80,param_1,param_2,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_03cf3c80;
  lVar11 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  lVar10 = *(long *)(*(long *)puVar9 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar3;
    }
    uVar12 = **(undefined8 **)(lVar4 + 0xb8);
    lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf3c68);
    FUN_021dd4e8(lVar11,uVar12,*(undefined8 *)PTR_DAT_03cf3c88,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar5 = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar11);
  }
  FUN_01f91a48(lVar10 + 8,lVar11,*(undefined8 *)puVar2);
  lVar4 = *(long *)puVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar9;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  local_84[0] = '\0';
  FUN_027e0bd8(uVar12,local_84,0);
  lVar4 = *(long *)puVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar9;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_60 = local_80;
  uStack_58 = uStack_78;
  uVar6 = FUN_0219f8b8(lVar4,&local_60,&local_48,*(undefined8 *)PTR_DAT_03cf3c58);
  if (local_84[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
  }
  if ((uVar6 & 1) != 0) {
    return local_48;
  }
  plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
  puVar2 = PTR_DAT_03cbe5e8;
  uVar12 = *(undefined8 *)PTR_DAT_03cc5270;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_0277b678(uVar12,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar4 != 0) &&
     (lVar11 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0)) {
    uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar12,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5[4] = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar4);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar5 = (long *)FUN_0278a384(param_1,*(undefined8 *)PTR_DAT_03cf3c98,0x138,0,plVar5,0,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cf2d18 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cf2d18)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    uVar12 = (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
    uVar13 = *(undefined8 *)PTR_DAT_03cf3c70;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    uVar13 = FUN_0277b678(uVar13,0);
    uVar6 = FUN_02787b20(uVar12,uVar13,0);
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((param_2 != 0) &&
         (lVar4 = thunk_FUN_01a89d6c(param_2,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar7[4] = param_2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,param_2);
      lVar4 = thunk_FUN_01ac7738(plVar5,0,plVar7,&local_90,0);
      if (lVar4 == 0) {
        lVar11 = 0;
      }
      else {
        uVar12 = *(undefined8 *)PTR_DAT_03cf3c78;
        lVar11 = thunk_FUN_01a89d6c(lVar4,uVar12);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar4,uVar12);
        }
      }
      local_48 = lVar11;
      if (local_90 != 0) {
        uVar12 = FUN_02676fb8(local_90);
        FUN_018748a8();
                    /* WARNING: Subroutine does not return */
        FUN_02677078(uVar12);
      }
      if (lVar11 != 0) {
        lVar4 = *(long *)puVar9;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar9;
        }
        uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
        local_84[0] = '\0';
        FUN_027e0bd8(uVar12,local_84,0);
        lVar4 = *(long *)puVar9;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar9;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar4 != 0) {
          local_70 = local_80;
          uStack_68 = uStack_78;
          FUN_0219b83c(lVar4,&local_70,local_48,*(undefined8 *)PTR_DAT_03cf3c60);
          if (local_84[0] == '\0') {
            return local_48;
          }
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
          return local_48;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_018748a8(param_1);
      uVar12 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
      uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cf3cb0);
      puVar9 = PTR_DAT_03cf3cb8;
      goto LAB_02676f04;
    }
  }
  FUN_018748a8(param_1);
  uVar12 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cf3ca0);
  puVar9 = PTR_DAT_03cf3ca8;
LAB_02676f04:
  uVar8 = thunk_FUN_01a6ca08(puVar9);
  uVar12 = FUN_025bdc88(uVar13,uVar12,uVar8,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cf3b58);
  uVar13 = thunk_FUN_01a89e68();
  FUN_026b3a54(uVar13,uVar12,0);
  uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03cf3cd0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar13,uVar12);
}


