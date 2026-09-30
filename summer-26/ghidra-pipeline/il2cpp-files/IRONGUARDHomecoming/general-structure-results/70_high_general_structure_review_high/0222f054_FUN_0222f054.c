/*
FUNCTION_NAME: FUN_0222f054
ENTRY_POINT: 0222f054
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


void FUN_0222f054(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [72];
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222f048 with catch @ 0222f054
                        */
                    /* try { // try from 0222f058 to 0232f08f has its CatchHandler @ 0222f058
                       catch() { ... } // from try @ 0222f058 with catch @ 0222f058
                       catch() { ... } // from try @ 0222f164 with catch @ 0222f058
                       catch() { ... } // from try @ 0222f1b4 with catch @ 0222f058
                       catch() { ... } // from try @ 0222f218 with catch @ 0222f058
                       catch() { ... } // from try @ 0222f260 with catch @ 0222f058 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222f090 to 0232f097 has its CatchHandler @ 0222f1e4 */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 0222f0a8 to 0232f0cb has its CatchHandler @ 0222f1e8 */
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
                    /* try { // try from 0222f150 to 0232f163 has its CatchHandler @ 0222f1d4 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  memcpy(auStack_78,param_3,0x48);
                    /* try { // try from 0222f0d8 to 0232f0ef has its CatchHandler @ 0222f1d8 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_78);
                    /* try { // try from 0222f0f8 to 0232f107 has its CatchHandler @ 0222f1e0 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222f120 to 0232f143 has its CatchHandler @ 0222f1e8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222f190 to 0232f19f has its CatchHandler @ 0222f1cc */
  FUN_01f08a44();
}


