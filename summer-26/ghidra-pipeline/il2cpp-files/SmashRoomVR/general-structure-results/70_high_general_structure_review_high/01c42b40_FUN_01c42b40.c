/*
FUNCTION_NAME: FUN_01c42b40
ENTRY_POINT: 01c42b40
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


undefined1  [16] FUN_01c42b40(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed59f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed59f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    if ((param_2 != 0) && (lVar3 = FUN_0391c27c(param_2,0), lVar3 != 0)) {
      FUN_039274a0(lVar3,0);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  return ZEXT416(**(uint **)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                            + 0xb8));
}


