/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcEnabled
ENTRY_POINT: 06966b6c
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


void OVRPlugin_Media__IsMrcEnabled(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000120;
  undefined8 *in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000168;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  
  FUN_061c1960(in_stack_00000168,*unaff_x21);
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_04de90b8(&stack0x00000120,*(long *)(unaff_x19 + 0x50),*unaff_x23);
    in_stack_000001c0 = in_stack_00000130;
    in_stack_000001b8 = in_stack_00000128;
    in_stack_000001b0 = in_stack_00000120;
    in_stack_00000120 = 0;
    in_stack_00000128 = &stack0x000001b0;
    while( true ) {
      uVar2 = FUN_061c1964(&stack0x000001b0,*unaff_x22);
      lVar1 = in_stack_000001c0;
      if ((uVar2 & 1) == 0) {
        FUN_061c1960(&stack0x000001b0,*unaff_x21);
        return;
      }
      if (in_stack_000001c0 == 0) break;
      uVar2 = FUN_07d1b874(in_stack_000001c0,0);
      if ((uVar2 & 1) != 0) {
        FUN_07d1c440(lVar1,0);
      }
      FUN_07d1c660(lVar1,0);
      FUN_07d1d094(&stack0x00000208,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


