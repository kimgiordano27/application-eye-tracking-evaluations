/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$.cctor
ENTRY_POINT: 05bf2450
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_54_0___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8) = unaff_x19;
  uVar3 = FUN_03188b1c();
  FUN_0585c08c(uVar3,*unaff_x25,0);
  uVar4 = *unaff_x24;
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar3;
  lVar5 = FUN_03188b1c(uVar4,0x18);
  uVar3 = FUN_03188b1c(*unaff_x21,6);
  FUN_0585c08c(uVar3,*unaff_x23,0);
  if (lVar5 == 0) goto LAB_05bf2fbc;
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    uVar3 = FUN_03188b1c(*unaff_x21,0);
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
      lVar6 = FUN_03188b1c(*unaff_x21,1);
      if (lVar6 == 0) goto LAB_05bf2fbc;
      if (*(int *)(lVar6 + 0x18) != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        *(undefined4 *)(lVar6 + 0x20) = 3;
        if (2 < uVar1) {
          *(long *)(lVar5 + 0x30) = lVar6;
          lVar6 = FUN_03188b1c(*unaff_x21,1);
          if (lVar6 == 0) goto LAB_05bf2fbc;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = 4;
            if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
              *(long *)(lVar5 + 0x38) = lVar6;
              lVar6 = FUN_03188b1c(*unaff_x21,1);
              if (lVar6 == 0) goto LAB_05bf2fbc;
              if (*(int *)(lVar6 + 0x18) != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                *(undefined4 *)(lVar6 + 0x20) = 5;
                if (4 < uVar1) {
                  *(long *)(lVar5 + 0x40) = lVar6;
                  lVar6 = FUN_03188b1c(*unaff_x21,1);
                  if (lVar6 == 0) goto LAB_05bf2fbc;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    *(undefined4 *)(lVar6 + 0x20) = 0x13;
                    if (5 < uVar1) {
                      *(long *)(lVar5 + 0x48) = lVar6;
                      lVar6 = FUN_03188b1c(*unaff_x21,1);
                      if (lVar6 == 0) goto LAB_05bf2fbc;
                      if (*(int *)(lVar6 + 0x18) != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        *(undefined4 *)(lVar6 + 0x20) = 7;
                        if (6 < uVar1) {
                          *(long *)(lVar5 + 0x50) = lVar6;
                          lVar6 = FUN_03188b1c(*unaff_x21,1);
                          if (lVar6 == 0) goto LAB_05bf2fbc;
                          if (*(int *)(lVar6 + 0x18) != 0) {
                            *(undefined4 *)(lVar6 + 0x20) = 8;
                            if ((*(uint *)(lVar5 + 0x18) & 0xfffffff8) != 0) {
                              *(long *)(lVar5 + 0x58) = lVar6;
                              lVar6 = FUN_03188b1c(*unaff_x21,1);
                              if (lVar6 == 0) goto LAB_05bf2fbc;
                              if (*(int *)(lVar6 + 0x18) != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                *(undefined4 *)(lVar6 + 0x20) = 0x14;
                                if (8 < uVar1) {
                                  *(long *)(lVar5 + 0x60) = lVar6;
                                  lVar6 = FUN_03188b1c(*unaff_x21,1);
                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    *(undefined4 *)(lVar6 + 0x20) = 10;
                                    if (9 < uVar1) {
                                      *(long *)(lVar5 + 0x68) = lVar6;
                                      lVar6 = FUN_03188b1c(*unaff_x21,1);
                                      if (lVar6 == 0) goto LAB_05bf2fbc;
                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        *(undefined4 *)(lVar6 + 0x20) = 0xb;
                                        if (10 < uVar1) {
                                          *(long *)(lVar5 + 0x70) = lVar6;
                                          lVar6 = FUN_03188b1c(*unaff_x21,1);
                                          if (lVar6 == 0) goto LAB_05bf2fbc;
                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            *(undefined4 *)(lVar6 + 0x20) = 0x15;
                                            if (0xb < uVar1) {
                                              *(long *)(lVar5 + 0x78) = lVar6;
                                              lVar6 = FUN_03188b1c(*unaff_x21,1);
                                              if (lVar6 == 0) goto LAB_05bf2fbc;
                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar5 + 0x18);
                                                *(undefined4 *)(lVar6 + 0x20) = 0xd;
                                                if (0xc < uVar1) {
                                                  *(long *)(lVar5 + 0x80) = lVar6;
                                                  lVar6 = FUN_03188b1c(*unaff_x21,1);
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    *(undefined4 *)(lVar6 + 0x20) = 0xe;
                                                    if (0xd < uVar1) {
                                                      *(long *)(lVar5 + 0x88) = lVar6;
                                                      lVar6 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar6 == 0) goto LAB_05bf2fbc;
                                                      if (*(int *)(lVar6 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        *(undefined4 *)(lVar6 + 0x20) = 0x16;
                                                        if (0xe < uVar1) {
                                                          *(long *)(lVar5 + 0x90) = lVar6;
                                                          lVar6 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar6 == 0) goto LAB_05bf2fbc;
                                                          if (*(int *)(lVar6 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar6 + 0x20) = 0x10;
                                                            if ((*(uint *)(lVar5 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(long *)(lVar5 + 0x98) = lVar6;
                                                              lVar6 = FUN_03188b1c(*unaff_x21,1);
                                                              if (lVar6 == 0) goto LAB_05bf2fbc;
                                                              if (*(int *)(lVar6 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar5 + 0x18);
                                                                *(undefined4 *)(lVar6 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < uVar1) {
                                                                  *(long *)(lVar5 + 0xa0) = lVar6;
                                                                  lVar6 = FUN_03188b1c(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                                    *(undefined4 *)(lVar6 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < uVar1) {
                                                                      *(long *)(lVar5 + 0xa8) =
                                                                           lVar6;
                                                                      lVar6 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    *(undefined4 *)(lVar6 + 0x20) = 0x17;
                                                    if (0x12 < uVar1) {
                                                      *(long *)(lVar5 + 0xb0) = lVar6;
                                                      uVar3 = FUN_03188b1c(*unaff_x21,0);
                                                      if (0x13 < *(uint *)(lVar5 + 0x18)) {
                                                        *(undefined8 *)(lVar5 + 0xb8) = uVar3;
                                                        uVar3 = FUN_03188b1c(*unaff_x21,0);
                                                        if (0x14 < *(uint *)(lVar5 + 0x18)) {
                                                          *(undefined8 *)(lVar5 + 0xc0) = uVar3;
                                                          uVar3 = FUN_03188b1c(*unaff_x21,0);
                                                          if (0x15 < *(uint *)(lVar5 + 0x18)) {
                                                            *(undefined8 *)(lVar5 + 200) = uVar3;
                                                            uVar3 = FUN_03188b1c(*unaff_x21,0);
                                                            if (0x16 < *(uint *)(lVar5 + 0x18)) {
                                                              *(undefined8 *)(lVar5 + 0xd0) = uVar3;
                                                              uVar3 = FUN_03188b1c(*unaff_x21,0);
                                                              if (0x17 < *(uint *)(lVar5 + 0x18)) {
                                                                *(undefined8 *)(lVar5 + 0xd8) =
                                                                     uVar3;
                                                                puVar2 = PTR_DAT_07115700;
                                                                uVar3 = *(undefined8 *)
                                                                         PTR_DAT_071156a8;
                                                                *(long *)(*(long *)(*unaff_x22 +
                                                                                   0xb8) + 0x18) =
                                                                     lVar5;
                                                                lVar5 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar3);
                                                  FUN_0428426c(lVar5,*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_07116d88;
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)PTR_DAT_07116d88;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_04284aa0(lVar5,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar7 + 0x20) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar7 + 0x20) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    lVar7 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = *(long *)(lVar5 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  puVar2 = PTR_DAT_07116da8;
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar6 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar5,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar7
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  uVar3 = *unaff_x21;
                                                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) =
                                                       lVar5;
                                                  uVar3 = FUN_03188b1c(uVar3,5);
                                                  FUN_0585c08c(uVar3,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar3;
                                                  return;
                                                  }
                                                  }
LAB_05bf2fbc:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03188cd8();
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
  FUN_03188ce0();
}


