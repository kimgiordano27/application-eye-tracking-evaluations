/*
FUNCTION_NAME: FUN_01fc4e88
ENTRY_POINT: 01fc4e88
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


/* WARNING: Removing unreachable block (ram,0x01fc55b8) */
/* WARNING: Removing unreachable block (ram,0x01fc54b0) */
/* WARNING: Removing unreachable block (ram,0x01fc5534) */

void FUN_01fc4e88(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong local_110;
  long *plStack_108;
  undefined4 *local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  undefined8 *puStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined *puVar9;
  
  plVar10 = *(long **)(param_11 + 0x38);
  if (plVar10 == (long *)0x0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc1820);
    FUN_01ab69ac(PTR_DAT_03cc17c8);
    FUN_01ab69ac(PTR_DAT_03cd8ac8);
    FUN_01ab69ac(PTR_DAT_03cd8b00);
    FUN_01ab69ac(PTR_DAT_03cc7210);
    FUN_01ab69ac(PTR_DAT_03cd8b08);
    FUN_01ab69ac(PTR_DAT_03cd8b10);
    FUN_01ab69ac(PTR_DAT_03cc9e20);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    plVar10 = *(long **)(param_11 + 0x38);
    if (plVar10 == (long *)0x0) {
      FUN_01a47054(param_11);
      plVar10 = *(long **)(param_11 + 0x38);
    }
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  if ((*(byte *)(*plVar10 + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar4 = thunk_FUN_01a89e68();
  FUN_020204e8(lVar4,*(undefined8 *)(*(long *)(param_11 + 0x38) + 8));
  local_68 = lVar4;
  if (lVar4 == 0) goto LAB_01fc555c;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x18),param_3);
  *(undefined8 *)(lVar4 + 0x30) = param_5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x30),param_5);
  *(undefined8 *)(lVar4 + 0x38) = param_6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x38),param_6);
  *(undefined8 *)(lVar4 + 0x40) = param_7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x40),param_7);
  *(undefined8 *)(lVar4 + 0x48) = param_8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x48),param_8);
  *(undefined8 *)(lVar4 + 0x50) = param_9;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x50),param_9);
  *(undefined8 *)(lVar4 + 0x68) = param_4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x68),param_4);
  *(undefined8 *)(lVar4 + 0x78) = param_10;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(lVar4 + 0x78),param_10);
  lVar5 = *(long *)(*(long *)(param_11 + 0x38) + 0x50);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (param_2 == (long *)0x0) {
LAB_01fc5078:
    plVar10 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar5 + 0x130)) goto LAB_01fc5078;
    plVar10 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar10 = (long *)0x0;
    }
  }
  plVar11 = (long *)(lVar4 + 0x58);
  *plVar11 = (long)plVar10;
  lVar5 = *(long *)(*(long *)(param_11 + 0x38) + 0x50);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (param_2 == (long *)0x0) {
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar5 + 0x130)) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar10 = (long *)0x0;
    }
  }
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,plVar10);
  uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  puVar9 = PTR_DAT_03cc9e10;
  if ((uVar6 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar7 = thunk_FUN_01a89e68();
    puVar9 = PTR_DAT_03cd8b20;
LAB_01fc558c:
    uVar8 = thunk_FUN_01a6ca08(puVar9);
    FUN_0276a4a8(uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,param_11);
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    local_a8 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d7fa0(&local_a8,0);
    if (local_68 != 0) {
      *(undefined4 *)(local_68 + 0x28) = 0;
      puVar2 = PTR_DAT_03cd8ac8;
      lVar4 = *(long *)PTR_DAT_03cd8ac8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar2;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        uVar6 = FUN_02726974(**(long **)(lVar4 + 0xb8),0);
        lVar4 = local_68;
        puVar1 = PTR_DAT_03cc7210;
        if ((uVar6 & 1) != 0) {
          lVar5 = *(long *)PTR_DAT_03cc7210;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *(long *)puVar1;
          }
          uVar3 = FusionStats__get_GraphColorBad(*(undefined8 *)(lVar5 + 0xb8),0);
          if (lVar4 == 0) goto LAB_01fc555c;
          *(undefined4 *)(lVar4 + 0x28) = uVar3;
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar2;
          }
          lVar4 = **(long **)(lVar4 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_03cc9e20 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc9e20);
          }
          lVar5 = FUN_025ca588(0);
          if (lVar5 == 0) goto LAB_01fc555c;
          uVar3 = FUN_025ca734(lVar5,0);
          if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc0330);
          }
          local_b0 = FUN_027ef518(0);
          FUN_01ba9478(&local_b0,&local_110,*(undefined8 *)PTR_DAT_03cc1820);
          if ((local_68 == 0) || (lVar4 == 0)) goto LAB_01fc555c;
          FUN_027eb654(lVar4,uVar3,local_110 & 0xffffffff,*(undefined4 *)(local_68 + 0x28),3,0,0,0);
        }
        lVar4 = local_68;
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8b00);
        FUN_027ebd74(uVar7,0);
        if (lVar4 != 0) {
          puVar12 = (undefined8 *)(lVar4 + 0x20);
          *puVar12 = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar7);
          local_80 = 0;
          uStack_78 = 0;
          local_70 = 0;
          if (local_68 != 0) {
            *(undefined8 *)(local_68 + 0x10) = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(local_68 + 0x10),0);
            if ((local_68 != 0) && (*(long *)(local_68 + 0x18) != 0)) {
              local_a8 = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x20);
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar6 = OVRManager__SetFoveatedRenderingLevel(&local_a8,0);
              lVar4 = local_68;
              if ((uVar6 & 1) == 0) {
                local_e0 = 0;
                uStack_d8 = 0;
                local_d0 = 0;
              }
              else {
                if ((local_68 == 0) || (*(long *)(local_68 + 0x18) == 0)) goto LAB_01fc555c;
                local_a8 = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x20);
                uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
                FUN_02060754(uVar7,lVar4,*(undefined8 *)(*(long *)(param_11 + 0x38) + 0x60),0);
                if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_027d7978(&local_110,&local_a8,uVar7,0,0,0);
                uStack_d8 = plStack_108;
                local_e0 = local_110;
                local_d0 = local_100;
              }
              uStack_98 = uStack_d8;
              local_a0 = local_e0;
              local_90 = local_d0;
              if (local_68 != 0) {
                *(undefined8 *)(local_68 + 0x70) = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(local_68 + 0x70),0);
                if (local_68 != 0) {
                  *(undefined8 *)(local_68 + 0x60) = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(local_68 + 0x60),0);
                  lVar4 = local_68;
                  if (local_68 != 0) {
                    plVar10 = *(long **)(local_68 + 0x58);
                    if (plVar10 == (long *)0x0) {
                      uVar7 = (**(code **)(*param_2 + 0x188))
                                        (param_2,*(undefined8 *)(*param_2 + 400));
                      puVar12 = (undefined8 *)(lVar4 + 0x70);
                      *puVar12 = uVar7;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (puVar12,uVar7);
                      if (local_68 == 0) goto LAB_01fc555c;
                      lVar5 = *(long *)(local_68 + 0x70);
                      lVar4 = local_68;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar10 + 0x198))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
                      puVar12 = (undefined8 *)(lVar4 + 0x60);
                      *puVar12 = uVar7;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (puVar12,uVar7);
                      if (local_68 == 0) goto LAB_01fc555c;
                      lVar5 = *(long *)(local_68 + 0x60);
                      lVar4 = local_68;
                    }
                    local_68 = lVar4;
                    if (lVar5 != 0) {
                      plStack_108 = &local_68;
                      local_100 = &local_b4;
                      puStack_f8 = &local_80;
                      local_f0 = &local_c0;
                      local_110 = 0;
                      puStack_e8 = &local_b0;
                      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8b08);
                      FUN_020753a8(uVar7,lVar4,*(undefined8 *)(*(long *)(param_11 + 0x38) + 0x88),0)
                      ;
                      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      FUN_01ff2a24(uVar7,*(undefined8 *)(local_68 + 0x18),1,
                                   *(undefined8 *)PTR_DAT_03cd8b10);
                      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      local_a8 = *(undefined8 *)(*(long *)(local_68 + 0x18) + 0x20);
                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar6 = OVRManager__SetFoveatedRenderingLevel(&local_a8,0);
                      if ((uVar6 & 1) != 0) {
                        FUN_027d9a54(&local_a0,0);
                      }
                      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(long *)(local_68 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(*(long *)(local_68 + 0x10),param_11);
                      }
                      FUN_01885478(&local_110);
                      param_1[2] = local_70;
                      param_1[1] = uStack_78;
                      *param_1 = local_80;
                      return;
                    }
                    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
                    uVar7 = thunk_FUN_01a89e68();
                    puVar9 = PTR_DAT_03cd8b18;
                    goto LAB_01fc558c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01fc555c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


