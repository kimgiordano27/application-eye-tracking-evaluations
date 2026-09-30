/*
FUNCTION_NAME: FUN_07558278
ENTRY_POINT: 07558278
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


undefined4 FUN_07558278(long param_1)

{
  long lVar1;
  undefined8 local_18;
  
  if ((DAT_0826c058 & 1) == 0) {
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Attachment_InteractionAttachController_ComputeAmplifiedOffset_00001087_PostfixBurstDelegate_TypeInfo
                );
    DAT_0826c058 = 1;
  }
  local_18 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_1,0);
    }
    if (DAT_0826c1d0 == (code *)0x0) {
      DAT_0826c1d0 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Camera::get_sensorSize_Injected(System.IntPtr,UnityEngine.Vector2&)"
                                         );
    }
    (*DAT_0826c1d0)(lVar1,&local_18);
    return (undefined4)local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


