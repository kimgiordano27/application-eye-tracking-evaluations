/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 040b9c34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (FUN_03a8a718(&DAT_0861f0a8), *(long *)(param_3 + 0x38) == 0)) {
    FUN_03ac40ec(param_3);
  }
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  iVar3 = thunk_FUN_03a9985c(param_1,0);
  if (iVar3 < 2) {
    uVar4 = FUN_06769a04(param_1,0);
    puVar1 = PTR_DAT_08491450;
    if ((int)uVar4 < 1) {
      bVar2 = false;
    }
    else {
      uVar8 = 0;
      bVar2 = true;
      do {
        memcpy(&stack0x00000020,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_1 + 0x104));
        uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar1);
        }
        uVar6 = FUN_06c2d5bc(param_2,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        if ((uVar6 & 1) != 0) {
          return bVar2;
        }
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar4;
      } while (uVar4 != uVar8);
    }
    return bVar2;
  }
  thunk_FUN_03af1434(&DAT_0861d9c0);
  uVar5 = thunk_FUN_03ac74bc();
  uVar7 = thunk_FUN_03af1434(&DAT_08694740);
  FUN_06762458(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar5,param_3);
}


