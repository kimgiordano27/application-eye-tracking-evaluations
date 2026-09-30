/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 05fc5c6c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (long param_1)

{
  undefined1 in_CY;
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  int unaff_w25;
  undefined8 *unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  while (!(bool)in_CY) {
    lVar2 = unaff_x22 + (long)(int)unaff_w19 * (long)unaff_w25;
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    unaff_x26[2] = *(undefined8 *)(lVar2 + 0x30);
    unaff_x26[1] = uVar4;
    *unaff_x26 = uVar3;
    in_stack_00000008 = param_1;
    uVar1 = thunk_FUN_071d4ed8(&stack0x00000008,unaff_x23,0);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000040 = unaff_x21[2];
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    unaff_x23 = thunk_FUN_03d2eb70(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                                   &stack0x00000030);
    param_1 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03d8f26c(param_1);
    }
    in_CY = *(uint *)(unaff_x22 + 0x18) <= unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


