/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateEyeTrackingContext
ENTRY_POINT: 059decf4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c0) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */
/* WARNING: Removing unreachable block (ram,0x059def3c) */

void Oculus_Avatar2_OvrPluginTracking__CreateEyeTrackingContext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  
code_r0x059decf4:
                    /* try { // try from 059decf4 to 05adecfb has its CatchHandler @ 059ded04 */
                    /* try { // try from 059decfc to 05aded07 has its CatchHandler @ 059dec08 */
  puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
  while( true ) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059decf4 with catch @ 059ded04
                        */
                    /* try { // try from 059ded08 to 05aded4f has its CatchHandler @ 059ded08
                       catch() { ... } // from try @ 059ded08 with catch @ 059ded08
                       catch() { ... } // from try @ 059ded78 with catch @ 059ded08
                       catch() { ... } // from try @ 059dedbc with catch @ 059ded08
                       catch() { ... } // from try @ 059dedf4 with catch @ 059ded08 */
    (*(code *)*puVar5)();
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == 0x20) break;
    param_1 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x21) goto code_r0x059decf4;
        uVar7 = uVar7 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08();
  }
  lVar3 = FUN_03188b1c(*unaff_x26,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_059df3bc;
    *(undefined2 *)(lVar3 + 0x20) = 0x27;
    plVar4 = (long *)FUN_03a928f8();
                    /* try { // try from 059ded50 to 05aded5b has its CatchHandler @ 059dedbc */
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 059ded70 to 05aded77 has its CatchHandler @ 059dedc0 */
                    /* try { // try from 059ded78 to 05adedb7 has its CatchHandler @ 059ded08 */
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059deda4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x24,0);
LAB_059deda4:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar2 = PTR_DAT_07109be0;
      puVar1 = PTR_DAT_070c7c80;
                    /* try { // try from 059dedb8 to 05adedbb has its CatchHandler @ 059dedc0 */
      do {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059ded50 with catch @ 059dedbc
                       try { // try from 059dedbc to 05adeddb has its CatchHandler @ 059ded08 */
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar3 = *plVar4;
                    /* try { // try from 059deddc to 05adeddf has its CatchHandler @ 059dede8 */
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 059deddc with catch @ 059dede8 */
                    /* try { // try from 059dedec to 05adedf3 has its CatchHandler @ 059dedfc */
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
                    /* try { // try from 059dedf4 to 05adedff has its CatchHandler @ 059ded08 */
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059dee24;
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059dedec with catch @ 059dedfc
                        */
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_059dee24:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_059def30;
          lVar3 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 == 0) goto LAB_059def08;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_059deef0;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059dee88;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_059dee88:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        lVar3 = **(long **)(*unaff_x22 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar3 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar3 + (uVar7 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059deef0:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059def24;
    }
  }
LAB_059def08:
  puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x23,0);
LAB_059def24:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_059def30:
  lVar3 = FUN_03188b1c(*unaff_x26,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_059df3bc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar3 + 0x20) = 0x22;
    plVar4 = (long *)FUN_03a928f8();
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x24,0);
LAB_059defc4:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar2 = PTR_DAT_07109be0;
      puVar1 = PTR_DAT_070c7c80;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_059df044:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_059df150;
          lVar3 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 == 0) goto LAB_059df128;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_059df0a8:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar3 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar3 + (uVar7 & 0xffff) + 0x20) = 1;
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
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x23,0);
LAB_059df364:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059df110:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x23,0);
LAB_059df144:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_059df150:
  uVar6 = FUN_03188b1c(*unaff_x26,5);
  FUN_0585c08c(uVar6,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar4 = (long *)FUN_03a928f8();
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x24,0);
LAB_059df1e8:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_059df268:
      uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 == 0) goto LAB_059df348;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_059df2cc:
      uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar3 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar3 + (uVar7 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


