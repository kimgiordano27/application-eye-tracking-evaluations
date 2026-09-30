/*
FUNCTION_NAME: FUN_02225a78
ENTRY_POINT: 02225a78
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


void FUN_02225a78(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 02225a80 to 02325a8f has its CatchHandler @ 02225abc */
                    /* try { // try from 02225a98 to 02325aa3 has its CatchHandler @ 02225acc */
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 02225aa4 to 02325aef has its CatchHandler @ 02225948 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225a80 with catch @ 02225abc
                        */
      FUN_01ecafa0(param_4);
    }
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225a70 with catch @ 02225ac0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225a40 with catch @ 02225ac4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022259c8 with catch @ 02225ac8
                        */
  uVar1 = FUN_03582fa8(param_1,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225a98 with catch @ 02225acc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022259e8 with catch @ 02225ad0
                        */
  if (param_2 < uVar1) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225980 with catch @ 02225ad4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225998 with catch @ 02225ad8
                       catch(type#1 @ 042b3198) { ... } // from try @ 02225a10 with catch @ 02225ad8
                        */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 02225af0 with catch @ 02225b48
                       catch() { ... } // from try @ 02225b38 with catch @ 02225b48 */
                    /* try { // try from 02225b4c to 02325b4f has its CatchHandler @ 02225b58 */
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
                    /* try { // try from 02225af0 to 02325b07 has its CatchHandler @ 02225b48 */
      local_40 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
                    /* try { // try from 02225b08 to 02325b37 has its CatchHandler @ 02225948 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02225bac to 02325bcf has its CatchHandler @ 02225cec */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 02225b38 to 02325b47 has its CatchHandler @ 02225b48 */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 02225b50 to 02325b5b has its CatchHandler @ 02225948 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225b4c with catch @ 02225b58
                        */
                    /* try { // try from 02225b5c to 02325b93 has its CatchHandler @ 02225b5c
                       catch() { ... } // from try @ 02225b5c with catch @ 02225b5c
                       catch() { ... } // from try @ 02225c68 with catch @ 02225b5c
                       catch() { ... } // from try @ 02225cb8 with catch @ 02225b5c
                       catch() { ... } // from try @ 02225d1c with catch @ 02225b5c
                       catch() { ... } // from try @ 02225d64 with catch @ 02225b5c */
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 02225b94 to 02325b9b has its CatchHandler @ 02225ce8 */
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


