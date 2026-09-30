/*
FUNCTION_NAME: FUN_03620980
ENTRY_POINT: 03620980
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


undefined1  [16] FUN_03620980(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
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
  if ((DAT_03ff71fb & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9a380);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff71fb = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 1) {
      if ((param_1 != 0) && (lVar4 = FUN_0391c27c(param_1,0), lVar4 != 0)) {
        FUN_039274a0(lVar4,0);
        auVar6._4_4_ = extraout_var_00;
        auVar6._0_4_ = extraout_s0_00;
        auVar6._8_8_ = extraout_var_02;
        return auVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (param_2 == 2) {
      uVar3 = FUN_01eb5b98(param_3,*(undefined8 *)PTR_DAT_03d9a380);
      FUN_03620aa0(param_1,uVar3);
      auVar5._4_4_ = extraout_var;
      auVar5._0_4_ = extraout_s0;
      auVar5._8_8_ = extraout_var_01;
      return auVar5;
    }
  }
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  return ZEXT416(**(uint **)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                            + 0xb8));
}


