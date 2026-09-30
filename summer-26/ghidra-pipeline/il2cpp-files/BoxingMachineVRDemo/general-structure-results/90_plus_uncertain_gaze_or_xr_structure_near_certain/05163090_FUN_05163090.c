/*
FUNCTION_NAME: FUN_05163090
ENTRY_POINT: 05163090
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05163090(undefined8 param_1,long *param_2,long *param_3,long *param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_06b79e6b & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782508);
    FUN_02d6084c(PTR_DAT_06782510);
    FUN_02d6084c(PTR_DAT_06782518);
    FUN_02d6084c(PTR_DAT_06782530);
    FUN_02d6084c(PTR_DAT_06782538);
    FUN_02d6084c(PTR_DAT_06782540);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_06782520);
    FUN_02d6084c(PTR_DAT_06782400);
    FUN_02d6084c(PTR_DAT_06782408);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(PTR_DAT_0677d900);
    FUN_02d6084c(PTR_DAT_06782550);
    FUN_02d6084c(PTR_DAT_06782558);
    FUN_02d6084c(PTR_DAT_0676bc98);
    FUN_02d6084c(PTR_DAT_06782560);
    FUN_02d6084c(PTR_DAT_06782568);
    FUN_02d6084c(PTR_DAT_06782570);
    FUN_02d6084c(PTR_DAT_06782578);
    FUN_02d6084c(PTR_DAT_0676bca0);
    FUN_02d6084c(PTR_DAT_06782580);
    FUN_02d6084c(PTR_DAT_06782588);
    FUN_02d6084c(PTR_DAT_06782590);
    DAT_06b79e6b = 1;
  }
  puVar3 = PTR_DAT_067823f0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if (param_3 == (long *)0x0) goto LAB_05164658;
  lVar11 = *param_3;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067823f0) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_05163248;
      }
      uVar13 = uVar13 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)PTR_DAT_067823f0,0);
LAB_05163248:
  uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
  puVar2 = PTR_DAT_06782538;
  puVar1 = PTR_DAT_06782530;
  switch((int)uVar8) {
  case 1:
    uVar13 = FUN_05164f5c(uVar8,param_3);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar13 = FUN_05165ef0(param_3);
      if ((uVar13 & 1) != 0) {
        lVar11 = *param_3;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_05163d68;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,2);
LAB_05163d68:
        lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
        if (lVar11 == 0) break;
        if (0 < *(int *)(lVar11 + 0x18)) {
          param_5 = 0;
          goto LAB_051632cc;
        }
      }
    }
    if (param_4 == (long *)0x0) break;
    (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_05163e00;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,3);
LAB_05163e00:
    lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if (lVar11 == 0) break;
    FUN_03aaceb0(&local_98,lVar11,*(undefined8 *)PTR_DAT_06782520);
    puVar4 = PTR_DAT_06782510;
    puVar2 = PTR_DAT_0676bca0;
    puVar1 = PTR_DAT_0676bc98;
    local_70 = (long *)CONCAT44(uStack_84,local_88);
    uStack_78 = uStack_90;
    local_80 = local_98;
    while (uVar13 = FUN_04a7a4a0(&local_80,*(undefined8 *)puVar4), plVar9 = local_70,
          (uVar13 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar11 = *local_70;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_05163eb4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(local_70,*(long *)puVar3,8);
LAB_05163eb4:
      uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      uVar13 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar1,0);
      if ((uVar13 & 1) != 0) {
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_05163f20;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,1);
LAB_05163f20:
        uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        uVar13 = FUN_04e8c024(uVar8,*(undefined8 *)puVar2,0);
        if ((uVar13 & 1) == 0) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
        }
        else {
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_05163fa4;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,1);
LAB_05163fa4:
          uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar8 = FUN_0566e384(uVar8,0);
        }
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
              goto OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,5);
OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow:
        auVar16 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (auVar16._0_8_ == 0) {
          thunk_FUN_02dc61f4(PTR_DAT_067699f0,auVar16._8_8_,0);
          uVar8 = thunk_FUN_02d9d534();
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782598);
          thunk_FUN_050931fc(uVar8,uVar10,0);
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067825a0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar8,uVar10);
        }
        (**(code **)(*param_4 + 0x1f8))
                  (param_4,uVar8,auVar16._0_8_,*(undefined8 *)(*param_4 + 0x200));
      }
    }
    uVar8 = FUN_04a7a49c(&local_80,*(undefined8 *)PTR_DAT_06782508);
    if ((param_5 & 1) != 0) {
      uVar8 = FUN_05164b1c(uVar8,param_3,param_4);
      if (param_2 == (long *)0x0) break;
      (**(code **)(*param_2 + 0x5d8))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x5e0));
    }
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_051640e8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,3);
LAB_051640e8:
    uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
    uVar13 = FUN_0516619c(uVar8,uVar8);
    if ((uVar13 & 1) == 0) {
      lVar11 = *param_3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_05164150;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,2);
LAB_05164150:
      lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
      if (lVar11 == 0) break;
      if (*(int *)(lVar11 + 0x18) == 1) {
        lVar11 = *param_3;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_051641bc;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,2);
LAB_051641bc:
        lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
        puVar1 = PTR_DAT_06782408;
        if ((lVar11 == 0) ||
           (plVar9 = (long *)FUN_03aac1c4(lVar11,0,*(undefined8 *)PTR_DAT_06782408),
           plVar9 == (long *)0x0)) break;
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05164234;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,0);
LAB_05164234:
        iVar5 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (iVar5 == 3) {
          lVar11 = *param_3;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_05164554;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,2);
LAB_05164554:
          lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
          if ((lVar11 == 0) ||
             (plVar9 = (long *)FUN_03aac1c4(lVar11,0,*(undefined8 *)puVar1), plVar9 == (long *)0x0))
          break;
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto LAB_051645c8;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar3,5);
LAB_051645c8:
          uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if (param_2 == (long *)0x0) break;
          (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
          goto LAB_051644a0;
        }
      }
    }
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_051642d8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,2);
LAB_051642d8:
    lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) {
        lVar11 = *param_3;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_05164340;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,3);
LAB_05164340:
        lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
        puVar1 = PTR_DAT_06782540;
        if (lVar11 == 0) break;
        if (*(int *)(lVar11 + 0x18) == 0) {
          uVar8 = *(undefined8 *)PTR_DAT_06782540;
          lVar11 = thunk_FUN_02d9d438(param_3,uVar8);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(param_3,uVar8);
          }
          lVar11 = *(long *)puVar1;
          plVar9 = (long *)thunk_FUN_02d9d438(param_3,lVar11);
          if (plVar9 == (long *)0x0) goto LAB_051646a8;
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_05164604;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar11,2);
LAB_05164604:
          uVar13 = (*(code *)*puVar7)(plVar9,puVar7[1]);
          if ((uVar13 & 1) == 0) {
            if (param_2 == (long *)0x0) break;
            (**(code **)(*param_2 + 0x698))
                      (param_2,**(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                       *(undefined8 *)(*param_2 + 0x6a0));
          }
          else {
            if (param_2 == (long *)0x0) break;
            pcVar14 = *(code **)(*param_2 + 0x658);
            uVar8 = *(undefined8 *)(*param_2 + 0x660);
LAB_05164498:
            (*pcVar14)(param_2,uVar8);
          }
LAB_051644a0:
          (**(code **)(*param_4 + 0x1e8))(param_4,*(undefined8 *)(*param_4 + 0x1f0));
          return;
        }
      }
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
        puVar1 = PTR_DAT_06782408;
        iVar5 = 0;
        do {
          lVar11 = *param_3;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                goto LAB_051643cc;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,3);
LAB_051643cc:
          lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
          if (lVar11 == 0) break;
          if (*(int *)(lVar11 + 0x18) <= iVar5) {
            FUN_051652f4(param_1,param_2,param_3,param_4,1);
            pcVar14 = *(code **)(*param_2 + 0x588);
            uVar8 = *(undefined8 *)(*param_2 + 0x590);
            goto LAB_05164498;
          }
          lVar11 = *param_3;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                goto LAB_05164438;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,3);
LAB_05164438:
          lVar11 = (*(code *)*puVar7)(param_3,puVar7[1]);
          if (lVar11 == 0) break;
          uVar8 = FUN_03aac1c4(lVar11,iVar5,*(undefined8 *)puVar1);
          FUN_05163090(param_1,param_2,uVar8,param_4,1);
          iVar5 = iVar5 + 1;
        } while( true );
      }
    }
    break;
  case 2:
  case 3:
  case 4:
  case 7:
  case 0xd:
  case 0xe:
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_051632e4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,8);
LAB_051632e4:
    uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
    uVar13 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_0676bc98,0);
    if ((uVar13 & 1) != 0) {
      lVar11 = *param_3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
            goto LAB_05163544;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,5);
LAB_05163544:
      uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
      uVar13 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_06782550,0);
      if ((uVar13 & 1) != 0) {
        return;
      }
    }
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_051635b8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,8);
LAB_051635b8:
    uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
    uVar13 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar13 & 1) != 0) {
      lVar11 = *param_3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0516362c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,1);
LAB_0516362c:
      uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
      uVar13 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)PTR_DAT_06782580,0);
      if ((uVar13 & 1) != 0) {
        return;
      }
    }
    if ((param_5 & 1) != 0) {
      uVar8 = FUN_05164b1c(uVar13,param_3,param_4);
      if (param_2 == (long *)0x0) break;
      (**(code **)(*param_2 + 0x5d8))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x5e0));
    }
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto LAB_051636cc;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,5);
LAB_051636cc:
    uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if (param_2 != (long *)0x0) {
      pcVar14 = *(code **)(*param_2 + 0x698);
      uVar10 = *(undefined8 *)(*param_2 + 0x6a0);
LAB_051636ec:
      (*pcVar14)(param_2,uVar8,uVar10);
      return;
    }
    break;
  default:
    FUN_028f4e40(param_3);
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067823f0);
    uVar6 = FUN_028f925c(0,uVar8,param_3);
    local_98 = thunk_FUN_02dc61f4(PTR_DAT_067825a8);
    uStack_90 = 0xffffffffffffffff;
    local_88 = uVar6;
    uVar8 = FUN_0503c914(&local_98,0);
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067825b0);
    uVar8 = FUN_04e83184(uVar10,uVar8,0);
    thunk_FUN_02dc61f4(PTR_DAT_067699f0);
    uVar10 = thunk_FUN_02d9d534();
    thunk_FUN_050931fc(uVar10,uVar8,0);
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067825a0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar10,uVar8);
  case 8:
    if ((param_5 & 1) == 0) {
      return;
    }
    lVar11 = *param_3;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar3,5);
OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent:
    uVar8 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if (param_2 != (long *)0x0) {
      pcVar14 = *(code **)(*param_2 + 0x8f8);
      uVar10 = *(undefined8 *)(*param_2 + 0x900);
      goto LAB_051636ec;
    }
    break;
  case 9:
  case 0xb:
    param_5 = param_5 & 1;
LAB_051632cc:
    FUN_051652f4(param_1,param_2,param_3,param_4,param_5);
    return;
  case 10:
    lVar11 = *(long *)PTR_DAT_06782538;
    plVar9 = (long *)thunk_FUN_02d9d438(param_3,lVar11);
    if (plVar9 == (long *)0x0) {
LAB_051646a8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_3,lVar11);
    }
    uVar8 = FUN_05164b1c(plVar9,param_3,param_4);
    if (param_2 == (long *)0x0) break;
    (**(code **)(*param_2 + 0x5d8))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x5e0));
    (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05163788;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,0);
LAB_05163788:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*param_2 + 0x5d8))
                (param_2,*(undefined8 *)PTR_DAT_06782578,*(undefined8 *)(*param_2 + 0x5e0));
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05163a28;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,0);
LAB_05163a28:
      uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
    }
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_05163a9c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,2);
LAB_05163a9c:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*param_2 + 0x5d8))
                (param_2,*(undefined8 *)PTR_DAT_06782590,*(undefined8 *)(*param_2 + 0x5e0));
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_05163b24;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,2);
LAB_05163b24:
      uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
    }
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_05163b98;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,1);
LAB_05163b98:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*param_2 + 0x5d8))
                (param_2,*(undefined8 *)PTR_DAT_06782570,*(undefined8 *)(*param_2 + 0x5e0));
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_05163c20;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,1);
LAB_05163c20:
      uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
    }
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_05163c94;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,3);
LAB_05163c94:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) != 0) goto LAB_05163d40;
    (**(code **)(*param_2 + 0x5d8))
              (param_2,*(undefined8 *)PTR_DAT_06782568,*(undefined8 *)(*param_2 + 0x5e0));
    lVar12 = *plVar9;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) goto LAB_05163d0c;
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    goto LAB_05163cfc;
  case 0x11:
    lVar11 = *(long *)PTR_DAT_06782530;
    plVar9 = (long *)thunk_FUN_02d9d438(param_3,lVar11);
    if (plVar9 == (long *)0x0) goto LAB_051646a8;
    uVar8 = FUN_05164b1c(plVar9,param_3,param_4);
    if (param_2 == (long *)0x0) break;
    (**(code **)(*param_2 + 0x5d8))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x5e0));
    (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05163704;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_05163704:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*param_2 + 0x5d8))
                (param_2,*(undefined8 *)PTR_DAT_06782560,*(undefined8 *)(*param_2 + 0x5e0));
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05163840;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_05163840:
      uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
    }
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_051638b4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,1);
LAB_051638b4:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*param_2 + 0x5d8))
                (param_2,*(undefined8 *)PTR_DAT_06782588,*(undefined8 *)(*param_2 + 0x5e0));
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_0516393c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,1);
LAB_0516393c:
      uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
    }
    lVar11 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_051639b0;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,3);
LAB_051639b0:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    uVar13 = FUN_050f0eb8(uVar8,0);
    if ((uVar13 & 1) != 0) goto LAB_05163d40;
    (**(code **)(*param_2 + 0x5d8))
              (param_2,*(undefined8 *)PTR_DAT_06782558,*(undefined8 *)(*param_2 + 0x5e0));
    lVar12 = *plVar9;
    lVar11 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) goto LAB_05163d0c;
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
LAB_05163cfc:
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar11,3);
LAB_05163d1c:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    (**(code **)(*param_2 + 0x698))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x6a0));
LAB_05163d40:
    (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
    return;
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05163d0c:
  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
  goto LAB_05163d1c;
}


