/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetSymmetricProjection
ENTRY_POINT: 03f1e444
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetSymmetricProjection(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x23;
  long unaff_x24;
  
  FUN_020612a4();
  FUN_020612a4(PTR_DAT_046befc8);
  FUN_020612a4(PTR_DAT_046bf330);
  FUN_020612a4(PTR_DAT_046befd8);
  *(undefined1 *)(unaff_x24 + 0xb0f) = 1;
  puVar1 = PTR_DAT_046befd8;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar3 = FUN_040cbf6c();
  puVar2 = PTR_DAT_046bf330;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar4 = FUN_02a22720();
    lVar5 = FUN_02a2311c();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions();
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    uVar4 = FUN_02a226a4(*(undefined8 *)puVar2);
  }
  return uVar4;
}


