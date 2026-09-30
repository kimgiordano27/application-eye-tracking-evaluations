/*
FUNCTION_NAME: _Common.Shop.Scripts.AvatarAppearance.CartSummaryPanel$$OnEnable
ENTRY_POINT: 02a2b010
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a2b110) */

void _Common_Shop_Scripts_AvatarAppearance_CartSummaryPanel__OnEnable
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 in_stack_00000000;
  
  FUN_0225a3e8(param_1,0,param_3,0);
  if (unaff_x20 != 0) {
    FUN_02218e1c();
    if (in_stack_00000000._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


