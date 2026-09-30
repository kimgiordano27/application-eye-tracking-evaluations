/*
FUNCTION_NAME: FUN_02224f1c
ENTRY_POINT: 02224f1c
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


void FUN_02224f1c(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 02224f44 to 02324f4b has its CatchHandler @ 02225098 */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 02224f5c to 02324f7f has its CatchHandler @ 0222509c */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar2 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar2) {
    plVar3 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar3 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,param_3);
    }
    else {
      uStack_68 = param_3[1];
      local_70 = *param_3;
      uStack_58 = param_3[3];
      uStack_60 = param_3[2];
      lVar4 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_70);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,0);
      }
      if (*(uint *)(plVar3 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar3[(long)(int)param_2 + 4] = lVar4;
      thunk_FUN_01f51358(plVar3 + (long)(int)param_2 + 4,lVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar7 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


