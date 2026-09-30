/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$.ctor
ENTRY_POINT: 059decb4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c0) */
/* WARNING: Removing unreachable block (ram,0x059def3c) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */

void Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  
  do {
    lVar6 = *unaff_x19;
                    /* try { // try from 059decb8 to 05adecbb has its CatchHandler @ 059decc0 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059dec6c with catch @ 059decbc
                       try { // try from 059decbc to 05adecdf has its CatchHandler @ 059dec08 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059decb8 with catch @ 059decc0
                        */
    if (uVar7 != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059dec4c with catch @ 059decc4
                        */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_059ded04;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 059dece0 to 05adece3 has its CatchHandler @ 059decf0 */
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08();
                    /* catch() { ... } // from try @ 059dece0 with catch @ 059decf0 */
LAB_059ded04:
    (*(code *)*puVar3)();
    unaff_w20 = unaff_w20 + 1;
  } while (unaff_w20 != 0x20);
  lVar6 = FUN_03188b1c(*unaff_x26,1);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_059df3bc;
    *(undefined2 *)(lVar6 + 0x20) = 0x27;
    plVar4 = (long *)FUN_03a928f8();
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059deda4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x24,0);
LAB_059deda4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      puVar2 = PTR_DAT_07109be0;
      puVar1 = PTR_DAT_070c7c80;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059dee24;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_059dee24:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_059def30;
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_059def08;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_059deef0;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059dee88;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_059dee88:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        lVar6 = **(long **)(*unaff_x22 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
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
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059def24;
    }
  }
LAB_059def08:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x23,0);
LAB_059def24:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_059def30:
  lVar6 = FUN_03188b1c(*unaff_x26,1);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_059df3bc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar6 + 0x20) = 0x22;
    plVar4 = (long *)FUN_03a928f8();
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x24,0);
LAB_059defc4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      puVar2 = PTR_DAT_07109be0;
      puVar1 = PTR_DAT_070c7c80;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_059df044:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_059df150;
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_059df128;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_059df0a8:
        uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
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
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x23,0);
LAB_059df364:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059df110:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x23,0);
LAB_059df144:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_059df150:
  uVar5 = FUN_03188b1c(*unaff_x26,5);
  FUN_0585c08c(uVar5,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar4 = (long *)FUN_03a928f8();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*unaff_x24,0);
LAB_059df1e8:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    puVar2 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_059df268:
      uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_059df348;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_059df2cc:
      uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


