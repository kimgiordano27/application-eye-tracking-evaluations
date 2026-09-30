/*
FUNCTION_NAME: FUN_02231a10
ENTRY_POINT: 02231a10
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


void FUN_02231a10(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022319b8 with catch @ 02231a70
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022319d8 with catch @ 02231a74
                        */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
                    /* try { // try from 02231a8c to 02331a8f has its CatchHandler @ 02231ab0 */
                    /* try { // try from 02231a90 to 02331ab3 has its CatchHandler @ 022318c8 */
      local_40 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
                    /* catch() { ... } // from try @ 02231a8c with catch @ 02231ab0 */
                    /* try { // try from 02231ab4 to 02331abf has its CatchHandler @ 02231ad4 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 02231ac0 to 02331acb has its CatchHandler @ 022318c8 */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 02231acc to 02331ad3 has its CatchHandler @ 02231ad4 */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02231ab4 with catch @ 02231ad4
                       catch(type#2 @ 00000000) { ... } // from try @ 02231acc with catch @ 02231ad4
                        */
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


