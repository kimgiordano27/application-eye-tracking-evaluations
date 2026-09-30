/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.AndroidMicrophonePermissionRequester.<RequestPermission>d__3$$.ctor
ENTRY_POINT: 036a428c
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_AndroidMicrophonePermissionRequester_<RequestPermission>d__3___ctor
               (code *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long *unaff_x21;
  undefined4 uVar4;
  
  uVar4 = (*param_1)();
  plVar1 = *(long **)(unaff_x19 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x48) = uVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x428))(plVar1,*(undefined8 *)(*plVar1 + 0x430));
    if (*unaff_x21 != 0) {
      lVar3 = *(long *)(*unaff_x21 + 0x128);
      uVar2 = FUN_03398a84(DAT_083c6dd0);
      FUN_05487264();
      if (lVar3 != 0) {
        FUN_0548ef58(lVar3,uVar2,DAT_083ff608);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


