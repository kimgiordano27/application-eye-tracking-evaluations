/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 01f60650
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetOpenVRControllerOffset(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  puVar1 = PTR_DAT_027c0b68;
  if (7 < *(uint *)(unaff_x21 + -0x38)) {
    *(undefined8 *)(unaff_x19 + 0x58) = unaff_x20;
    thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x58));
    uVar2 = FUN_01230af8(*unaff_x22,0x12);
    FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_027c0b00;
    if (8 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
      thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x60),uVar2);
      uVar2 = FUN_01230af8(*unaff_x22,0x12);
      FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_027c0b08;
      if (9 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
        thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x68),uVar2);
        uVar2 = FUN_01230af8(*unaff_x22,0x12);
        FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_027c0b20;
        if (10 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
          thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x70),uVar2);
          uVar2 = FUN_01230af8(*unaff_x22,0x12);
          FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_027c0af8;
          if (0xb < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
            thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x78),uVar2);
            uVar2 = FUN_01230af8(*unaff_x22,0x12);
            FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_027c0b30;
            if (0xc < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
              thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x80),uVar2);
              uVar2 = FUN_01230af8(*unaff_x22,0x12);
              FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_027c0b48;
              if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
                thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x88),uVar2);
                uVar2 = FUN_01230af8(*unaff_x22,0x12);
                FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
                puVar1 = PTR_DAT_027c0b18;
                if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
                  thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x90),uVar2);
                  uVar2 = FUN_01230af8(*unaff_x22,0x12);
                  FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
                  puVar1 = PTR_DAT_027c0b50;
                  if (0xf < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
                    thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x98),uVar2);
                    uVar2 = FUN_01230af8(*unaff_x22,0x12);
                    FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
                    puVar1 = PTR_DAT_027c0b80;
                    if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
                      thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0xa0),uVar2);
                      uVar2 = FUN_01230af8(*unaff_x22,0x12);
                      FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
                      puVar1 = PTR_DAT_027c0b88;
                      if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
                        thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0xa8),uVar2);
                        uVar2 = FUN_01230af8(*unaff_x22,0x12);
                        FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
                        puVar1 = PTR_DAT_027c0b60;
                        if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
                          thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0xb0),uVar2);
                          uVar2 = FUN_01230af8(*unaff_x22,0x12);
                          FUN_01edc198(uVar2,*(undefined8 *)puVar1,0);
                          puVar1 = PTR_DAT_027ba9b8;
                          if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
                            thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0xb8),uVar2);
                            **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                            thunk_FUN_01286abc(*(undefined8 *)(*(long *)puVar1 + 0xb8));
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


