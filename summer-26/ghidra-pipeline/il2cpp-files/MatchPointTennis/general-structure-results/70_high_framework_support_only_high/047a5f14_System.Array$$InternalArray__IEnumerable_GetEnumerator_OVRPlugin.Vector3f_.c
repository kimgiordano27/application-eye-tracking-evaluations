/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector3f>
ENTRY_POINT: 047a5f14
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


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector3f>
               (long *param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
                    /* try { // try from 047a5f14 to 048a5f27 has its CatchHandler @ 047a6564 */
                    /* try { // try from 047a5f30 to 048a5f33 has its CatchHandler @ 047a6560 */
  uStack0000000000000018 = param_2;
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (FUN_04447ba8(PTR_DAT_09f252c8), *(long *)(param_3 + 0x38) == 0)) {
                    /* try { // try from 047a5f50 to 048a5f53 has its CatchHandler @ 047a6514 */
                    /* try { // try from 047a5f54 to 048a5f5f has its CatchHandler @ 047a654c */
    FUN_04482014(param_3);
  }
  uStack000000000000001c = 0;
  iVar3 = thunk_FUN_04457530(param_1,0);
                    /* try { // try from 047a5f6c to 048a5f77 has its CatchHandler @ 047a6544 */
  if (iVar3 < 2) {
                    /* try { // try from 047a5f78 to 048a5f83 has its CatchHandler @ 047a6540 */
    uVar4 = FUN_07a56bec(param_1,0);
    puVar1 = PTR_DAT_09f252c8;
    if ((int)uVar4 < 1) {
      bVar2 = false;
    }
    else {
                    /* try { // try from 047a5f8c to 048a5f93 has its CatchHandler @ 047a6528 */
      uVar8 = 0;
                    /* try { // try from 047a5f94 to 048a5fa7 has its CatchHandler @ 047a6520 */
      bVar2 = true;
      do {
                    /* try { // try from 047a5fb0 to 048a5ffb has its CatchHandler @ 047a6590 */
        memcpy(&stack0x0000001c,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_1 + 0x104));
        in_stack_00000008 = uStack000000000000001c;
        uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000008);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        uVar6 = FUN_0956d95c(&stack0x00000018,uVar5,
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
                    /* try { // try from 047a603c to 048a6047 has its CatchHandler @ 047a6518 */
  thunk_FUN_044adef4(PTR_DAT_09f25260);
  uVar5 = thunk_FUN_0448520c();
                    /* try { // try from 047a6050 to 048a6057 has its CatchHandler @ 047a6508 */
  uVar7 = thunk_FUN_044adef4(PTR_DAT_09f25268);
                    /* try { // try from 047a6058 to 048a606b has its CatchHandler @ 047a6500 */
  FUN_07a4f424(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar5,param_3);
}


