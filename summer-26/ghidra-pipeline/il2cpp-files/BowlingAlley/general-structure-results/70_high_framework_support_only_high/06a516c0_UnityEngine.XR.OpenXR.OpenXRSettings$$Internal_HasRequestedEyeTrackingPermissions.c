/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 06a516c0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  
  while( true ) {
    uVar3 = FUN_06be6b40(param_1,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x24);
    }
    FUN_06a515e8(unaff_x22,uVar3);
    unaff_w21 = unaff_w21 + 1;
    iVar1 = FUN_06bf612c();
    if (iVar1 <= unaff_w21) break;
    lVar2 = FUN_06bf6554();
    if (((lVar2 == 0) || (unaff_x22 = FUN_06be6b40(lVar2,0), unaff_x20 == 0)) ||
       (param_1 = FUN_06bf6554(), param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  return;
}


