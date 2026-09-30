/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05fc5f28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack0000000000000008;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    uVar5 = unaff_x26[1];
    uVar4 = *unaff_x26;
    uVar3 = unaff_x26[3];
    uVar2 = unaff_x26[2];
    unaff_x24[4] = unaff_x26[4];
    unaff_x24[1] = uVar5;
    *unaff_x24 = uVar4;
    unaff_x24[3] = uVar3;
    unaff_x24[2] = uVar2;
    lStack0000000000000008 = param_1;
    uVar1 = thunk_FUN_071d4ed8(&stack0x00000008,unaff_x23,0);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = unaff_x25 + -1;
    unaff_x26 = unaff_x26 + 5;
    if (unaff_x25 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000060 = unaff_x21[4];
    in_stack_00000048 = unaff_x21[1];
    in_stack_00000040 = *unaff_x21;
    in_stack_00000058 = unaff_x21[3];
    in_stack_00000050 = unaff_x21[2];
    unaff_x23 = thunk_FUN_03d2eb70(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                                   &stack0x00000040);
    param_1 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03d8f26c(param_1);
    }
  } while (unaff_w19 < *(uint *)(unaff_x22 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


