/*
FUNCTION_NAME: FUN_0273f3fc
ENTRY_POINT: 0273f3fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0273f3fc(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_24;
  
  if (param_2 == 0) {
                    /* try { // try from 0273f520 to 0283f553 has its CatchHandler @ 0273f114 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273f508 with catch @ 0273f530
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273f428 with catch @ 0273f534
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273f49c with catch @ 0273f538
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0273f50c with catch @ 0273f53c
                        */
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar5,uVar6,0);
  }
  else {
    iVar1 = thunk_FUN_01eca4a4(param_2,0);
                    /* try { // try from 0273f428 to 0283f48b has its CatchHandler @ 0273f534 */
    if (iVar1 == 1) {
      iVar1 = thunk_FUN_01eca460(param_2,0,0);
      if (iVar1 == 0) {
        if ((param_3 < 0) || (iVar1 = FUN_03582fa8(param_2,0), iVar1 < param_3)) {
          local_24 = param_3;
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                    );
          uVar6 = thunk_FUN_01f113fc(uVar6,&local_24);
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
          uVar5 = thunk_FUN_01f117cc();
          uVar2 = thunk_FUN_01efb3a4(Method_System_Decimal_ToUInt16__);
          uVar3 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                                    );
                    /* try { // try from 0273f508 to 0283f50b has its CatchHandler @ 0273f530 */
                    /* try { // try from 0273f50c to 0283f51f has its CatchHandler @ 0273f53c */
          FUN_034f48f0(uVar5,uVar2,uVar6,uVar3,0);
        }
        else {
          iVar1 = FUN_03582fa8(param_2,0);
          if (*(int *)(param_1 + 0x18) <= iVar1 - param_3) {
            FUN_0358d498(*(undefined8 *)(param_1 + 0x10),0,param_2,param_3,*(int *)(param_1 + 0x18),
                         0);
                    /* try { // try from 0273f49c to 0283f4df has its CatchHandler @ 0273f538 */
            FUN_0358f33c(param_2,param_3,*(undefined4 *)(param_1 + 0x18),0);
            return;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar5 = thunk_FUN_01f117cc();
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                                    );
          FUN_034f6754(uVar5,uVar6,0);
        }
        goto LAB_0273f5f0;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_15__;
    }
    else {
                    /* try { // try from 0273f554 to 0283f56b has its CatchHandler @ 0273f5a0 */
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar4 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_14__;
                    /* try { // try from 0273f56c to 0283f58f has its CatchHandler @ 0273f114 */
    }
                    /* try { // try from 0273f590 to 0283f59f has its CatchHandler @ 0273f5a0 */
    uVar6 = thunk_FUN_01efb3a4(puVar4);
                    /* catch() { ... } // from try @ 0273f554 with catch @ 0273f5a0
                       catch() { ... } // from try @ 0273f590 with catch @ 0273f5a0 */
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
                    /* try { // try from 0273f5a4 to 0283f5a7 has its CatchHandler @ 0273f5b0 */
                    /* try { // try from 0273f5a8 to 0283f5b3 has its CatchHandler @ 0273f114 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0273f5a4 with catch @ 0273f5b0
                        */
    FUN_034efd98(uVar5,uVar6,uVar2,0);
  }
LAB_0273f5f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_4);
}


