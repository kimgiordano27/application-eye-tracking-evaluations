/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 027f9f74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyVirtualKeyboard(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  FUN_0369d098();
  FUN_0369d098(*(undefined4 *)(unaff_x23 + 0x14));
  FUN_0369d098(*(undefined4 *)(unaff_x23 + 0x18));
  FUN_036998a8();
  FUN_0369d098(*(undefined4 *)(unaff_x23 + 0x28));
  FUN_036998a8();
  lVar1 = *(long *)(unaff_x22 + 0x18);
  if (lVar1 != 0) {
    FUN_0369d098(*(undefined4 *)(lVar1 + 0x10));
    FUN_0369d098(*(undefined4 *)(lVar1 + 0x14));
    if (*(long *)(unaff_x22 + 0x20) != 0) {
      FUN_027fa7cc(*(undefined4 *)(*(long *)(unaff_x22 + 0x20) + 0x18));
      lVar1 = *(long *)(unaff_x20 + 0x30);
      if (lVar1 != 0) {
        FUN_036995ac(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
                     *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c));
        FUN_036998a8();
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          FUN_036998a8();
          lVar1 = *(long *)(unaff_x20 + 0x40);
          if (lVar1 != 0) {
            FUN_036995ac(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
                         *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c));
            FUN_036998a8();
            FUN_0369d098(*(undefined4 *)(lVar1 + 0x28));
            FUN_0369d098(*(undefined4 *)(lVar1 + 0x2c));
            FUN_0369d098(*(undefined4 *)(lVar1 + 0x30));
            lVar1 = *(long *)(unaff_x20 + 0x48);
            if (lVar1 != 0) {
              FUN_0369d098(*(undefined4 *)(lVar1 + 0x14));
              FUN_036998a8();
              FUN_0369d098(*(undefined4 *)(lVar1 + 0x20));
              FUN_036995ac(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                           *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34));
              FUN_0369d098(*(undefined4 *)(lVar1 + 0x38));
              FUN_027fa8bc();
              lVar1 = *(long *)(unaff_x20 + 0x50);
              if (lVar1 != 0) {
                FUN_03699cd8(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14));
                FUN_03699ae4(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c));
                FUN_036998a8();
                FUN_0369d098(*(undefined4 *)(lVar1 + 0x28));
                FUN_0369d098(*(undefined4 *)(lVar1 + 0x2c));
                FUN_0369d098(*(undefined4 *)(lVar1 + 0x30));
                FUN_027faac0();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


