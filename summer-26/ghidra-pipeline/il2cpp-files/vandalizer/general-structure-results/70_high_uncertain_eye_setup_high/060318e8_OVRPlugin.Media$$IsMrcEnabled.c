/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcEnabled
ENTRY_POINT: 060318e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__IsMrcEnabled(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  long in_stack_00000008;
  
  do {
    uVar1 = FUN_06031f94();
    if ((uVar1 & 1) != 0) {
      if (((in_stack_00000008 == 0) || (FUN_06eeec54(in_stack_00000008,0), in_stack_00000008 == 0))
         || (lVar2 = FUN_06e550fc(in_stack_00000008,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_06e59c44(lVar2,0,0);
    }
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == 0x1a) {
      *(undefined1 *)(unaff_x19 + 0x80) = 0;
      return;
    }
  } while( true );
}


