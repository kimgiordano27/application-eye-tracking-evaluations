/*
FUNCTION_NAME: FUN_02229f3c
ENTRY_POINT: 02229f3c
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


void FUN_02229f3c(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined3 uStack_34;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  local_28 = (undefined4)param_3;
                    /* try { // try from 02229f58 to 02329f7b has its CatchHandler @ 0222a020 */
  local_22 = (undefined1)((ulong)param_3 >> 0x30);
  local_24 = (undefined2)((ulong)param_3 >> 0x20);
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 02229f88 to 02329f9b has its CatchHandler @ 0222a00c */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02229f9c to 02329fb7 has its CatchHandler @ 02229e90 */
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
                    /* try { // try from 02229fb8 to 02329fc3 has its CatchHandler @ 0222a008 */
    if (plVar2 == (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229ec8 with catch @ 0222a01c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229ee0 with catch @ 0222a020
                       catch(type#1 @ 042b3198) { ... } // from try @ 02229f58 with catch @ 0222a020
                        */
      FUN_01f08848(param_1,param_2,&local_28);
    }
    else {
      uStack_34 = CONCAT12(local_22,local_24);
                    /* try { // try from 02229fc8 to 02329fd7 has its CatchHandler @ 0222a004 */
      local_38 = local_28;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_38);
                    /* try { // try from 02229fe0 to 02329feb has its CatchHandler @ 0222a014 */
                    /* try { // try from 02229fec to 0232a037 has its CatchHandler @ 02229e90 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 0222a080 to 0232a08f has its CatchHandler @ 0222a090 */
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229fc8 with catch @ 0222a004
                        */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229fb8 with catch @ 0222a008
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229f88 with catch @ 0222a00c
                        */
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229f10 with catch @ 0222a010
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229fe0 with catch @ 0222a014
                        */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229f30 with catch @ 0222a018
                        */
    }
                    /* try { // try from 0222a038 to 0232a04f has its CatchHandler @ 0222a090 */
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


