/*
FUNCTION_NAME: OVRPlugin$$get_ipd
ENTRY_POINT: 076c5a9c
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


void OVRPlugin__get_ipd(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fad990);
  FUN_0403162c(PTR_DAT_08fad998);
                    /* try { // try from 076c5ac0 to 077c5acf has its CatchHandler @ 076c5ad0 */
  FUN_0403162c(PTR_DAT_08fad980);
  FUN_0403162c(PTR_DAT_08fad9a0);
                    /* catch() { ... } // from try @ 076c5a34 with catch @ 076c5ad0
                       catch() { ... } // from try @ 076c5ac0 with catch @ 076c5ad0 */
                    /* try { // try from 076c5ad4 to 077c5ad7 has its CatchHandler @ 076c5ae0 */
                    /* try { // try from 076c5ad8 to 077c5ae3 has its CatchHandler @ 076c50dc */
  FUN_0403162c(PTR_DAT_08fad9a8);
                    /* catch() { ... } // from try @ 076c5ad4 with catch @ 076c5ae0 */
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
  *(undefined1 *)(unaff_x19 + 0x1a2) = 1;
  lVar4 = FUN_040316d0(*unaff_x22,5);
  uVar5 = FUN_040316d0(*unaff_x21,3);
  FUN_0740c2a4(uVar5,*unaff_x20,0);
  if (lVar4 == 0) goto LAB_076c6230;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    puVar2 = PTR_DAT_08fad9c8;
    uVar5 = FUN_040316d0(*unaff_x21,3);
    FUN_0740c2a4(uVar5,*(undefined8 *)puVar2,0);
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      puVar2 = PTR_DAT_08fada20;
      uVar5 = FUN_040316d0(*unaff_x21,3);
      FUN_0740c2a4(uVar5,*(undefined8 *)puVar2,0);
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        puVar2 = PTR_DAT_08fad9b0;
        uVar5 = FUN_040316d0(*unaff_x21,3);
        FUN_0740c2a4(uVar5,*(undefined8 *)puVar2,0);
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar4 + 0x38) = uVar5;
          puVar2 = PTR_DAT_08fad9e0;
          uVar5 = FUN_040316d0(*unaff_x21,3);
          FUN_0740c2a4(uVar5,*(undefined8 *)puVar2,0);
          puVar2 = PTR_DAT_08facd08;
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) = uVar5;
            **(long **)(*(long *)puVar2 + 0xb8) = lVar4;
            puVar3 = PTR_DAT_08fada00;
            lVar4 = FUN_040316d0(*unaff_x22,5);
            uVar5 = FUN_040316d0(*unaff_x21,3);
            FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
            if (lVar4 == 0) goto LAB_076c6230;
            if (*(int *)(lVar4 + 0x18) != 0) {
              *(undefined8 *)(lVar4 + 0x20) = uVar5;
              puVar3 = PTR_DAT_08fada10;
              uVar5 = FUN_040316d0(*unaff_x21,3);
              FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
              if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar4 + 0x28) = uVar5;
                puVar3 = PTR_DAT_08fada18;
                uVar5 = FUN_040316d0(*unaff_x21,3);
                FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                if (2 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x30) = uVar5;
                  puVar3 = PTR_DAT_08fad9d0;
                  uVar5 = FUN_040316d0(*unaff_x21,3);
                  FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar4 + 0x38) = uVar5;
                    puVar3 = PTR_DAT_08fad9d8;
                    uVar5 = FUN_040316d0(*unaff_x21,3);
                    FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                    if (4 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x40) = uVar5;
                      puVar3 = PTR_DAT_08fada08;
                      uVar5 = *unaff_x22;
                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
                      lVar4 = FUN_040316d0(uVar5,5);
                      uVar5 = FUN_040316d0(*unaff_x21,4);
                      FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                      if (lVar4 == 0) goto LAB_076c6230;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined8 *)(lVar4 + 0x20) = uVar5;
                        puVar3 = PTR_DAT_08fad9e8;
                        uVar5 = FUN_040316d0(*unaff_x21,4);
                        FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar4 + 0x28) = uVar5;
                          puVar3 = PTR_DAT_08fad990;
                          uVar5 = FUN_040316d0(*unaff_x21,4);
                          FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                          if (2 < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x30) = uVar5;
                            puVar3 = PTR_DAT_08fad9b8;
                            uVar5 = FUN_040316d0(*unaff_x21,4);
                            FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                            puVar3 = PTR_DAT_08fad988;
                            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar4 + 0x38) = uVar5;
                              lVar7 = *(long *)puVar3;
                              lVar6 = *(long *)(lVar7 + 0x38);
                              if (lVar6 == 0) {
                                FUN_0406ab48(lVar7);
                                lVar6 = *(long *)(lVar7 + 0x38);
                              }
                              lVar6 = *(long *)(lVar6 + 0x10);
                              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_0406aaec();
                              }
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_0408f364();
                              }
                              lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
                              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                lVar6 = FUN_0406aaec();
                              }
                              if (4 < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x40) = **(undefined8 **)(lVar6 + 0xb8);
                                uVar5 = *unaff_x22;
                                *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar4;
                                lVar4 = FUN_040316d0(uVar5,5);
                                lVar7 = *(long *)puVar3;
                                lVar6 = *(long *)(lVar7 + 0x38);
                                if (lVar6 == 0) {
                                  FUN_0406ab48(lVar7);
                                  lVar6 = *(long *)(lVar7 + 0x38);
                                }
                                lVar6 = *(long *)(lVar6 + 0x10);
                                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_0406aaec();
                                }
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_0408f364();
                                }
                                lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
                                if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_0406aaec();
                                }
                                if (lVar4 == 0) {
LAB_076c6230:
                    /* WARNING: Subroutine does not return */
                                  FUN_0403188c();
                                }
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  *(undefined8 *)(lVar4 + 0x20) = **(undefined8 **)(lVar6 + 0xb8);
                                  lVar6 = FUN_040316d0(*unaff_x21,2);
                                  if (lVar6 == 0) goto LAB_076c6230;
                                  if ((*(int *)(lVar6 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                     *(int *)(lVar6 + 0x18) != 1)) {
                                    *(undefined4 *)(lVar6 + 0x24) = 0x14;
                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                      *(long *)(lVar4 + 0x28) = lVar6;
                                      lVar6 = FUN_040316d0(*unaff_x21,2);
                                      if (lVar6 == 0) goto LAB_076c6230;
                                      if ((*(int *)(lVar6 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                         *(int *)(lVar6 + 0x18) != 1)) {
                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                        *(undefined4 *)(lVar6 + 0x24) = 0x15;
                                        if (2 < uVar1) {
                                          *(long *)(lVar4 + 0x30) = lVar6;
                                          lVar6 = FUN_040316d0(*unaff_x21,2);
                                          if (lVar6 == 0) goto LAB_076c6230;
                                          if ((*(int *)(lVar6 + 0x18) != 0) &&
                                             (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                             *(int *)(lVar6 + 0x18) != 1)) {
                                            *(undefined4 *)(lVar6 + 0x24) = 0x16;
                                            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                                              *(long *)(lVar4 + 0x38) = lVar6;
                                              lVar6 = FUN_040316d0(*unaff_x21,2);
                                              if (lVar6 == 0) goto LAB_076c6230;
                                              if ((*(int *)(lVar6 + 0x18) != 0) &&
                                                 (*(undefined4 *)(lVar6 + 0x20) = 0x13,
                                                 *(int *)(lVar6 + 0x18) != 1)) {
                                                uVar1 = *(uint *)(lVar4 + 0x18);
                                                *(undefined4 *)(lVar6 + 0x24) = 0x17;
                                                if (4 < uVar1) {
                                                  *(long *)(lVar4 + 0x40) = lVar6;
                                                  puVar3 = PTR_DAT_08fad9a0;
                                                  uVar5 = *unaff_x22;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18
                                                           ) = lVar4;
                                                  lVar4 = FUN_040316d0(uVar5,5);
                                                  uVar5 = FUN_040316d0(*unaff_x21,4);
                                                  FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                                                  if (lVar4 == 0) goto LAB_076c6230;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) = uVar5;
                                                    puVar3 = PTR_DAT_08fad9f0;
                                                    uVar5 = FUN_040316d0(*unaff_x21,4);
                                                    FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0)
                                                    {
                                                      *(undefined8 *)(lVar4 + 0x28) = uVar5;
                                                      puVar3 = PTR_DAT_08fad998;
                                                      uVar5 = FUN_040316d0(*unaff_x21,4);
                                                      FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                                                      if (2 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x30) = uVar5;
                                                        puVar3 = PTR_DAT_08fad9a8;
                                                        uVar5 = FUN_040316d0(*unaff_x21,4);
                                                        FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0);
                                                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar4 + 0x38) = uVar5;
                                                          puVar3 = PTR_DAT_08fad9c0;
                                                          uVar5 = FUN_040316d0(*unaff_x21,4);
                                                          FUN_0740c2a4(uVar5,*(undefined8 *)puVar3,0
                                                                      );
                                                          if (4 < *(uint *)(lVar4 + 0x18)) {
                                                            *(undefined8 *)(lVar4 + 0x40) = uVar5;
                                                            puVar3 = PTR_DAT_08fad9f8;
                                                            uVar5 = *unaff_x21;
                                                            *(long *)(*(long *)(*(long *)puVar2 +
                                                                               0xb8) + 0x20) = lVar4
                                                            ;
                                                            uVar5 = FUN_040316d0(uVar5,5);
                                                            FUN_0740c2a4(uVar5,*(undefined8 *)puVar3
                                                                         ,0);
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)puVar2 + 0xb8) +
                                                             0x28) = uVar5;
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


