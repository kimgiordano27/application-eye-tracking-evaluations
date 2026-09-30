/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 076c5bdc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_occlusionMesh(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  puVar7 = *(undefined8 **)(unaff_x20 + 0x9c8);
  uVar4 = FUN_040316d0(*unaff_x21,3);
  FUN_0740c2a4(uVar4,*puVar7,0);
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
    puVar2 = PTR_DAT_08fada20;
                    /* try { // try from 076c5c1c to 077c5c27 has its CatchHandler @ 076c5e44 */
    uVar4 = FUN_040316d0(*unaff_x21,3);
                    /* try { // try from 076c5c2c to 077c5c37 has its CatchHandler @ 076c5e40 */
    FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 076c5c3c to 077c5c47 has its CatchHandler @ 076c5e68 */
      *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
      puVar2 = PTR_DAT_08fad9b0;
                    /* try { // try from 076c5c4c to 077c5c53 has its CatchHandler @ 076c5e54 */
      uVar4 = FUN_040316d0(*unaff_x21,3);
      FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
        puVar2 = PTR_DAT_08fad9e0;
        uVar4 = FUN_040316d0(*unaff_x21,3);
        FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
        puVar2 = PTR_DAT_08facd08;
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          puVar3 = PTR_DAT_08fada00;
          lVar5 = FUN_040316d0(*unaff_x22,5);
          uVar4 = FUN_040316d0(*unaff_x21,3);
          FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
          if (lVar5 == 0) goto LAB_076c6230;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar4;
            puVar3 = PTR_DAT_08fada10;
            uVar4 = FUN_040316d0(*unaff_x21,3);
            FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar5 + 0x28) = uVar4;
              puVar3 = PTR_DAT_08fada18;
              uVar4 = FUN_040316d0(*unaff_x21,3);
              FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) = uVar4;
                puVar3 = PTR_DAT_08fad9d0;
                uVar4 = FUN_040316d0(*unaff_x21,3);
                FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar5 + 0x38) = uVar4;
                  puVar3 = PTR_DAT_08fad9d8;
                  uVar4 = FUN_040316d0(*unaff_x21,3);
                  FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                  if (4 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x40) = uVar4;
                    puVar3 = PTR_DAT_08fada08;
                    uVar4 = *unaff_x22;
                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
                    lVar5 = FUN_040316d0(uVar4,5);
                    uVar4 = FUN_040316d0(*unaff_x21,4);
                    FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                    if (lVar5 == 0) goto LAB_076c6230;
                    if (*(int *)(lVar5 + 0x18) != 0) {
                      *(undefined8 *)(lVar5 + 0x20) = uVar4;
                      puVar3 = PTR_DAT_08fad9e8;
                      uVar4 = FUN_040316d0(*unaff_x21,4);
                      FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar5 + 0x28) = uVar4;
                        puVar3 = PTR_DAT_08fad990;
                        uVar4 = FUN_040316d0(*unaff_x21,4);
                        FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                        if (2 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined8 *)(lVar5 + 0x30) = uVar4;
                          puVar3 = PTR_DAT_08fad9b8;
                          uVar4 = FUN_040316d0(*unaff_x21,4);
                          FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                          puVar3 = PTR_DAT_08fad988;
                          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar5 + 0x38) = uVar4;
                            lVar8 = *(long *)puVar3;
                            lVar6 = *(long *)(lVar8 + 0x38);
                            if (lVar6 == 0) {
                              FUN_0406ab48(lVar8);
                              lVar6 = *(long *)(lVar8 + 0x38);
                            }
                            lVar6 = *(long *)(lVar6 + 0x10);
                            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_0406aaec();
                            }
                            if (*(int *)(lVar6 + 0xe4) == 0) {
                              thunk_FUN_0408f364();
                            }
                            lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                              lVar6 = FUN_0406aaec();
                            }
                            if (4 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined8 *)(lVar5 + 0x40) = **(undefined8 **)(lVar6 + 0xb8);
                              uVar4 = *unaff_x22;
                              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar5;
                              lVar5 = FUN_040316d0(uVar4,5);
                              lVar8 = *(long *)puVar3;
                              lVar6 = *(long *)(lVar8 + 0x38);
                              if (lVar6 == 0) {
                                FUN_0406ab48(lVar8);
                                lVar6 = *(long *)(lVar8 + 0x38);
                              }
                              lVar6 = *(long *)(lVar6 + 0x10);
                              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_0406aaec();
                              }
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_0408f364();
                              }
                              lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_0406aaec();
                              }
                              if (lVar5 == 0) {
LAB_076c6230:
                    /* WARNING: Subroutine does not return */
                                FUN_0403188c();
                              }
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined8 *)(lVar5 + 0x20) = **(undefined8 **)(lVar6 + 0xb8);
                                lVar6 = FUN_040316d0(*unaff_x21,2);
                                if (lVar6 == 0) goto LAB_076c6230;
                                if ((*(int *)(lVar6 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                   *(int *)(lVar6 + 0x18) != 1)) {
                                  *(undefined4 *)(lVar6 + 0x24) = 0x14;
                                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                    *(long *)(lVar5 + 0x28) = lVar6;
                                    lVar6 = FUN_040316d0(*unaff_x21,2);
                                    if (lVar6 == 0) goto LAB_076c6230;
                                    if ((*(int *)(lVar6 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                       *(int *)(lVar6 + 0x18) != 1)) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      *(undefined4 *)(lVar6 + 0x24) = 0x15;
                                      if (2 < uVar1) {
                                        *(long *)(lVar5 + 0x30) = lVar6;
                                        lVar6 = FUN_040316d0(*unaff_x21,2);
                                        if (lVar6 == 0) goto LAB_076c6230;
                                        if ((*(int *)(lVar6 + 0x18) != 0) &&
                                           (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                           *(int *)(lVar6 + 0x18) != 1)) {
                                          *(undefined4 *)(lVar6 + 0x24) = 0x16;
                                          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
                                            *(long *)(lVar5 + 0x38) = lVar6;
                                            lVar6 = FUN_040316d0(*unaff_x21,2);
                                            if (lVar6 == 0) goto LAB_076c6230;
                                            if ((*(int *)(lVar6 + 0x18) != 0) &&
                                               (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                               *(int *)(lVar6 + 0x18) != 1)) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              *(undefined4 *)(lVar6 + 0x24) = 0x17;
                                              if (4 < uVar1) {
                                                *(long *)(lVar5 + 0x40) = lVar6;
                                                puVar3 = PTR_DAT_08fad9a0;
                                                uVar4 = *unaff_x22;
                                                *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18)
                                                     = lVar5;
                                                lVar5 = FUN_040316d0(uVar4,5);
                                                uVar4 = FUN_040316d0(*unaff_x21,4);
                                                FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                                                if (lVar5 == 0) goto LAB_076c6230;
                                                if (*(int *)(lVar5 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar4;
                                                  puVar3 = PTR_DAT_08fad9f0;
                                                  uVar4 = FUN_040316d0(*unaff_x21,4);
                                                  FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                                                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar5 + 0x28) = uVar4;
                                                    puVar3 = PTR_DAT_08fad998;
                                                    uVar4 = FUN_040316d0(*unaff_x21,4);
                                                    FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                                                    if (2 < *(uint *)(lVar5 + 0x18)) {
                                                      *(undefined8 *)(lVar5 + 0x30) = uVar4;
                                                      puVar3 = PTR_DAT_08fad9a8;
                                                      uVar4 = FUN_040316d0(*unaff_x21,4);
                                                      FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                                                      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) !=
                                                          0) {
                                                        *(undefined8 *)(lVar5 + 0x38) = uVar4;
                                                        puVar3 = PTR_DAT_08fad9c0;
                                                        uVar4 = FUN_040316d0(*unaff_x21,4);
                                                        FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0);
                                                        if (4 < *(uint *)(lVar5 + 0x18)) {
                                                          *(undefined8 *)(lVar5 + 0x40) = uVar4;
                                                          puVar3 = PTR_DAT_08fad9f8;
                                                          uVar4 = *unaff_x21;
                                                          *(long *)(*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x20) = lVar5;
                                                          uVar4 = FUN_040316d0(uVar4,5);
                                                          FUN_0740c2a4(uVar4,*(undefined8 *)puVar3,0
                                                                      );
                                                          *(undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           ) = uVar4;
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
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


