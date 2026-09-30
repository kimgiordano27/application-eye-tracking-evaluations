/*
FUNCTION_NAME: STX_Main$$RequestUserPermissions
ENTRY_POINT: 04085bc4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined4 STX_Main__RequestUserPermissions(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 unaff_w20;
  ulong unaff_x21;
  void *in_stack_00000008;
  void *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar3 = FUN_040c6398();
  in_stack_00000028 = uVar3;
  FUN_040caa04(uVar3,0x20);
  if (param_2 == 1) {
    iVar1 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,unaff_w20,1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x102;
    }
  }
  else {
    in_stack_00000008 = (void *)0x0;
    in_stack_00000010 = (void *)0x0;
    in_stack_00000018 = 0;
    FUN_04085e28(&stack0x00000008,param_1,param_1 + param_2,(long)param_2);
    if ((unaff_x21 & 1) == 0) {
      uVar2 = FUN_040a4ed4(&stack0x00000008,unaff_w20);
    }
    else {
      uVar4 = FUN_040a4f70(&stack0x00000008,unaff_w20);
      uVar2 = 0;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0x102;
      }
    }
    if (in_stack_00000008 != (void *)0x0) {
      in_stack_00000010 = in_stack_00000008;
      operator_delete(in_stack_00000008);
    }
  }
  FUN_040cab80(uVar3,0x20);
  return uVar2;
}


