/*
FUNCTION_NAME: thunk_FUN_069ac474
ENTRY_POINT: 069afc10
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


void thunk_FUN_069ac474(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  ulong uStack_28;
  
  if ((DAT_0755bbaf & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector3Int,_IntegerField,_int>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
                );
    DAT_0755bbaf = 1;
  }
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (param_2 == 0) {
      lStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      lStack_30 = param_2 + 0x20;
      uStack_28 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    }
    uVar1 = FUN_04aa8ea4(&lStack_30,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseCompositeField<Vector3Int,_IntegerField,_int>__ctor__
                        );
    FUN_069ea1bc(&uStack_40,uVar1,uStack_28 & 0xffffffff,0);
    if (DAT_0755bc98 == (code *)0x0) {
      DAT_0755bc98 = (code *)FUN_03188a3c(
                                         "UnityEngine.Mesh::SetBoneWeightsImpl_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)"
                                         );
    }
    (*DAT_0755bc98)(lVar2,&uStack_40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


