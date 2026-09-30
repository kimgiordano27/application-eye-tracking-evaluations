/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 05bf23d4
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


void OVRPlugin_OVRP_1_53_0___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  puVar3 = PTR_DAT_07116d98;
  puVar2 = PTR_DAT_07115550;
  if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x20;
  }
  else {
    FUN_042e4a64();
  }
  **(long **)(*unaff_x22 + 0xb8) = unaff_x19;
  uVar4 = FUN_03188b1c(*unaff_x27,0x18);
  FUN_0585c08c(uVar4,*unaff_x26,0);
  uVar5 = *unaff_x21;
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = uVar4;
  uVar4 = FUN_03188b1c(uVar5,0x18);
  FUN_0585c08c(uVar4,*unaff_x25,0);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar4;
  lVar6 = FUN_03188b1c(uVar5,0x18);
  uVar4 = FUN_03188b1c(*unaff_x21,6);
  FUN_0585c08c(uVar4,*(undefined8 *)puVar3,0);
  if (lVar6 == 0) goto LAB_05bf2fbc;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    uVar4 = FUN_03188b1c(*unaff_x21,0);
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = uVar4;
      lVar7 = FUN_03188b1c(*unaff_x21,1);
      if (lVar7 == 0) goto LAB_05bf2fbc;
      if (*(int *)(lVar7 + 0x18) != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        *(undefined4 *)(lVar7 + 0x20) = 3;
        if (2 < uVar1) {
          *(long *)(lVar6 + 0x30) = lVar7;
          lVar7 = FUN_03188b1c(*unaff_x21,1);
          if (lVar7 == 0) goto LAB_05bf2fbc;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(undefined4 *)(lVar7 + 0x20) = 4;
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              *(long *)(lVar6 + 0x38) = lVar7;
              lVar7 = FUN_03188b1c(*unaff_x21,1);
              if (lVar7 == 0) goto LAB_05bf2fbc;
              if (*(int *)(lVar7 + 0x18) != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                *(undefined4 *)(lVar7 + 0x20) = 5;
                if (4 < uVar1) {
                  *(long *)(lVar6 + 0x40) = lVar7;
                  lVar7 = FUN_03188b1c(*unaff_x21,1);
                  if (lVar7 == 0) goto LAB_05bf2fbc;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    *(undefined4 *)(lVar7 + 0x20) = 0x13;
                    if (5 < uVar1) {
                      *(long *)(lVar6 + 0x48) = lVar7;
                      lVar7 = FUN_03188b1c(*unaff_x21,1);
                      if (lVar7 == 0) goto LAB_05bf2fbc;
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        *(undefined4 *)(lVar7 + 0x20) = 7;
                        if (6 < uVar1) {
                          *(long *)(lVar6 + 0x50) = lVar7;
                          lVar7 = FUN_03188b1c(*unaff_x21,1);
                          if (lVar7 == 0) goto LAB_05bf2fbc;
                          if (*(int *)(lVar7 + 0x18) != 0) {
                            *(undefined4 *)(lVar7 + 0x20) = 8;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                              *(long *)(lVar6 + 0x58) = lVar7;
                              lVar7 = FUN_03188b1c(*unaff_x21,1);
                              if (lVar7 == 0) goto LAB_05bf2fbc;
                              if (*(int *)(lVar7 + 0x18) != 0) {
                                uVar1 = *(uint *)(lVar6 + 0x18);
                                *(undefined4 *)(lVar7 + 0x20) = 0x14;
                                if (8 < uVar1) {
                                  *(long *)(lVar6 + 0x60) = lVar7;
                                  lVar7 = FUN_03188b1c(*unaff_x21,1);
                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    *(undefined4 *)(lVar7 + 0x20) = 10;
                                    if (9 < uVar1) {
                                      *(long *)(lVar6 + 0x68) = lVar7;
                                      lVar7 = FUN_03188b1c(*unaff_x21,1);
                                      if (lVar7 == 0) goto LAB_05bf2fbc;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        *(undefined4 *)(lVar7 + 0x20) = 0xb;
                                        if (10 < uVar1) {
                                          *(long *)(lVar6 + 0x70) = lVar7;
                                          lVar7 = FUN_03188b1c(*unaff_x21,1);
                                          if (lVar7 == 0) goto LAB_05bf2fbc;
                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            *(undefined4 *)(lVar7 + 0x20) = 0x15;
                                            if (0xb < uVar1) {
                                              *(long *)(lVar6 + 0x78) = lVar7;
                                              lVar7 = FUN_03188b1c(*unaff_x21,1);
                                              if (lVar7 == 0) goto LAB_05bf2fbc;
                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                *(undefined4 *)(lVar7 + 0x20) = 0xd;
                                                if (0xc < uVar1) {
                                                  *(long *)(lVar6 + 0x80) = lVar7;
                                                  lVar7 = FUN_03188b1c(*unaff_x21,1);
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0xe;
                                                    if (0xd < uVar1) {
                                                      *(long *)(lVar6 + 0x88) = lVar7;
                                                      lVar7 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar7 == 0) goto LAB_05bf2fbc;
                                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                                        *(undefined4 *)(lVar7 + 0x20) = 0x16;
                                                        if (0xe < uVar1) {
                                                          *(long *)(lVar6 + 0x90) = lVar7;
                                                          lVar7 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar7 == 0) goto LAB_05bf2fbc;
                                                          if (*(int *)(lVar7 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar7 + 0x20) = 0x10;
                                                            if ((*(uint *)(lVar6 + 0x18) &
                                                                0xfffffff0) != 0) {
                                                              *(long *)(lVar6 + 0x98) = lVar7;
                                                              lVar7 = FUN_03188b1c(*unaff_x21,1);
                                                              if (lVar7 == 0) goto LAB_05bf2fbc;
                                                              if (*(int *)(lVar7 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                                *(undefined4 *)(lVar7 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < uVar1) {
                                                                  *(long *)(lVar6 + 0xa0) = lVar7;
                                                                  lVar7 = FUN_03188b1c(*unaff_x21,1)
                                                                  ;
                                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                                    *(undefined4 *)(lVar7 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < uVar1) {
                                                                      *(long *)(lVar6 + 0xa8) =
                                                                           lVar7;
                                                                      lVar7 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  if (*(int *)(lVar7 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    *(undefined4 *)(lVar7 + 0x20) = 0x17;
                                                    if (0x12 < uVar1) {
                                                      *(long *)(lVar6 + 0xb0) = lVar7;
                                                      uVar4 = FUN_03188b1c(*unaff_x21,0);
                                                      if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 0xb8) = uVar4;
                                                        uVar4 = FUN_03188b1c(*unaff_x21,0);
                                                        if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0xc0) = uVar4;
                                                          uVar4 = FUN_03188b1c(*unaff_x21,0);
                                                          if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                            *(undefined8 *)(lVar6 + 200) = uVar4;
                                                            uVar4 = FUN_03188b1c(*unaff_x21,0);
                                                            if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                              *(undefined8 *)(lVar6 + 0xd0) = uVar4;
                                                              uVar4 = FUN_03188b1c(*unaff_x21,0);
                                                              if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                                *(undefined8 *)(lVar6 + 0xd8) =
                                                                     uVar4;
                                                                puVar2 = PTR_DAT_07115700;
                                                                uVar4 = *(undefined8 *)
                                                                         PTR_DAT_071156a8;
                                                                *(long *)(*(long *)(*unaff_x22 +
                                                                                   0xb8) + 0x18) =
                                                                     lVar6;
                                                                lVar6 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar4);
                                                  FUN_0428426c(lVar6,*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_07116d88;
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_07116d88;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar6 + 0x1c) =
                                                             *(int *)(lVar6 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_04284aa0(lVar6,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  puVar2 = PTR_DAT_07116da8;
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar7 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar6,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  uVar4 = *unaff_x21;
                                                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) =
                                                       lVar6;
                                                  uVar4 = FUN_03188b1c(uVar4,5);
                                                  FUN_0585c08c(uVar4,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar4;
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


