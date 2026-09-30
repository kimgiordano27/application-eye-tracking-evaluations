/*
FUNCTION_NAME: DeoVR.BluetoothLE.WindowsBleOperations$$RequestPermissions
ENTRY_POINT: 0517a2a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void DeoVR_BluetoothLE_WindowsBleOperations__RequestPermissions(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN_049ae08c(*(undefined8 *)(param_1 + 0x528));
  FUN_0433a0d0();
  uVar1 = FUN_051f246c();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac339e0);
  uVar1 = FUN_08bcc3c0(uVar2,uVar1,0);
  thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
  uVar2 = thunk_FUN_04983f60();
  uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac255c8);
  FUN_08cbd67c(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_049ae08c(PTR_DAT_0ac33f58);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2,uVar1);
}


