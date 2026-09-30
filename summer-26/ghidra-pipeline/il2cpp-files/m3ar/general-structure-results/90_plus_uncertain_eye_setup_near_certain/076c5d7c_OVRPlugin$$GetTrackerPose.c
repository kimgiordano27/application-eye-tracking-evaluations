/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 076c5d7c
PROGRAM: m3ar-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  uVar3 = FUN_040316d0();
  FUN_0740c2a4(uVar3,*unaff_x20,0);
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
    puVar2 = PTR_DAT_08fad9d8;
                    /* try { // try from 076c5da0 to 077c5dbf has its CatchHandler @ 076c5e34 */
    uVar3 = FUN_040316d0(*unaff_x21,3);
    FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
      puVar2 = PTR_DAT_08fada08;
                    /* try { // try from 076c5de0 to 077c5dff has its CatchHandler @ 076c5e30 */
      uVar3 = *unaff_x22;
      *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
      lVar4 = FUN_040316d0(uVar3,5);
      uVar3 = FUN_040316d0(*unaff_x21,4);
      FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
      if (lVar4 == 0) goto LAB_076c6230;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        puVar2 = PTR_DAT_08fad9e8;
        uVar3 = FUN_040316d0(*unaff_x21,4);
        FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar4 + 0x28) = uVar3;
          puVar2 = PTR_DAT_08fad990;
          uVar3 = FUN_040316d0(*unaff_x21,4);
          FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = uVar3;
            puVar2 = PTR_DAT_08fad9b8;
            uVar3 = FUN_040316d0(*unaff_x21,4);
            FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
            puVar2 = PTR_DAT_08fad988;
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar4 + 0x38) = uVar3;
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
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) = **(undefined8 **)(lVar5 + 0xb8);
                uVar3 = *unaff_x22;
                *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = lVar4;
                lVar4 = FUN_040316d0(uVar3,5);
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
                if (lVar4 == 0) {
LAB_076c6230:
                    /* WARNING: Subroutine does not return */
                  FUN_0403188c();
                }
                if (*(int *)(lVar4 + 0x18) != 0) {
                  *(undefined8 *)(lVar4 + 0x20) = **(undefined8 **)(lVar5 + 0xb8);
                  lVar5 = FUN_040316d0(*unaff_x21,2);
                  if (lVar5 == 0) goto LAB_076c6230;
                  if ((*(int *)(lVar5 + 0x18) != 0) &&
                     (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1)) {
                    *(undefined4 *)(lVar5 + 0x24) = 0x14;
                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                      *(long *)(lVar4 + 0x28) = lVar5;
                      lVar5 = FUN_040316d0(*unaff_x21,2);
                      if (lVar5 == 0) goto LAB_076c6230;
                      if ((*(int *)(lVar5 + 0x18) != 0) &&
                         (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1)) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        *(undefined4 *)(lVar5 + 0x24) = 0x15;
                        if (2 < uVar1) {
                          *(long *)(lVar4 + 0x30) = lVar5;
                          lVar5 = FUN_040316d0(*unaff_x21,2);
                          if (lVar5 == 0) goto LAB_076c6230;
                          if ((*(int *)(lVar5 + 0x18) != 0) &&
                             (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1)) {
                            *(undefined4 *)(lVar5 + 0x24) = 0x16;
                            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                              *(long *)(lVar4 + 0x38) = lVar5;
                              lVar5 = FUN_040316d0(*unaff_x21,2);
                              if (lVar5 == 0) goto LAB_076c6230;
                              if ((*(int *)(lVar5 + 0x18) != 0) &&
                                 (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1)
                                 ) {
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                *(undefined4 *)(lVar5 + 0x24) = 0x17;
                                if (4 < uVar1) {
                                  *(long *)(lVar4 + 0x40) = lVar5;
                                  puVar2 = PTR_DAT_08fad9a0;
                                  uVar3 = *unaff_x22;
                                  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = lVar4;
                                  lVar4 = FUN_040316d0(uVar3,5);
                                  uVar3 = FUN_040316d0(*unaff_x21,4);
                                  FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                                  if (lVar4 == 0) goto LAB_076c6230;
                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                    *(undefined8 *)(lVar4 + 0x20) = uVar3;
                                    puVar2 = PTR_DAT_08fad9f0;
                                    uVar3 = FUN_040316d0(*unaff_x21,4);
                                    FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar4 + 0x28) = uVar3;
                                      puVar2 = PTR_DAT_08fad998;
                                      uVar3 = FUN_040316d0(*unaff_x21,4);
                                      FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                                      if (2 < *(uint *)(lVar4 + 0x18)) {
                                        *(undefined8 *)(lVar4 + 0x30) = uVar3;
                                        puVar2 = PTR_DAT_08fad9a8;
                                        uVar3 = FUN_040316d0(*unaff_x21,4);
                                        FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                                          *(undefined8 *)(lVar4 + 0x38) = uVar3;
                                          puVar2 = PTR_DAT_08fad9c0;
                                          uVar3 = FUN_040316d0(*unaff_x21,4);
                                          FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                                          if (4 < *(uint *)(lVar4 + 0x18)) {
                                            *(undefined8 *)(lVar4 + 0x40) = uVar3;
                                            puVar2 = PTR_DAT_08fad9f8;
                                            uVar3 = *unaff_x21;
                                            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = lVar4;
                                            uVar3 = FUN_040316d0(uVar3,5);
                                            FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                                            *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28) =
                                                 uVar3;
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
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


