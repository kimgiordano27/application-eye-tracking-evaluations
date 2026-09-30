/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 027f9dd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemKeyboardDescription(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lVar2;
  
  FUN_01ab69ac(PTR_DAT_03cfd8c0);
  FUN_01ab69ac(PTR_DAT_03ceca48);
  FUN_01ab69ac(PTR_DAT_03cfd8c8);
  FUN_01ab69ac(PTR_DAT_03cfd8d0);
  FUN_01ab69ac(PTR_DAT_03cfd8d8);
  FUN_01ab69ac(PTR_DAT_03cfd8e0);
  FUN_01ab69ac(PTR_DAT_03cfd8e8);
  FUN_01ab69ac(PTR_DAT_03cfd8f0);
  FUN_01ab69ac(PTR_DAT_03cfd8f8);
  *(undefined1 *)(unaff_x21 + 0x1a4) = 1;
  if (((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x10) != 0)) && (unaff_x19 != 0)) {
    FUN_0369d098((float)*(int *)(*(long *)(unaff_x20 + 0x10) + 0x18));
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      FUN_027fa2d0();
      FUN_027fa6e0();
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if (lVar1 != 0) {
        FUN_036995ac(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
                     *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c));
        FUN_036998a8();
        FUN_036995ac(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                     *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34));
        FUN_036998a8();
        FUN_0369d098(*(undefined4 *)(lVar1 + 0x40));
        lVar1 = *(long *)(unaff_x20 + 0x28);
        if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x10), lVar2 != 0)) {
          FUN_0369d098(*(undefined4 *)(lVar2 + 0x10));
          FUN_0369d098(*(undefined4 *)(lVar2 + 0x14));
          FUN_0369d098(*(undefined4 *)(lVar2 + 0x18));
          FUN_036998a8();
          FUN_0369d098(*(undefined4 *)(lVar2 + 0x28));
          FUN_036998a8();
          lVar2 = *(long *)(lVar1 + 0x18);
          if (lVar2 != 0) {
            FUN_0369d098(*(undefined4 *)(lVar2 + 0x10));
            FUN_0369d098(*(undefined4 *)(lVar2 + 0x14));
            if (*(long *)(lVar1 + 0x20) != 0) {
              FUN_027fa7cc(*(undefined4 *)(*(long *)(lVar1 + 0x20) + 0x18));
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


