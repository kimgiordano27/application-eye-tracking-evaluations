/*
FUNCTION_NAME: FUN_02228990
ENTRY_POINT: 02228990
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02228990(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* catch() { ... } // from try @ 02228944 with catch @ 0222899c
                       catch() { ... } // from try @ 0222898c with catch @ 0222899c */
                    /* try { // try from 022289a0 to 023289a3 has its CatchHandler @ 022289ac */
                    /* try { // try from 022289a4 to 023289af has its CatchHandler @ 0222879c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 022289a0 with catch @ 022289ac
                        */
                    /* try { // try from 022289b0 to 023289e7 has its CatchHandler @ 022289b0
                       catch() { ... } // from try @ 022289b0 with catch @ 022289b0
                       catch() { ... } // from try @ 02228abc with catch @ 022289b0
                       catch() { ... } // from try @ 02228b0c with catch @ 022289b0
                       catch() { ... } // from try @ 02228b70 with catch @ 022289b0
                       catch() { ... } // from try @ 02228bb8 with catch @ 022289b0 */
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 022289e8 to 023289ef has its CatchHandler @ 02228b3c */
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
                    /* try { // try from 02228a00 to 02328a23 has its CatchHandler @ 02228b40 */
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
      local_40 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
                    /* try { // try from 02228a30 to 02328a47 has its CatchHandler @ 02228b30 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 02228abc to 02328ad7 has its CatchHandler @ 022289b0 */
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 02228a50 to 02328a5f has its CatchHandler @ 02228b38 */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 02228a78 to 02328a9b has its CatchHandler @ 02228b40 */
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


