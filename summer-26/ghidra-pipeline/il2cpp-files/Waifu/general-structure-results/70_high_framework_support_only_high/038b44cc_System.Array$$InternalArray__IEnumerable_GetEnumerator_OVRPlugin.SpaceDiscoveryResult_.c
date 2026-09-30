/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 038b44cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>(void)

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
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000050;
    in_stack_00000030 = in_stack_00000048;
    in_stack_00000040 = in_stack_00000058;
    uVar1 = FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                    /* try { // try from 038b450c to 039b451b has its CatchHandler @ 038b454c */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618(lVar3);
    }
                    /* try { // try from 038b4524 to 039b452b has its CatchHandler @ 038b4548 */
    uVar5 = unaff_x20[1];
    uVar4 = *unaff_x20;
                    /* try { // try from 038b452c to 039b4563 has its CatchHandler @ 038b44b4 */
    unaff_x27[2] = unaff_x20[2];
    unaff_x27[1] = uVar5;
    *unaff_x27 = uVar4;
    in_stack_00000008 = lVar3;
    uVar2 = FUN_06891484(&stack0x00000008,uVar1);
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 038b4524 with catch @ 038b4548
                        */
    unaff_w26 = unaff_x23 < unaff_x25;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 038b450c with catch @ 038b454c
                        */
  } while (unaff_x25 != unaff_x23);
                    /* try { // try from 038b4564 to 039b4567 has its CatchHandler @ 038b4588 */
                    /* try { // try from 038b4568 to 039b458b has its CatchHandler @ 038b44b4 */
  return unaff_w26 & 1;
}


