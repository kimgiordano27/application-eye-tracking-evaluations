/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 04a52a28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04a52ec4) */
/* WARNING: Removing unreachable block (ram,0x04a52ed0) */
/* WARNING: Removing unreachable block (ram,0x04a52ff0) */
/* WARNING: Removing unreachable block (ram,0x04a53000) */

ulong Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation(void)

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
  
  FUN_02b3c81c(PTR_DAT_06312f90);
  FUN_02b3c81c(PTR_DAT_06313588);
  *(undefined1 *)(unaff_x22 + 0xa5a) = 1;
  puVar1 = PTR_DAT_06312f90;
  iVar3 = *(int *)(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  if (iVar3 == 0) {
    if (unaff_x23 == (long *)0x0) goto LAB_04a52fdc;
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
          goto LAB_04a52b48;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04a52b48:
    plVar10 = (long *)(*(code *)*puVar6)();
    *(long **)(unaff_x29 + -0x10) = plVar10;
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a530ec;
    }
    lVar7 = *plVar10;
    lVar5 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04a52bb4;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
LAB_04a52bb4:
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
        goto LAB_04a530ec;
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
            goto LAB_04a52ee4;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
LAB_04a52ee4:
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
            goto LAB_04a52f58;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_06312f78,0);
LAB_04a52f58:
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
LAB_04a52fdc:
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a530ec;
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
          goto LAB_04a52cdc;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04a52cdc:
    uVar4 = (*(code *)*puVar6)();
    uVar12 = 0;
    uVar2 = 0;
    *(undefined8 *)(unaff_x29 + -0x20) = 0;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined8 *)(unaff_x29 + -0x10) = uVar4;
LAB_04a52cfc:
    do {
      plVar10 = *(long **)(unaff_x29 + -0x10);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a530ec;
      }
      lVar8 = *plVar10;
      lVar7 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a52d50;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar7,0);
LAB_04a52d50:
      uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar11 & 1) == 0) break;
      plVar10 = *(long **)(unaff_x29 + -0x10);
      if (plVar10 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a530ec;
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
            goto LAB_04a52dd4;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,lVar7,0);
LAB_04a52dd4:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      iVar3 = FUN_04a527fc();
      if (-1 < iVar3) {
        if (lVar5 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a530ec;
        }
        uVar11 = FUN_0527e17c(lVar5,iVar3,0);
        if ((uVar11 & 1) == 0) {
          FUN_0527e100(lVar5,iVar3,0);
          uVar12 = uVar12 + 1;
        }
        goto LAB_04a52cfc;
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
            goto LAB_04a52eac;
          }
          uVar11 = uVar11 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)PTR_DAT_06312f78,0);
LAB_04a52eac:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
    }
    uVar11 = (ulong)uVar12;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar11 | (ulong)uVar2 << 0x20;
  }
LAB_04a530ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


