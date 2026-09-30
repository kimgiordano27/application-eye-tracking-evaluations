/*
FUNCTION_NAME: FUN_05c60970
ENTRY_POINT: 05c60970
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05c60970(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  
  if ((DAT_066d7b94 & 1) == 0) {
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDeniedAndDontAskAgain__)
    ;
    DAT_066d7b94 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1,0);
    }
    if (DAT_066d7c08 == (code *)0x0) {
      DAT_066d7c08 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.Mesh::InternalSetIndexBufferDataFromArray_Injected(System.IntPtr,System.Array,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x05c60a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_066d7c08)(lVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


