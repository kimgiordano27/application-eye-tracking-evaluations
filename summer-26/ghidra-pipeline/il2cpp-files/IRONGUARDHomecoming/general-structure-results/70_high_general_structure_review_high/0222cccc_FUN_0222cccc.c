/*
FUNCTION_NAME: FUN_0222cccc
ENTRY_POINT: 0222cccc
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


void FUN_0222cccc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
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
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222ccc0 with catch @ 0222cccc
                        */
                    /* try { // try from 0222ccd0 to 0232cd07 has its CatchHandler @ 0222ccd0
                       catch() { ... } // from try @ 0222ccd0 with catch @ 0222ccd0
                       catch() { ... } // from try @ 0222ce2c with catch @ 0222ccd0
                       catch() { ... } // from try @ 0222ce90 with catch @ 0222ccd0
                       catch() { ... } // from try @ 0222ced8 with catch @ 0222ccd0 */
  local_40 = param_1;
  uStack_3c = param_2;
  local_38 = param_3;
  if (*(long *)(param_6 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222cd08 to 0232cd0f has its CatchHandler @ 0222ce5c */
    if (*(long *)(param_6 + 0x38) == 0) {
      FUN_01ecafa0(param_6);
    }
  }
  uVar1 = FUN_03582fa8(param_4,0);
                    /* try { // try from 0222cd20 to 0232cd43 has its CatchHandler @ 0222ce60 */
  if (param_5 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_4,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_4,param_5,&local_40);
    }
    else {
      local_50 = CONCAT44(uStack_3c,local_40);
      local_48 = local_38;
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


