/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 05fc5ebc
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w3;
  long lVar3;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  param_1 = param_1 - in_w3;
  puVar4 = (undefined8 *)(in_x9 + 0x20);
  while (unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
    in_stack_00000060 = unaff_x21[4];
    in_stack_00000048 = unaff_x21[1];
    in_stack_00000040 = *unaff_x21;
    in_stack_00000058 = unaff_x21[3];
    in_stack_00000050 = unaff_x21[2];
    uVar1 = thunk_FUN_03d2eb70(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                               &stack0x00000040);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000010 = 0xffffffffffffffff;
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    uVar6 = puVar4[3];
    uVar5 = puVar4[2];
    unaff_x24[4] = puVar4[4];
    unaff_x24[1] = uVar8;
    *unaff_x24 = uVar7;
    unaff_x24[3] = uVar6;
    unaff_x24[2] = uVar5;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_071d4ed8(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    param_1 = param_1 + -1;
    puVar4 = puVar4 + 5;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


