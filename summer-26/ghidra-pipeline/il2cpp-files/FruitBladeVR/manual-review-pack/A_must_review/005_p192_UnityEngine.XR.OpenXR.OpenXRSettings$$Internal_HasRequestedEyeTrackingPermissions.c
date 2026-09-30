/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 035d5d64
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_023ebcc0(param_2,param_3,*(undefined8 *)(param_1 + 0x200),0);
  if (unaff_x20 != 0) {
    FUN_023edf84();
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28);
      uVar1 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03ce0d90);
      FUN_023ebe90();
      if (lVar2 != 0) {
        FUN_023ee43c(lVar2,uVar1,*(undefined8 *)PTR_DAT_03ce0da0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


