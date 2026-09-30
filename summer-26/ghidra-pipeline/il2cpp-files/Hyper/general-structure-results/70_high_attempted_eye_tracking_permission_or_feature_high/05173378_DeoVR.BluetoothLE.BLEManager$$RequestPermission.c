/*
FUNCTION_NAME: DeoVR.BluetoothLE.BLEManager$$RequestPermission
ENTRY_POINT: 05173378
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void DeoVR_BluetoothLE_BLEManager__RequestPermission(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *in_x9;
  long unaff_x19;
  
  lVar2 = *in_x9;
  bVar1 = *(byte *)(lVar2 + 0x130);
  if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
    *(undefined8 *)(unaff_x19 + 0x18) = param_1;
    if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x18),param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494850c(param_1);
}


