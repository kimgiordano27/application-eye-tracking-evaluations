/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 05807574
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while( true ) {
    if ((bool)in_ZR) {
      iVar1 = thunk_FUN_049556bc();
                    /* try { // try from 058075a8 to 059075b7 has its CatchHandler @ 058075b8 */
                    /* catch() { ... } // from try @ 05807548 with catch @ 058075b8
                       catch() { ... } // from try @ 058075a8 with catch @ 058075b8 */
                    /* try { // try from 058075bc to 059075bf has its CatchHandler @ 058075c8 */
      return iVar1 + -1;
    }
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    in_stack_00000040 = unaff_x21[2];
    uVar2 = thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34(lVar4);
    }
    *(undefined8 *)(unaff_x25 + 0x18) = in_stack_00000050;
    *(undefined8 *)(unaff_x25 + 0x10) = in_stack_00000048;
    *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000058;
    in_stack_00000008 = lVar4;
    uVar3 = thunk_FUN_08dd7094(&stack0x00000008,uVar2,0);
    if ((uVar3 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    in_ZR = unaff_x26 == unaff_x23;
  }
  iVar1 = thunk_FUN_049556bc();
  return iVar1 + (int)unaff_x23;
}


