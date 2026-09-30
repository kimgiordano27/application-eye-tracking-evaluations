/*
FUNCTION_NAME: FUN_02223eac
ENTRY_POINT: 02223eac
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


void FUN_02223eac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 uint param_5,long param_6)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
                    /* try { // try from 02223eb8 to 02323ec7 has its CatchHandler @ 02223ef4 */
                    /* try { // try from 02223ed0 to 02323edb has its CatchHandler @ 02223f04 */
  local_40 = param_1;
  uStack_3c = param_2;
  local_38 = param_3;
  if (*(long *)(param_6 + 0x38) == 0) {
                    /* try { // try from 02223edc to 02323f27 has its CatchHandler @ 02223d78 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_6 + 0x38) == 0) {
      FUN_01ecafa0(param_6);
    }
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223eb8 with catch @ 02223ef4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223ea8 with catch @ 02223ef8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223e70 with catch @ 02223efc
                        */
  uVar1 = FUN_03582fa8(param_4,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223df8 with catch @ 02223f00
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223ed0 with catch @ 02223f04
                        */
  if (param_5 < uVar1) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223e18 with catch @ 02223f08
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223db0 with catch @ 02223f0c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223dc8 with catch @ 02223f10
                       catch(type#1 @ 042b3198) { ... } // from try @ 02223e40 with catch @ 02223f10
                        */
    plVar2 = (long *)thunk_FUN_01f116d0(param_4,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_4,param_5,&local_40);
    }
    else {
      local_50 = CONCAT44(uStack_3c,local_40);
                    /* try { // try from 02223f28 to 02323f3f has its CatchHandler @ 02223f80 */
      local_48 = local_38;
                    /* try { // try from 02223f40 to 02323f6f has its CatchHandler @ 02223d78 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_6 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_5 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_5 + 4,lVar3);
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
  FUN_01f08910(uVar6,param_6);
}


