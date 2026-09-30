/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 04433b90
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext
               (long *param_1,long param_2,int param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000008;
  
  puVar1 = PTR_DAT_0759b388;
  uStack0000000000000008 = 0;
  if (param_2 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar2 = thunk_FUN_0322f148();
    puVar1 = PTR_DAT_075d8ce8;
  }
  else {
    if (param_4 != 0) {
      if (7 < param_3) {
        uStack0000000000000008 = 0;
        FUN_06dd33f0(&stack0x00000008,param_2,8,0);
        (**(code **)(*param_1 + 600))
                  (uStack0000000000000008,param_1,param_4,*(undefined8 *)(*param_1 + 0x260));
        return;
      }
                    /* try { // try from 04433c5c to 04533c5f has its CatchHandler @ 04433c6c */
      in_stack_00000000._4_4_ = param_3;
                    /* catch() { ... } // from try @ 04433c5c with catch @ 04433c6c */
      uVar2 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),(long)&stack0x00000000 + 4
                                );
      uVar3 = thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48));
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075d8cf0);
                    /* try { // try from 04433ca4 to 04533ccb has its CatchHandler @ 04433ce0 */
      uVar3 = FUN_05c89614(uVar4,uVar2,uVar3,0);
      thunk_FUN_03257e30(PTR_DAT_0759c0b8);
      uVar2 = thunk_FUN_0322f148();
      uVar4 = thunk_FUN_03257e30(PTR_DAT_075d8c58);
                    /* try { // try from 04433ccc to 04533cd7 has its CatchHandler @ 044339b0 */
                    /* try { // try from 04433cd8 to 04533cdf has its CatchHandler @ 04433ce0 */
      FUN_05d6f3dc(uVar2,uVar3,uVar4,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04433ca4 with catch @ 04433ce0
                       catch(type#2 @ 00000000) { ... } // from try @ 04433cd8 with catch @ 04433ce0
                        */
      goto LAB_04433ce4;
    }
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar2 = thunk_FUN_0322f148();
                    /* try { // try from 04433c2c to 04533c2f has its CatchHandler @ 04433c38 */
                    /* try { // try from 04433c30 to 04533c5b has its CatchHandler @ 044339b0 */
    puVar1 = PTR_DAT_075d7260;
  }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04433c2c with catch @ 04433c38
                        */
  uVar3 = thunk_FUN_03257e30(puVar1);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04433b68 with catch @ 04433c3c
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04433ab4 with catch @ 04433c40
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 04433af4 with catch @ 04433c44
                        */
  FUN_05d6f364(uVar2,uVar3,0);
LAB_04433ce4:
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,param_5);
}


