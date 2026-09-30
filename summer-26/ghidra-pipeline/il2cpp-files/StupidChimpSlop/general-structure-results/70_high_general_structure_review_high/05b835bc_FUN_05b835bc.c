/*
FUNCTION_NAME: FUN_05b835bc
ENTRY_POINT: 05b835bc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


bool FUN_05b835bc(long param_1)

{
  bool bVar1;
  
  if ((DAT_06a5723d & 1) == 0) {
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_GPUInstanceDataBufferUploader_PrepareParamWrite<Vector4>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_GPUInstanceDataBufferUploader_WriteInstanceDataJob<Vector4>__
                );
    DAT_06a5723d = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) == 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_05b8362c;
      bVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_05b8362c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


