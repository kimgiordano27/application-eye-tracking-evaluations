/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$DoesRoomHave
ENTRY_POINT: 0148d198
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__DoesRoomHave(void)

{
  undefined8 uVar1;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  
  do {
                    /* try { // try from 0148d198 to 0158d1cf has its CatchHandler @ 0148ce5c */
    if (unaff_w19 < *(int *)(unaff_x23 + 0x18)) {
      if (*(long *)(unaff_x21 + 0x10) != 0) {
        FUN_0132138c(*(long *)(unaff_x21 + 0x10),unaff_w19,&stack0x00000008,*unaff_x25);
        *unaff_x22 = in_stack_00000008;
        if (*(long *)(unaff_x21 + 0x18) != 0) {
                    /* try { // try from 0148d1d0 to 0158d203 has its CatchHandler @ 0148d68c */
          FUN_0132138c(*(long *)(unaff_x21 + 0x18),unaff_w19,&stack0x00000008,*unaff_x25);
          *unaff_x20 = in_stack_00000008;
          if (*(long *)(unaff_x21 + 0x18) != 0) {
            FUN_0132149c(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x22,*unaff_x24);
            if (*(long *)(unaff_x21 + 0x10) != 0) {
                    /* try { // try from 0148d204 to 0158d337 has its CatchHandler @ 0148ce5c */
              FUN_0132149c(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x20,*unaff_x24);
              return;
            }
          }
        }
      }
      break;
    }
    if (*(int *)(unaff_x23 + 0x18) == 0) {
      uVar1 = *(undefined8 *)(unaff_x21 + 0x28);
    }
    else {
      uVar1 = FUN_00da4fb8(*unaff_x27,0x240);
    }
    FUN_00bc2300(unaff_x23,uVar1,*unaff_x26);
    unaff_x23 = *(long *)(unaff_x21 + 0x18);
  } while (unaff_x23 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


