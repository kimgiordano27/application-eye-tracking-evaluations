/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 04c1f67c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_VirtualKeyboardModelAnimationState>
              (long *param_1,void *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
                    /* catch() { ... } // from try @ 04c1f60c with catch @ 04c1f67c
                       catch() { ... } // from try @ 04c1f66c with catch @ 04c1f67c */
                    /* try { // try from 04c1f680 to 04d1f683 has its CatchHandler @ 04c1f68c */
                    /* try { // try from 04c1f684 to 04d1f68f has its CatchHandler @ 04c1f448 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c1f680 with catch @ 04c1f68c
                        */
  if (*(long *)(param_3 + 0x38) == 0) {
                    /* try { // try from 04c1f690 to 04d1f6cb has its CatchHandler @ 04c1f690
                       catch() { ... } // from try @ 04c1f690 with catch @ 04c1f690
                       catch() { ... } // from try @ 04c1f7b8 with catch @ 04c1f690
                       catch() { ... } // from try @ 04c1f808 with catch @ 04c1f690
                       catch() { ... } // from try @ 04c1f86c with catch @ 04c1f690
                       catch() { ... } // from try @ 04c1f8cc with catch @ 04c1f690 */
    FUN_040b1b28(param_3);
  }
  in_stack_000000e0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  iVar1 = thunk_FUN_04086990(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_040dedf8(&DAT_094bbea8);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(&DAT_0954b640);
    FUN_0768b53c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,param_3);
  }
  uVar2 = FUN_0769286c(param_1,0);
                    /* try { // try from 04c1f6cc to 04d1f6d3 has its CatchHandler @ 04c1f838 */
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
                    /* try { // try from 04c1f6e8 to 04d1f70f has its CatchHandler @ 04c1f83c */
      memcpy(&stack0x000000a0,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      memcpy(&stack0x00000058,param_2,0x48);
      thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000058);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_040b1acc(lVar6);
      }
      memcpy(&stack0x00000010,&stack0x000000a0,0x48);
      uVar3 = thunk_FUN_076d5148();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_04086950(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_04086950(param_1,0,0);
  return iVar1 + -1;
}


