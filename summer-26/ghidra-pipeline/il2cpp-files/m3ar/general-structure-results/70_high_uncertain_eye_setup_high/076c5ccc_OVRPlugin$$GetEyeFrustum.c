/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 076c5ccc
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeFrustum(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  lVar3 = FUN_040316d0();
  uVar4 = FUN_040316d0(*unaff_x21,3);
                    /* try { // try from 076c5cec to 077c5cef has its CatchHandler @ 076c5e64 */
  FUN_0740c2a4(uVar4,*unaff_x20,0);
                    /* try { // try from 076c5cf4 to 077c5cff has its CatchHandler @ 076c5e5c */
  if (lVar3 == 0) goto LAB_076c6230;
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    puVar2 = PTR_DAT_08fada10;
                    /* try { // try from 076c5d04 to 077c5d0f has its CatchHandler @ 076c5e58 */
                    /* try { // try from 076c5d14 to 077c5d1f has its CatchHandler @ 076c5e68 */
    uVar4 = FUN_040316d0(*unaff_x21,3);
                    /* try { // try from 076c5d20 to 077c5d63 has its CatchHandler @ 076c5b4c */
    FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      puVar2 = PTR_DAT_08fada18;
      uVar4 = FUN_040316d0(*unaff_x21,3);
      FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = uVar4;
        puVar2 = PTR_DAT_08fad9d0;
        uVar4 = FUN_040316d0(*unaff_x21,3);
        FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar3 + 0x38) = uVar4;
          puVar2 = PTR_DAT_08fad9d8;
          uVar4 = FUN_040316d0(*unaff_x21,3);
          FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) = uVar4;
            puVar2 = PTR_DAT_08fada08;
            uVar4 = *unaff_x22;
            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar3;
            lVar3 = FUN_040316d0(uVar4,5);
            uVar4 = FUN_040316d0(*unaff_x21,4);
            FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
            if (lVar3 == 0) goto LAB_076c6230;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) = uVar4;
              puVar2 = PTR_DAT_08fad9e8;
              uVar4 = FUN_040316d0(*unaff_x21,4);
              FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar3 + 0x28) = uVar4;
                puVar2 = PTR_DAT_08fad990;
                uVar4 = FUN_040316d0(*unaff_x21,4);
                FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x30) = uVar4;
                  puVar2 = PTR_DAT_08fad9b8;
                  uVar4 = FUN_040316d0(*unaff_x21,4);
                  FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                  puVar2 = PTR_DAT_08fad988;
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar3 + 0x38) = uVar4;
                    lVar6 = *(long *)puVar2;
                    lVar5 = *(long *)(lVar6 + 0x38);
                    if (lVar5 == 0) {
                      FUN_0406ab48(lVar6);
                      lVar5 = *(long *)(lVar6 + 0x38);
                    }
                    lVar5 = *(long *)(lVar5 + 0x10);
                    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_0406aaec();
                    }
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_0408f364();
                    }
                    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_0406aaec();
                    }
                    if (4 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x40) = **(undefined8 **)(lVar5 + 0xb8);
                      uVar4 = *unaff_x22;
                      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = lVar3;
                      lVar3 = FUN_040316d0(uVar4,5);
                      lVar6 = *(long *)puVar2;
                      lVar5 = *(long *)(lVar6 + 0x38);
                      if (lVar5 == 0) {
                        FUN_0406ab48(lVar6);
                        lVar5 = *(long *)(lVar6 + 0x38);
                      }
                      lVar5 = *(long *)(lVar5 + 0x10);
                      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                        lVar5 = FUN_0406aaec();
                      }
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_0408f364();
                      }
                      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                        lVar5 = FUN_0406aaec();
                      }
                      if (lVar3 == 0) {
LAB_076c6230:
                    /* WARNING: Subroutine does not return */
                        FUN_0403188c();
                      }
                      if (*(int *)(lVar3 + 0x18) != 0) {
                        *(undefined8 *)(lVar3 + 0x20) = **(undefined8 **)(lVar5 + 0xb8);
                        lVar5 = FUN_040316d0(*unaff_x21,2);
                        if (lVar5 == 0) goto LAB_076c6230;
                        if ((*(int *)(lVar5 + 0x18) != 0) &&
                           (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1)) {
                          *(undefined4 *)(lVar5 + 0x24) = 0x14;
                          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                            *(long *)(lVar3 + 0x28) = lVar5;
                            lVar5 = FUN_040316d0(*unaff_x21,2);
                            if (lVar5 == 0) goto LAB_076c6230;
                            if ((*(int *)(lVar5 + 0x18) != 0) &&
                               (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1))
                            {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              *(undefined4 *)(lVar5 + 0x24) = 0x15;
                              if (2 < uVar1) {
                                *(long *)(lVar3 + 0x30) = lVar5;
                                lVar5 = FUN_040316d0(*unaff_x21,2);
                                if (lVar5 == 0) goto LAB_076c6230;
                                if ((*(int *)(lVar5 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar5 + 0x20) = 0x13,
                                   *(int *)(lVar5 + 0x18) != 1)) {
                                  *(undefined4 *)(lVar5 + 0x24) = 0x16;
                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                                    *(long *)(lVar3 + 0x38) = lVar5;
                                    lVar5 = FUN_040316d0(*unaff_x21,2);
                                    if (lVar5 == 0) goto LAB_076c6230;
                                    if ((*(int *)(lVar5 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar5 + 0x20) = 0x13,
                                       *(int *)(lVar5 + 0x18) != 1)) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      *(undefined4 *)(lVar5 + 0x24) = 0x17;
                                      if (4 < uVar1) {
                                        *(long *)(lVar3 + 0x40) = lVar5;
                                        puVar2 = PTR_DAT_08fad9a0;
                                        uVar4 = *unaff_x22;
                                        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = lVar3;
                                        lVar3 = FUN_040316d0(uVar4,5);
                                        uVar4 = FUN_040316d0(*unaff_x21,4);
                                        FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                                        if (lVar3 == 0) goto LAB_076c6230;
                                        if (*(int *)(lVar3 + 0x18) != 0) {
                                          *(undefined8 *)(lVar3 + 0x20) = uVar4;
                                          puVar2 = PTR_DAT_08fad9f0;
                                          uVar4 = FUN_040316d0(*unaff_x21,4);
                                          FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                                          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                                            *(undefined8 *)(lVar3 + 0x28) = uVar4;
                                            puVar2 = PTR_DAT_08fad998;
                                            uVar4 = FUN_040316d0(*unaff_x21,4);
                                            FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                                            if (2 < *(uint *)(lVar3 + 0x18)) {
                                              *(undefined8 *)(lVar3 + 0x30) = uVar4;
                                              puVar2 = PTR_DAT_08fad9a8;
                                              uVar4 = FUN_040316d0(*unaff_x21,4);
                                              FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                                              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                                                *(undefined8 *)(lVar3 + 0x38) = uVar4;
                                                puVar2 = PTR_DAT_08fad9c0;
                                                uVar4 = FUN_040316d0(*unaff_x21,4);
                                                FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                                                if (4 < *(uint *)(lVar3 + 0x18)) {
                                                  *(undefined8 *)(lVar3 + 0x40) = uVar4;
                                                  puVar2 = PTR_DAT_08fad9f8;
                                                  uVar4 = *unaff_x21;
                                                  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) =
                                                       lVar3;
                                                  uVar4 = FUN_040316d0(uVar4,5);
                                                  FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x23 + 0xb8) + 0x28) = uVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


