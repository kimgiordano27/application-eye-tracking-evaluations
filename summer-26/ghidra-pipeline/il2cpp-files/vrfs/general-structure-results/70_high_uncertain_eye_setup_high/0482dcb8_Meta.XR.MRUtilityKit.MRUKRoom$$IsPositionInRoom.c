/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$IsPositionInRoom
ENTRY_POINT: 0482dcb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__IsPositionInRoom(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_051de334(param_1,1,0);
  if (*(long *)(unaff_x19 + 0x150) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x150) + 0x21) = 1;
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      FUN_051de334(*(long *)(unaff_x19 + 0x78),0,0);
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        FUN_051de334(*(long *)(unaff_x19 + 0x90),0,0);
        if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
           (lVar1 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x90), lVar1 != 0)) {
          FUN_051df8e4(lVar1,0,0);
          if (*(long *)(unaff_x19 + 0x158) != 0) {
            FUN_0482df04(*(long *)(unaff_x19 + 0x158),0);
            if (*(long *)(unaff_x19 + 0x158) != 0) {
              FUN_0482dfbc(*(long *)(unaff_x19 + 0x158),1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


