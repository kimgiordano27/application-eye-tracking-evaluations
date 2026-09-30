/*
FUNCTION_NAME: FUN_02230384
ENTRY_POINT: 02230384
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


void FUN_02230384(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 0223038c to 023303a3 has its CatchHandler @ 0223048c */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 022303ac to 023303bb has its CatchHandler @ 02230494 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 022303d4 to 023303f7 has its CatchHandler @ 0223049c */
  if (uVar1 <= param_2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0223038c with catch @ 0223048c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0223045c with catch @ 02230490
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022303ac with catch @ 02230494
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02230344 with catch @ 02230498
                        */
    uVar6 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0223035c with catch @ 0223049c
                       catch(type#1 @ 042b3198) { ... } // from try @ 022303d4 with catch @ 0223049c
                        */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 022304b4 to 023304cb has its CatchHandler @ 0223050c */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
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
                    /* try { // try from 02230404 to 02330417 has its CatchHandler @ 02230488 */
                    /* try { // try from 02230418 to 02330433 has its CatchHandler @ 0223030c */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_70);
                    /* try { // try from 02230434 to 0233043f has its CatchHandler @ 02230484 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 022304cc to 023304fb has its CatchHandler @ 0223030c */
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* try { // try from 02230444 to 02330453 has its CatchHandler @ 02230480 */
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0223045c to 02330467 has its CatchHandler @ 02230490 */
                    /* try { // try from 02230468 to 023304b3 has its CatchHandler @ 0223030c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


