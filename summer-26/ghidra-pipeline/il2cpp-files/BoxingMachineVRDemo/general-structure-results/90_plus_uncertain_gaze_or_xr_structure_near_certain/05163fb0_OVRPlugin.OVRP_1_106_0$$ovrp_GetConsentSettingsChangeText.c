/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentSettingsChangeText
ENTRY_POINT: 05163fb0
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


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentSettingsChangeText(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar12 [16];
  long *in_stack_00000030;
  
  do {
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0566e384(param_1,0);
    do {
      lVar7 = *unaff_x24;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(unaff_x24,*unaff_x26,5);
OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow:
      auVar12 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
      if (auVar12._0_8_ == 0) {
        thunk_FUN_02dc61f4(PTR_DAT_067699f0,auVar12._8_8_,0);
        uVar3 = thunk_FUN_02d9d534();
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06782598);
        thunk_FUN_050931fc(uVar3,uVar6,0);
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067825a0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar3,uVar6);
      }
      (**(code **)(*unaff_x20 + 0x1f8))();
      do {
        uVar9 = FUN_04a7a4a0(&stack0x00000020,*unaff_x28);
        unaff_x24 = in_stack_00000030;
        if ((uVar9 & 1) == 0) {
          FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
          if ((unaff_x23 & 1) != 0) {
            FUN_05164b1c();
            if (unaff_x19 == (long *)0x0) goto LAB_05164658;
            (**(code **)(*unaff_x19 + 0x5d8))();
          }
          lVar7 = *unaff_x21;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_051640c8;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_051640b0;
        }
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar7 = *in_stack_00000030;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_05163eb4;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(in_stack_00000030,*unaff_x26,8);
LAB_05163eb4:
        uVar3 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
        uVar9 = thunk_FUN_04e8bd3c(uVar3,*unaff_x29,0);
      } while ((uVar9 & 1) == 0);
      lVar7 = *unaff_x24;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_05163f20;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(unaff_x24,*unaff_x26,1);
LAB_05163f20:
      uVar3 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
      uVar9 = FUN_04e8c024(uVar3,*unaff_x27,0);
    } while ((uVar9 & 1) == 0);
    lVar7 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_05163fa4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(unaff_x24,*unaff_x26,1);
LAB_05163fa4:
    param_1 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_051640b0:
    if (*(long *)(piVar11 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_051640e8;
    }
  }
LAB_051640c8:
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051640e8:
  uVar3 = (*(code *)*puVar4)();
  uVar9 = FUN_0516619c(uVar3,uVar3);
  if ((uVar9 & 1) == 0) {
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_05164150;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05164150:
    lVar7 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_05164658;
    if (*(int *)(lVar7 + 0x18) == 1) {
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_051641bc;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051641bc:
      lVar7 = (*(code *)*puVar4)();
      puVar1 = PTR_DAT_06782408;
      if ((lVar7 == 0) ||
         (plVar5 = (long *)FUN_03aac1c4(lVar7,0,*(undefined8 *)PTR_DAT_06782408),
         plVar5 == (long *)0x0)) goto LAB_05164658;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05164234;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,0);
LAB_05164234:
      iVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (iVar2 == 3) {
        lVar7 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_05164554;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05164554:
        lVar7 = (*(code *)*puVar4)();
        if ((lVar7 != 0) &&
           (plVar5 = (long *)FUN_03aac1c4(lVar7,0,*(undefined8 *)puVar1), plVar5 != (long *)0x0)) {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_051645c8;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,5);
LAB_051645c8:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_05164658;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_051644a0;
        }
        goto LAB_05164658;
      }
    }
  }
  lVar7 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_051642d8;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051642d8:
  lVar7 = (*(code *)*puVar4)();
  if (lVar7 == 0) goto LAB_05164658;
  if (*(int *)(lVar7 + 0x18) == 0) {
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_05164340;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
    lVar7 = (*(code *)*puVar4)();
    puVar1 = PTR_DAT_06782540;
    if (lVar7 == 0) goto LAB_05164658;
    if (*(int *)(lVar7 + 0x18) == 0) {
      lVar7 = thunk_FUN_02d9d438();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar7 = *(long *)puVar1;
      plVar5 = (long *)thunk_FUN_02d9d438();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_05164604;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar7,2);
LAB_05164604:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_051644a0;
        }
      }
      else if (unaff_x19 != (long *)0x0) {
        pcVar10 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
        (*pcVar10)();
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
    iVar2 = 0;
    do {
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_051643cc;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
      lVar7 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) <= iVar2) {
        FUN_051652f4();
        pcVar10 = *(code **)(*unaff_x19 + 0x588);
        goto LAB_05164498;
      }
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_05164438;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
      lVar7 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      FUN_03aac1c4(lVar7,iVar2,*(undefined8 *)puVar1);
      FUN_05163090();
      iVar2 = iVar2 + 1;
    } while( true );
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


