/*
FUNCTION_NAME: FUN_02228ac8
ENTRY_POINT: 02228ac8
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


void FUN_02228ac8(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 02228ad8 to 02328ae3 has its CatchHandler @ 02228b28 */
                    /* try { // try from 02228ae8 to 02328af7 has its CatchHandler @ 02228b24 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02228b00 to 02328b0b has its CatchHandler @ 02228b34 */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02228b0c to 02328b57 has its CatchHandler @ 022289b0 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228ae8 with catch @ 02228b24
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228ad8 with catch @ 02228b28
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228aa8 with catch @ 02228b2c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228a30 with catch @ 02228b30
                        */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228b00 with catch @ 02228b34
                        */
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 02228b58 with catch @ 02228bb0
                       catch() { ... } // from try @ 02228ba0 with catch @ 02228bb0 */
                    /* try { // try from 02228bb4 to 02328bb7 has its CatchHandler @ 02228bc0 */
                    /* try { // try from 02228bb8 to 02328bc3 has its CatchHandler @ 022289b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02228bb4 with catch @ 02228bc0
                        */
                    /* try { // try from 02228bc4 to 02328bfb has its CatchHandler @ 02228bc4
                       catch() { ... } // from try @ 02228bc4 with catch @ 02228bc4
                       catch() { ... } // from try @ 02228cd0 with catch @ 02228bc4
                       catch() { ... } // from try @ 02228d20 with catch @ 02228bc4
                       catch() { ... } // from try @ 02228d84 with catch @ 02228bc4
                       catch() { ... } // from try @ 02228dcc with catch @ 02228bc4 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228a50 with catch @ 02228b38
                        */
  local_40 = param_3[2];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022289e8 with catch @ 02228b3c
                        */
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228a00 with catch @ 02228b40
                       catch(type#1 @ 042b3198) { ... } // from try @ 02228a78 with catch @ 02228b40
                        */
                    /* try { // try from 02228b58 to 02328b6f has its CatchHandler @ 02228bb0 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 02228b70 to 02328b9f has its CatchHandler @ 022289b0 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 02228ba0 to 02328baf has its CatchHandler @ 02228bb0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


