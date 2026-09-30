/*
FUNCTION_NAME: FUN_0222dd40
ENTRY_POINT: 0222dd40
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


void FUN_0222dd40(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
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
  
                    /* try { // try from 0222dd54 to 0232dd63 has its CatchHandler @ 0222dd64 */
                    /* catch() { ... } // from try @ 0222dd0c with catch @ 0222dd64
                       catch() { ... } // from try @ 0222dd54 with catch @ 0222dd64 */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 0222dd68 to 0232dd6b has its CatchHandler @ 0222dd74 */
                    /* try { // try from 0222dd6c to 0232dd77 has its CatchHandler @ 0222db64 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222dd68 with catch @ 0222dd74
                        */
                    /* try { // try from 0222dd78 to 0232ddaf has its CatchHandler @ 0222dd78
                       catch() { ... } // from try @ 0222dd78 with catch @ 0222dd78
                       catch() { ... } // from try @ 0222de84 with catch @ 0222dd78
                       catch() { ... } // from try @ 0222ded4 with catch @ 0222dd78
                       catch() { ... } // from try @ 0222df38 with catch @ 0222dd78
                       catch() { ... } // from try @ 0222df80 with catch @ 0222dd78 */
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
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
                    /* try { // try from 0222ddb0 to 0232ddb7 has its CatchHandler @ 0222df04 */
      uStack_48 = uStack_38;
      local_50 = local_40;
                    /* try { // try from 0222ddc8 to 0232ddeb has its CatchHandler @ 0222df08 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 0222de70 to 0232de83 has its CatchHandler @ 0222def4 */
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 0222ddf8 to 0232de0f has its CatchHandler @ 0222def8 */
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222de40 to 0232de63 has its CatchHandler @ 0222df08 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


