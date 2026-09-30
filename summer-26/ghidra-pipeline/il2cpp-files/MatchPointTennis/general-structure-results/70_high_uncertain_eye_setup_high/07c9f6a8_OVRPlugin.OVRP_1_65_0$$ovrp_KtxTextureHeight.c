/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight
ENTRY_POINT: 07c9f6a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureHeight(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  unaff_x19[1] = _uStack0000000000000048;
  *unaff_x19 = in_stack_00000040;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  uVar1 = FUN_07c9f73c();
  if ((((uVar1 & 1) == 0) || (*(long *)(unaff_x21 + 0x70) == 0)) ||
     (uVar1 = FUN_07c9f79c(), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_07c9f118();
    if (*(long *)(unaff_x21 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible
              (&stack0x00000040,*(long *)(unaff_x21 + 0x70),unaff_w20,0);
    uVar2 = 1;
    unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *unaff_x19 = in_stack_00000040;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  }
  return uVar2;
}


