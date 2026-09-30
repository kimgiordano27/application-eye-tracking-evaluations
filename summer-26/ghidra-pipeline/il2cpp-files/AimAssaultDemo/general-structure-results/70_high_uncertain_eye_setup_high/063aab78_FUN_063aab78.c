/*
FUNCTION_NAME: FUN_063aab78
ENTRY_POINT: 063aab78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_063aab78(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  int *piVar14;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  
                    /* try { // try from 063aab78 to 064aab8f has its CatchHandler @ 063aabc4 */
  if ((DAT_0825c6b7 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6d18);
    FUN_0373b518(PTR_DAT_07db6d20);
    FUN_0373b518(PTR_DAT_07db6d28);
    FUN_0373b518(PTR_DAT_07db6e20);
    FUN_0373b518(PTR_DAT_07db6d50);
    FUN_0373b518(PTR_DAT_07db6c00);
    FUN_0373b518(PTR_DAT_07db6d30);
    DAT_0825c6b7 = 1;
  }
  puVar3 = PTR_DAT_07db6d50;
  puVar2 = PTR_DAT_07db6d20;
  puVar1 = PTR_DAT_07db6c00;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (param_2 != (long *)0x0) {
    do {
      iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar4 == 3) {
        plVar7 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar7 == (long *)0x0) break;
        uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        pcVar13 = *(code **)(*param_2 + 0x288);
        uVar10 = *(undefined8 *)(*param_2 + 0x290);
        while ((uVar12 = (*pcVar13)(param_2,uVar10), (uVar12 & 1) != 0 &&
               (iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
               iVar4 != 0xf))) {
          FUN_063ab330(param_1,param_2,param_3,param_4,uVar9,param_5);
          pcVar13 = *(code **)(*param_2 + 0x288);
          uVar10 = *(undefined8 *)(*param_2 + 0x290);
        }
      }
      else if (iVar4 == 4) {
        if (param_5 == (long *)0x0) break;
        lVar11 = *param_5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_063aadbc;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(param_5,*(long *)puVar1,0);
LAB_063aadbc:
        iVar4 = (*(code *)*puVar8)(param_5,puVar8[1]);
        if (iVar4 == 9) {
          if (param_3 == (long *)0x0) break;
          lVar11 = *param_3;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db6e20) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
                goto LAB_063aaeb4;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0377596c(param_3,*(long *)PTR_DAT_07db6e20,0xc);
LAB_063aaeb4:
          lVar11 = (*(code *)*puVar8)(param_3,puVar8[1]);
          if (lVar11 != 0) {
            uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6e98);
            goto LAB_063ab260;
          }
        }
        plVar7 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar7 == (long *)0x0) break;
        uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey(param_2,0);
        iVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar4 == 2) {
          uVar12 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
          if ((uVar12 & 1) != 0) {
            iVar4 = 0;
            do {
              iVar5 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
              if (iVar5 == 0xe) break;
              FUN_063ab330(param_1,param_2,param_3,param_4,uVar9,param_5);
              iVar4 = iVar4 + 1;
              uVar12 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
            } while ((uVar12 & 1) != 0);
            if ((iVar4 == 1) && (*(char *)(param_1 + 0x18) != '\0')) {
              FUN_0632ed64(uVar9,&local_68,&local_70,0);
              uVar12 = FUN_063349dc(local_68,0);
              if ((uVar12 & 1) == 0) {
                if (param_4 == (long *)0x0) break;
                uVar9 = (**(code **)(*param_4 + 0x238))
                                  (param_4,local_68,*(undefined8 *)(*param_4 + 0x240));
              }
              else {
                if (param_4 == (long *)0x0) break;
                uVar9 = (**(code **)(*param_4 + 0x1c8))(param_4,*(undefined8 *)(*param_4 + 0x1d0));
              }
              lVar11 = *param_5;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime;
                  }
                  uVar12 = uVar12 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_0377596c(param_5,*(long *)puVar1,2);
OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameWithPoseTime:
              lVar11 = (*(code *)*puVar8)(param_5,puVar8[1]);
              if (lVar11 == 0) break;
              FUN_049cf910(&local_a8,lVar11,*(undefined8 *)PTR_DAT_07db6d30);
              local_80 = CONCAT44(uStack_94,local_98);
              uStack_88 = uStack_a0;
              local_90 = local_a8;
              do {
                do {
                  do {
                    uVar12 = FUN_05d64e98(&local_90,*(undefined8 *)puVar2);
                    if ((uVar12 & 1) == 0) goto LAB_063ab17c;
                    plVar7 = (long *)thunk_FUN_037787d0(local_80,*(undefined8 *)puVar3);
                  } while (plVar7 == (long *)0x0);
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_063ab0e8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,1);
LAB_063ab0e8:
                  uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  uVar12 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                     (uVar10,local_70,0);
                } while ((uVar12 & 1) == 0);
                lVar11 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                      goto LAB_063ab154;
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar12 != 0);
                }
                puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,8);
LAB_063ab154:
                uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                uVar12 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar10,uVar9,0)
                ;
              } while ((uVar12 & 1) == 0);
              FUN_063ade08(uVar12,plVar7,param_3);
LAB_063ab17c:
              FUN_05d64e94(&local_90,*(undefined8 *)PTR_DAT_07db6d18);
            }
          }
        }
        else {
          FUN_063ab330(param_1,param_2,param_3,param_4,uVar9,param_5);
        }
      }
      else {
        if (iVar4 != 5) {
          if (iVar4 - 0xdU < 2) {
            return;
          }
          FUN_031a5e18(param_2);
          uVar6 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          local_a8 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
          uStack_a0 = 0xffffffffffffffff;
          local_98 = uVar6;
          uVar9 = FUN_06278b80(&local_a8,0);
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ea8);
          uVar9 = System_Convert__ToInt32(uVar10,uVar9,0);
LAB_063ab260:
          uVar9 = FUN_062d5fcc(param_2,uVar9,0);
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6ea0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,uVar10);
        }
        plVar7 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (param_3 == (long *)0x0) break;
        if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(PTR_DAT_07d86548 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar7,*(long *)(PTR_DAT_07d86548 + 0x90));
        }
        lVar11 = *param_3;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_063aae28;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(param_3,*(long *)PTR_DAT_07db6e20,0);
LAB_063aae28:
        uVar9 = (*(code *)*puVar8)(param_3,plVar7,puVar8[1]);
        if (param_5 == (long *)0x0) break;
        lVar11 = *param_5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 7) * 0x10 + 0x138);
              goto LAB_063aae90;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(param_5,*(long *)puVar1,7);
LAB_063aae90:
        (*(code *)*puVar8)(param_5,uVar9,puVar8[1]);
      }
      uVar12 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
      if ((uVar12 & 1) == 0) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


