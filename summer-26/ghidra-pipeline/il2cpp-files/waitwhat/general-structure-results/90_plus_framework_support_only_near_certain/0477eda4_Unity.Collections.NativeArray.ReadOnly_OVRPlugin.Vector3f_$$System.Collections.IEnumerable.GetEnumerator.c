/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0477eda4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0477ee40) */
/* WARNING: Removing unreachable block (ram,0x0477eeb0) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (param_1 != 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0)
    goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length;
    FUN_042e54fc(&stack0x00000020,*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0));
    while (uVar2 = FUN_054518b4(&stack0x00000020,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0xc0)),
          (uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),in_stack_00000030,*(undefined8 *)(lVar3 + 0x28));
    }
    FUN_054518b0(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 200));
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 == 0) goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),*(long *)(unaff_x19 + 0x40),
                 *(undefined8 *)(lVar3 + 0x28));
    }
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    *(undefined4 *)(unaff_x19 + 0x48) = 0;
    return;
  }
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


