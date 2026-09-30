/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 01a3c45c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               long param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_5 * (param_1 - param_2);
  lVar1 = *(long *)(param_6 + 0x30);
  *(undefined1 *)(param_6 + 0x20) = 0;
  fVar3 = DAT_028aaa70;
  if (lVar1 != 0) {
    fVar4 = param_3 / ((param_3 / (*(float *)(param_6 + 0x1c) * DAT_028aaa70)) / (param_3 / param_5)
                      + param_3);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar5 = *(float *)(lVar1 + 0x18);
    }
    else {
      *(undefined1 *)(lVar1 + 0x10) = 0;
      *(float *)(lVar1 + 0x18) = fVar2;
      fVar5 = fVar2;
    }
    fVar2 = fVar2 * fVar4 + (param_3 - fVar4) * fVar5;
    *(float *)(lVar1 + 0x14) = fVar2;
    *(float *)(lVar1 + 0x18) = fVar2;
    lVar1 = *(long *)(param_6 + 0x28);
    if (lVar1 != 0) {
      fVar3 = param_3 / ((param_3 /
                         ((*(float *)(param_6 + 0x14) + ABS(fVar2) * *(float *)(param_6 + 0x18)) *
                         fVar3)) / (param_3 / param_5) + param_3);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        fVar2 = *(float *)(lVar1 + 0x18);
      }
      else {
        *(undefined1 *)(lVar1 + 0x10) = 0;
        *(float *)(lVar1 + 0x18) = param_1;
        fVar2 = param_1;
      }
      fVar3 = fVar3 * param_1 + (param_3 - fVar3) * fVar2;
      *(float *)(lVar1 + 0x14) = fVar3;
      *(float *)(lVar1 + 0x18) = fVar3;
      *(float *)(param_6 + 0x10) = fVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


