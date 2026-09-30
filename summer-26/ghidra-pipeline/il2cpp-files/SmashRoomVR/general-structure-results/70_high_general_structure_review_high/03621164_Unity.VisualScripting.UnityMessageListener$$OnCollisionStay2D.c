/*
FUNCTION_NAME: Unity.VisualScripting.UnityMessageListener$$OnCollisionStay2D
ENTRY_POINT: 03621164
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Unity_VisualScripting_UnityMessageListener__OnCollisionStay2D(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (unaff_w21 != 1) {
    if (unaff_w21 == 2) {
      FUN_01eb56e8();
      FUN_03621214();
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_01;
      return auVar2;
    }
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    return ZEXT416(**(uint **)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              + 0xb8));
  }
  if ((unaff_x19 != 0) && (lVar1 = FUN_0391c27c(), lVar1 != 0)) {
    FUN_039274a0(lVar1,0);
    auVar3._4_4_ = extraout_var_00;
    auVar3._0_4_ = extraout_s0_00;
    auVar3._8_8_ = extraout_var_02;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


