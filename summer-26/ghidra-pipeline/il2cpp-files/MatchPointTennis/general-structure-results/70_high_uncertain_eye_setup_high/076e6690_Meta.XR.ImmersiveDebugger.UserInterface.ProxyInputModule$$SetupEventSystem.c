/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyInputModule$$SetupEventSystem
ENTRY_POINT: 076e6690
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ProxyInputModule__SetupEventSystem(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = FUN_095259a0(param_1,0);
  if (lVar1 != 0) {
    FUN_0952a454(lVar1,1,0);
    if ((*(long *)(unaff_x20 + 0x38) != 0) &&
       (lVar1 = FUN_09640b80(*(long *)(unaff_x20 + 0x38),0), lVar1 != 0)) {
      FUN_09538e64(*(undefined4 *)(unaff_x20 + 0x88),
                   *(float *)(unaff_x20 + 0x8c) + *(float *)(unaff_x20 + 0x98) * 0.5,lVar1,0);
      if ((*(long *)(unaff_x20 + 0x38) != 0) &&
         (lVar1 = FUN_09640b80(*(long *)(unaff_x20 + 0x38),0), lVar1 != 0)) {
        FUN_09538ff0(*(undefined4 *)(unaff_x20 + 0x90),
                     *(float *)(unaff_x20 + 0x94) - *(float *)(unaff_x20 + 0x98),lVar1,0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          FUN_09538ff0(*(long *)(unaff_x20 + 0x20),0);
          FUN_076e6808();
          if ((unaff_x19 != 0) && (*(long *)(unaff_x20 + 0x40) != 0)) {
            FUN_096385c4(*(long *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x19 + 0x28),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


