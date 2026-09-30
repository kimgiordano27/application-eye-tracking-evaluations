/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 0694eee8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  if (((param_1 != 0) && (FUN_07cac280(param_1,0), param_2 != 0)) &&
     (FUN_07cadf5c(param_2,0), unaff_x22 != 0)) {
    FUN_07d2d468();
    if (*unaff_x21 != 0) {
      FUN_07d255e0(*unaff_x21,0,0);
      if (*unaff_x21 != 0) {
        FUN_07d256a4(*unaff_x21,0,0);
        if (*unaff_x21 != 0) {
          FUN_07d25768(*unaff_x21,0,0);
          if (*unaff_x21 != 0) {
            FUN_07d25bd0(*unaff_x21,(ulong)(*(char *)(unaff_x19 + 0x59) == '\0') << 1,0);
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              FUN_07d2d958(*(long *)(unaff_x19 + 0x60),1,0);
              if (*unaff_x21 != 0) {
                FUN_07d2d7b0(*(undefined4 *)(unaff_x19 + 0x3c),*unaff_x21,0);
                if ((*(long *)(unaff_x20 + 0x10) != 0) && (*(long *)(unaff_x19 + 0x60) != 0)) {
                  FUN_07d2d0e4(*(long *)(unaff_x19 + 0x60),
                               *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x20),0);
                  *(long *)(unaff_x19 + 0x68) = unaff_x20;
                  thunk_FUN_03afed3c((long *)(unaff_x19 + 0x68));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


