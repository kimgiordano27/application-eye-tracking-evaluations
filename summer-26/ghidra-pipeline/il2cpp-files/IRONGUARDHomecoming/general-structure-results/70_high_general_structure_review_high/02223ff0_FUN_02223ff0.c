/*
FUNCTION_NAME: FUN_02223ff0
ENTRY_POINT: 02223ff0
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


void FUN_02223ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,uint param_6,long param_7)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
                    /* try { // try from 02223ff0 to 02323fff has its CatchHandler @ 02224030 */
                    /* try { // try from 02224008 to 0232400f has its CatchHandler @ 0222402c */
                    /* try { // try from 02224010 to 02324047 has its CatchHandler @ 02223f94 */
  local_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (*(long *)(param_7 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224008 with catch @ 0222402c
                        */
    if (*(long *)(param_7 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02223ff0 with catch @ 02224030
                        */
      FUN_01ecafa0(param_7);
    }
  }
  uVar1 = FUN_03582fa8(param_5,0);
                    /* try { // try from 02224048 to 0232404b has its CatchHandler @ 0222406c */
  if (param_6 < uVar1) {
                    /* try { // try from 0222404c to 0232406f has its CatchHandler @ 02223f94 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_5,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_5,param_6,&local_40);
    }
    else {
      uStack_48 = CONCAT44(uStack_34,uStack_38);
      local_50 = CONCAT44(uStack_3c,local_40);
                    /* catch() { ... } // from try @ 02224048 with catch @ 0222406c */
                    /* try { // try from 02224070 to 0232407b has its CatchHandler @ 02224090 */
                    /* try { // try from 0222407c to 02324087 has its CatchHandler @ 02223f94 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_7 + 0x38),&local_50);
                    /* try { // try from 02224088 to 0232408f has its CatchHandler @ 02224090 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02224070 with catch @ 02224090
                       catch(type#2 @ 00000000) { ... } // from try @ 02224088 with catch @ 02224090
                        */
                    /* try { // try from 02224094 to 023240cb has its CatchHandler @ 02224094
                       catch() { ... } // from try @ 02224094 with catch @ 02224094
                       catch() { ... } // from try @ 022241a0 with catch @ 02224094
                       catch() { ... } // from try @ 022241f0 with catch @ 02224094
                       catch() { ... } // from try @ 02224254 with catch @ 02224094
                       catch() { ... } // from try @ 0222429c with catch @ 02224094 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_6 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_6 + 4,lVar3);
    }
    return;
  }
                    /* try { // try from 022240e4 to 02324107 has its CatchHandler @ 02224224 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 02224114 to 0232412b has its CatchHandler @ 02224214 */
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_7);
}


