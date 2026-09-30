/*
FUNCTION_NAME: FUN_06998e28
ENTRY_POINT: 06998e28
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_06998e28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_AwaitUnsafeOnCompleted<TaskAwaiter<OvrAvatarManager_AvatarRequestBoolResults>,_OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
  ;
  local_38 = param_3;
  uStack_34 = param_4;
  local_28 = param_1;
  uStack_24 = param_2;
  if ((DAT_0755b219 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f2fb0);
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<StartGameResult>_AwaitUnsafeOnCompleted<TaskAwaiter<StartGameResult>,_NetworkRunner_<StartGameModeCloud>d__428>__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_AwaitUnsafeOnCompleted<TaskAwaiter<OvrAvatarManager_AvatarRequestBoolResults>,_OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    DAT_0755b219 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_031c0a30();
  }
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x10);
  }
  if (*(long *)(*(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<StartGameResult>_AwaitUnsafeOnCompleted<TaskAwaiter<StartGameResult>,_NetworkRunner_<StartGameModeCloud>d__428>__
               + 0x38) == 0) {
    FUN_031c0a30();
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_6 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_070f2fb0 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (DAT_0755b288 == (code *)0x0) {
    DAT_0755b288 = (code *)FUN_03188a3c(
                                       "UnityEngine.Graphics::Blit4_Injected(System.IntPtr,System.IntPtr,UnityEngine.Vector2&,UnityEngine.Vector2&)"
                                       );
  }
  (*DAT_0755b288)(uVar3,uVar2,&local_28,&local_38);
  return;
}


