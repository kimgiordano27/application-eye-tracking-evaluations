/*
FUNCTION_NAME: OVRPlugin.Vector4f$$.cctor
ENTRY_POINT: 063a7aec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f___cctor(void)

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
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar12 [16];
  long *in_stack_00000030;
  
  do {
    thunk_FUN_03798b70();
    do {
      FUN_06a0dde8(unaff_x25,0);
      do {
        lVar7 = *unaff_x24;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_063a7b50;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(unaff_x24,*unaff_x26,5);
LAB_063a7b50:
        auVar12 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
        if (auVar12._0_8_ == 0) {
          thunk_FUN_037a15ac(PTR_DAT_07d98df0,auVar12._8_8_,0);
          uVar3 = thunk_FUN_037788cc();
          uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6da8);
          thunk_FUN_062d6d20(uVar3,uVar6,0);
          uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6db0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar3,uVar6);
        }
        (**(code **)(*unaff_x20 + 0x1f8))();
        do {
          uVar9 = FUN_05d64e98(&stack0x00000020,*unaff_x28);
          unaff_x24 = in_stack_00000030;
          if ((uVar9 & 1) == 0) {
            FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
            if ((unaff_x23 & 1) != 0) {
              FUN_063a8640();
              if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
              (**(code **)(*unaff_x19 + 0x5d8))();
            }
            lVar7 = *unaff_x21;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_063a7bec;
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_063a7bd4;
          }
          if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar7 = *in_stack_00000030;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                goto LAB_063a79d8;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x26,8);
LAB_063a79d8:
          uVar3 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
          uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar3,*unaff_x29,0);
        } while ((uVar9 & 1) == 0);
        lVar7 = *unaff_x24;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_063a7a44;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(unaff_x24,*unaff_x26,1);
LAB_063a7a44:
        uVar3 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
        uVar9 = FUN_060bf954(uVar3,*unaff_x27,0);
      } while ((uVar9 & 1) == 0);
      lVar7 = *unaff_x24;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_063a7ac8;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(unaff_x24,*unaff_x26,1);
LAB_063a7ac8:
      unaff_x25 = (*(code *)*puVar4)(unaff_x24,puVar4[1]);
    } while (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) != 0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_063a7bd4:
    if (*(long *)(piVar11 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_063a7c0c;
    }
  }
LAB_063a7bec:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7c0c:
  uVar3 = (*(code *)*puVar4)();
  uVar9 = FUN_063a9cc0(uVar3,uVar3);
  if ((uVar9 & 1) == 0) {
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a7c74;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7c74:
    lVar7 = (*(code *)*puVar4)();
    if (lVar7 == 0) goto LAB_063a817c;
    if (*(int *)(lVar7 + 0x18) == 1) {
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_063a7ce0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7ce0:
      lVar7 = (*(code *)*puVar4)();
      puVar1 = PTR_DAT_07db6c18;
      if ((lVar7 == 0) ||
         (plVar5 = (long *)FUN_049cec24(lVar7,0,*(undefined8 *)PTR_DAT_07db6c18),
         plVar5 == (long *)0x0)) goto LAB_063a817c;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_063a7d58;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x26,0);
LAB_063a7d58:
      iVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (iVar2 == 3) {
        lVar7 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_063a8078;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a8078:
        lVar7 = (*(code *)*puVar4)();
        if ((lVar7 != 0) &&
           (plVar5 = (long *)FUN_049cec24(lVar7,0,*(undefined8 *)puVar1), plVar5 != (long *)0x0)) {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_063a80ec;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x26,5);
LAB_063a80ec:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
        goto LAB_063a817c;
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
        goto LAB_063a7dfc;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7dfc:
  lVar7 = (*(code *)*puVar4)();
  if (lVar7 == 0) goto LAB_063a817c;
  if (*(int *)(lVar7 + 0x18) == 0) {
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_063a7e64;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7e64:
    lVar7 = (*(code *)*puVar4)();
    puVar1 = PTR_DAT_07db6d50;
    if (lVar7 == 0) goto LAB_063a817c;
    if (*(int *)(lVar7 + 0x18) == 0) {
      lVar7 = thunk_FUN_037787d0();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar7 = *(long *)puVar1;
      plVar5 = (long *)thunk_FUN_037787d0();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_063a8128;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar5,lVar7,2);
LAB_063a8128:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
      }
      else if (unaff_x19 != (long *)0x0) {
        pcVar10 = *(code **)(*unaff_x19 + 0x658);
LAB_063a7fbc:
        (*pcVar10)();
LAB_063a7fc4:
        (**(code **)(*unaff_x20 + 0x1e8))();
        return;
      }
      goto LAB_063a817c;
    }
  }
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x578))();
    puVar1 = PTR_DAT_07db6c18;
    iVar2 = 0;
    do {
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_063a7ef0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7ef0:
      lVar7 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) <= iVar2) {
        FUN_063a8e18();
        pcVar10 = *(code **)(*unaff_x19 + 0x588);
        goto LAB_063a7fbc;
      }
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_063a7f5c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c();
LAB_063a7f5c:
      lVar7 = (*(code *)*puVar4)();
      if (lVar7 == 0) break;
      FUN_049cec24(lVar7,iVar2,*(undefined8 *)puVar1);
      FUN_063a6bb4();
      iVar2 = iVar2 + 1;
    } while( true );
  }
LAB_063a817c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


