/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 03f1da70
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;weak_vector_component_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


bool UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  double __x;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_046a7480;
  if ((DAT_04922b09 & 1) == 0) {
    FUN_020612a4(PTR_DAT_046a7480);
    DAT_04922b09 = 1;
  }
  __x = (double)FUN_0252fe28(param_2,param_3,*(undefined8 *)puVar1);
  dVar3 = (double)FUN_0252fe28(param_2,param_3,*(undefined8 *)puVar1);
  if (dVar3 < *(double *)(param_1 + 0x20)) goto LAB_03f1db1c;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_03f1dbb8;
  iVar2 = thunk_FUN_04110cc4(*(long *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
LAB_03f1db04:
    __x = *(double *)(param_1 + 0x20);
  }
  else if (iVar2 == 1) {
    __x = fmod(__x,*(double *)(param_1 + 0x20));
  }
  else if (iVar2 == 2) goto LAB_03f1db04;
LAB_03f1db1c:
  if (*(long *)(param_1 + 0x10) != 0) {
    dVar3 = (double)FUN_04111044(*(long *)(param_1 + 0x10),0);
    if (DAT_0491c941 == '\0') {
      FUN_020612a4(StringLiteral_9055);
      DAT_0491c941 = '\x01';
    }
    fVar4 = ABS((float)__x);
    fVar5 = ABS((float)dVar3);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar6 = **(float **)(*(long *)StringLiteral_9055 + 0xb8) * 8.0;
    fVar5 = fVar4 * DAT_00c58a14;
    if (fVar4 * DAT_00c58a14 <= fVar6) {
      fVar5 = fVar6;
    }
    return fVar5 <= ABS((float)dVar3 - (float)__x);
  }
LAB_03f1dbb8:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


