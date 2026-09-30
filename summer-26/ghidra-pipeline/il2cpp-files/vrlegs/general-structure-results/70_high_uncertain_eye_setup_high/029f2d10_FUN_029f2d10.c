/*
FUNCTION_NAME: FUN_029f2d10
ENTRY_POINT: 029f2d10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f326c) */

void FUN_029f2d10(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  char local_44 [4];
  
  if ((DAT_04127fa7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d09888);
    FUN_01ab69ac(PTR_DAT_03d09890);
    FUN_01ab69ac(PTR_DAT_03d09898);
    FUN_01ab69ac(PTR_DAT_03d098a0);
    FUN_01ab69ac(PTR_DAT_03d098a8);
    FUN_01ab69ac(PTR_DAT_03d098b0);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cc1c00);
    FUN_01ab69ac(PTR_DAT_03cc1c08);
    FUN_01ab69ac(PTR_DAT_03d098b8);
    FUN_01ab69ac(PTR_DAT_03d098c0);
    FUN_01ab69ac(PTR_DAT_03d098c8);
    FUN_01ab69ac(PTR_DAT_03d098d0);
    FUN_01ab69ac(PTR_DAT_03d098d8);
    DAT_04127fa7 = 1;
  }
  local_44[0] = '\0';
  FUN_027e0bd8(param_1,local_44,0);
  if ((*(char *)(param_1 + 0x80) == '\0') && (*(char *)(param_1 + 0x60) == '\0')) {
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar1 = *(int *)(param_1 + 0x70);
    iVar3 = *(int *)(param_1 + 0x74);
    iVar4 = iVar3 * *(int *)(param_1 + 0x48);
    if (iVar2 == iVar1) {
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d098b0);
      FUN_021dca68(uVar8,iVar4,*(undefined8 *)PTR_DAT_03d098a8);
      *(undefined8 *)(param_1 + 0x68) = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x68),uVar8);
    }
    else {
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d098a0);
      FUN_021dc7c8(uVar8,iVar4,iVar3,iVar2,iVar1,1,*(undefined8 *)PTR_DAT_03d09898);
      *(undefined8 *)(param_1 + 0x68) = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x68),uVar8);
    }
    uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d09890);
    FUN_021c7ea0(uVar8,0x32,*(undefined8 *)PTR_DAT_03d098c8,iVar4,*(undefined8 *)PTR_DAT_03d09888);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x38),uVar8);
    puVar5 = PTR_DAT_03cbeb18;
    plVar15 = *(long **)(param_1 + 0x78);
    plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,3);
    puVar6 = PTR_DAT_03cbeda8;
    local_48 = iVar4;
    lVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_48);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar9[4] = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar10);
    local_4c = *(undefined4 *)(param_1 + 0x70);
    lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar6,&local_4c);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar9[5] = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 5,lVar10);
    local_50 = *(undefined4 *)(param_1 + 0x74);
    lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar6,&local_50);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar9[6] = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 6,lVar10);
    puVar7 = PTR_DAT_03ccf278;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar10 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_03d098d8;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03ccf278) {
          puVar12 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_029f30a0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)PTR_DAT_03ccf278,2);
LAB_029f30a0:
    (*(code *)*puVar12)(plVar15,uVar8,plVar9,puVar12[1]);
    if (*(char *)(param_1 + 0x26) == '\0') {
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
      FUN_027d737c(uVar8,param_1,*(undefined8 *)PTR_DAT_03d098b8,0);
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
      FUN_027e22f4(lVar10,uVar8,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027e2600(lVar10,0);
      FUN_029e4c9c(lVar10,*(undefined8 *)PTR_DAT_03d098c0);
    }
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x4c)) {
      plVar15 = *(long **)(param_1 + 0x78);
      plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)puVar5,2);
      local_48 = *(int *)(param_1 + 0x70);
      lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar6,&local_48);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar9[4] = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar10);
      local_4c = *(undefined4 *)(param_1 + 0x4c);
      lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar6,&local_4c);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,0);
      }
      if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar9[5] = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 5,lVar10);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar10 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar8 = *(undefined8 *)PTR_DAT_03d098d0;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_029f3248;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_01a472ec(plVar15,*(long *)puVar7,1);
LAB_029f3248:
      (*(code *)*puVar12)(plVar15,uVar8,plVar9,puVar12[1]);
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return;
}


