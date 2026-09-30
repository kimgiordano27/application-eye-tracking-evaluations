/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 0690fb54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 118
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x23;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar2 = (long *)(unaff_x20 + 0x30);
  if (*plVar2 != 0) {
    FUN_067b5f94(*plVar2,0);
    *plVar2 = 0;
    thunk_FUN_03afed3c(plVar2,0);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x38),0);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x40),0);
    FUN_0690f260();
    lVar1 = *unaff_x23;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


