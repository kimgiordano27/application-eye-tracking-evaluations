/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 076c5e00
PROGRAM: m3ar-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  uVar3 = FUN_040316d0(param_1);
  FUN_0740c2a4(uVar3,*unaff_x20,0);
  if (unaff_x19 == 0) goto LAB_076c6230;
                    /* try { // try from 076c5e1c to 077c5e1f has its CatchHandler @ 076c5e60 */
                    /* try { // try from 076c5e20 to 077c5e23 has its CatchHandler @ 076c5e64 */
  if (*(int *)(unaff_x19 + 0x18) != 0) {
                    /* try { // try from 076c5e24 to 077c5e27 has its CatchHandler @ 076c5e48 */
    *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
    puVar2 = PTR_DAT_08fad9e8;
                    /* try { // try from 076c5e28 to 077c5e2b has its CatchHandler @ 076c5e50 */
                    /* catch() { ... } // from try @ 076c5c80 with catch @ 076c5e2c
                       try { // try from 076c5e2c to 077c5e7f has its CatchHandler @ 076c5b4c */
                    /* catch() { ... } // from try @ 076c5de0 with catch @ 076c5e30 */
                    /* catch() { ... } // from try @ 076c5da0 with catch @ 076c5e34 */
                    /* catch() { ... } // from try @ 076c5cb8 with catch @ 076c5e38 */
    uVar3 = FUN_040316d0(*unaff_x21,4);
                    /* catch() { ... } // from try @ 076c5ca8 with catch @ 076c5e3c */
                    /* catch() { ... } // from try @ 076c5c2c with catch @ 076c5e40 */
                    /* catch() { ... } // from try @ 076c5c1c with catch @ 076c5e44 */
                    /* catch() { ... } // from try @ 076c5e24 with catch @ 076c5e48 */
    FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                    /* catch() { ... } // from try @ 076c5d64 with catch @ 076c5e4c */
                    /* catch() { ... } // from try @ 076c5c84 with catch @ 076c5e50
                       catch() { ... } // from try @ 076c5e28 with catch @ 076c5e50 */
                    /* catch() { ... } // from try @ 076c5c4c with catch @ 076c5e54 */
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
                    /* catch() { ... } // from try @ 076c5d04 with catch @ 076c5e58 */
      *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
      puVar2 = PTR_DAT_08fad990;
                    /* catch() { ... } // from try @ 076c5cf4 with catch @ 076c5e5c */
                    /* catch() { ... } // from try @ 076c5e1c with catch @ 076c5e60 */
                    /* catch() { ... } // from try @ 076c5cec with catch @ 076c5e64
                       catch() { ... } // from try @ 076c5e20 with catch @ 076c5e64 */
                    /* catch() { ... } // from try @ 076c5c3c with catch @ 076c5e68
                       catch() { ... } // from try @ 076c5cc8 with catch @ 076c5e68
                       catch() { ... } // from try @ 076c5d14 with catch @ 076c5e68 */
      uVar3 = FUN_040316d0(*unaff_x21,4);
      FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
                    /* try { // try from 076c5e80 to 077c5e97 has its CatchHandler @ 076c5f10 */
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
        puVar2 = PTR_DAT_08fad9b8;
                    /* try { // try from 076c5e98 to 077c5eff has its CatchHandler @ 076c5b4c */
        uVar3 = FUN_040316d0(*unaff_x21,4);
        FUN_0740c2a4(uVar3,*(undefined8 *)puVar2,0);
        puVar2 = PTR_DAT_08fad988;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
          lVar5 = *(long *)puVar2;
          lVar4 = *(long *)(lVar5 + 0x38);
          if (lVar4 == 0) {
            FUN_0406ab48(lVar5);
            lVar4 = *(long *)(lVar5 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0406aaec();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 076c5f00 to 077c5f0f has its CatchHandler @ 076c5f10 */
            thunk_FUN_0408f364();
          }
          lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 076c5e80 with catch @ 076c5f10
                       catch() { ... } // from try @ 076c5f00 with catch @ 076c5f10 */
                    /* try { // try from 076c5f14 to 077c5f17 has its CatchHandler @ 076c5f20 */
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 076c5f18 to 077c5f23 has its CatchHandler @ 076c5b4c */
            lVar4 = FUN_0406aaec();
          }
                    /* catch() { ... } // from try @ 076c5f14 with catch @ 076c5f20 */
          if (4 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x40) = **(undefined8 **)(lVar4 + 0xb8);
            uVar3 = *unaff_x22;
            *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = unaff_x19;
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
                             (*(undefined4 *)(lVar5 + 0x20) = 0x13, *(int *)(lVar5 + 0x18) != 1)) {
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
                                        *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28) = uVar3
                                        ;
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
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


