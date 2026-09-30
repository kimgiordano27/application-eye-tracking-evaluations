/*
FUNCTION_NAME: FUN_069ab1ec
ENTRY_POINT: 069ab1ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x069ab2dc) */
/* WARNING: Removing unreachable block (ram,0x069ab2fc) */

undefined8 FUN_069ab1ec(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0755bba2 & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                );
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    DAT_0755bba2 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (DAT_0755bc30 == (code *)0x0) {
        DAT_0755bc30 = (code *)FUN_03188a3c(
                                           "UnityEngine.Mesh::GetIndicesImpl_Injected(System.IntPtr,System.Int32,System.Boolean,UnityEngine.Bindings.BlittableArrayWrapper&)"
                                           );
      }
      (*DAT_0755bc30)(lVar1,param_2,param_3 & 1,&local_40);
      FUN_069bcb74(&local_40,&local_48,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                  );
                    /* try { // try from 069ab2ec to 06aab2f3 has its CatchHandler @ 069ab4cc */
      return local_48;
    }
                    /* WARNING: Subroutine does not return */
    FUN_069ed9b0(param_1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


