/*
FUNCTION_NAME: OVRPlugin$$StartKeyboardTracking
ENTRY_POINT: 060196e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StartKeyboardTracking(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f75e0);
    *(undefined1 *)(unaff_x20 + 0xa13) = 1;
  }
                    /* try { // try from 06019704 to 06119707 has its CatchHandler @ 06019710 */
                    /* try { // try from 06019708 to 06119733 has its CatchHandler @ 060194dc */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060196c0 with catch @ 0601970c
                        */
  lVar1 = FUN_055ee02c(param_2,*unaff_x21);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019704 with catch @ 06019710
                        */
  if (lVar1 != 0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 060195ec with catch @ 06019714
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019630 with catch @ 06019718
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06019690 with catch @ 0601971c
                        */
    return *(undefined8 *)(lVar1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


