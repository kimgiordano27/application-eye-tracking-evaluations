/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_MeshRendererLayer
ENTRY_POINT: 04a2cfa0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a2d458) */
/* WARNING: Removing unreachable block (ram,0x04a2d464) */
/* WARNING: Removing unreachable block (ram,0x04a2d584) */
/* WARNING: Removing unreachable block (ram,0x04a2d594) */

ulong Meta_XR_ImmersiveDebugger_RuntimeSettings__get_MeshRendererLayer(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 *__s;
  long unaff_x26;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322bc0);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(PTR_DAT_06313588);
    *(undefined1 *)(unaff_x22 + 0x9ec) = 1;
  }
  puVar1 = PTR_DAT_06312f90;
  iVar3 = *(int *)(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  if (iVar3 == 0) {
    if (unaff_x23 == (long *)0x0) goto LAB_04a2d570;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar7 = *unaff_x23;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a2d0dc;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04a2d0dc:
    plVar10 = (long *)(*(code *)*puVar6)();
    *(long **)(unaff_x29 + -0x10) = plVar10;
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a2d680;
    }
    lVar7 = *plVar10;
    lVar5 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a2d148;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
LAB_04a2d148:
    uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      plVar10 = *(long **)(unaff_x29 + -0x10);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a2d680;
      }
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar7 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a2d478;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
LAB_04a2d478:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar2 = 1;
    }
    plVar10 = *(long **)(unaff_x29 + -0x10);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a2d4ec;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_06312f78,0);
LAB_04a2d4ec:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
    uVar11 = 0;
  }
  else {
    uVar2 = FUN_0527e200(*(undefined4 *)(unaff_x21 + 0x24),0);
    uVar11 = (ulong)uVar2;
    if ((int)uVar2 < 0x65) {
      uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
      if (uVar2 == 0) {
        __s = (undefined1 *)0x0;
      }
      else {
        __s = &stack0x00000000 + -(uVar11 + 0xf & 0xfffffffffffffff0);
      }
      memset(__s,0,uVar11);
      lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
      FUN_0527e08c(lVar5,__s,uVar2,0);
    }
    else {
      uVar4 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,uVar11);
      lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
      FUN_0527e0c4(lVar5,uVar4,uVar11,0);
    }
    if (unaff_x23 == (long *)0x0) {
LAB_04a2d570:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a2d680;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    lVar8 = *unaff_x23;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a2d270;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04a2d270:
    uVar4 = (*(code *)*puVar6)();
    uVar12 = 0;
    uVar2 = 0;
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined8 *)(unaff_x29 + -0x10) = uVar4;
LAB_04a2d290:
    do {
      plVar10 = *(long **)(unaff_x29 + -0x10);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a2d680;
      }
      lVar8 = *plVar10;
      lVar7 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a2d2e4;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar7,0);
LAB_04a2d2e4:
      uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar11 & 1) == 0) break;
      plVar10 = *(long **)(unaff_x29 + -0x10);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a2d680;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02b76218(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a2d368;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar7,0);
LAB_04a2d368:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      iVar3 = FUN_04a2cd90();
      if (-1 < iVar3) {
        if (lVar5 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a2d680;
        }
        uVar11 = FUN_0527e17c(lVar5,iVar3,0);
        if ((uVar11 & 1) == 0) {
          FUN_0527e100(lVar5,iVar3,0);
          uVar12 = uVar12 + 1;
        }
        goto LAB_04a2d290;
      }
      uVar2 = uVar2 + 1;
    } while ((unaff_x20 & 1) == 0);
    plVar10 = *(long **)(unaff_x29 + -0x10);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a2d440;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_06312f78,0);
LAB_04a2d440:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
    uVar11 = (ulong)uVar12;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar11 | (ulong)uVar2 << 0x20;
  }
LAB_04a2d680:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


