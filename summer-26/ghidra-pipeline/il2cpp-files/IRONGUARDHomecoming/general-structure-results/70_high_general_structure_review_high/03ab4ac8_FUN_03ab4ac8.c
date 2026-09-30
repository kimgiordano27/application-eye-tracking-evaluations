/*
FUNCTION_NAME: FUN_03ab4ac8
ENTRY_POINT: 03ab4ac8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03ab4ac8(long *param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 03ab4ad8 to 03bb4b57 has its CatchHandler @ 03ab4ad8
                       catch() { ... } // from try @ 03ab4ad8 with catch @ 03ab4ad8
                       catch() { ... } // from try @ 03ab4c18 with catch @ 03ab4ad8
                       catch() { ... } // from try @ 03ab4c30 with catch @ 03ab4ad8
                       catch() { ... } // from try @ 03ab4c88 with catch @ 03ab4ad8
                       catch() { ... } // from try @ 03ab4cd4 with catch @ 03ab4ad8 */
  if (*(char *)((long)param_1 + 0x35) != '\0') {
    plVar2 = (long *)thunk_FUN_01ecaf38(param_1,0);
    FUN_01bc50c0();
                    /* try { // try from 03ab4b58 to 03bb4b5f has its CatchHandler @ 03ab4c38 */
    uVar5 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_03579608(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(StringLiteral_8864);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03ab4b9c to 03bb4ba3 has its CatchHandler @ 03ab4c58 */
    FUN_01f08910(uVar4,uVar5);
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
                    /* try { // try from 03ab4bb0 to 03bb4bb7 has its CatchHandler @ 03ab4c34 */
                    /* try { // try from 03ab4bbc to 03bb4beb has its CatchHandler @ 03ab4c48 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      puVar3 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
    }
    else {
      if (-1 < param_4) {
        uVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
        if ((uVar1 & 1) == 0) {
                    /* try { // try from 03ab4c28 to 03bb4c2f has its CatchHandler @ 03ab4c48 */
                    /* catch() { ... } // from try @ 03ab4bf8 with catch @ 03ab4c30
                       try { // try from 03ab4c30 to 03bb4c6f has its CatchHandler @ 03ab4ad8 */
          thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
                    /* catch() { ... } // from try @ 03ab4bb0 with catch @ 03ab4c34 */
          uVar4 = thunk_FUN_01f117cc();
                    /* catch() { ... } // from try @ 03ab4b58 with catch @ 03ab4c38 */
                    /* catch() { ... } // from try @ 03ab4c24 with catch @ 03ab4c3c */
                    /* catch() { ... } // from try @ 03ab4c20 with catch @ 03ab4c40 */
          uVar5 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_VisualTreeUpdater_SetUpdater<UIRLayoutUpdater>__
                                    );
          FUN_0356663c(uVar4,uVar5,0);
        }
        else {
          if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
            FUN_03ab4a18(param_1,param_2,param_3,param_4);
            return;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar4 = thunk_FUN_01f117cc();
          uVar5 = thunk_FUN_01efb3a4(StringLiteral_8865);
          FUN_034f6754(uVar4,uVar5,0);
        }
        goto LAB_03ab4c8c;
      }
                    /* try { // try from 03ab4bf8 to 03bb4c03 has its CatchHandler @ 03ab4c30 */
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
                    /* try { // try from 03ab4c0c to 03bb4c0f has its CatchHandler @ 03ab4c54 */
      puVar3 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
                    /* try { // try from 03ab4c10 to 03bb4c13 has its CatchHandler @ 03ab4c50 */
    uVar5 = thunk_FUN_01efb3a4(puVar3);
                    /* try { // try from 03ab4c14 to 03bb4c17 has its CatchHandler @ 03ab4c4c */
                    /* try { // try from 03ab4c18 to 03bb4c1b has its CatchHandler @ 03ab4ad8 */
                    /* try { // try from 03ab4c1c to 03bb4c1f has its CatchHandler @ 03ab4c44 */
                    /* try { // try from 03ab4c20 to 03bb4c23 has its CatchHandler @ 03ab4c40 */
    FUN_034f7db4(uVar4,uVar5,0);
                    /* try { // try from 03ab4c24 to 03bb4c27 has its CatchHandler @ 03ab4c3c */
  }
LAB_03ab4c8c:
  uVar5 = thunk_FUN_01efb3a4(StringLiteral_8864);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


