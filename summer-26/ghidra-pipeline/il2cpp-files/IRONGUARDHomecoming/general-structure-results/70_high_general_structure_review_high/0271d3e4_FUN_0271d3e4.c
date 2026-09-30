/*
FUNCTION_NAME: FUN_0271d3e4
ENTRY_POINT: 0271d3e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0271d3e4(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int local_24;
  
  if (-1 < param_2) {
    if (param_2 < *(int *)(param_1 + 0x20)) {
      uVar6 = *(int *)(param_1 + 0x20) - 1;
      *(uint *)(param_1 + 0x20) = uVar6;
      if (uVar6 - param_2 != 0 && param_2 <= (int)uVar6) {
        FUN_0358d498(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*(undefined8 *)(param_1 + 0x10),
                     param_2,uVar6 - param_2,0);
                    /* try { // try from 0271d434 to 0281d477 has its CatchHandler @ 0271d4d0 */
        FUN_0358d498(*(undefined8 *)(param_1 + 0x18),param_2 + 1,*(undefined8 *)(param_1 + 0x18),
                     param_2,*(int *)(param_1 + 0x20) - param_2,0);
        uVar6 = *(uint *)(param_1 + 0x20);
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        if (uVar6 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar6 * 0x10;
          puVar1 = (undefined8 *)(lVar7 + 0x20);
          *puVar1 = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          thunk_FUN_01f51358(puVar1,0);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  local_24 = param_2;
                    /* try { // try from 0271d4a0 to 0281d4a3 has its CatchHandler @ 0271d4c8 */
                    /* try { // try from 0271d4a4 to 0281d4b7 has its CatchHandler @ 0271d4d4 */
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
                    /* try { // try from 0271d4b8 to 0281d4eb has its CatchHandler @ 0271d0ac */
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0271d4a0 with catch @ 0271d4c8
                        */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0271d3c0 with catch @ 0271d4cc
                        */
  uVar3 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0271d434 with catch @ 0271d4d0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0271d4a4 with catch @ 0271d4d4
                        */
  uVar4 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 0271d4ec to 0281d503 has its CatchHandler @ 0271d538 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
                            );
                    /* try { // try from 0271d504 to 0281d527 has its CatchHandler @ 0271d0ac */
  FUN_034f48f0(uVar3,uVar4,uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_3);
}


