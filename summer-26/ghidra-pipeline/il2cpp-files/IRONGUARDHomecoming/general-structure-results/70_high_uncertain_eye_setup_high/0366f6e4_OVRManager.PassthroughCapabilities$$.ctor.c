/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 0366f6e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager_PassthroughCapabilities___ctor(void)

{
  int iVar1;
  float fVar2;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  undefined8 *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  int unaff_w28;
  float unaff_s8;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  
  while( true ) {
    iVar1 = unaff_w23;
    if ((in_w8 & in_w9) == 0) {
      iVar1 = unaff_w21;
      unaff_w22 = unaff_w20;
    }
    unaff_w20 = unaff_w22;
    unaff_w25 = unaff_w25 + -1;
    if (unaff_w25 == 0) {
      in_stack_00000058 = 0;
      FUN_0288a474(&stack0x00000058,iVar1,unaff_w20,*unaff_x24);
      return in_stack_00000058;
    }
    unaff_w22 = unaff_w28;
    if (unaff_w28 < 0) {
      unaff_w22 = unaff_w26;
    }
    unaff_w28 = unaff_w22 + -1;
    unaff_w23 = unaff_w28;
    if (unaff_w28 < 0) {
      unaff_w23 = unaff_w26;
    }
    if (*(long *)(unaff_x19 + 0x130) == 0) break;
    FUN_03227960(&stack0x00000008,*(long *)(unaff_x19 + 0x130),unaff_w22,*unaff_x27);
    fVar2 = in_stack_00000038._4_4_;
    if (*(long *)(unaff_x19 + 0x130) == 0) break;
    FUN_03227960(&stack0x00000008,*(long *)(unaff_x19 + 0x130),unaff_w23,*unaff_x27);
    in_w8 = (uint)(unaff_s8 < fVar2);
    in_w9 = (uint)(in_stack_00000038._4_4_ < unaff_s8);
    unaff_w21 = iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


