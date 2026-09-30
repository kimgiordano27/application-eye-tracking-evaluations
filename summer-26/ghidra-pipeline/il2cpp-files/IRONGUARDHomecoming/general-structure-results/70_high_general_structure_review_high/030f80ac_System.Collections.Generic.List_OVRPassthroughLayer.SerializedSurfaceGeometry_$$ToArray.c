/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 030f80ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray
               (long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int in_w9;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar2 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = in_w9 + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      uVar5 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      lVar2 = lVar2 + (long)(int)uVar1 * 0x20;
      *(undefined8 *)(lVar2 + 0x28) = param_2[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      *(undefined8 *)(lVar2 + 0x30) = uVar3;
    }
    else {
      in_stack_00000028 = param_2[1];
      in_stack_00000020 = *param_2;
      in_stack_00000038 = param_2[3];
      in_stack_00000030 = param_2[2];
      FUN_030f8114(param_1,&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


