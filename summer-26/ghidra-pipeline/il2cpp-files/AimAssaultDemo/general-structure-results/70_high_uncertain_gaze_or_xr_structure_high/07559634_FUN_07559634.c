/*
FUNCTION_NAME: FUN_07559634
ENTRY_POINT: 07559634
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only
*/


undefined4
FUN_07559634(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  if ((DAT_0826c071 & 1) == 0) {
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Attachment_InteractionAttachController_ComputeAmplifiedOffset_00001087_PostfixBurstDelegate_TypeInfo
                );
    DAT_0826c071 = 1;
  }
  local_38 = 0;
  local_40 = 0;
  if (param_4 != 0) {
    lVar1 = *(long *)(param_4 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_4,0);
    }
    if (DAT_0826c298 == (code *)0x0) {
      DAT_0826c298 = (code *)FUN_0373b4dc(
                                         "UnityEngine.Camera::WorldToScreenPoint_Injected(System.IntPtr,UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)"
                                         );
    }
    (*DAT_0826c298)(lVar1,&local_30,param_5,&local_40);
    return (undefined4)local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


