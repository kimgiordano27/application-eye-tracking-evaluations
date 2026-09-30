/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 05d62ce0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryComplete(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  FUN_05ccc43c();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_05ccc4d4(*(long *)(unaff_x19 + 0x70),0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar1 = FUN_06be6b04(*(long *)(unaff_x19 + 0x48),0);
      lVar2 = *(long *)(unaff_x19 + 0x70);
      if (lVar2 != 0) {
        in_stack_00000078 = *(undefined4 *)(lVar2 + 0x30);
        in_stack_00000070 = *(undefined8 *)(lVar2 + 0x28);
        in_stack_00000068 = *(undefined8 *)(lVar2 + 0x20);
        in_stack_00000060 = *(undefined8 *)(lVar2 + 0x18);
        FUN_05cf3994(uVar1,&stack0x00000060,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


