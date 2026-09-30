/*
FUNCTION_NAME: FUN_0222a998
ENTRY_POINT: 0222a998
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


void FUN_0222a998(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

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
  undefined8 uStack_38;
  
                    /* catch() { ... } // from try @ 0222a980 with catch @ 0222a9a4 */
                    /* try { // try from 0222a9a8 to 0232a9b3 has its CatchHandler @ 0222a9c8 */
                    /* try { // try from 0222a9b4 to 0232a9bf has its CatchHandler @ 0222a8cc */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 0222a9c0 to 0232a9c7 has its CatchHandler @ 0222a9c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222a9a8 with catch @ 0222a9c8
                       catch(type#2 @ 00000000) { ... } // from try @ 0222a9c0 with catch @ 0222a9c8
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222a9cc to 0232aa27 has its CatchHandler @ 0222a9cc
                       catch() { ... } // from try @ 0222a9cc with catch @ 0222a9cc
                       catch() { ... } // from try @ 0222aa48 with catch @ 0222a9cc
                       catch() { ... } // from try @ 0222aa84 with catch @ 0222a9cc
                       catch() { ... } // from try @ 0222aab4 with catch @ 0222a9cc */
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222aa40 with catch @ 0222aa64
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222aa28 with catch @ 0222aa68
                        */
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* try { // try from 0222aa28 to 0232aa37 has its CatchHandler @ 0222aa68 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222aaa8 with catch @ 0222aac8
                       catch(type#2 @ 00000000) { ... } // from try @ 0222aac0 with catch @ 0222aac8
                        */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222aacc to 0232ab27 has its CatchHandler @ 0222aacc
                       catch() { ... } // from try @ 0222aacc with catch @ 0222aacc
                       catch() { ... } // from try @ 0222ab48 with catch @ 0222aacc
                       catch() { ... } // from try @ 0222ab84 with catch @ 0222aacc
                       catch() { ... } // from try @ 0222abb4 with catch @ 0222aacc */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 0222aa40 to 0232aa47 has its CatchHandler @ 0222aa64 */
                    /* try { // try from 0222aa48 to 0232aa7f has its CatchHandler @ 0222a9cc */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222aac0 to 0232aac7 has its CatchHandler @ 0222aac8 */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
                    /* try { // try from 0222aa84 to 0232aaa7 has its CatchHandler @ 0222a9cc */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* catch() { ... } // from try @ 0222aa80 with catch @ 0222aaa4 */
                    /* try { // try from 0222aaa8 to 0232aab3 has its CatchHandler @ 0222aac8 */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 0222aab4 to 0232aabf has its CatchHandler @ 0222a9cc */
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


