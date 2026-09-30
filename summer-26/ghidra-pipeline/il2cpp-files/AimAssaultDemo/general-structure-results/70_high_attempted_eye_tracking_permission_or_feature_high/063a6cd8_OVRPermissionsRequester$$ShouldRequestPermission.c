/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 063a6cd8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  int *piVar15;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x228));
  FUN_0373b518(PTR_DAT_07db6d90);
  FUN_0373b518(PTR_DAT_07db6d98);
  FUN_0373b518(PTR_DAT_07db6da0);
  *(undefined1 *)(unaff_x24 + 0x6a9) = 1;
  puVar3 = PTR_DAT_07db6c00;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (unaff_x21 == (long *)0x0) goto LAB_063a817c;
  lVar11 = *unaff_x21;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db6c00) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_063a6d6c;
      }
      uVar13 = uVar13 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a6d6c:
  uVar5 = (*(code *)*puVar7)();
  puVar2 = PTR_DAT_07db6d48;
  puVar1 = PTR_DAT_07db6d40;
  switch(uVar5) {
  case 1:
    uVar13 = FUN_063a8a80();
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar13 = FUN_063a9a14();
      if ((uVar13 & 1) != 0) {
        lVar11 = *unaff_x21;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_063a788c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a788c:
        lVar11 = (*(code *)*puVar7)();
        if (lVar11 == 0) break;
        if (0 < *(int *)(lVar11 + 0x18)) goto LAB_063a6df0;
      }
    }
    if (unaff_x20 == (long *)0x0) break;
    (**(code **)(*unaff_x20 + 0x1d8))();
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_063a7924;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7924:
    lVar11 = (*(code *)*puVar7)();
    if (lVar11 == 0) break;
    FUN_049cf910(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_07db6d30);
    puVar4 = PTR_DAT_07db6d20;
    puVar2 = PTR_DAT_07d9b228;
    puVar1 = PTR_DAT_07d9b220;
    in_stack_00000030 = (long *)CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    while (uVar13 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar4), plVar8 = in_stack_00000030
          , (uVar13 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar11 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_063a79d8;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(in_stack_00000030,*(long *)puVar3,8);
LAB_063a79d8:
      uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      uVar13 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                         (uVar9,*(undefined8 *)puVar1,0);
      if ((uVar13 & 1) != 0) {
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_063a7a44;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,1);
LAB_063a7a44:
        uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        uVar13 = FUN_060bf954(uVar9,*(undefined8 *)puVar2,0);
        if ((uVar13 & 1) != 0) {
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_063a7ac8;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,1);
LAB_063a7ac8:
          uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_06a0dde8(uVar9,0);
        }
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
              goto LAB_063a7b50;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,5);
