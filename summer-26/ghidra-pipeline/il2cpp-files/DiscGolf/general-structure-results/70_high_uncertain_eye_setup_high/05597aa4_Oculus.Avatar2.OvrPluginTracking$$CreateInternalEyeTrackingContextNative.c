/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContextNative
ENTRY_POINT: 05597aa4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContextNative(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 *unaff_x23;
  
                    /* try { // try from 05597aa4 to 05697ae7 has its CatchHandler @ 05597aa4
                       catch() { ... } // from try @ 05597aa4 with catch @ 05597aa4
                       catch() { ... } // from try @ 05597b0c with catch @ 05597aa4
                       catch() { ... } // from try @ 05597b4c with catch @ 05597aa4
                       catch() { ... } // from try @ 05597b84 with catch @ 05597aa4 */
  lVar4 = *(long *)(unaff_x21 + 0x10);
  lVar1 = FUN_02d966a4(*unaff_x23,1);
  if (lVar1 != 0) {
    if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_02dd3048(), lVar2 == 0)) {
      uVar3 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,0);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(long *)(lVar1 + 0x20) = unaff_x20;
                    /* try { // try from 05597ae8 to 05697af3 has its CatchHandler @ 05597b4c */
    LeanTween__value();
    if (lVar4 != 0) {
                    /* try { // try from 05597b08 to 05697b0b has its CatchHandler @ 05597b50 */
                    /* try { // try from 05597b0c to 05697b47 has its CatchHandler @ 05597aa4 */
                    /* WARNING: Could not recover jumptable at 0x05597b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


