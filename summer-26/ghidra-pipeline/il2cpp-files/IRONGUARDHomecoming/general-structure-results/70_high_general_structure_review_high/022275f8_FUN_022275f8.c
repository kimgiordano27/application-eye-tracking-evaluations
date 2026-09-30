/*
FUNCTION_NAME: FUN_022275f8
ENTRY_POINT: 022275f8
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


void FUN_022275f8(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
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
  
                    /* try { // try from 0222760c to 0232763b has its CatchHandler @ 0222744c */
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
                    /* try { // try from 0222763c to 0232764b has its CatchHandler @ 0222764c */
  uVar1 = FUN_03582fa8(param_1,0);
                    /* catch() { ... } // from try @ 022275f4 with catch @ 0222764c
                       catch() { ... } // from try @ 0222763c with catch @ 0222764c */
  if (param_2 < uVar1) {
                    /* try { // try from 02227650 to 02327653 has its CatchHandler @ 0222765c */
                    /* try { // try from 02227654 to 0232765f has its CatchHandler @ 0222744c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02227650 with catch @ 0222765c
                        */
                    /* try { // try from 02227660 to 023276bb has its CatchHandler @ 02227660
                       catch() { ... } // from try @ 02227660 with catch @ 02227660
                       catch() { ... } // from try @ 022276dc with catch @ 02227660
                       catch() { ... } // from try @ 02227718 with catch @ 02227660
                       catch() { ... } // from try @ 02227748 with catch @ 02227660 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


