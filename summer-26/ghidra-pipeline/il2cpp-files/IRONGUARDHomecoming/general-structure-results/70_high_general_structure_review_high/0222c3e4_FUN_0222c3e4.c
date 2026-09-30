/*
FUNCTION_NAME: FUN_0222c3e4
ENTRY_POINT: 0222c3e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0222c3e4(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c394 with catch @ 0222c3e4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c364 with catch @ 0222c3e8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c2ec with catch @ 0222c3ec
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c3bc with catch @ 0222c3f0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c30c with catch @ 0222c3f4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c2a4 with catch @ 0222c3f8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c2bc with catch @ 0222c3fc
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222c334 with catch @ 0222c3fc
                        */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222c414 to 0232c42b has its CatchHandler @ 0222c46c */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 0222c42c to 0232c45b has its CatchHandler @ 0222c26c */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222c500 to 0232c517 has its CatchHandler @ 0222c600 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222c4d0 to 0232c4f3 has its CatchHandler @ 0222c610 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[4];
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
                    /* try { // try from 0222c45c to 0232c46b has its CatchHandler @ 0222c46c */
                    /* catch() { ... } // from try @ 0222c414 with catch @ 0222c46c
                       catch() { ... } // from try @ 0222c45c with catch @ 0222c46c */
                    /* try { // try from 0222c470 to 0232c473 has its CatchHandler @ 0222c47c */
                    /* try { // try from 0222c474 to 0232c47f has its CatchHandler @ 0222c26c */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_60);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222c470 with catch @ 0222c47c
                        */
                    /* try { // try from 0222c480 to 0232c4b7 has its CatchHandler @ 0222c480
                       catch() { ... } // from try @ 0222c480 with catch @ 0222c480
                       catch() { ... } // from try @ 0222c58c with catch @ 0222c480
                       catch() { ... } // from try @ 0222c5dc with catch @ 0222c480
                       catch() { ... } // from try @ 0222c640 with catch @ 0222c480
                       catch() { ... } // from try @ 0222c688 with catch @ 0222c480 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222c520 to 0232c52f has its CatchHandler @ 0222c608 */
  FUN_01f08a44();
}


