/*
FUNCTION_NAME: OVRPlugin$$get_systemVolume
ENTRY_POINT: 076c5a4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_systemVolume(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_08fad980;
  puVar4 = PTR_DAT_08fad978;
                    /* try { // try from 076c5a4c to 077c5abf has its CatchHandler @ 076c50dc */
  puVar2 = PTR_DAT_08faccb8;
  if ((DAT_095481a2 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fad988);
    FUN_0403162c(PTR_DAT_08facd08);
    FUN_0403162c(PTR_DAT_08fad978);
    FUN_0403162c(PTR_DAT_08faccb8);
    FUN_0403162c(PTR_DAT_08fad990);
    FUN_0403162c(PTR_DAT_08fad998);
    FUN_0403162c(PTR_DAT_08fad980);
    FUN_0403162c(PTR_DAT_08fad9a0);
    FUN_0403162c(PTR_DAT_08fad9a8);
    FUN_0403162c(PTR_DAT_08fad9b0);
    FUN_0403162c(PTR_DAT_08fad9b8);
    FUN_0403162c(PTR_DAT_08fad9c0);
    FUN_0403162c(PTR_DAT_08fad9c8);
    FUN_0403162c(PTR_DAT_08fad9d0);
    FUN_0403162c(PTR_DAT_08fad9d8);
    FUN_0403162c(PTR_DAT_08fad9e0);
    FUN_0403162c(PTR_DAT_08fad9e8);
    FUN_0403162c(PTR_DAT_08fad9f0);
    FUN_0403162c(PTR_DAT_08fad9f8);
    FUN_0403162c(PTR_DAT_08fada00);
    FUN_0403162c(PTR_DAT_08fada08);
    FUN_0403162c(PTR_DAT_08fada10);
    FUN_0403162c(PTR_DAT_08fada18);
    FUN_0403162c(PTR_DAT_08fada20);
    DAT_095481a2 = 1;
  }
  lVar6 = FUN_040316d0(*(undefined8 *)puVar4,5);
  uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
  FUN_0740c2a4(uVar7,*(undefined8 *)puVar3,0);
  if (lVar6 == 0) goto LAB_076c6230;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    puVar3 = PTR_DAT_08fad9c8;
    uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
    FUN_0740c2a4(uVar7,*(undefined8 *)puVar3,0);
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      puVar3 = PTR_DAT_08fada20;
      uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
      FUN_0740c2a4(uVar7,*(undefined8 *)puVar3,0);
      if (2 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x30) = uVar7;
        puVar3 = PTR_DAT_08fad9b0;
        uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
        FUN_0740c2a4(uVar7,*(undefined8 *)puVar3,0);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar6 + 0x38) = uVar7;
          puVar3 = PTR_DAT_08fad9e0;
          uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
          FUN_0740c2a4(uVar7,*(undefined8 *)puVar3,0);
          puVar3 = PTR_DAT_08facd08;
          if (4 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x40) = uVar7;
            **(long **)(*(long *)puVar3 + 0xb8) = lVar6;
            puVar5 = PTR_DAT_08fada00;
            lVar6 = FUN_040316d0(*(undefined8 *)puVar4,5);
            uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
            FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
            if (lVar6 == 0) goto LAB_076c6230;
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(lVar6 + 0x20) = uVar7;
              puVar5 = PTR_DAT_08fada10;
              uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
              FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar6 + 0x28) = uVar7;
                puVar5 = PTR_DAT_08fada18;
                uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
                FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                if (2 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x30) = uVar7;
                  puVar5 = PTR_DAT_08fad9d0;
                  uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
                  FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar6 + 0x38) = uVar7;
                    puVar5 = PTR_DAT_08fad9d8;
                    uVar7 = FUN_040316d0(*(undefined8 *)puVar2,3);
                    FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                    if (4 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x40) = uVar7;
                      puVar5 = PTR_DAT_08fada08;
                      uVar7 = *(undefined8 *)puVar4;
                      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar6;
                      lVar6 = FUN_040316d0(uVar7,5);
                      uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                      FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                      if (lVar6 == 0) goto LAB_076c6230;
                      if (*(int *)(lVar6 + 0x18) != 0) {
                        *(undefined8 *)(lVar6 + 0x20) = uVar7;
                        puVar5 = PTR_DAT_08fad9e8;
                        uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                        FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar6 + 0x28) = uVar7;
                          puVar5 = PTR_DAT_08fad990;
                          uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                          FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                          if (2 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x30) = uVar7;
                            puVar5 = PTR_DAT_08fad9b8;
                            uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                            FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                            puVar5 = PTR_DAT_08fad988;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar6 + 0x38) = uVar7;
                              lVar9 = *(long *)puVar5;
                              lVar8 = *(long *)(lVar9 + 0x38);
                              if (lVar8 == 0) {
                                FUN_0406ab48(lVar9);
                                lVar8 = *(long *)(lVar9 + 0x38);
                              }
                              lVar8 = *(long *)(lVar8 + 0x10);
                              if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                                lVar8 = FUN_0406aaec();
                              }
                              if (*(int *)(lVar8 + 0xe4) == 0) {
                                thunk_FUN_0408f364();
                              }
                              lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                              if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                                lVar8 = FUN_0406aaec();
                              }
                              if (4 < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x40) = **(undefined8 **)(lVar8 + 0xb8);
                                uVar7 = *(undefined8 *)puVar4;
                                *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar6;
                                lVar6 = FUN_040316d0(uVar7,5);
                                lVar9 = *(long *)puVar5;
                                lVar8 = *(long *)(lVar9 + 0x38);
                                if (lVar8 == 0) {
                                  FUN_0406ab48(lVar9);
                                  lVar8 = *(long *)(lVar9 + 0x38);
                                }
                                lVar8 = *(long *)(lVar8 + 0x10);
                                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                                  lVar8 = FUN_0406aaec();
                                }
                                if (*(int *)(lVar8 + 0xe4) == 0) {
                                  thunk_FUN_0408f364();
                                }
                                lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                                  lVar8 = FUN_0406aaec();
                                }
                                if (lVar6 == 0) {
LAB_076c6230:
                    /* WARNING: Subroutine does not return */
                                  FUN_0403188c();
                                }
                                if (*(int *)(lVar6 + 0x18) != 0) {
                                  *(undefined8 *)(lVar6 + 0x20) = **(undefined8 **)(lVar8 + 0xb8);
                                  lVar8 = FUN_040316d0(*(undefined8 *)puVar2,2);
                                  if (lVar8 == 0) goto LAB_076c6230;
                                  if ((*(int *)(lVar8 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar8 + 0x20) = 0x13,
                                     *(int *)(lVar8 + 0x18) != 1)) {
                                    *(undefined4 *)(lVar8 + 0x24) = 0x14;
                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                                      *(long *)(lVar6 + 0x28) = lVar8;
                                      lVar8 = FUN_040316d0(*(undefined8 *)puVar2,2);
                                      if (lVar8 == 0) goto LAB_076c6230;
                                      if ((*(int *)(lVar8 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar8 + 0x20) = 0x13,
                                         *(int *)(lVar8 + 0x18) != 1)) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        *(undefined4 *)(lVar8 + 0x24) = 0x15;
                                        if (2 < uVar1) {
                                          *(long *)(lVar6 + 0x30) = lVar8;
                                          lVar8 = FUN_040316d0(*(undefined8 *)puVar2,2);
                                          if (lVar8 == 0) goto LAB_076c6230;
                                          if ((*(int *)(lVar8 + 0x18) != 0) &&
                                             (*(undefined4 *)(lVar8 + 0x20) = 0x13,
                                             *(int *)(lVar8 + 0x18) != 1)) {
                                            *(undefined4 *)(lVar8 + 0x24) = 0x16;
                                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                                              *(long *)(lVar6 + 0x38) = lVar8;
                                              lVar8 = FUN_040316d0(*(undefined8 *)puVar2,2);
                                              if (lVar8 == 0) goto LAB_076c6230;
                                              if ((*(int *)(lVar8 + 0x18) != 0) &&
                                                 (*(undefined4 *)(lVar8 + 0x20) = 0x13,
                                                 *(int *)(lVar8 + 0x18) != 1)) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                *(undefined4 *)(lVar8 + 0x24) = 0x17;
                                                if (4 < uVar1) {
                                                  *(long *)(lVar6 + 0x40) = lVar8;
                                                  puVar5 = PTR_DAT_08fad9a0;
                                                  uVar7 = *(undefined8 *)puVar4;
                                                  *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18
                                                           ) = lVar6;
                                                  lVar6 = FUN_040316d0(uVar7,5);
                                                  uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                                                  FUN_0740c2a4(uVar7,*(undefined8 *)puVar5,0);
                                                  if (lVar6 == 0) goto LAB_076c6230;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                    puVar4 = PTR_DAT_08fad9f0;
                                                    uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                                                    FUN_0740c2a4(uVar7,*(undefined8 *)puVar4,0);
                                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar6 + 0x28) = uVar7;
                                                      puVar4 = PTR_DAT_08fad998;
                                                      uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4);
                                                      FUN_0740c2a4(uVar7,*(undefined8 *)puVar4,0);
                                                      if (2 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 0x30) = uVar7;
                                                        puVar4 = PTR_DAT_08fad9a8;
                                                        uVar7 = FUN_040316d0(*(undefined8 *)puVar2,4
                                                                            );
                                                        FUN_0740c2a4(uVar7,*(undefined8 *)puVar4,0);
                                                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar6 + 0x38) = uVar7;
                                                          puVar4 = PTR_DAT_08fad9c0;
                                                          uVar7 = FUN_040316d0(*(undefined8 *)puVar2
                                                                               ,4);
                                                          FUN_0740c2a4(uVar7,*(undefined8 *)puVar4,0
                                                                      );
                                                          if (4 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 0x40) = uVar7;
                                                            puVar4 = PTR_DAT_08fad9f8;
                                                            uVar7 = *(undefined8 *)puVar2;
                                                            *(long *)(*(long *)(*(long *)puVar3 +
                                                                               0xb8) + 0x20) = lVar6
                                                            ;
                                                            uVar7 = FUN_040316d0(uVar7,5);
                                                            FUN_0740c2a4(uVar7,*(undefined8 *)puVar4
                                                                         ,0);
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)puVar3 + 0xb8) +
                                                             0x28) = uVar7;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


