/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03031620
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  
  plVar1 = (long *)(*(code *)*param_4)();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_03031684;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*unaff_x25,4);
LAB_03031684:
    fVar6 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar9 = (ulong)(uint)(unaff_s10 + param_3 * 0.5);
      uVar8 = (ulong)(uint)(unaff_s9 + param_2 * 0.5);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065cbdd8) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_03031708;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_03031708:
      uVar7 = (*(code *)*puVar2)(unaff_s8 + fVar6 * 0.5,uVar8,uVar9);
      plVar1 = *(long **)(unaff_x22 + 0x20);
      if (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x51) * 0x10 + 0x138);
              goto LAB_030317a0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*unaff_x23,0x51);
LAB_030317a0:
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000080 = 0;
        uVar7 = (*(code *)*puVar2)(uVar7,uVar8,uVar9,DAT_013dde24,plVar1,&stack0x00000070,0,1,0,1,
                                   puVar2[1]);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


