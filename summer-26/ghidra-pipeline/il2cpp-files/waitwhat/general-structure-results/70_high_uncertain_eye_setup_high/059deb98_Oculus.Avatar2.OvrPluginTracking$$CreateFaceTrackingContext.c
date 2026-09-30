/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateFaceTrackingContext
ENTRY_POINT: 059deb98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c0) */
/* WARNING: Removing unreachable block (ram,0x059def3c) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */

void Oculus_Avatar2_OvrPluginTracking__CreateFaceTrackingContext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint in_w10;
  int iVar11;
  int *piVar12;
  uint in_w11;
  uint uVar13;
  int in_w12;
  uint uVar14;
  long *unaff_x19;
  long *unaff_x22;
  
  if (in_w10 < in_w11) {
    uVar13 = in_w10 + 1;
    iVar11 = in_w12 + 1;
    *(uint *)(unaff_x19 + 3) = uVar13;
    *(undefined2 *)(param_1 + (long)(int)in_w10 * 2 + 0x20) = 0x5c;
                    /* try { // try from 059debb8 to 05adebbb has its CatchHandler @ 059debc0 */
    *(int *)((long)unaff_x19 + 0x1c) = iVar11;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059deb6c with catch @ 059debbc
                       try { // try from 059debbc to 05adebdf has its CatchHandler @ 059deb08 */
  }
  else {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059debb8 with catch @ 059debc0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059deb4c with catch @ 059debc4
                        */
    FUN_0420639c();
    uVar13 = *(uint *)(unaff_x19 + 3);
    param_1 = unaff_x19[2];
                    /* try { // try from 059debe0 to 05adebe3 has its CatchHandler @ 059debf0 */
    iVar11 = *(int *)((long)unaff_x19 + 0x1c) + 1;
    *(int *)((long)unaff_x19 + 0x1c) = iVar11;
    if (param_1 == 0) goto LAB_059df3b8;
  }
                    /* catch() { ... } // from try @ 059debe0 with catch @ 059debf0 */
                    /* try { // try from 059debf4 to 05adebfb has its CatchHandler @ 059dec04 */
  if (uVar13 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 059debfc to 05adec07 has its CatchHandler @ 059deb08 */
    uVar14 = uVar13 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059debf4 with catch @ 059dec04
                        */
                    /* try { // try from 059dec08 to 05adec4b has its CatchHandler @ 059dec08
                       catch() { ... } // from try @ 059dec08 with catch @ 059dec08
                       catch() { ... } // from try @ 059dec70 with catch @ 059dec08
                       catch() { ... } // from try @ 059decbc with catch @ 059dec08
                       catch() { ... } // from try @ 059decfc with catch @ 059dec08 */
    *(uint *)(unaff_x19 + 3) = uVar14;
    *(undefined2 *)(param_1 + (long)(int)uVar13 * 2 + 0x20) = 0xc;
    *(int *)((long)unaff_x19 + 0x1c) = iVar11 + 1;
  }
  else {
    FUN_0420639c();
    uVar14 = *(uint *)(unaff_x19 + 3);
    param_1 = unaff_x19[2];
    *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_059df3b8;
  }
                    /* try { // try from 059dec4c to 05adec57 has its CatchHandler @ 059decc4 */
  if (uVar14 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 3) = uVar14 + 1;
    *(undefined2 *)(param_1 + (long)(int)uVar14 * 2 + 0x20) = 8;
                    /* try { // try from 059dec6c to 05adec6f has its CatchHandler @ 059decbc */
  }
  else {
                    /* try { // try from 059dec70 to 05adecb7 has its CatchHandler @ 059dec08 */
    FUN_0420639c();
  }
  puVar4 = PTR_DAT_07109bd8;
  puVar3 = PTR_DAT_07109bd0;
  puVar2 = PTR_DAT_070c2e88;
  puVar1 = PTR_DAT_070c2920;
  iVar11 = 0;
  do {
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_059ded04;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08();
LAB_059ded04:
    (*(code *)*puVar6)();
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x20);
  lVar9 = FUN_03188b1c(*(undefined8 *)puVar1,1);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_059df3bc;
    *(undefined2 *)(lVar9 + 0x20) = 0x27;
    plVar7 = (long *)FUN_03a928f8();
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059deda4;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar4,0);
LAB_059deda4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar5 = PTR_DAT_07109be0;
      puVar3 = PTR_DAT_070c7c80;
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_059dee24;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar3,0);
LAB_059dee24:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_059def30;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_059def08;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_059deef0;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_059dee88;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar5,0);
LAB_059dee88:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        lVar9 = **(long **)(*unaff_x22 + 0xb8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar9 + 0x18) <= ((uint)uVar10 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar9 + (uVar10 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_059deef0:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_059def24;
    }
  }
LAB_059def08:
  puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar2,0);
LAB_059def24:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_059def30:
  lVar9 = FUN_03188b1c(*(undefined8 *)puVar1,1);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_059df3bc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar9 + 0x20) = 0x22;
    plVar7 = (long *)FUN_03a928f8();
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar4,0);
LAB_059defc4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar5 = PTR_DAT_07109be0;
      puVar3 = PTR_DAT_070c7c80;
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar3,0);
LAB_059df044:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_059df150;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_059df128;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar5,0);
LAB_059df0a8:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        lVar9 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar9 + 0x18) <= ((uint)uVar10 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar9 + (uVar10 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_059df330:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar2,0);
LAB_059df364:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_059df110:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar2,0);
LAB_059df144:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_059df150:
  uVar8 = FUN_03188b1c(*(undefined8 *)puVar1,5);
  FUN_0585c08c(uVar8,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar7 = (long *)FUN_03a928f8();
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar4,0);
LAB_059df1e8:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar3 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,0);
LAB_059df268:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_059df348;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar3,0);
LAB_059df2cc:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      lVar9 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar9 + 0x18) <= ((uint)uVar10 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar9 + (uVar10 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


