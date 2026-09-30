/*
FUNCTION_NAME: FUN_02228c14
ENTRY_POINT: 02228c14
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


void FUN_02228c14(undefined8 param_1,uint param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  
                    /* try { // try from 02228c14 to 02328c37 has its CatchHandler @ 02228d54 */
  local_34 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 02228c44 to 02328c5b has its CatchHandler @ 02228d44 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02228c64 to 02328c73 has its CatchHandler @ 02228d4c */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_34);
    }
    else {
                    /* try { // try from 02228c8c to 02328caf has its CatchHandler @ 02228d54 */
      local_38 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_38);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228cbc with catch @ 02228d40
                        */
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228c44 with catch @ 02228d44
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228d14 with catch @ 02228d48
                        */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 02228cbc to 02328ccf has its CatchHandler @ 02228d40 */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228cec with catch @ 02228d3c
                        */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 02228cd0 to 02328ceb has its CatchHandler @ 02228bc4 */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 02228cec to 02328cf7 has its CatchHandler @ 02228d3c */
                    /* try { // try from 02228cfc to 02328d0b has its CatchHandler @ 02228d38 */
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


