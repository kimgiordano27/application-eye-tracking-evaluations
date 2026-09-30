/*
FUNCTION_NAME: FUN_069b0398
ENTRY_POINT: 069b0398
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


void FUN_069b0398(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((DAT_0755bd78 & 1) == 0) {
    FUN_03188a78(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
                );
    FUN_03188a78(PTR_DAT_0711adc0);
    DAT_0755bd78 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_069ea2c8(param_1,*(undefined8 *)PTR_DAT_0711adc0,0);
    }
    if (DAT_0755bd80 == (code *)0x0) {
      DAT_0755bd80 = (code *)FUN_03188a3c(
                                         "UnityEngine.Mesh/MeshDataArray::ApplyToMeshImpl_Injected(System.IntPtr,System.IntPtr,UnityEngine.Rendering.MeshUpdateFlags)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x069b0438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0755bd80)(lVar1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_069ea2c8(0,*(undefined8 *)PTR_DAT_0711adc0,0);
}


