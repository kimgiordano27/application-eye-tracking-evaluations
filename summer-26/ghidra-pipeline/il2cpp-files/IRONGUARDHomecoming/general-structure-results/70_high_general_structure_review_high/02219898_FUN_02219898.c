/*
FUNCTION_NAME: FUN_02219898
ENTRY_POINT: 02219898
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02219898(undefined8 param_1,uint param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_38;
  
  local_38 = param_3;
  if ((DAT_0482fce7 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0482fce7 = 1;
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,&local_38);
    return;
  }
  if ((param_3 != 0) &&
     (lVar3 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = param_3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