LAB_063a7b50:
        auVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if (auVar16._0_8_ == 0) {
          thunk_FUN_037a15ac(PTR_DAT_07d98df0,auVar16._8_8_,0);
          uVar9 = thunk_FUN_037788cc();
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6da8);
          thunk_FUN_062d6d20(uVar9,uVar10,0);
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6db0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,uVar10);
        }
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
    if ((unaff_x23 & 1) != 0) {
      FUN_063a8640();
      if (unaff_x19 == (long *)0x0) break;
      (**(code **)(*unaff_x19 + 0x5d8))();
    }
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_063a7c0c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7c0c:
    uVar9 = (*(code *)*puVar7)();
    uVar13 = FUN_063a9cc0(uVar9,uVar9);
    if ((uVar13 & 1) == 0) {
      lVar11 = *unaff_x21;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_063a7c74;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7c74:
      lVar11 = (*(code *)*puVar7)();
      if (lVar11 == 0) break;
      if (*(int *)(lVar11 + 0x18) == 1) {
        lVar11 = *unaff_x21;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_063a7ce0;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7ce0:
        lVar11 = (*(code *)*puVar7)();
        puVar1 = PTR_DAT_07db6c18;
        if ((lVar11 == 0) ||
           (plVar8 = (long *)FUN_049cec24(lVar11,0,*(undefined8 *)PTR_DAT_07db6c18),
           plVar8 == (long *)0x0)) break;
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_063a7d58;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,0);
LAB_063a7d58:
        iVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if (iVar6 == 3) {
          lVar11 = *unaff_x21;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_063a8078;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a8078:
          lVar11 = (*(code *)*puVar7)();
          if ((lVar11 == 0) ||
             (plVar8 = (long *)FUN_049cec24(lVar11,0,*(undefined8 *)puVar1), plVar8 == (long *)0x0))
          break;
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto LAB_063a80ec;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar3,5);
LAB_063a80ec:
          (*(code *)*puVar7)(plVar8,puVar7[1]);
          if (unaff_x19 == (long *)0x0) break;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
      }
    }
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_063a7dfc;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7dfc:
    lVar11 = (*(code *)*puVar7)();
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) {
        lVar11 = *unaff_x21;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_063a7e64;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7e64:
        lVar11 = (*(code *)*puVar7)();
        puVar1 = PTR_DAT_07db6d50;
        if (lVar11 == 0) break;
        if (*(int *)(lVar11 + 0x18) == 0) {
          lVar11 = thunk_FUN_037787d0();
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          lVar11 = *(long *)puVar1;
          plVar8 = (long *)thunk_FUN_037787d0();
          if (plVar8 == (long *)0x0) goto LAB_063a81cc;
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_063a8128;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar11,2);
LAB_063a8128:
          uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
          if ((uVar13 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) break;
            (**(code **)(*unaff_x19 + 0x698))();
          }
          else {
            if (unaff_x19 == (long *)0x0) break;
            pcVar14 = *(code **)(*unaff_x19 + 0x658);
LAB_063a7fbc:
            (*pcVar14)();
          }
LAB_063a7fc4:
          (**(code **)(*unaff_x20 + 0x1e8))();
          return;
        }
      }
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x578))();
        puVar1 = PTR_DAT_07db6c18;
        iVar6 = 0;
        do {
          lVar11 = *unaff_x21;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                goto LAB_063a7ef0;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7ef0:
          lVar11 = (*(code *)*puVar7)();
          if (lVar11 == 0) break;
          if (*(int *)(lVar11 + 0x18) <= iVar6) {
            FUN_063a8e18();
            pcVar14 = *(code **)(*unaff_x19 + 0x588);
            goto LAB_063a7fbc;
          }
          lVar11 = *unaff_x21;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                goto LAB_063a7f5c;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7f5c:
          lVar11 = (*(code *)*puVar7)();
          if (lVar11 == 0) break;
          FUN_049cec24(lVar11,iVar6,*(undefined8 *)puVar1);
          FUN_063a6bb4();
          iVar6 = iVar6 + 1;
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
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_063a6e08;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a6e08:
    uVar9 = (*(code *)*puVar7)();
    uVar13 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                       (uVar9,*(undefined8 *)PTR_DAT_07d9b220,0);
    if ((uVar13 & 1) != 0) {
      lVar11 = *unaff_x21;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
            goto LAB_063a7068;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7068:
      uVar9 = (*(code *)*puVar7)();
      uVar13 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                         (uVar9,*(undefined8 *)PTR_DAT_07db6d60,0);
      if ((uVar13 & 1) != 0) {
        return;
      }
    }
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 8) * 0x10 + 0x138);
          goto LAB_063a70dc;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a70dc:
    uVar9 = (*(code *)*puVar7)();
    uVar13 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                       (uVar9,*(undefined8 *)PTR_DAT_07db6d60,0);
    if ((uVar13 & 1) != 0) {
      lVar11 = *unaff_x21;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_063a7150;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7150:
      uVar9 = (*(code *)*puVar7)();
      uVar13 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                         (uVar9,*(undefined8 *)PTR_DAT_07db6d90,0);
      if ((uVar13 & 1) != 0) {
        return;
      }
    }
    if ((unaff_x23 & 1) != 0) {
      FUN_063a8640();
      if (unaff_x19 == (long *)0x0) break;
      (**(code **)(*unaff_x19 + 0x5d8))();
    }
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto LAB_063a71f0;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a71f0:
    (*(code *)*puVar7)();
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x698);
LAB_063a7210:
      (*pcVar14)();
      return;
    }
    break;
  default:
    FUN_031a5e18();
    uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6c00);
    uVar5 = FUN_031b7e10(0,uVar9);
    in_stack_00000008 = thunk_FUN_037a15ac(PTR_DAT_07db6db8);
    in_stack_00000010 = 0xffffffffffffffff;
    uStack0000000000000018 = uVar5;
    uVar9 = FUN_06278b80(&stack0x00000008,0);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db6dc0);
    uVar9 = System_Convert__ToInt32(uVar10,uVar9,0);
    thunk_FUN_037a15ac(PTR_DAT_07d98df0);
    uVar10 = thunk_FUN_037788cc();
    thunk_FUN_062d6d20(uVar10,uVar9,0);
    uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6db0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar10,uVar9);
  case 8:
    if ((unaff_x23 & 1) == 0) {
      return;
    }
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 5) * 0x10 + 0x138);
          goto LAB_063a7334;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c();
