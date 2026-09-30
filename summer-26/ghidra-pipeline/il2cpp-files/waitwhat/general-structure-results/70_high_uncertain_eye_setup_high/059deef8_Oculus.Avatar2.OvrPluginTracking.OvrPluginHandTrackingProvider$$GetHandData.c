/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginHandTrackingProvider$$GetHandData
ENTRY_POINT: 059deef8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059df3c8) */
/* WARNING: Removing unreachable block (ram,0x059df15c) */

void Oculus_Avatar2_OvrPluginTracking_OvrPluginHandTrackingProvider__GetHandData
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  int unaff_w27;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_031c0d08();
      goto LAB_059def24;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_059def24:
  (*(code *)*puVar3)();
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0(unaff_x20);
  }
  if ((unaff_w27 != 6) && (unaff_w27 != 0)) {
    return;
  }
  lVar4 = FUN_03188b1c(*unaff_x26,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar4 + 0x20) = 0x22;
    plVar5 = (long *)FUN_03a928f8();
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
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
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0);
LAB_059df044:
        uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_059df150;
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 == 0) goto LAB_059df128;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar2,0);
LAB_059df0a8:
        uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        lVar4 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar4 + (uVar7 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059df330:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x23,0);
LAB_059df364:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059df110:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
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
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
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
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0);
LAB_059df268:
      uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 == 0) goto LAB_059df348;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar2,0);
LAB_059df2cc:
      uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      lVar4 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar4 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar4 + (uVar7 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


