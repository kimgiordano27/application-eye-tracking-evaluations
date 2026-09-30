/*
FUNCTION_NAME: FUN_07559b6c
ENTRY_POINT: 07559b6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only
*/


void FUN_07559b6c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = param_2;
  uStack_24 = param_3;
  if ((DAT_0826c076 & 1) == 0) {
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Attachment_InteractionAttachController_ComputeAmplifiedOffset_00001087_PostfixBurstDelegate_TypeInfo
                );
    DAT_0826c076 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_4 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_4,0);
    }
    if (DAT_0826c2c0 == (code *)0x0) {
      DAT_0826c2c0 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Camera::ScreenPointToRay_Injected(System.IntPtr,UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)"
                                         );
    }
    (*DAT_0826c2c0)(lVar1,&local_28,param_5,&local_48);
    param_1[2] = local_38;
    param_1[1] = uStack_40;
    *param_1 = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


