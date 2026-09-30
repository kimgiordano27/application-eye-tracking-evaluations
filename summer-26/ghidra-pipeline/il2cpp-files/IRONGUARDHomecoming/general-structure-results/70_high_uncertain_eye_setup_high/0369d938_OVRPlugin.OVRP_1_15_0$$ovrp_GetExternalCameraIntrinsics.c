/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraIntrinsics
ENTRY_POINT: 0369d938
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_57__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_24__);
  *(undefined1 *)(unaff_x20 + 0xf40) = 1;
  if (*(char *)(unaff_x19 + 0x48) == '\0') {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_57__);
  FUN_02b83988();
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 0369d858 with catch @ 0369d994 */
                    /* catch() { ... } // from try @ 0369d808 with catch @ 0369d998 */
                    /* catch() { ... } // from try @ 0369d834 with catch @ 0369d99c */
                    /* catch() { ... } // from try @ 0369d810 with catch @ 0369d9a0 */
                    /* catch() { ... } // from try @ 0369d85c with catch @ 0369d9a4 */
    FUN_036919e8(lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


