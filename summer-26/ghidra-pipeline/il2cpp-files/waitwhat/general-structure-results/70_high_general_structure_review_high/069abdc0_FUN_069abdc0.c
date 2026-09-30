/*
FUNCTION_NAME: FUN_069abdc0
ENTRY_POINT: 069abdc0
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


void FUN_069abdc0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  if ((DAT_0755bbab & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    DAT_0755bbab = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ed9b0(param_1,0);
    }
    if (DAT_0755bc78 == (code *)0x0) {
      DAT_0755bc78 = (code *)FUN_03188a3c(
                                         "UnityEngine.Mesh::GetArrayFromChannelImpl_Injected(System.IntPtr,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x069abe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0755bc78)(lVar1,param_2,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


