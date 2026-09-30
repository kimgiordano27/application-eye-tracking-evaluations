/*
FUNCTION_NAME: FUN_0222d970
ENTRY_POINT: 0222d970
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


void FUN_0222d970(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
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
  
                    /* try { // try from 0222d988 to 0232d98f has its CatchHandler @ 0222dadc */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 0222d9a0 to 0232d9c3 has its CatchHandler @ 0222dae0 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* try { // try from 0222d9d0 to 0232d9e7 has its CatchHandler @ 0222dad0 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
                    /* try { // try from 0222d9f0 to 0232d9ff has its CatchHandler @ 0222dad8 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 0222daa0 to 0232daab has its CatchHandler @ 0222dad4 */
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 0222da18 to 0232da3b has its CatchHandler @ 0222dae0 */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 0222da48 to 0232da5b has its CatchHandler @ 0222dacc */
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222da78 to 0232da83 has its CatchHandler @ 0222dac8 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 0222da88 to 0232da97 has its CatchHandler @ 0222dac4 */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


