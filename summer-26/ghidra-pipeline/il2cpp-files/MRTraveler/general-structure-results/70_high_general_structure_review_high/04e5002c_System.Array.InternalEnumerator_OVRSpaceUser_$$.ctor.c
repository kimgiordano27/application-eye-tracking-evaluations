/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRSpaceUser>$$.ctor
ENTRY_POINT: 04e5002c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e50370) */

undefined8
System_Array_InternalEnumerator<OVRSpaceUser>___ctor
          (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w24;
  int iVar9;
  long unaff_x26;
  long *unaff_x27;
  int iVar10;
  long unaff_x29;
  
  memset((void *)(param_1 - in_x9),0,param_4);
  lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83fb0);
  FUN_077e9ab0(lVar2,(void *)(param_1 - in_x9),unaff_w24,0);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
  }
  lVar6 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04e501c0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_04e501c0:
  plVar4 = (long *)(*(code *)*puVar3)();
  iVar10 = 0;
  iVar9 = 0;
LAB_04e501d8:
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04e50228;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*unaff_x27,0);
LAB_04e50228:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04e502a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,lVar5,0);
LAB_04e502a0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    iVar1 = FUN_04e4f39c();
    if (-1 < iVar1) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = FUN_077e9ba0(lVar2,iVar1,0);
      if ((uVar7 & 1) == 0) {
        FUN_077e9b24(lVar2,iVar1,0);
        iVar10 = iVar10 + 1;
      }
      goto LAB_04e501d8;
    }
    iVar9 = iVar9 + 1;
  } while ((unaff_x21 & 1) == 0);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          System_Array_InternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_Reset;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
System_Array_InternalEnumerator<OVRTelemetryMarker>__System_Collections_IEnumerator_Reset:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar9,iVar10);
}


