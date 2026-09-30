/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginInputTrackingProvider$$get_NativeContext
ENTRY_POINT: 059dee5c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059df3c0) */
/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */
/* WARNING: Removing unreachable block (ram,0x059def3c) */

void Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider__get_NativeContext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined1 unaff_w28;
  long *in_stack_00000018;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_059dee88;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_031c0d08(unaff_x20,param_3,0);
LAB_059dee88:
        uVar4 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
        lVar7 = **(long **)(*unaff_x22 + 0xb8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar7 + 0x18) <= ((uint)uVar4 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar7 + (uVar4 & 0xffff) + 0x20) = unaff_w28;
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar7 = *in_stack_00000018;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x21) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059dee24;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x21,0);
LAB_059dee24:
        uVar4 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
        if ((uVar4 & 1) == 0) {
          if (in_stack_00000018 == (long *)0x0) goto LAB_059def30;
          lVar7 = *in_stack_00000018;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 == 0) goto LAB_059def08;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_059deef0;
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        param_1 = *in_stack_00000018;
        param_3 = *unaff_x27;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x20 = in_stack_00000018;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_059deef0:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059def24;
    }
  }
LAB_059def08:
  puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x23,0);
LAB_059def24:
  (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
LAB_059def30:
  lVar7 = FUN_03188b1c(*unaff_x26,1);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar7 + 0x20) = 0x22;
    plVar5 = (long *)FUN_03a928f8();
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x24,0);
LAB_059defc4:
      plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
      puVar2 = PTR_DAT_07109be0;
      puVar1 = PTR_DAT_070c7c80;
      do {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar7 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0);
LAB_059df044:
        uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_059df150;
          lVar7 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 == 0) goto LAB_059df128;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar7 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar2,0);
LAB_059df0a8:
        uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        lVar7 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar7 + 0x18) <= ((uint)uVar4 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar7 + (uVar4 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_059df330:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x23,0);
LAB_059df364:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_059df110:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x23,0);
LAB_059df144:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_059df150:
  uVar6 = FUN_03188b1c(*unaff_x26,5);
  FUN_0585c08c(uVar6,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar5 = (long *)FUN_03a928f8();
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x24,0);
LAB_059df1e8:
    plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
    puVar2 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0);
LAB_059df268:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar4 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar7 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 == 0) goto LAB_059df348;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar2,0);
LAB_059df2cc:
      uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      lVar7 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar7 + 0x18) <= ((uint)uVar4 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar7 + (uVar4 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


