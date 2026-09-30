/*
FUNCTION_NAME: FUN_0222edd0
ENTRY_POINT: 0222edd0
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


void FUN_0222edd0(undefined8 param_1,uint param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined4 local_34;
  
                    /* try { // try from 0222edd8 to 0232edef has its CatchHandler @ 0222ee30 */
                    /* try { // try from 0222edf0 to 0232ee1f has its CatchHandler @ 0222ec30 */
  local_34 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 0222ee20 to 0232ee2f has its CatchHandler @ 0222ee30 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* catch() { ... } // from try @ 0222edd8 with catch @ 0222ee30
                       catch() { ... } // from try @ 0222ee20 with catch @ 0222ee30 */
                    /* try { // try from 0222ee34 to 0232ee37 has its CatchHandler @ 0222ee40 */
                    /* try { // try from 0222ee38 to 0232ee43 has its CatchHandler @ 0222ec30 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222ee34 with catch @ 0222ee40
                        */
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_34);
    }
    else {
                    /* try { // try from 0222ee44 to 0232ee7b has its CatchHandler @ 0222ee44
                       catch() { ... } // from try @ 0222ee44 with catch @ 0222ee44
                       catch() { ... } // from try @ 0222efa0 with catch @ 0222ee44
                       catch() { ... } // from try @ 0222f004 with catch @ 0222ee44
                       catch() { ... } // from try @ 0222f04c with catch @ 0222ee44 */
      local_38 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_38);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 0222ee7c to 0232ee83 has its CatchHandler @ 0222efd0 */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
                    /* try { // try from 0222eec4 to 0232eedb has its CatchHandler @ 0222efc4 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 0222eee4 to 0232eef3 has its CatchHandler @ 0222efcc */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


