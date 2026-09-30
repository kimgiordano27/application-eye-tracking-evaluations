/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0690fa64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 134
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  
                    /* catch() { ... } // from try @ 0690f8e8 with catch @ 0690fa64 */
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* catch() { ... } // from try @ 0690f8d8 with catch @ 0690fa68 */
                    /* catch() { ... } // from try @ 0690f9ec with catch @ 0690fa6c */
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x38),0);
                    /* catch() { ... } // from try @ 0690f668 with catch @ 0690fa70
                       catch() { ... } // from try @ 0690fa08 with catch @ 0690fa70 */
                    /* catch() { ... } // from try @ 0690f794 with catch @ 0690fa74 */
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
                    /* catch() { ... } // from try @ 0690f730 with catch @ 0690fa78
                       catch() { ... } // from try @ 0690fa00 with catch @ 0690fa78 */
                    /* catch() { ... } // from try @ 0690f7ec with catch @ 0690fa7c
                       catch() { ... } // from try @ 0690f9f8 with catch @ 0690fa7c */
  thunk_FUN_03afed3c((undefined8 *)(unaff_x20 + 0x40),0);
                    /* catch() { ... } // from try @ 0690f8c0 with catch @ 0690fa80
                       catch() { ... } // from try @ 0690f9f0 with catch @ 0690fa80 */
                    /* catch() { ... } // from try @ 0690f6fc with catch @ 0690fa84
                       catch() { ... } // from try @ 0690f768 with catch @ 0690fa84
                       catch() { ... } // from try @ 0690f88c with catch @ 0690fa84
                       catch() { ... } // from try @ 0690f8f8 with catch @ 0690fa84 */
  FUN_0690f260();
  lVar1 = *unaff_x23;
  *unaff_x19 = 0xfffffffe;
                    /* try { // try from 0690fa9c to 06a0fab3 has its CatchHandler @ 0690fb2c */
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


