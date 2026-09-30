/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 01f60340
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilSupported(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_01279b34(PTR_DAT_027ba9b8);
  thunk_FUN_01279b34(PTR_DAT_027c0af8);
  thunk_FUN_01279b34(PTR_DAT_027c0b00);
  thunk_FUN_01279b34(PTR_DAT_027c0b08);
  thunk_FUN_01279b34(PTR_DAT_027c0b10);
  thunk_FUN_01279b34(PTR_DAT_027c0b18);
  thunk_FUN_01279b34(PTR_DAT_027c0b20);
  thunk_FUN_01279b34(PTR_DAT_027c0b28);
  thunk_FUN_01279b34(PTR_DAT_027c0af0);
  thunk_FUN_01279b34(PTR_DAT_027c0b30);
  thunk_FUN_01279b34(PTR_DAT_027c0b38);
  thunk_FUN_01279b34(PTR_DAT_027c0b40);
  thunk_FUN_01279b34(PTR_DAT_027c0b48);
  thunk_FUN_01279b34(PTR_DAT_027c0b50);
  thunk_FUN_01279b34(PTR_DAT_027c0b58);
  thunk_FUN_01279b34(PTR_DAT_027c0b60);
  thunk_FUN_01279b34(PTR_DAT_027c0b68);
  thunk_FUN_01279b34(PTR_DAT_027c0b70);
  thunk_FUN_01279b34(PTR_DAT_027c0b78);
  thunk_FUN_01279b34(PTR_DAT_027c0b80);
  thunk_FUN_01279b34(PTR_DAT_027c0b88);
  *(undefined1 *)(unaff_x19 + 0xcb4) = 1;
  lVar2 = FUN_01230af8(*unaff_x21,0x14);
  uVar3 = FUN_01230af8(*unaff_x22,0x12);
  FUN_01edc198(uVar3,*unaff_x20,0);
  puVar1 = PTR_DAT_027c0b28;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x20),uVar3);
    uVar3 = FUN_01230af8(*unaff_x22,0x12);
    FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_027c0b40;
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x28),uVar3);
      uVar3 = FUN_01230af8(*unaff_x22,0x12);
      FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_027c0b58;
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x30),uVar3);
        uVar3 = FUN_01230af8(*unaff_x22,0x12);
        FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_027c0b70;
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x38),uVar3);
          uVar3 = FUN_01230af8(*unaff_x22,0x12);
          FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_027c0b10;
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = uVar3;
            thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x40),uVar3);
            uVar3 = FUN_01230af8(*unaff_x22,0x12);
            FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_027c0b78;
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar3;
              thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x48),uVar3);
              uVar3 = FUN_01230af8(*unaff_x22,0x12);
              FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
              puVar1 = PTR_DAT_027c0b38;
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = uVar3;
                thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x50),uVar3);
                uVar3 = FUN_01230af8(*unaff_x22,0x12);
                FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                puVar1 = PTR_DAT_027c0b68;
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar3;
                  thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x58),uVar3);
                  uVar3 = FUN_01230af8(*unaff_x22,0x12);
                  FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                  puVar1 = PTR_DAT_027c0b00;
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = uVar3;
                    thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x60),uVar3);
                    uVar3 = FUN_01230af8(*unaff_x22,0x12);
                    FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                    puVar1 = PTR_DAT_027c0b08;
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = uVar3;
                      thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x68),uVar3);
                      uVar3 = FUN_01230af8(*unaff_x22,0x12);
                      FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                      puVar1 = PTR_DAT_027c0b20;
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) = uVar3;
                        thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x70),uVar3);
                        uVar3 = FUN_01230af8(*unaff_x22,0x12);
                        FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                        puVar1 = PTR_DAT_027c0af8;
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = uVar3;
                          thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x78),uVar3);
                          uVar3 = FUN_01230af8(*unaff_x22,0x12);
                          FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                          puVar1 = PTR_DAT_027c0b30;
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = uVar3;
                            thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x80),uVar3);
                            uVar3 = FUN_01230af8(*unaff_x22,0x12);
                            FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                            puVar1 = PTR_DAT_027c0b48;
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) = uVar3;
                              thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x88),uVar3);
                              uVar3 = FUN_01230af8(*unaff_x22,0x12);
                              FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                              puVar1 = PTR_DAT_027c0b18;
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) = uVar3;
                                thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x90),uVar3);
                                uVar3 = FUN_01230af8(*unaff_x22,0x12);
                                FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                                puVar1 = PTR_DAT_027c0b50;
                                if (0xf < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x98) = uVar3;
                                  thunk_FUN_01286abc((undefined8 *)(lVar2 + 0x98),uVar3);
                                  uVar3 = FUN_01230af8(*unaff_x22,0x12);
                                  FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                                  puVar1 = PTR_DAT_027c0b80;
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) = uVar3;
                                    thunk_FUN_01286abc((undefined8 *)(lVar2 + 0xa0),uVar3);
                                    uVar3 = FUN_01230af8(*unaff_x22,0x12);
                                    FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                                    puVar1 = PTR_DAT_027c0b88;
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa8) = uVar3;
                                      thunk_FUN_01286abc((undefined8 *)(lVar2 + 0xa8),uVar3);
                                      uVar3 = FUN_01230af8(*unaff_x22,0x12);
                                      FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                                      puVar1 = PTR_DAT_027c0b60;
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) = uVar3;
                                        thunk_FUN_01286abc((undefined8 *)(lVar2 + 0xb0),uVar3);
                                        uVar3 = FUN_01230af8(*unaff_x22,0x12);
                                        FUN_01edc198(uVar3,*(undefined8 *)puVar1,0);
                                        puVar1 = PTR_DAT_027ba9b8;
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) = uVar3;
                                          thunk_FUN_01286abc((undefined8 *)(lVar2 + 0xb8),uVar3);
                                          **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                                          thunk_FUN_01286abc(*(undefined8 *)(*(long *)puVar1 + 0xb8)
                                                             ,lVar2);
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


