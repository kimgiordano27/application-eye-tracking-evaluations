/*
FUNCTION_NAME: FUN_0222dfc4
ENTRY_POINT: 0222dfc4
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


void FUN_0222dfc4(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5
                 )

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
                    /* try { // try from 0222dfc4 to 0232dfcb has its CatchHandler @ 0222e118 */
                    /* try { // try from 0222dfdc to 0232dfff has its CatchHandler @ 0222e11c */
  local_40 = param_3;
  local_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
                    /* try { // try from 0222e00c to 0232e023 has its CatchHandler @ 0222e10c */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* try { // try from 0222e02c to 0232e03b has its CatchHandler @ 0222e114 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222e098 to 0232e0b3 has its CatchHandler @ 0222df8c */
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      local_50 = local_40;
      local_48 = local_38;
                    /* try { // try from 0222e054 to 0232e077 has its CatchHandler @ 0222e11c */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e0c4 with catch @ 0222e100
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e0b4 with catch @ 0222e104
                        */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 0222e084 to 0232e097 has its CatchHandler @ 0222e108 */
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
                    /* try { // try from 0222e0c4 to 0232e0d3 has its CatchHandler @ 0222e100 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 0222e0dc to 0232e0e7 has its CatchHandler @ 0222e110 */
                    /* try { // try from 0222e0e8 to 0232e133 has its CatchHandler @ 0222df8c */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


