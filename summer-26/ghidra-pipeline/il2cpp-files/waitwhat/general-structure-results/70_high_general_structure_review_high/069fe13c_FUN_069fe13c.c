/*
FUNCTION_NAME: FUN_069fe13c
ENTRY_POINT: 069fe13c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_8
*/


void FUN_069fe13c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 param_7,long param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_58 = param_3;
  uStack_54 = param_4;
  local_48 = param_1;
  uStack_44 = param_2;
  if ((DAT_0755d41a & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_AwaitUnsafeOnCompleted<TaskAwaiter<OvrAvatarManager_AvatarRequestBoolResults>,_OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    DAT_0755d41a = 1;
  }
  if (param_5 != 0) {
    lVar1 = *(long *)(param_5 + 0x10);
    if (lVar1 != 0) {
      if (*(long *)(*(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_AwaitUnsafeOnCompleted<TaskAwaiter<OvrAvatarManager_AvatarRequestBoolResults>,_OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                   + 0x38) == 0) {
        FUN_031c0a30();
      }
      uVar3 = 0;
      if (param_6 != 0) {
        uVar3 = *(undefined8 *)(param_6 + 0x10);
      }
      if (*(long *)(*(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                   + 0x38) == 0) {
        FUN_031c0a30();
      }
      uVar2 = 0;
      if (param_8 != 0) {
        uVar2 = *(undefined8 *)(param_8 + 0x10);
      }
      if (DAT_0755d6d0 == (code *)0x0) {
        DAT_0755d6d0 = (code *)FUN_03188a3c(
                                           "UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(System.IntPtr,System.IntPtr,UnityEngine.Rendering.RenderTargetIdentifier&,System.IntPtr,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)"
                                           );
      }
      (*DAT_0755d6d0)(lVar1,uVar3,param_7,uVar2,param_9,&local_48,&local_58,param_10,param_11);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_069ed9b0(param_5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


