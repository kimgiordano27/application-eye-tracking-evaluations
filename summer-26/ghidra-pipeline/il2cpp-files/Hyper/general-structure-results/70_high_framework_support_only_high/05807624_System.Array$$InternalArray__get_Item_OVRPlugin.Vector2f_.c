/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 05807624
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_Vector2f>(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
                    /* try { // try from 05807624 to 0590764b has its CatchHandler @ 05807780 */
  if (param_1 == 0) {
    FUN_04980b90();
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar1 = thunk_FUN_049556fc();
  if (1 < iVar1) {
                    /* try { // try from 05807740 to 0590774b has its CatchHandler @ 05807774 */
    thunk_FUN_049ae08c(&DAT_0ae9ce18);
    uVar4 = thunk_FUN_04983f60();
                    /* try { // try from 0580774c to 05907797 has its CatchHandler @ 058075cc */
    uVar5 = thunk_FUN_049ae08c(&DAT_0af42f30);
    FUN_08d8c2dc(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar4);
  }
  uVar2 = FUN_08d948e8();
                    /* try { // try from 0580765c to 05907673 has its CatchHandler @ 05807770 */
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
                    /* try { // try from 0580767c to 0590768b has its CatchHandler @ 05807778 */
      memcpy(&stack0x00000050,
             (void *)((long)unaff_x20 + uVar7 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000038 = unaff_x21[1];
      in_stack_00000030 = *unaff_x21;
      in_stack_00000048 = unaff_x21[3];
      in_stack_00000040 = unaff_x21[2];
      thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
                    /* try { // try from 058076a8 to 059076cf has its CatchHandler @ 05807780 */
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_04980b34(lVar6);
      }
      uVar3 = thunk_FUN_08dd7094();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_049556bc();
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_049556bc();
  return iVar1 + -1;
}