LAB_063a7334:
    (*(code *)*puVar7)();
    if (unaff_x19 != (long *)0x0) {
      pcVar14 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_063a7210;
    }
    break;
  case 9:
  case 0xb:
LAB_063a6df0:
    FUN_063a8e18();
    return;
  case 10:
    plVar8 = (long *)thunk_FUN_037787d0();
    if (plVar8 == (long *)0x0) {
LAB_063a81cc:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    FUN_063a8640();
    if (unaff_x19 == (long *)0x0) break;
    (**(code **)(*unaff_x19 + 0x5d8))();
    (**(code **)(*unaff_x19 + 0x578))();
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_063a72ac;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_063a72ac:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_063a754c;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_063a754c:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_063a75c0;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,2);
LAB_063a75c0:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_063a7648;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,2);
LAB_063a7648:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_063a76bc;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,1);
LAB_063a76bc:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_063a7744;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,1);
LAB_063a7744:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_063a77b8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,3);
LAB_063a77b8:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) != 0) goto LAB_063a7864;
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar12 = *plVar8;
    lVar11 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) goto LAB_063a7830;
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    goto LAB_063a7820;
  case 0x11:
    plVar8 = (long *)thunk_FUN_037787d0();
    if (plVar8 == (long *)0x0) goto LAB_063a81cc;
    FUN_063a8640();
    if (unaff_x19 == (long *)0x0) break;
    (**(code **)(*unaff_x19 + 0x5d8))();
    (**(code **)(*unaff_x19 + 0x578))();
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_063a7228;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,0);
LAB_063a7228:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_063a7364;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,0);
LAB_063a7364:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_063a73d8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,1);
LAB_063a73d8:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x5d8))();
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_063a7460;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,1);
LAB_063a7460:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      (**(code **)(*unaff_x19 + 0x698))();
    }
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_063a74d4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,3);
LAB_063a74d4:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    uVar13 = FUN_063349dc(uVar9,0);
    if ((uVar13 & 1) != 0) goto LAB_063a7864;
    (**(code **)(*unaff_x19 + 0x5d8))();
    lVar12 = *plVar8;
    lVar11 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) goto LAB_063a7830;
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
LAB_063a7820:
    puVar7 = (undefined8 *)FUN_0377596c(plVar8,lVar11,3);
LAB_063a7840:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
    (**(code **)(*unaff_x19 + 0x698))();
LAB_063a7864:
    (**(code **)(*unaff_x19 + 0x588))();
    return;
  }
LAB_063a817c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_063a7830:
  puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
  goto LAB_063a7840;
}


