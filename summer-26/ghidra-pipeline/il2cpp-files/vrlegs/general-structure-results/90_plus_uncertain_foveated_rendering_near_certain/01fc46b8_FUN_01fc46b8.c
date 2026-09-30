/*
FUNCTION_NAME: FUN_01fc46b8
ENTRY_POINT: 01fc46b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x01fc4cb8) */

void FUN_01fc46b8(undefined8 *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong local_110;
  long *plStack_108;
  long local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  int *piStack_e8;
  int *local_e0;
  undefined8 *puStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  int local_68;
  int iStack_64;
  
  plVar11 = *(long **)(param_10 + 0x38);
  local_68 = param_3;
  iStack_64 = param_2;
  if (plVar11 == (long *)0x0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc17c8);
    FUN_01ab69ac(PTR_DAT_03cd8ac8);
    FUN_01ab69ac(PTR_DAT_03cd8ad0);
    FUN_01ab69ac(PTR_DAT_03cc7210);
    FUN_01ab69ac(PTR_DAT_03cd8ad8);
    FUN_01ab69ac(PTR_DAT_03cd8ae0);
    FUN_01ab69ac(PTR_DAT_03cd8ae8);
    FUN_01ab69ac(PTR_DAT_03cd8af0);
    FUN_01ab69ac(PTR_DAT_03cc9e20);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    plVar11 = *(long **)(param_10 + 0x38);
    if (plVar11 == (long *)0x0) {
      FUN_01a47054(param_10);
      plVar11 = *(long **)(param_10 + 0x38);
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if ((*(byte *)(*plVar11 + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar7 = thunk_FUN_01a89e68();
  FUN_0201cf04(lVar7,*(undefined8 *)(*(long *)(param_10 + 0x38) + 8));
  local_70 = lVar7;
  if (lVar7 == 0) goto LAB_01fc4ca8;
  *(undefined8 *)(lVar7 + 0x18) = param_4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x18),param_4);
  *(undefined8 *)(lVar7 + 0x38) = param_6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x38),param_6);
  *(undefined8 *)(lVar7 + 0x40) = param_7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x40),param_7);
  *(undefined8 *)(lVar7 + 0x48) = param_8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x48),param_8);
  *(undefined8 *)(lVar7 + 0x50) = param_5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x50),param_5);
  *(undefined8 *)(lVar7 + 0x58) = param_9;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x58),param_9);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (param_3 <= param_2) {
    local_88 = 1;
LAB_01fc4c78:
    param_1[2] = local_78;
    param_1[1] = uStack_80;
    *param_1 = local_88;
    return;
  }
  uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ad0);
  FUN_027ebcb0(uVar8,0);
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar7 + 0x20),uVar8);
  puVar2 = PTR_DAT_03cc9e10;
  if (*(long *)(lVar7 + 0x18) != 0) {
    local_a8 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d7fa0(&local_a8,0);
    if ((local_70 != 0) && (*(long *)(local_70 + 0x18) != 0)) {
      iVar5 = FUN_027eae8c(*(long *)(local_70 + 0x18),0);
      if (iVar5 == -1) {
        if (*(int *)(*(long *)PTR_DAT_03cd8ad8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = FUN_027d9860(0);
      }
      else {
        if ((local_70 == 0) || (*(long *)(local_70 + 0x18) == 0)) goto LAB_01fc4ca8;
        uVar6 = FUN_027eae8c(*(long *)(local_70 + 0x18),0);
      }
      lVar4 = local_70;
      lVar7 = (long)local_68;
      lVar10 = (long)iStack_64;
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ae0);
      FUN_027ec080(uVar8,lVar10,lVar7,1,uVar6,0);
      if (lVar4 != 0) {
        puVar12 = (undefined8 *)(lVar4 + 0x28);
        *puVar12 = uVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar8);
        if (local_70 != 0) {
          *(undefined8 *)(local_70 + 0x10) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(local_70 + 0x10),0);
          if ((local_70 != 0) && (*(long *)(local_70 + 0x18) != 0)) {
            local_a8 = *(undefined8 *)(*(long *)(local_70 + 0x18) + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = OVRManager__SetFoveatedRenderingLevel(&local_a8,0);
            lVar7 = local_70;
            if ((uVar9 & 1) == 0) {
              local_d0 = 0;
              uStack_c8 = 0;
              local_c0 = 0;
            }
            else {
              if ((local_70 == 0) || (*(long *)(local_70 + 0x18) == 0)) goto LAB_01fc4ca8;
              local_a8 = *(undefined8 *)(*(long *)(local_70 + 0x18) + 0x20);
              uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
              FUN_02060754(uVar8,lVar7,*(undefined8 *)(*(long *)(param_10 + 0x38) + 0x28),0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_027d7978(&local_110,&local_a8,uVar8,0,0,0);
              uStack_c8 = plStack_108;
              local_d0 = local_110;
              local_c0 = local_100;
            }
            uStack_98 = uStack_c8;
            local_a0 = local_d0;
            local_90 = local_c0;
            if (local_70 != 0) {
              *(undefined4 *)(local_70 + 0x30) = 0;
              puVar3 = PTR_DAT_03cd8ac8;
              lVar7 = *(long *)PTR_DAT_03cd8ac8;
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar7 = *(long *)puVar3;
              }
              if (**(long **)(lVar7 + 0xb8) != 0) {
                uVar9 = FUN_02726974(**(long **)(lVar7 + 0xb8),0);
                lVar7 = local_70;
                puVar1 = PTR_DAT_03cc7210;
                if ((uVar9 & 1) != 0) {
                  lVar10 = *(long *)PTR_DAT_03cc7210;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar10 = *(long *)puVar1;
                  }
                  uVar6 = FusionStats__get_GraphColorBad(*(undefined8 *)(lVar10 + 0xb8),0);
                  if (lVar7 == 0) goto LAB_01fc4ca8;
                  *(undefined4 *)(lVar7 + 0x30) = uVar6;
                  lVar7 = *(long *)puVar3;
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar7 = *(long *)puVar3;
                  }
                  lVar7 = **(long **)(lVar7 + 0xb8);
                  if (*(int *)(*(long *)PTR_DAT_03cc9e20 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc9e20);
                  }
                  lVar10 = FUN_025ca588(0);
                  if (lVar10 == 0) goto LAB_01fc4ca8;
                  uVar6 = FUN_025ca734(lVar10,0);
                  if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc0330);
                  }
                  local_b0 = FUN_027ef518(0);
                  FUN_01ba9478(&local_b0,&local_110,*(undefined8 *)PTR_DAT_03cc1820);
                  if ((local_70 == 0) || (lVar7 == 0)) goto LAB_01fc4ca8;
                  FUN_027eb654(lVar7,uVar6,local_110 & 0xffffffff,*(undefined4 *)(local_70 + 0x30),2
                               ,(long)iStack_64,(long)local_68,0);
                }
                lVar7 = local_70;
                plStack_108 = &local_70;
                local_100 = (long)&uStack_b8 + 4;
                puStack_f8 = &local_88;
                local_110 = 0;
                local_f0 = &uStack_b8;
                piStack_e8 = &local_68;
                local_e0 = &iStack_64;
                puStack_d8 = &local_b0;
                uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ae8);
                FUN_020753a8(uVar8,lVar7,*(undefined8 *)(*(long *)(param_10 + 0x38) + 0x30),0);
                if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                FUN_01ff2a24(uVar8,*(undefined8 *)(local_70 + 0x18),1,
                             *(undefined8 *)PTR_DAT_03cd8af0);
                if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(long *)(local_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                local_a8 = *(undefined8 *)(*(long *)(local_70 + 0x18) + 0x20);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar9 = OVRManager__SetFoveatedRenderingLevel(&local_a8,0);
                if ((uVar9 & 1) != 0) {
                  FUN_027d9a54(&local_a0,0);
                }
                if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(long *)(local_70 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6b14(*(long *)(local_70 + 0x10),param_10);
                }
                FUN_01885264(&local_110);
                goto LAB_01fc4c78;
              }
            }
          }
        }
      }
    }
  }
LAB_01fc4ca8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


