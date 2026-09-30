/*
FUNCTION_NAME: Unity.VisualScripting.UnityMessageListener$$OnSelect
ENTRY_POINT: 036209d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Unity_VisualScripting_UnityMessageListener__OnSelect(void)

{
  ulong uVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  int unaff_w21;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (in_w8 == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_03922f24();
  if ((uVar1 & 1) == 0) {
    if (unaff_w21 == 1) {
      if ((unaff_x19 != 0) && (lVar2 = FUN_0391c27c(), lVar2 != 0)) {
        FUN_039274a0(lVar2,0);
        auVar4._4_4_ = extraout_var_00;
        auVar4._0_4_ = extraout_s0_00;
        auVar4._8_8_ = extraout_var_02;
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (unaff_w21 == 2) {
      FUN_01eb5b98();
      FUN_03620aa0();
      auVar3._4_4_ = extraout_var;
      auVar3._0_4_ = extraout_s0;
      auVar3._8_8_ = extraout_var_01;
      return auVar3;
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


