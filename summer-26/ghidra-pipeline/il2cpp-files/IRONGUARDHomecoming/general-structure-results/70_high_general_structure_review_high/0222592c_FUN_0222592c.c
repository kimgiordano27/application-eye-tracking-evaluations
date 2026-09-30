/*
FUNCTION_NAME: FUN_0222592c
ENTRY_POINT: 0222592c
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


void FUN_0222592c(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 02225930 to 0232593b has its CatchHandler @ 02225848 */
                    /* try { // try from 0222593c to 02325943 has its CatchHandler @ 02225944 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225924 with catch @ 02225944
                       catch(type#2 @ 00000000) { ... } // from try @ 0222593c with catch @ 02225944
                        */
                    /* try { // try from 02225948 to 0232597f has its CatchHandler @ 02225948
                       catch() { ... } // from try @ 02225948 with catch @ 02225948
                       catch() { ... } // from try @ 02225a54 with catch @ 02225948
                       catch() { ... } // from try @ 02225aa4 with catch @ 02225948
                       catch() { ... } // from try @ 02225b08 with catch @ 02225948
                       catch() { ... } // from try @ 02225b50 with catch @ 02225948 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02225980 to 02325987 has its CatchHandler @ 02225ad4 */
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 02225a40 to 02325a53 has its CatchHandler @ 02225ac4 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 02225a54 to 02325a6f has its CatchHandler @ 02225948 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
                    /* try { // try from 02225998 to 023259bb has its CatchHandler @ 02225ad8 */
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 02225a10 to 02325a33 has its CatchHandler @ 02225ad8 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = *(undefined4 *)(param_3 + 2);
  uStack_48 = param_3[1];
  local_50 = *param_3;
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 022259c8 to 023259df has its CatchHandler @ 02225ac8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 02225a70 to 02325a7b has its CatchHandler @ 02225ac0 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 022259e8 to 023259f7 has its CatchHandler @ 02225ad0 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


