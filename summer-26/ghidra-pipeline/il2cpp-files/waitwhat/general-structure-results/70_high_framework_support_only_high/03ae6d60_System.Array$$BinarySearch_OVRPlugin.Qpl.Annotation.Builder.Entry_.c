/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03ae6d60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__BinarySearch<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int extraout_var;
  int iVar5;
  undefined *puVar4;
  
                    /* catch() { ... } // from try @ 03ae6d58 with catch @ 03ae6d64 */
                    /* try { // try from 03ae6d6c to 03be6d73 has its CatchHandler @ 03ae6e58 */
                    /* try { // try from 03ae6d74 to 03be6db3 has its CatchHandler @ 03ae67a8 */
                    /* catch() { ... } // from try @ 03ae68c8 with catch @ 03ae6d78
                       catch() { ... } // from try @ 03ae69ac with catch @ 03ae6d78 */
                    /* catch() { ... } // from try @ 03ae6894 with catch @ 03ae6d7c */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch() { ... } // from try @ 03ae6bf0 with catch @ 03ae6d88 */
                    /* catch() { ... } // from try @ 03ae6c94 with catch @ 03ae6d8c */
    FUN_03188a78(PTR_DAT_070f1fa8);
                    /* catch() { ... } // from try @ 03ae6ce8 with catch @ 03ae6d90 */
                    /* catch() { ... } // from try @ 03ae6bdc with catch @ 03ae6d94 */
    FUN_03188a78(PTR_DAT_070f1fb0);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_031c0a30(param_4);
    }
  }
  if (param_1 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
                    /* try { // try from 03ae6e3c to 03be6e3f has its CatchHandler @ 03ae6e44 */
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar4 = PTR_DAT_070f1fc8;
                    /* catch() { ... } // from try @ 03ae6e3c with catch @ 03ae6e44 */
                    /* try { // try from 03ae6e48 to 03be6e4f has its CatchHandler @ 03ae6e58 */
  }
  else {
                    /* try { // try from 03ae6db4 to 03be6db7 has its CatchHandler @ 03ae6e14 */
    if (param_2 != 0) {
      FUN_064fd424(param_1,0);
                    /* try { // try from 03ae6dc8 to 03be6dcb has its CatchHandler @ 03ae6e5c */
                    /* try { // try from 03ae6dcc to 03be6e0f has its CatchHandler @ 03ae67a8 */
      if (0 < extraout_var) {
        iVar5 = 0;
        do {
          uVar1 = FUN_04884e1c();
          lVar2 = FUN_03ae6e8c(uVar1,param_2,param_3,**(undefined8 **)(param_4 + 0x38));
          if (lVar2 != 0) {
            return lVar2;
          }
          iVar5 = iVar5 + 1;
                    /* try { // try from 03ae6e10 to 03be6e13 has its CatchHandler @ 03ae6e5c */
        } while (extraout_var != iVar5);
      }
                    /* catch() { ... } // from try @ 03ae6db4 with catch @ 03ae6e14 */
                    /* try { // try from 03ae6e1c to 03be6e23 has its CatchHandler @ 03ae6e58 */
                    /* try { // try from 03ae6e24 to 03be6e3b has its CatchHandler @ 03ae67a8 */
      return 0;
    }
                    /* try { // try from 03ae6e50 to 03be6e5f has its CatchHandler @ 03ae67a8 */
                    /* catch() { ... } // from try @ 03ae6d04 with catch @ 03ae6e58
                       catch() { ... } // from try @ 03ae6d6c with catch @ 03ae6e58
                       catch() { ... } // from try @ 03ae6e1c with catch @ 03ae6e58
                       catch() { ... } // from try @ 03ae6e48 with catch @ 03ae6e58 */
    thunk_FUN_031edd38(PTR_DAT_070c2888);
                    /* catch() { ... } // from try @ 03ae6dc8 with catch @ 03ae6e5c
                       catch() { ... } // from try @ 03ae6e10 with catch @ 03ae6e5c */
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
                    /* try { // try from 03ae6e60 to 03be6f4b has its CatchHandler @ 03ae6e60
                       catch() { ... } // from try @ 03ae6e60 with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae7268 with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae7370 with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae73c8 with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae7430 with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae7488 with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae74dc with catch @ 03ae6e60
                       catch() { ... } // from try @ 03ae7508 with catch @ 03ae6e60 */
    puVar4 = PTR_DAT_070c6e78;
  }
  uVar3 = thunk_FUN_031edd38(puVar4);
  FUN_05897880(uVar1,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar1,param_4);
}


