/*
FUNCTION_NAME: FUN_069aabec
ENTRY_POINT: 069aabec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_069aabec(long param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  ulong local_38;
  
  if ((DAT_0755bb9d & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>__ctor__
                );
    DAT_0755bb9d = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (param_3 == 0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      local_40 = param_3 + 0x20;
      local_38 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
    }
    uVar1 = FUN_04ae731c(&local_40,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>__ctor__
                        );
    FUN_069ea1bc(&local_50,uVar1,local_38 & 0xffffffff,0);
    if (DAT_0755bc08 == (code *)0x0) {
      DAT_0755bc08 = (code *)FUN_03188a3c(
                                         "UnityEngine.Mesh::SetVertexBufferParamsFromArray_Injected(System.IntPtr,System.Int32,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                         );
    }
    (*DAT_0755bc08)(lVar2,param_2,&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


