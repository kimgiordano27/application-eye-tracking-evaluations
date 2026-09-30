/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0690fb38
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined8 *unaff_x21;
  int iVar3;
  long unaff_x22;
  long *unaff_x23;
  int iStack0000000000000010;
  
                    /* catch() { ... } // from try @ 0690fb30 with catch @ 0690fb3c */
  *(undefined8 *)(&stack0x00000000 + unaff_x22 * 8) = *unaff_x21;
  iVar3 = (int)unaff_x22;
  iStack0000000000000010 = iVar3 + 1;
  __cxa_end_catch();
  iStack0000000000000010 = iVar3;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* catch() { ... } // from try @ 0690f9b8 with catch @ 0690fa3c */
                    /* catch() { ... } // from try @ 0690f854 with catch @ 0690fa40 */
  plVar2 = (long *)(unaff_x20 + 0x30);
                    /* catch() { ... } // from try @ 0690f964 with catch @ 0690fa44 */
  if (*plVar2 != 0) {
                    /* catch() { ... } // from try @ 0690f758 with catch @ 0690fa48 */
                    /* catch() { ... } // from try @ 0690f748 with catch @ 0690fa4c */
    FUN_067b5f94(*plVar2,0);
                    /* catch() { ... } // from try @ 0690f9fc with catch @ 0690fa50 */
    *plVar2 = 0;
                    /* catch() { ... } // from try @ 0690f814 with catch @ 0690fa54 */
                    /* catch() { ... } // from try @ 0690f804 with catch @ 0690fa58 */
                    /* catch() { ... } // from try @ 0690f7b8 with catch @ 0690fa5c */
    thunk_FUN_03afed3c(plVar2,0);
                    /* catch() { ... } // from try @ 0690f9f4 with catch @ 0690fa60 */
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


