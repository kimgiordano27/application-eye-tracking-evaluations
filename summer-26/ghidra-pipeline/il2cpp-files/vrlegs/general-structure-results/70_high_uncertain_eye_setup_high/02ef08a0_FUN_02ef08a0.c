/*
FUNCTION_NAME: FUN_02ef08a0
ENTRY_POINT: 02ef08a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ef0cdc) */

long FUN_02ef08a0(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_64 [4];
  
  puVar5 = PTR_DAT_03cbf038;
  if ((DAT_0412a859 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d213e0);
    FUN_01ab69ac(PTR_DAT_03d213e8);
    FUN_01ab69ac(PTR_DAT_03d213f0);
    FUN_01ab69ac(PTR_DAT_03cbf038);
    DAT_0412a859 = 1;
  }
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar5;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar13,local_64,0);
  local_70 = param_2[2];
  uStack_78 = param_2[1];
  local_80 = *param_2;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uStack_98 = uStack_78;
  local_a0 = local_80;
  local_90 = local_70;
  lVar6 = FUN_02ef0d90(&local_a0);
  if ((lVar6 == 0) && ((param_3 & 1) != 0)) {
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar5;
    }
    if (**(int **)(lVar6 + 0xb8) == 0) {
      lVar6 = 0;
    }
    else {
      local_70 = param_2[2];
      uStack_78 = param_2[1];
      local_80 = *param_2;
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x48);
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d213e0);
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      local_b0 = local_70;
      FUN_02ef0fa0(lVar6,&local_c0,uVar14,uVar2,uVar3,uVar16,uVar4,uVar15,uVar1);
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar11);
        lVar11 = *(long *)puVar5;
      }
      lVar7 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (lVar7 != 0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar7 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        *(long *)(lVar7 + 0x10) = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar7 + 0x10),lVar6);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar11 = *(long *)puVar5;
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar11);
        lVar11 = *(long *)puVar5;
      }
      plVar8 = (long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      *plVar8 = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar6);
      lVar11 = *(long *)puVar5;
      lVar7 = *(long *)(lVar11 + 0xb8);
      iVar12 = *(int *)(lVar7 + 0x10) + 1;
      *(int *)(lVar7 + 0x10) = iVar12;
      if (9 < iVar12) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar11 = *(long *)puVar5;
          lVar7 = *(long *)(lVar11 + 0xb8);
          iVar12 = *(int *)(lVar7 + 0x10);
        }
        if (iVar12 == 10) {
          FUN_02ef1074();
        }
        else {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
          }
          local_d0 = param_2[2];
          uStack_d8 = param_2[1];
          local_e0 = *param_2;
          local_80 = local_e0;
          uStack_78 = uStack_d8;
          local_70 = local_d0;
          if (*(long *)(lVar7 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_0219b9a4(*(long *)(lVar7 + 8),&local_e0,lVar6,*(undefined8 *)PTR_DAT_03d213e8);
        }
      }
      lVar11 = *(long *)puVar5;
      iVar12 = *(int *)(lVar11 + 0xe0);
      if (iVar12 == 0) {
        thunk_FUN_01a58e78(lVar11);
        lVar11 = *(long *)puVar5;
        iVar12 = *(int *)(lVar11 + 0xe0);
      }
      piVar9 = *(int **)(lVar11 + 0xb8);
      if (*(long *)(piVar9 + 8) == 0) {
        if (iVar12 == 0) {
          thunk_FUN_01a58e78(lVar11);
          piVar9 = *(int **)(*(long *)puVar5 + 0xb8);
        }
        *(long *)(piVar9 + 8) = lVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar9 + 8,lVar6);
      }
      else {
        if (iVar12 == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar11 = *(long *)puVar5;
          piVar9 = *(int **)(lVar11 + 0xb8);
        }
        iVar12 = piVar9[4];
        if (*piVar9 < iVar12) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
            lVar11 = *(long *)puVar5;
            piVar9 = *(int **)(lVar11 + 0xb8);
            iVar12 = piVar9[4];
          }
          lVar7 = *(long *)(piVar9 + 8);
          if (iVar12 < 10) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
          }
          else {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar11);
              piVar9 = *(int **)(*(long *)puVar5 + 0xb8);
            }
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            local_f0 = *(undefined8 *)(lVar7 + 0x30);
            uStack_f8 = *(undefined8 *)(lVar7 + 0x28);
            local_100 = *(undefined8 *)(lVar7 + 0x20);
            local_80 = local_100;
            uStack_78 = uStack_f8;
            local_70 = local_f0;
            if (*(long *)(piVar9 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_0219eaf8(*(long *)(piVar9 + 2),&local_100,*(undefined8 *)PTR_DAT_03d213f0);
          }
          if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0x18);
          *puVar10 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
          lVar11 = *(long *)puVar5;
          uVar14 = *(undefined8 *)(lVar7 + 0x10);
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar11 = *(long *)puVar5;
          }
          puVar10 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20);
          *puVar10 = uVar14;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,uVar14);
          *(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) =
               *(int *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) + -1;
        }
      }
    }
  }
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
  }
  return lVar6;
}


