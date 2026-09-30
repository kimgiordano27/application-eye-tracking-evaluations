/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRSpaceUser>$$get_Current
ENTRY_POINT: 0375c608
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0375ca6c) */
/* WARNING: Removing unreachable block (ram,0x0375cb40) */

undefined8 System_Array_InternalEnumerator<OVRSpaceUser>__get_Current(ulong param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  ulong uVar11;
  int iVar12;
  undefined1 *__s;
  long unaff_x26;
  int iVar13;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769708);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_0675ee10);
    *(undefined1 *)(unaff_x23 + 0x560) = 1;
  }
  puVar1 = PTR_DAT_0675f3d8;
  if (*(int *)(param_2 + 0x20) == 0) {
    if (unaff_x20 == (long *)0x0) {
LAB_0375cb3c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0(lVar5);
    }
    lVar8 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0375c740;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_0375c740:
    plVar7 = (long *)(*(code *)*puVar6)();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar8 = *plVar7;
    lVar5 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0375c7a0;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar5,0);
LAB_0375c7a0:
    uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      iVar12 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d9a2e0(lVar5);
      }
      lVar8 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0375ca7c;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar5,0);
LAB_0375ca7c:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar12 = 1;
    }
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0375cae8;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0375cae8:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    iVar13 = 0;
  }
  else {
    uVar2 = FUN_05365610(*(undefined4 *)(param_2 + 0x24),0);
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
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06769708);
      FUN_0536549c(lVar5,__s,uVar2,0);
    }
    else {
      uVar4 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675ee10,uVar11);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06769708);
      FUN_053654d4(lVar5,uVar4,uVar11,0);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_0375cb3c;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d9a2e0(lVar8);
    }
    lVar9 = *unaff_x20;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0375c8bc;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_0375c8bc:
    plVar7 = (long *)(*(code *)*puVar6)();
    iVar13 = 0;
    iVar12 = 0;
System_Array_InternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current:
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar9 = *plVar7;
      lVar8 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0375c924;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar8,0);
LAB_0375c924:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) == 0) break;
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02d9a2e0(lVar8);
      }
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0375c99c;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar8,0);
LAB_0375c99c:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar3 = FUN_0375baac(param_2,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar3) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar11 = FUN_0536558c(lVar5,iVar3,0);
        if ((uVar11 & 1) == 0) {
          FUN_05365510(lVar5,iVar3,0);
          iVar13 = iVar13 + 1;
        }
        goto 
        System_Array_InternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_get_Current
        ;
      }
      iVar12 = iVar12 + 1;
    } while ((unaff_x21 & 1) == 0);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0375ca5c;
          }
          uVar11 = uVar11 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_0375ca5c:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar12,iVar13);
}


