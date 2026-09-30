/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRSpace>$$get_Current
ENTRY_POINT: 04e4fee0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e50370) */
/* WARNING: Removing unreachable block (ram,0x04e50444) */

undefined8
System_Array_InternalEnumerator<OVRSpace>__get_Current
          (long param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  undefined1 *__s;
  int iVar14;
  undefined1 auStack_10 [8];
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_09412648 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e83fb0);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e6baa0);
    DAT_09412648 = 1;
  }
  puVar2 = PTR_DAT_08e6a290;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (long *)0x0) {
LAB_04e50440:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    lVar9 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04e50044;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(param_2,lVar6,0);
LAB_04e50044:
    plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar9 = *plVar8;
    lVar6 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04e500a4;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar6,0);
LAB_04e500a4:
    uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      iVar13 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      lVar9 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e50380;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar6,0);
LAB_04e50380:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      iVar13 = 1;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto System_Array_InternalEnumerator<object>___ctor;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e6a288,0);
System_Array_InternalEnumerator<object>___ctor:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    iVar14 = 0;
  }
  else {
    uVar3 = FUN_077e9c24(*(undefined4 *)(param_1 + 0x24),0);
    uVar12 = (ulong)uVar3;
    if ((int)uVar3 < 0x65) {
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      if (uVar3 == 0) {
        __s = (undefined1 *)0x0;
      }
      else {
        __s = auStack_10 + -(uVar12 + 0xf & 0xfffffffffffffff0);
      }
      memset(__s,0,uVar12);
      lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83fb0);
      FUN_077e9ab0(lVar6,__s,uVar3,0);
    }
    else {
      uVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,uVar12);
      lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83fb0);
      FUN_077e9ae8(lVar6,uVar5,uVar12,0);
    }
    if (param_2 == (long *)0x0) goto LAB_04e50440;
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    lVar10 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04e501c0;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(param_2,lVar9,0);
LAB_04e501c0:
    plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
    iVar14 = 0;
    iVar13 = 0;
LAB_04e501d8:
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar10 = *plVar8;
      lVar9 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e50228;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,0);
LAB_04e50228:
      uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar12 & 1) == 0) break;
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03cf1244(lVar9);
      }
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04e502a0;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar9,0);
LAB_04e502a0:
      uVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      iVar4 = FUN_04e4f39c(param_1,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar4) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar12 = FUN_077e9ba0(lVar6,iVar4,0);
        if ((uVar12 & 1) == 0) {
          FUN_077e9b24(lVar6,iVar4,0);
          iVar14 = iVar14 + 1;
        }
        goto LAB_04e501d8;
      }
      iVar13 = iVar13 + 1;
    } while ((param_3 & 1) == 0);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e6a288,0);
System_Array_InternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_Reset:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
  }
  if (*(long *)(lVar1 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar13,iVar14);
}


