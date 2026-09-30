/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0234549c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  FUN_0216f874(param_2,0x14,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58));
  lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01dde7f8(lVar3);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(long *)(*param_2 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c(param_2);
  }
  puVar2 = (undefined8 *)thunk_FUN_01de290c(param_2);
  uVar8 = puVar2[5];
  uVar7 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  lVar3 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      lVar3 = lVar3 + (long)(int)uVar1 * 0x40;
      *(undefined8 *)(lVar3 + 0x48) = uVar8;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      *(undefined8 *)(lVar3 + 0x58) = uVar6;
      *(undefined8 *)(lVar3 + 0x50) = uVar5;
      *(undefined8 *)(lVar3 + 0x28) = uVar12;
      *(undefined8 *)(lVar3 + 0x20) = uVar11;
      *(undefined8 *)(lVar3 + 0x38) = uVar10;
      *(undefined8 *)(lVar3 + 0x30) = uVar9;
      thunk_FUN_01e10808(lVar3 + 0x20,0);
    }
    else {
      in_stack_00000080 = uVar11;
      in_stack_00000088 = uVar12;
      in_stack_00000090 = uVar9;
      in_stack_00000098 = uVar10;
      in_stack_000000a0 = uVar7;
      in_stack_000000a8 = uVar8;
      in_stack_000000b0 = uVar5;
      in_stack_000000b8 = uVar6;
      FUN_023453ec(param_1,&stack0x00000080,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    return *(int *)(param_1 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


