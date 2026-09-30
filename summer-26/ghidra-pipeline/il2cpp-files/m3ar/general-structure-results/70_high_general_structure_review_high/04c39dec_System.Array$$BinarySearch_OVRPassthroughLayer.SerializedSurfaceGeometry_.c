/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 04c39dec
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c39ff4) */
/* WARNING: Removing unreachable block (ram,0x04c3a07c) */

void System_Array__BinarySearch<OVRPassthroughLayer_SerializedSurfaceGeometry>(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long lVar9;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  lVar6 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_1) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04c39e3c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_04c39e3c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_08f8c040;
  plVar4 = (long *)thunk_FUN_0406ddbc(plVar3,*(undefined8 *)PTR_DAT_08f8c040);
  if (plVar4 != (long *)0x0) {
    lVar9 = *(long *)puVar1;
    uVar5 = thunk_FUN_0406ddbc(*(undefined8 *)(unaff_x19 + 0xa8),lVar9);
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_04c39ed4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar4,lVar9,4);
LAB_04c39ed4:
    (*(code *)*puVar2)(plVar4,uVar5,puVar2[1]);
    FUN_05b8d128();
  }
  in_stack_000000b0 = 0;
  in_stack_000000a8 = 0;
  _cStack00000000000000a0 = 0;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec(lVar6);
  }
  lVar9 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04c39fac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar3,lVar6,0);
LAB_04c39fac:
  (*(code *)*puVar2)(plVar3);
  if (cStack00000000000000a0 != '\0') {
    in_stack_00000098 = in_stack_000000b0;
    in_stack_00000090 = in_stack_000000a8;
    FUN_08629918(&stack0x00000090,0);
  }
  lVar6 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0406aaec(lVar6);
  }
  lVar9 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar9 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_04c39b48;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_04c39b48:
  (*(code *)*puVar2)();
  return;
}


