/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Bone>
ENTRY_POINT: 0361b27c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Bone>
              (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 0361b298 to 0371b29b has its CatchHandler @ 0361b2b8 */
                    /* try { // try from 0361b29c to 0371b2a7 has its CatchHandler @ 0361b2ac */
  if ((param_1 == 0) && (FUN_02f07e70(PTR_DAT_06d36d00), *(long *)(param_5 + 0x38) == 0)) {
                    /* try { // try from 0361b2a8 to 0371b2ab has its CatchHandler @ 0361b2b8 */
    FUN_02eea7c4(param_5);
  }
                    /* catch() { ... } // from try @ 0361b29c with catch @ 0361b2ac
                       try { // try from 0361b2ac to 0371b2db has its CatchHandler @ 0361b098 */
                    /* catch() { ... } // from try @ 0361b244 with catch @ 0361b2b0 */
                    /* catch() { ... } // from try @ 0361b218 with catch @ 0361b2b4 */
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* catch() { ... } // from try @ 0361b298 with catch @ 0361b2b8
                       catch() { ... } // from try @ 0361b2a8 with catch @ 0361b2b8 */
  iVar2 = thunk_FUN_02ebb4bc(param_2,0);
                    /* catch() { ... } // from try @ 0361b1c0 with catch @ 0361b2bc */
                    /* catch() { ... } // from try @ 0361b104 with catch @ 0361b2c0 */
  if (iVar2 < 2) {
                    /* catch() { ... } // from try @ 0361b124 with catch @ 0361b2c4 */
    uVar3 = FUN_0561a77c(param_2,0);
    puVar1 = PTR_DAT_06d36d00;
    if (0 < (int)uVar3) {
                    /* try { // try from 0361b2dc to 0371b2df has its CatchHandler @ 0361b2ec */
      uVar7 = 0;
      do {
                    /* catch() { ... } // from try @ 0361b2dc with catch @ 0361b2ec */
                    /* try { // try from 0361b2fc to 0371b30f has its CatchHandler @ 0361b364 */
        memcpy(&stack0x00000010,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_2 + 0x104));
                    /* catch() { ... } // from try @ 0361b1e0 with catch @ 0361b310
                       try { // try from 0361b310 to 0371b327 has its CatchHandler @ 0361b098 */
        uVar4 = thunk_FUN_02ef1438(*(undefined8 *)(*(long *)(param_5 + 0x38) + 8));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0361b328 to 0371b32b has its CatchHandler @ 0361b338 */
          thunk_FUN_02f12b58(*(long *)puVar1);
        }
                    /* catch() { ... } // from try @ 0361b328 with catch @ 0361b338 */
        uVar5 = FUN_043542d8(&stack0x00000010,uVar4,
                             *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x10));
        if ((uVar5 & 1) != 0) {
          iVar2 = thunk_FUN_02ebb478(param_2,0,0);
          return iVar2 + (int)uVar7;
        }
                    /* try { // try from 0361b348 to 0371b34f has its CatchHandler @ 0361b364 */
        uVar7 = uVar7 + 1;
                    /* try { // try from 0361b350 to 0371b35b has its CatchHandler @ 0361b098 */
      } while (uVar3 != uVar7);
    }
                    /* try { // try from 0361b35c to 0371b363 has its CatchHandler @ 0361b364 */
    iVar2 = thunk_FUN_02ebb478(param_2,0,0);
                    /* catch() { ... } // from try @ 0361b2fc with catch @ 0361b364
                       catch() { ... } // from try @ 0361b348 with catch @ 0361b364
                       catch() { ... } // from try @ 0361b35c with catch @ 0361b364 */
    return iVar2 + -1;
  }
  thunk_FUN_02f239f0(PTR_DAT_06d36ba8);
  uVar4 = thunk_FUN_02ef1808();
  uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d36bb0);
  FUN_056130c0(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar4,param_5);
}


