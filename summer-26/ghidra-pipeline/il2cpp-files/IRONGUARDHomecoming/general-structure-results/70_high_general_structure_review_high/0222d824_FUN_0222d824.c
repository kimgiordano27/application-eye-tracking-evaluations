/*
FUNCTION_NAME: FUN_0222d824
ENTRY_POINT: 0222d824
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


void FUN_0222d824(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 0222d834 to 0232d847 has its CatchHandler @ 0222d8b8 */
                    /* try { // try from 0222d848 to 0232d863 has its CatchHandler @ 0222d73c */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222d864 to 0232d86f has its CatchHandler @ 0222d8b4 */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 0222d874 to 0232d883 has its CatchHandler @ 0222d8b0 */
  if (uVar1 <= param_2) {
                    /* try { // try from 0222d92c to 0232d93b has its CatchHandler @ 0222d93c */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* catch() { ... } // from try @ 0222d8e4 with catch @ 0222d93c
                       catch() { ... } // from try @ 0222d92c with catch @ 0222d93c */
                    /* try { // try from 0222d940 to 0232d943 has its CatchHandler @ 0222d94c */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 0222d944 to 0232d94f has its CatchHandler @ 0222d73c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222d940 with catch @ 0222d94c
                        */
                    /* try { // try from 0222d950 to 0232d987 has its CatchHandler @ 0222d950
                       catch() { ... } // from try @ 0222d950 with catch @ 0222d950
                       catch() { ... } // from try @ 0222daac with catch @ 0222d950
                       catch() { ... } // from try @ 0222db10 with catch @ 0222d950
                       catch() { ... } // from try @ 0222db58 with catch @ 0222d950 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222d88c to 0232d897 has its CatchHandler @ 0222d8c0 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[4];
  uStack_58 = param_3[1];
  local_60 = *param_3;
                    /* try { // try from 0222d898 to 0232d8e3 has its CatchHandler @ 0222d73c */
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d874 with catch @ 0222d8b0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d864 with catch @ 0222d8b4
                        */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_60);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d834 with catch @ 0222d8b8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d7bc with catch @ 0222d8bc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d88c with catch @ 0222d8c0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d7dc with catch @ 0222d8c4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d774 with catch @ 0222d8c8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d78c with catch @ 0222d8cc
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222d804 with catch @ 0222d8cc
                        */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222d8e4 to 0232d8fb has its CatchHandler @ 0222d93c */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222d8fc to 0232d92b has its CatchHandler @ 0222d73c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


