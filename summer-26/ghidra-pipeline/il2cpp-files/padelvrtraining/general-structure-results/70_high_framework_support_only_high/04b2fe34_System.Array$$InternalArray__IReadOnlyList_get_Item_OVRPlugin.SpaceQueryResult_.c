/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04b2fe34
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


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined1 param_2 [16],undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  byte unaff_w26;
  undefined8 *unaff_x27;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    unaff_x27[2] = param_1;
                    /* try { // try from 04b2fe40 to 04c2fe53 has its CatchHandler @ 04b2fec4 */
    unaff_x27[1] = uVar4;
    *unaff_x27 = uVar3;
    uVar1 = thunk_FUN_071d4ed8(param_3,unaff_x22,0);
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w26 = unaff_x23 < unaff_x25;
    if (unaff_x25 == unaff_x23) break;
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000050;
    in_stack_00000030 = in_stack_00000048;
    in_stack_00000040 = in_stack_00000058;
    unaff_x22 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030
                                  );
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c(lVar2);
    }
    param_1 = unaff_x20[2];
    uVar4 = unaff_x20[1];
    uVar3 = *unaff_x20;
    param_3 = &stack0x00000008;
    in_stack_00000008 = lVar2;
  }
                    /* try { // try from 04b2fe70 to 04c2fe7b has its CatchHandler @ 04b2fec0 */
                    /* try { // try from 04b2fe80 to 04c2fe8f has its CatchHandler @ 04b2febc */
  return unaff_w26 & 1;
}


