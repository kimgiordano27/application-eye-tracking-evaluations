/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 01f76c90
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
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
               (ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b37e0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027c0fd0);
    *(undefined1 *)(unaff_x23 + 0xda3) = 1;
  }
  FUN_01f9d1b8(param_2,param_3,param_4,param_5,0);
  if ((DAT_0293dda5 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3620);
    DAT_0293dda5 = 1;
  }
  lVar1 = *(long *)(param_2 + 0x90);
  if (lVar1 == 0) {
    lVar1 = **(long **)(*(long *)PTR_DAT_027b3620 + 0xb8);
  }
  uVar2 = *(undefined8 *)PTR_DAT_027b37e0;
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar2 = FUN_01f7d8a0(uVar2,0);
  if (param_3 != 0) {
    FUN_01ebcbe8(param_3,*(undefined8 *)PTR_DAT_027c0fd0,lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


