/*
FUNCTION_NAME: FUN_022293c8
ENTRY_POINT: 022293c8
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


void FUN_022293c8(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 022293c8 to 023293f7 has its CatchHandler @ 02229208 */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 022293f8 to 02329407 has its CatchHandler @ 02229408 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch() { ... } // from try @ 022293b0 with catch @ 02229408
                       catch() { ... } // from try @ 022293f8 with catch @ 02229408 */
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 0222940c to 0232940f has its CatchHandler @ 02229418 */
                    /* try { // try from 02229410 to 0232941b has its CatchHandler @ 02229208 */
  uVar1 = FUN_03582fa8(param_1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222940c with catch @ 02229418
                        */
                    /* try { // try from 0222941c to 02329453 has its CatchHandler @ 0222941c
                       catch() { ... } // from try @ 0222941c with catch @ 0222941c
                       catch() { ... } // from try @ 02229580 with catch @ 0222941c
                       catch() { ... } // from try @ 022295e4 with catch @ 0222941c
                       catch() { ... } // from try @ 0222962c with catch @ 0222941c */
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
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
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 02229454 to 0232945b has its CatchHandler @ 022295b0 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


