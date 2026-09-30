/*
FUNCTION_NAME: FUN_02080ac0
ENTRY_POINT: 02080ac0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020814c0) */

undefined8 FUN_02080ac0(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 local_48;
  char local_44 [4];
  
  if ((DAT_04121db7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe188);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cbe5c8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cd9d00);
    FUN_01ab69ac(PTR_DAT_03cd9d08);
    FUN_01ab69ac(PTR_DAT_03cd9d10);
    FUN_01ab69ac(PTR_DAT_03cd9d18);
    FUN_01ab69ac(PTR_DAT_03cd9d20);
    FUN_01ab69ac(PTR_DAT_03cd9d28);
    FUN_01ab69ac(PTR_DAT_03cd9d30);
    FUN_01ab69ac(PTR_DAT_03cd9d38);
    FUN_01ab69ac(PTR_DAT_03cd9d40);
    FUN_01ab69ac(PTR_DAT_03cd9d48);
    DAT_04121db7 = 1;
  }
  local_44[0] = '\0';
  local_48 = 0;
  plVar12 = (long *)(param_1 + 0x20);
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar10 = *plVar12;
  cVar1 = *(char *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8(lVar10);
  }
  puVar2 = PTR_DAT_03cd9d00;
  puVar4 = PTR_DAT_03cbe5e8;
  puVar3 = PTR_DAT_03cbe438;
  if (cVar1 != '\0') {
    uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    puVar4 = PTR_DAT_03cd9d08;
    plVar12 = (long *)FUN_0277b678(uVar11,0);
    uVar11 = *(undefined8 *)puVar2;
    if (plVar12 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    }
    uVar11 = FUN_025bdc88(uVar11,uVar6,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar3);
    }
    FUN_036772fc(uVar11,0);
    return 0;
  }
  lVar5 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar11,local_44,0);
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  puVar2 = PTR_DAT_03cbdf88;
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
  }
  uVar7 = FUN_036d35a8(uVar6,0,0);
  if ((uVar7 & 1) != 0) {
    lVar5 = *plVar12;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    lVar5 = FUN_01fe03d8(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20));
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
      uVar6 = 0;
    }
    else {
      if ((int)*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x20);
    }
    lVar10 = *plVar12;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar10 = *plVar12;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    **(undefined8 **)(lVar10 + 0xb8) = uVar6;
    lVar10 = *plVar12;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8();
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(undefined8 *)(lVar10 + 0xb8),uVar6);
    if ((lVar5 != 0) && (1 < *(int *)(lVar5 + 0x18))) {
      lVar10 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_03cd9d10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      local_48 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
      uVar6 = FUN_0276793c(&local_48,0);
      if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar10 + 0x28) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_03cd9d18;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar4);
      }
      plVar8 = (long *)FUN_0277b678(uVar6,0);
      if (plVar8 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar10 + 0x38) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_03cd9d20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar6 = FUN_025be564(lVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_036772fc(uVar6,0);
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      goto LAB_020813bc;
    }
    lVar5 = *plVar12;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = *plVar12;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    lVar10 = *(long *)puVar2;
    uVar6 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar10);
    }
    uVar7 = FUN_036d35a8(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = FUN_036cbbbc(**(long **)(lVar5 + 0xb8),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = FUN_036d3824(lVar5,0);
      uVar6 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cd9d48,uVar6,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(uVar6,0);
    }
    else {
      plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
      FUN_036cfa1c(plVar8,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      uVar6 = FUN_01f7e2fc(plVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30));
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      **(undefined8 **)(lVar5 + 0xb8) = uVar6;
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(lVar5 + 0xb8),uVar6);
      lVar5 = *plVar12;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar4);
      }
      plVar9 = (long *)FUN_0277b678(uVar6,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar6 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cd9d28,uVar6,0);
      FUN_036d38d4(plVar8,uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_0366d138(0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_036d462c(plVar8,0);
      }
      lVar5 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_03cd9d40;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar10 = *plVar12;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8();
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar4);
      }
      plVar9 = (long *)FUN_0277b678(uVar6,0);
      if (plVar9 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      }
      if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_03cd9d30;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      if (*(uint *)(lVar5 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar5 + 0x38) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(uint *)(lVar5 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_03cd9d38;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar6 = FUN_025be564(lVar5,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(uVar6,0);
    }
  }
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = *plVar12;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
LAB_020813bc:
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
  }
  return uVar6;
}


