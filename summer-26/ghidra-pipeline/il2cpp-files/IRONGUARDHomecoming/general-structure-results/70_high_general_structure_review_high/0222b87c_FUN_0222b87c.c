/*
FUNCTION_NAME: FUN_0222b87c
ENTRY_POINT: 0222b87c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0222b87c(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

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
  undefined8 uStack_38;
  
                    /* try { // try from 0222b888 to 0232b89f has its CatchHandler @ 0222b988 */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 0222b8a8 to 0232b8b7 has its CatchHandler @ 0222b990 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 0222b8d0 to 0232b8f3 has its CatchHandler @ 0222b998 */
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
                    /* try { // try from 0222b900 to 0232b913 has its CatchHandler @ 0222b984 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* try { // try from 0222b914 to 0232b92f has its CatchHandler @ 0222b808 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222b9b0 to 0232b9c7 has its CatchHandler @ 0222ba08 */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 0222b930 to 0232b93b has its CatchHandler @ 0222b980 */
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b940 with catch @ 0222b97c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b930 with catch @ 0222b980
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b900 with catch @ 0222b984
                        */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b888 with catch @ 0222b988
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b958 with catch @ 0222b98c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b8a8 with catch @ 0222b990
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b840 with catch @ 0222b994
                        */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b858 with catch @ 0222b998
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222b8d0 with catch @ 0222b998
                        */
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


