/*
FUNCTION_NAME: FUN_0658c82c
ENTRY_POINT: 0658c82c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0658c82c(long *param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 local_28;
  int local_24;
  
  if ((DAT_07557520 & 1) == 0) {
    FUN_03188a78(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo);
    DAT_07557520 = 1;
  }
  FUN_0658c95c(param_2);
  puVar1 = PTR_DAT_070c1958;
  if (-1 < param_3) {
                    /* try { // try from 0658c870 to 0668c873 has its CatchHandler @ 0658c8c4 */
                    /* try { // try from 0658c874 to 0668c877 has its CatchHandler @ 0658c8b8 */
                    /* try { // try from 0658c878 to 0668c87f has its CatchHandler @ 0658c8b4 */
    if (param_3 < (int)param_2[2]) {
                    /* try { // try from 0658c880 to 0668c893 has its CatchHandler @ 0658c498 */
      if (*param_2 != 0) {
        lVar5 = param_2[1];
                    /* try { // try from 0658c894 to 0668c897 has its CatchHandler @ 0658c8a8 */
                    /* try { // try from 0658c898 to 0668c89b has its CatchHandler @ 0658c8a4 */
                    /* try { // try from 0658c89c to 0668c89f has its CatchHandler @ 0658c8a0 */
        auVar6 = FUN_03f7712c(*param_2,*(int *)((long)param_2 + 0x14) - param_3,
                              *(undefined8 *)
                               UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo
                             );
                    /* catch() { ... } // from try @ 0658c754 with catch @ 0658c8a0
                       catch() { ... } // from try @ 0658c89c with catch @ 0658c8a0
                       try { // try from 0658c8a0 to 0668c8f3 has its CatchHandler @ 0658c498 */
        *param_1 = lVar5;
                    /* catch() { ... } // from try @ 0658c898 with catch @ 0658c8a4 */
                    /* catch() { ... } // from try @ 0658c894 with catch @ 0658c8a8 */
        *(undefined1 (*) [16])(param_1 + 1) = auVar6;
                    /* catch() { ... } // from try @ 0658c878 with catch @ 0658c8b4 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
                    /* catch() { ... } // from try @ 0658c874 with catch @ 0658c8b8 */
                    /* catch() { ... } // from try @ 0658c870 with catch @ 0658c8c4 */
                    /* catch() { ... } // from try @ 0658c6f4 with catch @ 0658c8c8 */
  local_24 = param_3;
                    /* catch() { ... } // from try @ 0658c63c with catch @ 0658c8cc */
  uVar2 = thunk_FUN_031c39fc(*(undefined8 *)(PTR_DAT_070c1958 + 0x48),&local_24);
                    /* catch() { ... } // from try @ 0658c6b4 with catch @ 0658c8d0 */
                    /* catch() { ... } // from try @ 0658c5d8 with catch @ 0658c8d4 */
  local_28 = (undefined4)param_2[2];
  uVar3 = thunk_FUN_031c39fc(*(undefined8 *)(puVar1 + 0x48),&local_28);
                    /* try { // try from 0658c8f4 to 0668c8f7 has its CatchHandler @ 0658c904 */
  uVar4 = thunk_FUN_031edd38(PTR_DAT_070f3810);
                    /* catch() { ... } // from try @ 0658c8f4 with catch @ 0658c904 */
  uVar2 = FUN_057c02e8(uVar4,uVar2,uVar3,0);
                    /* try { // try from 0658c908 to 0668c90f has its CatchHandler @ 0658c918 */
                    /* try { // try from 0658c910 to 0668c91b has its CatchHandler @ 0658c498 */
  thunk_FUN_031edd38(PTR_DAT_070c5c08);
                    /* catch() { ... } // from try @ 0658c908 with catch @ 0658c918 */
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  uVar4 = thunk_FUN_031edd38(PTR_DAT_070d31a8);
  FUN_0589ed08(uVar3,uVar2,uVar4,0);
  uVar2 = thunk_FUN_031edd38(Oculus_Platform_Request<ShareMediaResult>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,uVar2);
}


