/*
FUNCTION_NAME: FUN_0222d58c
ENTRY_POINT: 0222d58c
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


void FUN_0222d58c(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 0222d5a0 to 0232d5b7 has its CatchHandler @ 0222d6a8 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222d5c0 to 0232d5cf has its CatchHandler @ 0222d6b0 */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d660 with catch @ 0222d69c
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d650 with catch @ 0222d6a0
                        */
    uVar6 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d618 with catch @ 0222d6a4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d5a0 with catch @ 0222d6a8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d678 with catch @ 0222d6ac
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d5c0 with catch @ 0222d6b0
                        */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d558 with catch @ 0222d6b4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d570 with catch @ 0222d6b8
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222d5e8 with catch @ 0222d6b8
                        */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222d5e8 to 0232d60b has its CatchHandler @ 0222d6b8 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222d678 to 0232d683 has its CatchHandler @ 0222d6ac */
                    /* try { // try from 0222d684 to 0232d6cf has its CatchHandler @ 0222d520 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[6];
  uStack_58 = param_3[3];
  local_60 = param_3[2];
  uStack_48 = param_3[5];
  uStack_50 = param_3[4];
  uStack_68 = param_3[1];
  local_70 = *param_3;
                    /* try { // try from 0222d618 to 0232d62b has its CatchHandler @ 0222d6a4 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_70);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222d650 to 0232d65b has its CatchHandler @ 0222d6a0 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222d660 to 0232d66f has its CatchHandler @ 0222d69c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


