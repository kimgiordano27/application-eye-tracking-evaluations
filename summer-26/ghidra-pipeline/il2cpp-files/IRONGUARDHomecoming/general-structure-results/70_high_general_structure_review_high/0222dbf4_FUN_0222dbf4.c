/*
FUNCTION_NAME: FUN_0222dbf4
ENTRY_POINT: 0222dbf4
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


void FUN_0222dbf4(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 0222dc04 to 0232dc13 has its CatchHandler @ 0222dcec */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222dc2c to 0232dc4f has its CatchHandler @ 0222dcf4 */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dbb4 with catch @ 0222dcf4
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222dc2c with catch @ 0222dcf4
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222dd0c to 0232dd23 has its CatchHandler @ 0222dd64 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 0222dd24 to 0232dd53 has its CatchHandler @ 0222db64 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222dc5c to 0232dc6f has its CatchHandler @ 0222dce0 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dc9c with catch @ 0222dcd8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dc8c with catch @ 0222dcdc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dc5c with catch @ 0222dce0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dbe4 with catch @ 0222dce4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dcb4 with catch @ 0222dce8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dc04 with catch @ 0222dcec
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222db9c with catch @ 0222dcf0
                        */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[2];
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* try { // try from 0222dc70 to 0232dc8b has its CatchHandler @ 0222db64 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 0222dc8c to 0232dc97 has its CatchHandler @ 0222dcdc */
                    /* try { // try from 0222dc9c to 0232dcab has its CatchHandler @ 0222dcd8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222dcb4 to 0232dcbf has its CatchHandler @ 0222dce8 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222dcc0 to 0232dd0b has its CatchHandler @ 0222db64 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


