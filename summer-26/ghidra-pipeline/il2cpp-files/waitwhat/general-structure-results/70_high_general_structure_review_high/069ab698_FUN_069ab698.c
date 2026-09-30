/*
FUNCTION_NAME: FUN_069ab698
ENTRY_POINT: 069ab698
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_069ab698(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  ulong local_48;
  long local_38;
  
  if ((DAT_0755bba5 & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    DAT_0755bba5 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (param_2 != 0) {
      uVar2 = *(ulong *)(param_2 + 0x18);
      local_38 = param_2;
      if (uVar2 != 0) {
        if ((int)uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        local_50 = param_2 + 0x20;
        local_48 = uVar2 & 0xffffffff;
      }
    }
    if (DAT_0755bc48 == (code *)0x0) {
      DAT_0755bc48 = (code *)FUN_03188a3c(
                                         "UnityEngine.Mesh::GetTrianglesNonAllocImpl_Injected(System.IntPtr,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32,System.Boolean)"
                                         );
    }
    (*DAT_0755bc48)(lVar3,&local_50,param_3,param_4 & 1);
    FUN_069bcb74(&local_50,&local_38,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


