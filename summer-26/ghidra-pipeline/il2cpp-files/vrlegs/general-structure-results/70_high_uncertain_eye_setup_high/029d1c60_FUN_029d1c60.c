/*
FUNCTION_NAME: FUN_029d1c60
ENTRY_POINT: 029d1c60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029d20c8) */
/* WARNING: Removing unreachable block (ram,0x029d20e8) */

uint FUN_029d1c60(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  char local_48 [4];
  int local_44;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_03d08bf8;
  if ((DAT_04127e84 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d08b40);
    FUN_01ab69ac(PTR_DAT_03d08c00);
    FUN_01ab69ac(PTR_DAT_03d08c08);
    FUN_01ab69ac(PTR_DAT_03d08c10);
    FUN_01ab69ac(PTR_DAT_03d08c18);
    FUN_01ab69ac(PTR_DAT_03d08c20);
    FUN_01ab69ac(PTR_DAT_03d08c28);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(PTR_DAT_03d08c30);
    FUN_01ab69ac(PTR_DAT_03d08c38);
    FUN_01ab69ac(PTR_DAT_03d08c40);
    FUN_01ab69ac(PTR_DAT_03d08c48);
    FUN_01ab69ac(PTR_DAT_03d08bf8);
    FUN_01ab69ac(PTR_DAT_03ccab70);
    DAT_04127e84 = 1;
  }
  local_44 = 0;
  local_48[0] = '\0';
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_027b3d9c(lVar4,0);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0)) ||
     (*(char *)(param_1 + 0x48) != '\0')) {
    uVar3 = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = 1;
    *(long *)(param_1 + 0x40) = param_3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_1 + 0x40),param_3);
    plVar10 = (long *)(param_1 + 0x50);
    lVar11 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036cee6c(lVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (*plVar10 == 0) goto LAB_029d20e0;
      FUN_029d9ba0();
    }
    lVar11 = FUN_029d9c0c(*(undefined8 *)PTR_DAT_03ccab70);
    *plVar10 = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar11);
    if (*plVar10 == 0) {
LAB_029d20e0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    puVar6 = (undefined8 *)(*plVar10 + 0x20);
    *puVar6 = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,param_2);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08b40);
    FUN_02060754(uVar7,uVar9,*(undefined8 *)PTR_DAT_03d08c28,0);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x30),uVar7);
    uVar5 = FUN_025be440(param_3,0);
    if ((uVar5 & 1) == 0) {
      if ((param_3 == 0) || (lVar11 = FUN_025c0b4c(param_3,0x3b,0,0), lVar11 == 0))
      goto LAB_029d20e0;
      if ((2 < *(int *)(lVar11 + 0x18)) &&
         (uVar5 = FUN_02768050(*(undefined8 *)(lVar11 + 0x28),&local_44,0), (uVar5 & 1) != 0)) {
        if (*(int *)(lVar11 + 0x18) == 0) {
LAB_029d20e4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (lVar4 == 0) goto LAB_029d20e0;
        puVar6 = (undefined8 *)(lVar4 + 0x10);
        *puVar6 = *(undefined8 *)(lVar11 + 0x20);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6);
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_029d20e4;
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
        uVar5 = FUN_025be440(*puVar6,0);
        if (((uVar5 & 1) == 0) && (uVar5 = FUN_025be440(uVar7,0), (uVar5 & 1) == 0)) {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_029d20e0;
          uVar5 = FUN_025bcee0(*(long *)(param_1 + 0x18),uVar7,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_029d20e0;
            uVar5 = FUN_025c2edc(*(long *)(param_1 + 0x18),*puVar6,0);
            iVar1 = local_44;
            puVar2 = PTR_DAT_03d08c40;
            if ((uVar5 & 1) != 0) {
              lVar11 = *(long *)PTR_DAT_03d08c40;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar11 = *(long *)puVar2;
              }
              if (iVar1 < *(int *)(*(long *)(lVar11 + 0xb8) + 8)) {
                lVar11 = *(long *)(param_1 + 0x10);
                *(int *)(param_1 + 0x38) = local_44;
                uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c30);
                FUN_0225a3e8(uVar7,lVar4,*(undefined8 *)PTR_DAT_03d08c48,0);
                if (lVar11 != 0) {
                  FUN_02216dac(lVar11,uVar7,&local_38,*(undefined8 *)PTR_DAT_03d08c18);
                  uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c00);
                  FUN_02060754(uVar7,param_1,*(undefined8 *)PTR_DAT_03d08c38,0);
                  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                  FUN_029da054(lVar4,local_38,uVar7);
                  uVar7 = *(undefined8 *)(param_1 + 0x28);
                  local_48[0] = '\0';
                  FUN_027e0bd8(uVar7,local_48,0);
                  lVar11 = *(long *)(param_1 + 0x28);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  lVar8 = *(long *)PTR_DAT_03d08c10;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  uVar5 = FUN_01ab7534(*(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 200));
                  if ((uVar5 & 1) == 0) {
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                  }
                  else {
                    iVar1 = *(int *)(lVar11 + 0x18);
                    *(undefined4 *)(lVar11 + 0x18) = 0;
                    if (0 < iVar1) {
                      FUN_02793a34(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
                    }
                  }
                  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  FUN_01b5f01c(*(long *)(param_1 + 0x28),lVar4,*(undefined8 *)PTR_DAT_03d08c08);
                  if (local_48[0] != '\0') {
                    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
                  }
                  if (lVar4 != 0) {
                    FUN_029da100(lVar4);
                    uVar3 = 1;
                    goto LAB_029d1d7c;
                  }
                }
                goto LAB_029d20e0;
              }
            }
          }
        }
      }
    }
    uVar3 = FUN_029d9ce0(param_1);
  }
LAB_029d1d7c:
  return uVar3 & 1;
}


