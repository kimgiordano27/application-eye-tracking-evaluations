/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.<RequestPermission>d__3$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 036a4bec
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_DefaultMicrophoneController_<RequestPermission>d__3__System_Collections_IEnumerator_get_Current
               (void)

{
  long unaff_x19;
  long *unaff_x22;
  
  if (*unaff_x22 != 0) {
    FUN_079b2acc(0xff800000,*unaff_x22,DAT_08446dc0,0xffffffff);
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    if (*(char *)(unaff_x19 + 0x2a) == '\0') {
      return;
    }
    if (*(char *)(unaff_x19 + 0x28) != '\0') {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_036a4d00;
      FUN_07a22574(*(long *)(unaff_x19 + 0x30),0);
      if (*(char *)(unaff_x19 + 0x2a) == '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x28) != '\0') {
        return;
      }
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_07a22574(*(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
LAB_036a4d00:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


