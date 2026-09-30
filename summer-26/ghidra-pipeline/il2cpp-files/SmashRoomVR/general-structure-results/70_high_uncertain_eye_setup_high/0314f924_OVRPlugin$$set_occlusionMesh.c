/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 0314f924
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_occlusionMesh(void)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000030;
  
  while( true ) {
    uVar1 = FUN_0276ac1c(&stack0x00000020,*unaff_x22);
    if ((uVar1 & 1) == 0) {
      FUN_0276ac18(&stack0x00000020,*unaff_x21);
      return;
    }
    if (in_stack_00000030 == 0) break;
    lVar2 = *(long *)(in_stack_00000030 + 0x18);
    if ((unaff_x19 & 1) == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined4 *)(lVar2 + 0x10) = unaff_w20;
      FUN_0289ec60(lVar2,*unaff_x23);
    }
    else {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      *(undefined4 *)(lVar2 + 0x10) = unaff_w20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


