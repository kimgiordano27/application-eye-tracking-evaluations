/*
FUNCTION_NAME: FUN_03f1e3f8
ENTRY_POINT: 03f1e3f8
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 FUN_03f1e3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_50 [16];
  
  puVar1 = StringLiteral_8731;
  if ((DAT_04922b0f & 1) == 0) {
    FUN_020612a4(StringLiteral_8731);
    FUN_020612a4(PTR_DAT_046bf328);
    FUN_020612a4(PTR_DAT_046befc8);
    FUN_020612a4(PTR_DAT_046bf330);
    FUN_020612a4(PTR_DAT_046befd8);
    DAT_04922b0f = 1;
  }
  puVar2 = PTR_DAT_046befd8;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar5 = FUN_040cbf6c(param_3,0,0);
  puVar4 = PTR_DAT_046bf330;
  puVar3 = PTR_DAT_046bf328;
  puVar1 = PTR_DAT_046befc8;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    local_50 = FUN_02a22720(param_1,param_2,0,*(undefined8 *)puVar3);
    lVar6 = FUN_02a2311c(local_50,*(undefined8 *)puVar1);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions
              (lVar6,param_3,param_4);
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    local_50._0_8_ = FUN_02a226a4(*(undefined8 *)puVar4);
  }
  return local_50._0_8_;
}


