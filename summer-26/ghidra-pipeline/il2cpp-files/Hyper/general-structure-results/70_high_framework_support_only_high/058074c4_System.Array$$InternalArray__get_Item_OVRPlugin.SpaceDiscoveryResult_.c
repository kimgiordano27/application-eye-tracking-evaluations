/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 058074c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar6;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
                    /* try { // try from 058074c8 to 059074d3 has its CatchHandler @ 05807518 */
  uVar1 = FUN_08d948e8(param_1,0);
  if (0 < (int)uVar1) {
    uVar6 = 0;
                    /* try { // try from 058074d8 to 059074e7 has its CatchHandler @ 05807514 */
    do {
                    /* try { // try from 058074f0 to 059074fb has its CatchHandler @ 05807524 */
                    /* try { // try from 058074fc to 05907547 has its CatchHandler @ 05807384 */
      memcpy(&stack0x00000048,
             (void *)((long)unaff_x20 + uVar6 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000038 = unaff_x21[1];
      in_stack_00000030 = *unaff_x21;
      in_stack_00000040 = unaff_x21[2];
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 058074d8 with catch @ 05807514
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 058074c8 with catch @ 05807518
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 05807498 with catch @ 0580751c
                        */
      uVar3 = thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 05807414 with catch @ 05807520
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 058074f0 with catch @ 05807524
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 05807434 with catch @ 05807528
                        */
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 058073c0 with catch @ 0580752c
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 058073dc with catch @ 05807530
                       catch(type#1 @ 0a568bf8) { ... } // from try @ 05807460 with catch @ 05807530
                        */
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34(lVar5);
      }
                    /* try { // try from 05807548 to 0590755f has its CatchHandler @ 058075b8 */
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000020 = in_stack_00000050;
      in_stack_00000018 = in_stack_00000048;
                    /* try { // try from 05807560 to 059075a7 has its CatchHandler @ 05807384 */
      in_stack_00000028 = in_stack_00000058;
      in_stack_00000008 = lVar5;
      uVar4 = thunk_FUN_08dd7094(&stack0x00000008,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar2 = thunk_FUN_049556bc();
        return iVar2 + (int)uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  iVar2 = thunk_FUN_049556bc();
  return iVar2 + -1;
}


