/*
FUNCTION_NAME: FUN_02226aec
ENTRY_POINT: 02226aec
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


void FUN_02226aec(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [96];
  
                    /* try { // try from 02226af4 to 02326b0f has its CatchHandler @ 022269e8 */
                    /* try { // try from 02226b10 to 02326b1b has its CatchHandler @ 02226b60 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02226b20 to 02326b2f has its CatchHandler @ 02226b5c */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02226b38 to 02326b43 has its CatchHandler @ 02226b6c */
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
                    /* try { // try from 02226b44 to 02326b8f has its CatchHandler @ 022269e8 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226b20 with catch @ 02226b5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226b10 with catch @ 02226b60
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226ae0 with catch @ 02226b64
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226a68 with catch @ 02226b68
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226b38 with catch @ 02226b6c
                        */
  memcpy(auStack_90,param_3,0x60);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226a88 with catch @ 02226b70
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226a20 with catch @ 02226b74
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226a38 with catch @ 02226b78
                       catch(type#1 @ 042b3198) { ... } // from try @ 02226ab0 with catch @ 02226b78
                        */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_90);
                    /* try { // try from 02226b90 to 02326ba7 has its CatchHandler @ 02226be8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02226c34 to 02326c3b has its CatchHandler @ 02226d88 */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


