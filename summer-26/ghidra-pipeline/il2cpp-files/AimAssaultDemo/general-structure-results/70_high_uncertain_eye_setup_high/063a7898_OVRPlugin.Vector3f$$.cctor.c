/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 063a7898
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


void OVRPlugin_Vector3f___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
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
  
  if (param_1 != 0) {
                    /* try { // try from 063a789c to 064a78a7 has its CatchHandler @ 063a799c */
    if (0 < *(int *)(param_1 + 0x18)) {
      FUN_063a8e18();
      return;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063a817c;
    (**(code **)(*unaff_x20 + 0x1d8))();
                    /* try { // try from 063a78d4 to 064a78df has its CatchHandler @ 063a794c */
    lVar9 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_063a7924;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7924:
    lVar9 = (*(code *)*puVar5)();
    if (lVar9 == 0) goto LAB_063a817c;
    FUN_049cf910(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_07db6d30);
    puVar3 = PTR_DAT_07db6d20;
    puVar2 = PTR_DAT_07d9b228;
    puVar1 = PTR_DAT_07d9b220;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar11 = FUN_05d64e98(&stack0x00000020,*(undefined8 *)puVar3), plVar7 = in_stack_00000030
          , (uVar11 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *in_stack_00000030;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 8) * 0x10 + 0x138);
            goto LAB_063a79d8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x26,8);
LAB_063a79d8:
      uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      uVar11 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                         (uVar6,*(undefined8 *)puVar1,0);
      if ((uVar11 & 1) != 0) {
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_063a7a44;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x26,1);
LAB_063a7a44:
        uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        uVar11 = FUN_060bf954(uVar6,*(undefined8 *)puVar2,0);
        if ((uVar11 & 1) != 0) {
          lVar9 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_063a7ac8;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x26,1);
LAB_063a7ac8:
          uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_06a0dde8(uVar6,0);
        }
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_063a7b50;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x26,5);
LAB_063a7b50:
        auVar14 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if (auVar14._0_8_ == 0) {
          thunk_FUN_037a15ac(PTR_DAT_07d98df0,auVar14._8_8_,0);
          uVar6 = thunk_FUN_037788cc();
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6da8);
          thunk_FUN_062d6d20(uVar6,uVar8,0);
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6db0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar6,uVar8);
        }
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    FUN_05d64e94(&stack0x00000020,*(undefined8 *)PTR_DAT_07db6d18);
    if ((unaff_x23 & 1) != 0) {
      FUN_063a8640();
      if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
      (**(code **)(*unaff_x19 + 0x5d8))();
    }
    lVar9 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_063a7c0c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7c0c:
    uVar6 = (*(code *)*puVar5)();
    uVar11 = FUN_063a9cc0(uVar6,uVar6);
    if ((uVar11 & 1) == 0) {
      lVar9 = *unaff_x21;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_063a7c74;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7c74:
      lVar9 = (*(code *)*puVar5)();
      if (lVar9 == 0) goto LAB_063a817c;
      if (*(int *)(lVar9 + 0x18) == 1) {
        lVar9 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_063a7ce0;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7ce0:
        lVar9 = (*(code *)*puVar5)();
        puVar1 = PTR_DAT_07db6c18;
        if ((lVar9 == 0) ||
           (plVar7 = (long *)FUN_049cec24(lVar9,0,*(undefined8 *)PTR_DAT_07db6c18),
           plVar7 == (long *)0x0)) goto LAB_063a817c;
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_063a7d58;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x26,0);
LAB_063a7d58:
        iVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if (iVar4 == 3) {
          lVar9 = *unaff_x21;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_063a8078;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a8078:
          lVar9 = (*(code *)*puVar5)();
          if ((lVar9 == 0) ||
             (plVar7 = (long *)FUN_049cec24(lVar9,0,*(undefined8 *)puVar1), plVar7 == (long *)0x0))
          goto LAB_063a817c;
          lVar9 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_063a80ec;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x26,5);
LAB_063a80ec:
          (*(code *)*puVar5)(plVar7,puVar5[1]);
          if (unaff_x19 == (long *)0x0) goto LAB_063a817c;
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_063a7fc4;
        }
      }
    }
    lVar9 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_063a7dfc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7dfc:
    lVar9 = (*(code *)*puVar5)();
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) {
        lVar9 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_063a7e64;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7e64:
        lVar9 = (*(code *)*puVar5)();
        puVar1 = PTR_DAT_07db6d50;
        if (lVar9 == 0) goto LAB_063a817c;
        if (*(int *)(lVar9 + 0x18) == 0) {
          lVar9 = thunk_FUN_037787d0();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          lVar9 = *(long *)puVar1;
          plVar7 = (long *)thunk_FUN_037787d0();
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54();
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar9) {
                puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_063a8128;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,lVar9,2);
LAB_063a8128:
          uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if ((uVar11 & 1) == 0) {
            if (unaff_x19 != (long *)0x0) {
              (**(code **)(*unaff_x19 + 0x698))();
              goto LAB_063a7fc4;
            }
          }
          else if (unaff_x19 != (long *)0x0) {
            pcVar12 = *(code **)(*unaff_x19 + 0x658);
LAB_063a7fbc:
            (*pcVar12)();
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
        iVar4 = 0;
        do {
          lVar9 = *unaff_x21;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_063a7ef0;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7ef0:
          lVar9 = (*(code *)*puVar5)();
          if (lVar9 == 0) break;
          if (*(int *)(lVar9 + 0x18) <= iVar4) {
            FUN_063a8e18();
            pcVar12 = *(code **)(*unaff_x19 + 0x588);
            goto LAB_063a7fbc;
          }
          lVar9 = *unaff_x21;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_063a7f5c;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c();
LAB_063a7f5c:
          lVar9 = (*(code *)*puVar5)();
          if (lVar9 == 0) break;
          FUN_049cec24(lVar9,iVar4,*(undefined8 *)puVar1);
          FUN_063a6bb4();
          iVar4 = iVar4 + 1;
        } while( true );
      }
    }
  }
LAB_063a817c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


