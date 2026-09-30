/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GenerateRandomPositionInRoom
ENTRY_POINT: 0482f250
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


void Meta_XR_MRUtilityKit_MRUKRoom__GenerateRandomPositionInRoom(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* try { // try from 0482f25c to 0492f35f has its CatchHandler @ 0482f36c */
    lVar1 = FUN_02511da8(*(long *)(unaff_x19 + 0x38),0);
    lVar2 = thunk_FUN_015d056c(*unaff_x22);
    if ((lVar2 != 0) && (FUN_04839fa4(), lVar1 != 0)) {
      FUN_025000e8(lVar1,lVar2,0);
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        lVar1 = FUN_02511da8(*(long *)(unaff_x19 + 0x40),0);
        lVar2 = thunk_FUN_015d056c(*unaff_x22);
        if ((lVar2 != 0) && (FUN_04839fa4(), lVar1 != 0)) {
          FUN_025000e8(lVar1,lVar2,0);
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            lVar1 = FUN_02511da8(*(long *)(unaff_x19 + 0x48),0);
            lVar2 = thunk_FUN_015d056c(*unaff_x22);
            if ((lVar2 != 0) && (FUN_04839fa4(), lVar1 != 0)) {
              FUN_025000e8(lVar1,lVar2,0);
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


