/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 01f638b8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystemDescriptor(long param_1,long param_2,uint param_3)

{
  bool in_ZR;
  bool in_CY;
  undefined1 in_w8;
  
  *(undefined1 *)(param_2 + 5) = in_w8;
  if (in_CY && !in_ZR) {
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 6);
    if (param_3 != 7) {
      *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 7);
      if (8 < param_3) {
        *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 8);
        if (param_3 != 9) {
          *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 9);
          if (10 < param_3) {
            *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 10);
            if (param_3 != 0xb) {
              *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_1 + 0xb);
              if (0xc < param_3) {
                *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_1 + 0xc);
                if (param_3 != 0xd) {
                  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
                  if (0xe < param_3) {
                    *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0xe);
                    if (param_3 != 0xf) {
                      *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_1 + 0xf);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


