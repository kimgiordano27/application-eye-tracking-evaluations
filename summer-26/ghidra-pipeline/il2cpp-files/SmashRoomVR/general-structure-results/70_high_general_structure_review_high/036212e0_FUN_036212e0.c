/*
FUNCTION_NAME: FUN_036212e0
ENTRY_POINT: 036212e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


undefined1  [16] FUN_036212e0(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff71ff & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff71ff = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(param_1,0,0);
  if ((uVar3 & 1) != 0) {
LAB_03621384:
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    return ZEXT416(**(uint **)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              + 0xb8));
  }
  if (param_2 == 1) {
    if (param_1 == 0) goto LAB_036213f4;
  }
  else {
    if (param_2 != 2) goto LAB_03621384;
    if (param_1 == 0) goto LAB_036213f4;
    iVar2 = FUN_03639990(param_1,0);
    if (0 < iVar2) {
      FUN_036202c8(param_1,param_3);
      auVar5._4_4_ = extraout_var;
      auVar5._0_4_ = extraout_s0;
      auVar5._8_8_ = extraout_var_01;
      return auVar5;
    }
  }
  lVar4 = FUN_0391c27c(param_1,0);
  if (lVar4 != 0) {
    FUN_039274a0(lVar4,0);
    auVar6._4_4_ = extraout_var_00;
    auVar6._0_4_ = extraout_s0_00;
    auVar6._8_8_ = extraout_var_02;
    return auVar6;
  }
LAB_036213f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


