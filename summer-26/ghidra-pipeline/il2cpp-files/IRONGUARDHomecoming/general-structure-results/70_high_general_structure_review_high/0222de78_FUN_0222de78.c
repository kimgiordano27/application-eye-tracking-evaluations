/*
FUNCTION_NAME: FUN_0222de78
ENTRY_POINT: 0222de78
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


void FUN_0222de78(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 0222de84 to 0232de9f has its CatchHandler @ 0222dd78 */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222dea0 to 0232deab has its CatchHandler @ 0222def0 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222deb0 to 0232debf has its CatchHandler @ 0222deec */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 0222dec8 to 0232ded3 has its CatchHandler @ 0222defc */
  if (uVar1 <= param_2) {
                    /* catch() { ... } // from try @ 0222df20 with catch @ 0222df78
                       catch() { ... } // from try @ 0222df68 with catch @ 0222df78 */
                    /* try { // try from 0222df7c to 0232df7f has its CatchHandler @ 0222df88 */
                    /* try { // try from 0222df80 to 0232df8b has its CatchHandler @ 0222dd78 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222df7c with catch @ 0222df88
                        */
                    /* try { // try from 0222df8c to 0232dfc3 has its CatchHandler @ 0222df8c
                       catch() { ... } // from try @ 0222df8c with catch @ 0222df8c
                       catch() { ... } // from try @ 0222e098 with catch @ 0222df8c
                       catch() { ... } // from try @ 0222e0e8 with catch @ 0222df8c
                       catch() { ... } // from try @ 0222e14c with catch @ 0222df8c
                       catch() { ... } // from try @ 0222e194 with catch @ 0222df8c */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222ded4 to 0232df1f has its CatchHandler @ 0222dd78 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222df68 to 0232df77 has its CatchHandler @ 0222df78 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = *(undefined4 *)(param_3 + 2);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222deb0 with catch @ 0222deec
                        */
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dea0 with catch @ 0222def0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222de70 with catch @ 0222def4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ddf8 with catch @ 0222def8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dec8 with catch @ 0222defc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222de18 with catch @ 0222df00
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ddb0 with catch @ 0222df04
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ddc8 with catch @ 0222df08
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222de40 with catch @ 0222df08
                        */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 0222df20 to 0232df37 has its CatchHandler @ 0222df78 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222df38 to 0232df67 has its CatchHandler @ 0222dd78 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


