/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 030314b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRLocatable_TrackingSpacePose>
          (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
          long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  ulong uVar13;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_03031544;
    }
    plVar3 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar3 != param_6);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 5) * 0x10 + 0x138);
LAB_03031544:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_065ca5b0;
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065ca5b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_030315b0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_065ca5b0,2);
LAB_030315b0:
    fVar7 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = *(long **)(unaff_x22 + 0x28);
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      fVar12 = param_4;
      fVar10 = param_3;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto 
            System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
            ;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*unaff_x24,5);
System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>:
      plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_03031684;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)puVar1,4);
LAB_03031684:
        fVar8 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
        if (unaff_x20 != (long *)0x0) {
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          uVar13 = (ulong)(uint)(param_4 + fVar12 * 0.5);
          uVar11 = (ulong)(uint)(param_3 + fVar10 * 0.5);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065cbdd8) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_03031708;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_03031708:
          uVar9 = (*(code *)*puVar2)(fVar7 + fVar8 * 0.5,uVar11,uVar13);
          plVar3 = *(long **)(unaff_x22 + 0x20);
          if (plVar3 != (long *)0x0) {
            lVar4 = *plVar3;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x23) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x51) * 0x10 + 0x138);
                  goto LAB_030317a0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*unaff_x23,0x51);
LAB_030317a0:
            in_stack_00000078 = 0;
            in_stack_00000070 = 0;
            in_stack_00000080 = 0;
            uVar9 = (*(code *)*puVar2)(uVar9,uVar11,uVar13,DAT_013dde24,plVar3,&stack0x00000070,0,1,
                                       0,1,puVar2[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


