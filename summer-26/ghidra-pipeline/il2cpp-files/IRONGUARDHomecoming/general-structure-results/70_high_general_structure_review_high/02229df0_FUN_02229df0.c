/*
FUNCTION_NAME: FUN_02229df0
ENTRY_POINT: 02229df0
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


void FUN_02229df0(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229db4 with catch @ 02229df0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229da4 with catch @ 02229df4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229d74 with catch @ 02229df8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229cfc with catch @ 02229dfc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229dcc with catch @ 02229e00
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229d1c with catch @ 02229e04
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229cb4 with catch @ 02229e08
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229ccc with catch @ 02229e0c
                       catch(type#1 @ 042b3198) { ... } // from try @ 02229d44 with catch @ 02229e0c
                        */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02229e24 to 02329e3b has its CatchHandler @ 02229e7c */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02229e3c to 02329e6b has its CatchHandler @ 02229c7c */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 02229f10 to 02329f27 has its CatchHandler @ 0222a010 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 02229ee0 to 02329f03 has its CatchHandler @ 0222a020 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[2];
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* try { // try from 02229e6c to 02329e7b has its CatchHandler @ 02229e7c */
                    /* catch() { ... } // from try @ 02229e24 with catch @ 02229e7c
                       catch() { ... } // from try @ 02229e6c with catch @ 02229e7c */
                    /* try { // try from 02229e80 to 02329e83 has its CatchHandler @ 02229e8c */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 02229e84 to 02329e8f has its CatchHandler @ 02229c7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02229e80 with catch @ 02229e8c
                        */
                    /* try { // try from 02229e90 to 02329ec7 has its CatchHandler @ 02229e90
                       catch() { ... } // from try @ 02229e90 with catch @ 02229e90
                       catch() { ... } // from try @ 02229f9c with catch @ 02229e90
                       catch() { ... } // from try @ 02229fec with catch @ 02229e90
                       catch() { ... } // from try @ 0222a050 with catch @ 02229e90
                       catch() { ... } // from try @ 0222a098 with catch @ 02229e90 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 02229f30 to 02329f3f has its CatchHandler @ 0222a018 */
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 02229ec8 to 02329ecf has its CatchHandler @ 0222a01c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


