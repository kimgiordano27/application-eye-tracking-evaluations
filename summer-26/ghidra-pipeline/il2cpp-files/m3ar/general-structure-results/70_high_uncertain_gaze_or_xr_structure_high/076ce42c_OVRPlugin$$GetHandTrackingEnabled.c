/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 076ce42c
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000028;
  
  FUN_064216ac(&stack0x00000018);
  while( true ) {
    uVar1 = FUN_04fafcd4(&stack0x00000018,*unaff_x22);
    if ((uVar1 & 1) == 0) {
      FUN_04fafcd0(&stack0x00000018,*unaff_x21);
      return;
    }
    if (in_stack_00000028 == 0) break;
    lVar2 = *(long *)(in_stack_00000028 + 0x18);
    if ((unaff_x19 & 1) == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar3 = *unaff_x23;
      *(undefined4 *)(lVar2 + 0x10) = unaff_w20;
      FUN_05267f60(lVar2,uVar3);
    }
    else {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      *(undefined4 *)(lVar2 + 0x10) = unaff_w20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


