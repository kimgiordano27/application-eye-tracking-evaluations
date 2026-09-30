/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0361b130
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_BodyJointLocation>(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02eea7c4();
                    /* try { // try from 0361b138 to 0371b1bf has its CatchHandler @ 0361b098 */
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar2 = thunk_FUN_02ebb4bc();
  if (1 < iVar2) {
    thunk_FUN_02f239f0(PTR_DAT_06d36ba8);
    uVar4 = thunk_FUN_02ef1808();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d36bb0);
                    /* try { // try from 0361b244 to 0371b247 has its CatchHandler @ 0361b2b0 */
                    /* try { // try from 0361b248 to 0371b297 has its CatchHandler @ 0361b098 */
    FUN_056130c0(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar4);
  }
  uVar3 = FUN_0561a77c();
  puVar1 = PTR_DAT_06d36cf8;
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000010,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      uVar4 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar1);
      }
                    /* try { // try from 0361b1c0 to 0371b1c7 has its CatchHandler @ 0361b2bc */
      uVar5 = Unity_VisualScripting_Project<Vector2>__Operation
                        (&stack0x00000010,uVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10))
      ;
      if ((uVar5 & 1) != 0) {
        iVar2 = thunk_FUN_02ebb478();
        return iVar2 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
                    /* try { // try from 0361b1e0 to 0371b20f has its CatchHandler @ 0361b310 */
  iVar2 = thunk_FUN_02ebb478();
                    /* try { // try from 0361b218 to 0371b227 has its CatchHandler @ 0361b2b4 */
  return iVar2 + -1;
}


