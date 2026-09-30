/*
FUNCTION_NAME: FUN_0222ce10
ENTRY_POINT: 0222ce10
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


void FUN_0222ce10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,uint param_6,long param_7)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
                    /* try { // try from 0222ce20 to 0232ce2b has its CatchHandler @ 0222ce54 */
                    /* try { // try from 0222ce2c to 0232ce77 has its CatchHandler @ 0222ccd0 */
  local_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (*(long *)(param_7 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ce08 with catch @ 0222ce44
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222cdf8 with catch @ 0222ce48
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222cdc8 with catch @ 0222ce4c
                        */
    if (*(long *)(param_7 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222cd50 with catch @ 0222ce50
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ce20 with catch @ 0222ce54
                        */
      FUN_01ecafa0(param_7);
    }
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222cd70 with catch @ 0222ce58
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222cd08 with catch @ 0222ce5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222cd20 with catch @ 0222ce60
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222cd98 with catch @ 0222ce60
                        */
  uVar1 = FUN_03582fa8(param_5,0);
  if (param_6 < uVar1) {
                    /* try { // try from 0222ce78 to 0232ce8f has its CatchHandler @ 0222ced0 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_5,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222ced4 with catch @ 0222cee0
                        */
                    /* try { // try from 0222cee4 to 0232cf1b has its CatchHandler @ 0222cee4
                       catch() { ... } // from try @ 0222cee4 with catch @ 0222cee4
                       catch() { ... } // from try @ 0222cff0 with catch @ 0222cee4
                       catch() { ... } // from try @ 0222d040 with catch @ 0222cee4
                       catch() { ... } // from try @ 0222d0a4 with catch @ 0222cee4
                       catch() { ... } // from try @ 0222d0ec with catch @ 0222cee4 */
      FUN_01f08848(param_5,param_6,&local_40);
    }
    else {
      uStack_48 = CONCAT44(uStack_34,uStack_38);
      local_50 = CONCAT44(uStack_3c,local_40);
                    /* try { // try from 0222ce90 to 0232cebf has its CatchHandler @ 0222ccd0 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_7 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 0222cec0 to 0232cecf has its CatchHandler @ 0222ced0 */
      if (*(uint *)(plVar2 + 3) <= param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_6 + 4] = lVar3;
                    /* catch() { ... } // from try @ 0222ce78 with catch @ 0222ced0
                       catch() { ... } // from try @ 0222cec0 with catch @ 0222ced0 */
                    /* try { // try from 0222ced4 to 0232ced7 has its CatchHandler @ 0222cee0 */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_6 + 4,lVar3);
                    /* try { // try from 0222ced8 to 0232cee3 has its CatchHandler @ 0222ccd0 */
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222cf1c to 0232cf23 has its CatchHandler @ 0222d070 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 0222cf34 to 0232cf57 has its CatchHandler @ 0222d074 */
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_7);
}


