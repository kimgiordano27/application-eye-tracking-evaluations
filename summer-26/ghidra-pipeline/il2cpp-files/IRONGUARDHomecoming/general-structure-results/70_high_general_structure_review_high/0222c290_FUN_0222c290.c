/*
FUNCTION_NAME: FUN_0222c290
ENTRY_POINT: 0222c290
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


void FUN_0222c290(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 0222c2a4 to 0232c2ab has its CatchHandler @ 0222c3f8 */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222c2bc to 0232c2df has its CatchHandler @ 0222c3fc */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* try { // try from 0222c3a4 to 0232c3b3 has its CatchHandler @ 0222c3e0 */
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 0222c3bc to 0232c3c7 has its CatchHandler @ 0222c3f0 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 0222c3c8 to 0232c413 has its CatchHandler @ 0222c26c */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222c2ec to 0232c303 has its CatchHandler @ 0222c3ec */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222c378 to 0232c393 has its CatchHandler @ 0222c26c */
                    /* try { // try from 0222c394 to 0232c39f has its CatchHandler @ 0222c3e4 */
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
                    /* try { // try from 0222c30c to 0232c31b has its CatchHandler @ 0222c3f4 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_70);
                    /* try { // try from 0222c334 to 0232c357 has its CatchHandler @ 0222c3fc */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222c3a4 with catch @ 0222c3e0
                        */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222c364 to 0232c377 has its CatchHandler @ 0222c3e8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


