/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 09085470
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_IsSimultaneousHandsAndControllersSupported
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long unaff_x19;
  float *unaff_x20;
  float fVar1;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  FUN_0a18a274(param_4,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar1 = (float)FUN_0a18a1a0(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0a18a274(fVar1 + *unaff_x20,param_2 + unaff_x20[1],param_3 + unaff_x20[2],
                   *(long *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_0907fa94(in_stack_00000020,uStack000000000000001c,*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_0907fa30(uStack0000000000000018,uStack0000000000000014,uStack0000000000000010,
                       in_stack_00000008._4_4_,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


