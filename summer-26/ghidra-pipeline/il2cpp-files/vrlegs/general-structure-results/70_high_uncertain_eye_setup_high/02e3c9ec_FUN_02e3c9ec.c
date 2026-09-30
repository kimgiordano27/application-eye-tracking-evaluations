/*
FUNCTION_NAME: FUN_02e3c9ec
ENTRY_POINT: 02e3c9ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e3cfbc) */
/* WARNING: Removing unreachable block (ram,0x02e3cfc0) */
/* WARNING: Removing unreachable block (ram,0x02e3cff0) */

void FUN_02e3c9ec(int *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  char local_74 [4];
  undefined1 local_70 [16];
  long *local_58;
  
  if ((DAT_0412a2a1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1df98);
    FUN_01ab69ac(PTR_DAT_03d142d0);
    FUN_01ab69ac(PTR_DAT_03d142a8);
    FUN_01ab69ac(PTR_DAT_03d18b48);
    FUN_01ab69ac(PTR_DAT_03d18b50);
    FUN_01ab69ac(PTR_DAT_03d18b68);
    FUN_01ab69ac(PTR_DAT_03d1dfa0);
    FUN_01ab69ac(PTR_DAT_03d1dfa8);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cd81b0);
    FUN_01ab69ac(PTR_DAT_03d1df60);
    FUN_01ab69ac(PTR_DAT_03d1dfb0);
    FUN_01ab69ac(PTR_DAT_03d18ba8);
    FUN_01ab69ac(PTR_DAT_03d1dfb8);
    FUN_01ab69ac(PTR_DAT_03d18968);
    FUN_01ab69ac(PTR_DAT_03d1df68);
    FUN_01ab69ac(PTR_DAT_03d1df70);
    DAT_0412a2a1 = 1;
  }
  puVar2 = PTR_DAT_03d142a8;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74[0] = '\0';
  iVar16 = *param_1;
  lVar11 = *(long *)(param_1 + 0x10);
  if (iVar16 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
    iVar16 = -1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_03d18968 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_02f7ee28(uVar12,0);
    plVar13 = (long *)(param_1 + 0x12);
    *plVar13 = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar13);
    if (*(long *)(param_1 + 10) != 0) {
      plVar5 = (long *)*plVar13;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar5 + 0x248))
                (plVar5,*(long *)(param_1 + 10),*(undefined8 *)(*plVar5 + 0x250));
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      plVar5 = (long *)*plVar13;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar5 + 0x278))
                (plVar5,*(long *)(param_1 + 0xc),*(undefined8 *)(*plVar5 + 0x280));
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      plVar5 = (long *)*plVar13;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar5 + 0x1b8))
                (plVar5,*(long *)(param_1 + 0xe),*(undefined8 *)(*plVar5 + 0x1c0));
    }
    lVar4 = FUN_020a2a18(*(undefined8 *)PTR_DAT_03d1dfb8);
    plVar5 = (long *)*plVar13;
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1dfa8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_021de400(uVar12,plVar5,*(undefined8 *)(*plVar5 + 0x2d0),0);
    plVar13 = (long *)*plVar13;
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1dfa0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_021de1ac(uVar6,plVar13,*(undefined8 *)(*plVar13 + 0x2e0),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = FUN_020a0228(lVar4,uVar12,uVar6,0,*(undefined8 *)PTR_DAT_03d1dfb0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_70 = FUN_020a2c64(lVar4,0,*(undefined8 *)PTR_DAT_03d18ba8);
    uVar7 = FUN_02189a30(local_70,*(undefined8 *)PTR_DAT_03d18b68);
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x14,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(param_1 + 2,local_70,param_1,*(undefined8 *)PTR_DAT_03d1df98);
      return;
    }
  }
  FUN_02189a7c(local_70,&local_58,*(undefined8 *)PTR_DAT_03d18b50);
  plVar13 = *(long **)(param_1 + 0x12);
  if (plVar13 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cd81b0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cd81b0))
    {
      local_74[0] = '\0';
      FUN_027e0bd8(lVar11,local_74,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      puVar14 = (undefined8 *)(lVar11 + 0x10);
      plVar5 = (long *)*puVar14;
      if (plVar5 == (long *)0x0) {
        uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
        FUN_02733e6c(uVar12,0);
        *puVar14 = uVar12;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14,uVar12);
        plVar5 = (long *)*puVar14;
      }
      if (plVar13[8] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar12 = FUN_02ea1e90(plVar13[8],0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar12,uVar12);
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                 (plVar5,uVar12,*(undefined8 *)(*plVar5 + 0x310));
      lVar4 = *(long *)PTR_DAT_03d1df60;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)thunk_FUN_01a89e68(lVar4);
        FUN_027b3d9c(plVar5,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      else if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
              (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
               lVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar5);
      }
      lVar4 = plVar5[2];
      lVar8 = thunk_FUN_02f9b4e0(plVar13,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((int)lVar4 < *(int *)(lVar8 + 0x78) + -1) {
        iVar10 = (int)plVar5[2];
        if (iVar10 == 0) {
          if (plVar13[8] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar15 = (long *)*puVar14;
          uVar12 = FUN_02ea1e90(plVar13[8],0);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar12,uVar12);
          }
          (**(code **)(*plVar15 + 0x2a8))(plVar15,uVar12,plVar5,*(undefined8 *)(*plVar15 + 0x2b0));
          iVar10 = (int)plVar5[2];
        }
        *(int *)(plVar5 + 2) = iVar10 + 1;
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = (**(code **)(*local_58 + 0x1f8))(local_58,*(undefined8 *)(*local_58 + 0x200));
        if (plVar13[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar9 = FUN_02ea1e90(plVar13[8],0);
        uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1df70);
        FUN_02e3c2d8(uVar12,uVar6,lVar11,uVar9);
      }
      else {
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = (**(code **)(*local_58 + 0x208))(local_58,*(undefined8 *)(*local_58 + 0x210));
        uVar9 = (**(code **)(*local_58 + 0x1f8))(local_58,*(undefined8 *)(*local_58 + 0x200));
        uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1df68);
        FUN_02e3c37c(uVar12,uVar6,uVar9);
      }
      if ((iVar16 < 0) && (local_74[0] != '\0')) {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar11,0);
      }
      goto LAB_02e3cd40;
    }
  }
  if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar12 = (**(code **)(*local_58 + 0x1f8))(local_58,*(undefined8 *)(*local_58 + 0x200));
LAB_02e3cd40:
  puVar3 = PTR_DAT_03d142d0;
  *param_1 = -2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x12,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02145584(param_1 + 2,uVar12,*(undefined8 *)puVar3);
  return;
}


