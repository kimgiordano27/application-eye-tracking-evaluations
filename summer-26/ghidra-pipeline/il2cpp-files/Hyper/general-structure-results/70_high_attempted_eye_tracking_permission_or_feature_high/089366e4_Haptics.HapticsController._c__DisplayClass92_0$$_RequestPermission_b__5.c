/*
FUNCTION_NAME: Haptics.HapticsController.<>c__DisplayClass92_0$$<RequestPermission>b__5
ENTRY_POINT: 089366e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8
Haptics_HapticsController_<>c__DisplayClass92_0__<RequestPermission>b__5(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = FUN_089363f8();
  uVar2 = FUN_08bd7f80(param_1,uVar1,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = Haptics_HapticsController_<>c__DisplayClass92_1___ctor();
    uVar3 = Haptics_HapticsController_<>c__DisplayClass92_1___ctor();
    uVar2 = FUN_08bd7f80(uVar1,uVar3,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar2 = FUN_0750795c(*(long *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x19 + 0x38),
                           *(undefined8 *)PTR_DAT_0ac48bb0);
      if ((uVar2 & 1) != 0) {
        uVar1 = FUN_08dcd1a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x19 + 0x10),0);
        return uVar1;
      }
    }
  }
  return 0;
}


