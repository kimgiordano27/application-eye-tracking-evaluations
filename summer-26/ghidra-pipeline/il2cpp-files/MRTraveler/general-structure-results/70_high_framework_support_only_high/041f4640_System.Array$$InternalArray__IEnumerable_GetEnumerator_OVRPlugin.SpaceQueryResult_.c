/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 041f4640
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  byte unaff_w26;
  undefined8 *unaff_x27;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  uStack0000000000000060 = param_1;
  while( true ) {
    uVar1 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),param_3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    uVar7 = unaff_x20[1];
    uVar6 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    unaff_x27[4] = unaff_x20[4];
    unaff_x27[1] = uVar7;
    *unaff_x27 = uVar6;
    unaff_x27[3] = uVar5;
    unaff_x27[2] = uVar4;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_0715d3b4(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w26 = unaff_x23 < unaff_x25;
    if (unaff_x25 == unaff_x23) break;
    memcpy(&stack0x00000070,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    param_3 = &stack0x00000040;
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    uStack0000000000000060 = in_stack_00000090;
  }
  return unaff_w26 & 1;
}


