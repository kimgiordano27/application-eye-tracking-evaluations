/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 04c92150
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
              (long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong uVar7;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((param_1 == 0) && (FUN_04077588(&DAT_094b8ee0), *(long *)(unaff_x19 + 0x38) == 0)) {
    FUN_040b1b28();
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  iVar2 = thunk_FUN_04086990(param_2,0);
  if (iVar2 < 2) {
    uVar3 = FUN_0769286c(param_2,0);
    puVar1 = PTR_DAT_092b70f0;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        memcpy(&stack0x00000018,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_2 + 0x104));
        uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)puVar1);
        }
        uVar5 = FUN_0748d2fc(&stack0x00000018,uVar4,
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
        if ((uVar5 & 1) != 0) {
          iVar2 = thunk_FUN_04086950(param_2,0,0);
          return iVar2 + (int)uVar7;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    iVar2 = thunk_FUN_04086950(param_2,0,0);
    return iVar2 + -1;
  }
  thunk_FUN_040dedf8(&DAT_094bbea8);
  uVar4 = thunk_FUN_040b4efc();
  uVar6 = thunk_FUN_040dedf8(&DAT_0954b640);
  FUN_0768b53c(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar4);
}


