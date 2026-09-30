/*
FUNCTION_NAME: FUN_02225cfc
ENTRY_POINT: 02225cfc
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


void FUN_02225cfc(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
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
  
                    /* try { // try from 02225d04 to 02325d1b has its CatchHandler @ 02225d5c */
                    /* try { // try from 02225d1c to 02325d4b has its CatchHandler @ 02225b5c */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02225d4c to 02325d5b has its CatchHandler @ 02225d5c */
  if (param_2 < uVar1) {
                    /* catch() { ... } // from try @ 02225d04 with catch @ 02225d5c
                       catch() { ... } // from try @ 02225d4c with catch @ 02225d5c */
                    /* try { // try from 02225d60 to 02325d63 has its CatchHandler @ 02225d6c */
                    /* try { // try from 02225d64 to 02325d6f has its CatchHandler @ 02225b5c */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225d60 with catch @ 02225d6c
                        */
                    /* try { // try from 02225d70 to 02325da7 has its CatchHandler @ 02225d70
                       catch() { ... } // from try @ 02225d70 with catch @ 02225d70
                       catch() { ... } // from try @ 02225e7c with catch @ 02225d70
                       catch() { ... } // from try @ 02225ecc with catch @ 02225d70
                       catch() { ... } // from try @ 02225f30 with catch @ 02225d70
                       catch() { ... } // from try @ 02225f78 with catch @ 02225d70 */
      uStack_48 = uStack_38;
      local_50 = local_40;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 02225da8 to 02325daf has its CatchHandler @ 02225efc */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 02225dc0 to 02325de3 has its CatchHandler @ 02225f00 */
    }
    return;
  }
                    /* try { // try from 02225df0 to 02325e07 has its CatchHandler @ 02225ef0 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 02225e10 to 02325e1f has its CatchHandler @ 02225ef8 */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


