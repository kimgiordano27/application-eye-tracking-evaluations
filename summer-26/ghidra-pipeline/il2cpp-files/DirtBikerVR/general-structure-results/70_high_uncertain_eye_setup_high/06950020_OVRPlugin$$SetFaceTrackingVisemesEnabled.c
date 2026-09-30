/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 06950020
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetFaceTrackingVisemesEnabled(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  lVar1 = FUN_045614d0(param_2,*param_1);
  if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar1 != 0)) {
    FUN_07d32bcc(*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x34),lVar1,0);
    UnityEngine_UIElements_StyleFont___ctor(lVar1,1,0);
    lVar1 = FUN_07c99058(lVar1,0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) && (lVar1 != 0)) {
      FUN_07c9c820(lVar1,*(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x30),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x10) = *unaff_x20;
        thunk_FUN_03afed3c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


