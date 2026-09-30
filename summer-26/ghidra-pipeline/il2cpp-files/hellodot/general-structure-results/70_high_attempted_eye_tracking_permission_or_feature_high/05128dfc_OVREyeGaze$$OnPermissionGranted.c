/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 05128dfc
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  plVar2 = (long *)**(long **)(lVar1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))
              (plVar2,*(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar2 + 400));
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


