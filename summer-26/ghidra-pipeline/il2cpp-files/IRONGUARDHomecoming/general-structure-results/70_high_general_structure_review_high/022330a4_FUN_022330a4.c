/*
FUNCTION_NAME: FUN_022330a4
ENTRY_POINT: 022330a4
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


void FUN_022330a4(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 022330e8 to 023330f7 has its CatchHandler @ 022331c4 */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 022330fc to 02333107 has its CatchHandler @ 022331c8 */
  if (param_2 < uVar1) {
                    /* try { // try from 02233108 to 023331ab has its CatchHandler @ 02232e04 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
      local_40 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02232f64 with catch @ 022331cc
                       catch() { ... } // from try @ 02232fb4 with catch @ 022331cc */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 022331ac to 023331af has its CatchHandler @ 022331c8 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 022331b0 to 023331e3 has its CatchHandler @ 02232e04 */
                    /* catch() { ... } // from try @ 0223302c with catch @ 022331b4 */
                    /* catch() { ... } // from try @ 02232fd4 with catch @ 022331b8 */
                    /* catch() { ... } // from try @ 02233070 with catch @ 022331bc */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* catch() { ... } // from try @ 02233044 with catch @ 022331c0 */
                    /* catch() { ... } // from try @ 0223300c with catch @ 022331c4
                       catch() { ... } // from try @ 022330e8 with catch @ 022331c4 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022330fc with catch @ 022331c8
                       catch() { ... } // from try @ 022331ac with catch @ 022331c8 */
  FUN_01f08910(uVar6,param_4);
}


