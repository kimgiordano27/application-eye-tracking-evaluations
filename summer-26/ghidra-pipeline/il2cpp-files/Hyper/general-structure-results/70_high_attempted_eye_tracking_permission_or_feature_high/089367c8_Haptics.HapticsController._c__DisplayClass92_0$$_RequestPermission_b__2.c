/*
FUNCTION_NAME: Haptics.HapticsController.<>c__DisplayClass92_0$$<RequestPermission>b__2
ENTRY_POINT: 089367c8
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


uint Haptics_HapticsController_<>c__DisplayClass92_0__<RequestPermission>b__2(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long unaff_x19;
  uint unaff_w20;
  
  if (param_1 != 0) {
    plVar3 = (long *)FUN_089363f8();
    if (plVar3 == (long *)0x0) goto LAB_08936850;
    uVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    unaff_w20 = uVar1 ^ unaff_w20;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar3 = (long *)Haptics_HapticsController_<>c__DisplayClass92_1___ctor();
    if (plVar3 == (long *)0x0) goto LAB_08936850;
    uVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    unaff_w20 = uVar1 ^ unaff_w20;
  }
  plVar3 = *(long **)(unaff_x19 + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    plVar3 = *(long **)(unaff_x19 + 0x10);
    uVar1 = uVar1 ^ unaff_w20;
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
LAB_08936850:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


