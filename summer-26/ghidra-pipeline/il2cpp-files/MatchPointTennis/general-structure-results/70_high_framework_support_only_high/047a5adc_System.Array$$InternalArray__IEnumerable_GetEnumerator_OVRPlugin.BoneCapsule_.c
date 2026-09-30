/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.BoneCapsule>
ENTRY_POINT: 047a5adc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_BoneCapsule>
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 in_stack_00000008;
  undefined2 in_stack_00000018;
  
                    /* try { // try from 047a5af8 to 048a5b43 has its CatchHandler @ 047a6624 */
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (FUN_04447ba8(PTR_DAT_09f252b8), *(long *)(param_3 + 0x38) == 0)) {
    FUN_04482014(param_3);
  }
  in_stack_00000018 = 0;
  iVar3 = thunk_FUN_04457530(param_1,0);
  if (iVar3 < 2) {
    uVar4 = FUN_07a56bec(param_1,0);
    puVar1 = PTR_DAT_09f252b8;
    if ((int)uVar4 < 1) {
      bVar2 = false;
    }
    else {
      uVar8 = 0;
      bVar2 = true;
      do {
                    /* try { // try from 047a5b5c to 048a5b5f has its CatchHandler @ 047a659c */
                    /* try { // try from 047a5b60 to 048a5b6b has its CatchHandler @ 047a65f0 */
        memcpy(&stack0x00000018,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_1 + 0x104));
        in_stack_00000008._4_2_ = in_stack_00000018;
        uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),
                                   (long)&stack0x00000008 + 4);
                    /* try { // try from 047a5b7c to 048a5b87 has its CatchHandler @ 047a65e4 */
                    /* try { // try from 047a5b88 to 048a5b93 has its CatchHandler @ 047a65dc */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        uVar6 = FUN_08b97b5c(&stack0x0000001c,uVar5,
                             *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        if ((uVar6 & 1) != 0) {
          return bVar2;
        }
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar4;
      } while (uVar4 != uVar8);
    }
    return bVar2;
  }
  thunk_FUN_044adef4(PTR_DAT_09f25260);
  uVar5 = thunk_FUN_0448520c();
  uVar7 = thunk_FUN_044adef4(PTR_DAT_09f25268);
  FUN_07a4f424(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar5,param_3);
}


