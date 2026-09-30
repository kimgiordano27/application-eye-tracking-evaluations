/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$OverrideEffectMaterial
ENTRY_POINT: 04a691a0
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


/* WARNING: Removing unreachable block (ram,0x04a69628) */
/* WARNING: Removing unreachable block (ram,0x04a69634) */
/* WARNING: Removing unreachable block (ram,0x04a69758) */
/* WARNING: Removing unreachable block (ram,0x04a69768) */

ulong Meta_XR_MRUtilityKit_EffectMesh__OverrideEffectMaterial(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w8;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 *__s;
  long unaff_x26;
  long unaff_x27;
  long *plVar12;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  
  plVar12 = *(long **)(unaff_x27 + 0xf90);
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  if (in_w8 == 0) {
    if (unaff_x23 == (long *)0x0) goto LAB_04a69744;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar6 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a6929c;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c();
LAB_04a6929c:
    plVar9 = (long *)(*(code *)*puVar5)();
    *(long **)(unaff_x29 + -0x28) = plVar9;
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
    *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0x28;
    if (plVar9 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a69854;
    }
    lVar6 = *plVar9;
    lVar4 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a69308;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar9,lVar4,0);
LAB_04a69308:
    uVar10 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar12 = *(long **)(unaff_x29 + -0x28);
      if (plVar12 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a69854;
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar6 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a69648;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar12,lVar4,0);
LAB_04a69648:
      (*(code *)*puVar5)(unaff_x29 + -0x20,plVar12,puVar5[1]);
      uVar1 = 1;
    }
    plVar12 = *(long **)(unaff_x29 + -0x28);
    if (plVar12 != (long *)0x0) {
      lVar4 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a696c0;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06312f78,0);
LAB_04a696c0:
      (*(code *)*puVar5)(plVar12,puVar5[1]);
    }
    uVar10 = 0;
  }
  else {
    uVar1 = FUN_0527e200(*(undefined4 *)(unaff_x21 + 0x24),0);
    uVar10 = (ulong)uVar1;
    if ((int)uVar1 < 0x65) {
      uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
      if (uVar1 == 0) {
        __s = (undefined1 *)0x0;
      }
      else {
        __s = &stack0x00000000 + -(uVar10 + 0xf & 0xfffffffffffffff0);
      }
      memset(__s,0,uVar10);
      lVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
      FUN_0527e08c(lVar4,__s,uVar1,0);
    }
    else {
      uVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,uVar10);
      lVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
      FUN_0527e0c4(lVar4,uVar3,uVar10,0);
    }
    if (unaff_x23 == (long *)0x0) {
LAB_04a69744:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a69854;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    lVar7 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a69430;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c();
LAB_04a69430:
    uVar3 = (*(code *)*puVar5)();
    uVar11 = 0;
    uVar1 = 0;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
    *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0x28;
LAB_04a69450:
    do {
      plVar9 = *(long **)(unaff_x29 + -0x28);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a69854;
      }
      lVar7 = *plVar9;
      lVar6 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a694a4;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar9,lVar6,0);
LAB_04a694a4:
      uVar10 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((uVar10 & 1) == 0) break;
      plVar9 = *(long **)(unaff_x29 + -0x28);
      if (plVar9 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a69854;
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar7 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a69528;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar9,lVar6,0);
LAB_04a69528:
      (*(code *)*puVar5)(unaff_x29 + -0x20,plVar9,puVar5[1]);
      uVar14 = *(undefined8 *)(unaff_x29 + -0x18);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x20);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar14;
      *(undefined8 *)(unaff_x29 + -0x20) = uVar13;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar3;
      *(undefined8 *)(unaff_x29 + -0x38) = uVar14;
      *(undefined8 *)(unaff_x29 + -0x40) = uVar13;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar3;
      iVar2 = FUN_04a68f04();
      if (-1 < iVar2) {
        if (lVar4 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a69854;
        }
        uVar10 = FUN_0527e17c(lVar4,iVar2,0);
        if ((uVar10 & 1) == 0) {
          FUN_0527e100(lVar4,iVar2,0);
          uVar11 = uVar11 + 1;
        }
        goto LAB_04a69450;
      }
      uVar1 = uVar1 + 1;
    } while ((unaff_x20 & 1) == 0);
    plVar12 = *(long **)(unaff_x29 + -0x28);
    if (plVar12 != (long *)0x0) {
      lVar4 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a69610;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06312f78,0);
LAB_04a69610:
      (*(code *)*puVar5)(plVar12,puVar5[1]);
    }
    uVar10 = (ulong)uVar11;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar10 | (ulong)uVar1 << 0x20;
  }
LAB_04a69854:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


