/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentNotificationMarkdownText
ENTRY_POINT: 05163dd0
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


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentNotificationMarkdownText
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  code *pcVar12;
  int *in_x10;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x26;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05163e00;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
LAB_05163e00:
  lVar6 = (*(code *)*puVar5)();
  if (lVar6 == 0) goto LAB_05164658;
  FUN_03aaceb0(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_06782520);
  puVar3 = PTR_DAT_06782510;
  puVar2 = PTR_DAT_0676bca0;
  puVar1 = PTR_DAT_0676bc98;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar7 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar3), plVar9 = in_stack_00000030,
        (uVar7 & 1) != 0) {
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar6 = *in_stack_00000030;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 8) * 0x10 + 0x138);
          goto LAB_05163eb4;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x26,8);
LAB_05163eb4:
    uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    uVar7 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_05163f20;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,1);
LAB_05163f20:
      uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      uVar7 = FUN_04e8c024(uVar8,*(undefined8 *)puVar2,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_05163fa4;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,1);
LAB_05163fa4:
        uVar8 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0566e384(uVar8,0);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 5) * 0x10 + 0x138);
            goto OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,5);
OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow:
      auVar14 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (auVar14._0_8_ == 0) {
        thunk_FUN_02dc61f4(PTR_DAT_067699f0,auVar14._8_8_,0);
        uVar8 = thunk_FUN_02d9d534();
        uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782598);
        thunk_FUN_050931fc(uVar8,uVar10,0);
        uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067825a0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar8,uVar10);
      }
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
  }
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
  if ((unaff_x23 & 1) != 0) {
    FUN_05164b1c();
    if (unaff_x19 == (long *)0x0) goto LAB_05164658;
    (**(code **)(*unaff_x19 + 0x5d8))();
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
        goto LAB_051640e8;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051640e8:
  uVar8 = (*(code *)*puVar5)();
  uVar7 = FUN_0516619c(uVar8,uVar8);
  if ((uVar7 & 1) == 0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_05164150;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164150:
    lVar6 = (*(code *)*puVar5)();
    if (lVar6 == 0) goto LAB_05164658;
    if (*(int *)(lVar6 + 0x18) == 1) {
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_051641bc;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051641bc:
      lVar6 = (*(code *)*puVar5)();
      puVar1 = PTR_DAT_06782408;
      if ((lVar6 == 0) ||
         (plVar9 = (long *)FUN_03aac1c4(lVar6,0,*(undefined8 *)PTR_DAT_06782408),
         plVar9 == (long *)0x0)) goto LAB_05164658;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05164234;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,0);
LAB_05164234:
      iVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (iVar4 == 3) {
        lVar6 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_05164554;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164554:
        lVar6 = (*(code *)*puVar5)();
        if ((lVar6 != 0) &&
           (plVar9 = (long *)FUN_03aac1c4(lVar6,0,*(undefined8 *)puVar1), plVar9 != (long *)0x0)) {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_051645c8;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x26,5);
LAB_051645c8:
          (*(code *)*puVar5)(plVar9,puVar5[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_05164658;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_051644a0;
        }
        goto LAB_05164658;
      }
    }
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
        goto LAB_051642d8;
      }
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051642d8:
  lVar6 = (*(code *)*puVar5)();
  if (lVar6 == 0) goto LAB_05164658;
  if (*(int *)(lVar6 + 0x18) == 0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_05164340;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
    lVar6 = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_06782540;
    if (lVar6 == 0) goto LAB_05164658;
    if (*(int *)(lVar6 + 0x18) == 0) {
      lVar6 = thunk_FUN_02d9d438();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar6 = *(long *)puVar1;
      plVar9 = (long *)thunk_FUN_02d9d438();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar11 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_05164604;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar6,2);
LAB_05164604:
      uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((uVar7 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_051644a0;
        }
      }
      else if (unaff_x19 != (long *)0x0) {
        pcVar12 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
        (*pcVar12)();
LAB_051644a0:
        (**(code **)(*unaff_x20 + 0x1e8))();
        return;
      }
      goto LAB_05164658;
    }
  }
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x578))();
    puVar1 = PTR_DAT_06782408;
    iVar4 = 0;
    do {
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_051643cc;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
      lVar6 = (*(code *)*puVar5)();
      if (lVar6 == 0) break;
      if (*(int *)(lVar6 + 0x18) <= iVar4) {
        FUN_051652f4();
        pcVar12 = *(code **)(*unaff_x19 + 0x588);
        goto LAB_05164498;
      }
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_05164438;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
      lVar6 = (*(code *)*puVar5)();
      if (lVar6 == 0) break;
      FUN_03aac1c4(lVar6,iVar4,*(undefined8 *)puVar1);
      FUN_05163090();
      iVar4 = iVar4 + 1;
    } while( true );
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


