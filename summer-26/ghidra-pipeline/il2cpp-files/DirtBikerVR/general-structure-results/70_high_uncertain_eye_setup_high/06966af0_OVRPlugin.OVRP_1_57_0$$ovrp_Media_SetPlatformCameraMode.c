/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_SetPlatformCameraMode
ENTRY_POINT: 06966af0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_Media_SetPlatformCameraMode(undefined8 param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000120;
  undefined8 *in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  
  if (param_2 != 1) {
    FUN_039b9478(&stack0x00000160);
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar3 = *plVar1;
  in_stack_00000160 = lVar3;
  __cxa_end_catch();
  FUN_061c1960(in_stack_00000168,*unaff_x21);
  if (lVar3 == 0) {
    if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_04de90b8(&stack0x00000120,*(long *)(unaff_x19 + 0x50),*unaff_x23);
    in_stack_000001c0 = in_stack_00000130;
    in_stack_000001b8 = in_stack_00000128;
    in_stack_000001b0 = in_stack_00000120;
    in_stack_00000120 = 0;
    in_stack_00000128 = &stack0x000001b0;
    while( true ) {
      uVar2 = FUN_061c1964(&stack0x000001b0,*unaff_x22);
      lVar3 = in_stack_000001c0;
      if ((uVar2 & 1) == 0) {
        FUN_061c1960(&stack0x000001b0,*unaff_x21);
        return;
      }
      if (in_stack_000001c0 == 0) break;
      uVar2 = FUN_07d1b874(in_stack_000001c0,0);
      if ((uVar2 & 1) != 0) {
        FUN_07d1c440(lVar3,0);
      }
      FUN_07d1c660(lVar3,0);
      FUN_07d1d094(&stack0x00000208,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8(lVar3);
}


