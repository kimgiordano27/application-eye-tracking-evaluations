/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$.cctor
ENTRY_POINT: 05bf21e4
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


void OVRPlugin_OVRP_1_49_0___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool in_CY;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  
  if (in_CY) {
    FUN_042e4a64();
  }
  else {
    *(int *)(unaff_x19 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x20;
  }
  uVar8 = FUN_03188b1c(*unaff_x21,4);
  FUN_0585c08c(uVar8,*unaff_x23,0);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_07115570;
  if (lVar11 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
    }
    else {
      FUN_042e4a64();
    }
    uVar8 = FUN_03188b1c(*unaff_x21,4);
    FUN_0585c08c(uVar8,*(undefined8 *)puVar2,0);
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_07115580;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_042e4a64();
      }
      uVar8 = FUN_03188b1c(*unaff_x21,4);
      FUN_0585c08c(uVar8,*(undefined8 *)puVar2,0);
      lVar11 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_07116d90;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        }
        else {
          FUN_042e4a64();
        }
        uVar8 = FUN_03188b1c(*unaff_x21,5);
        FUN_0585c08c(uVar8,*(undefined8 *)puVar2,0);
        lVar11 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar7 = PTR_DAT_07116db0;
        puVar6 = PTR_DAT_07116da0;
        puVar5 = PTR_DAT_07116d98;
        puVar4 = PTR_DAT_07116d78;
        puVar3 = PTR_DAT_07115550;
        puVar2 = PTR_DAT_07112148;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_042e4a64();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          uVar8 = FUN_03188b1c(*(undefined8 *)puVar4,0x18);
          FUN_0585c08c(uVar8,*(undefined8 *)puVar7,0);
          uVar9 = *unaff_x21;
          *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar8;
          uVar8 = FUN_03188b1c(uVar9,0x18);
          FUN_0585c08c(uVar8,*(undefined8 *)puVar6,0);
          uVar9 = *(undefined8 *)puVar3;
          *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = uVar8;
          lVar11 = FUN_03188b1c(uVar9,0x18);
          uVar8 = FUN_03188b1c(*unaff_x21,6);
          FUN_0585c08c(uVar8,*(undefined8 *)puVar5,0);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = uVar8;
              uVar8 = FUN_03188b1c(*unaff_x21,0);
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar11 + 0x28) = uVar8;
                lVar10 = FUN_03188b1c(*unaff_x21,1);
                if (lVar10 == 0) goto LAB_05bf2fbc;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  *(undefined4 *)(lVar10 + 0x20) = 3;
                  if (2 < uVar1) {
                    *(long *)(lVar11 + 0x30) = lVar10;
                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                    if (lVar10 == 0) goto LAB_05bf2fbc;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 4;
                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                        *(long *)(lVar11 + 0x38) = lVar10;
                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                        if (lVar10 == 0) goto LAB_05bf2fbc;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          uVar1 = *(uint *)(lVar11 + 0x18);
                          *(undefined4 *)(lVar10 + 0x20) = 5;
                          if (4 < uVar1) {
                            *(long *)(lVar11 + 0x40) = lVar10;
                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                            if (lVar10 == 0) goto LAB_05bf2fbc;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              *(undefined4 *)(lVar10 + 0x20) = 0x13;
                              if (5 < uVar1) {
                                *(long *)(lVar11 + 0x48) = lVar10;
                                lVar10 = FUN_03188b1c(*unaff_x21,1);
                                if (lVar10 == 0) goto LAB_05bf2fbc;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  *(undefined4 *)(lVar10 + 0x20) = 7;
                                  if (6 < uVar1) {
                                    *(long *)(lVar11 + 0x50) = lVar10;
                                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 8;
                                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                                        *(long *)(lVar11 + 0x58) = lVar10;
                                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                                        if (lVar10 == 0) goto LAB_05bf2fbc;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                          *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                          if (8 < uVar1) {
                                            *(long *)(lVar11 + 0x60) = lVar10;
                                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                                            if (lVar10 == 0) goto LAB_05bf2fbc;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                              *(undefined4 *)(lVar10 + 0x20) = 10;
                                              if (9 < uVar1) {
                                                *(long *)(lVar11 + 0x68) = lVar10;
                                                lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                if (lVar10 == 0) goto LAB_05bf2fbc;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                                  if (10 < uVar1) {
                                                    *(long *)(lVar11 + 0x70) = lVar10;
                                                    lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar11 + 0x78) = lVar10;
                                                        lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                        if (lVar10 == 0) goto LAB_05bf2fbc;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar11 + 0x80) = lVar10;
                                                            lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                            if (lVar10 == 0) goto LAB_05bf2fbc;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar11 + 0x88) = lVar10;
                                                                lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                                if (lVar10 == 0) goto LAB_05bf2fbc;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0x16;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar11 + 0x90) =
                                                                         lVar10;
                                                                    lVar10 = FUN_03188b1c(*unaff_x21
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_05bf2fbc;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x10;
                                                                      if ((*(uint *)(lVar11 + 0x18)
                                                                          & 0xfffffff0) != 0) {
                                                                        *(long *)(lVar11 + 0x98) =
                                                                             lVar10;
                                                                        lVar10 = FUN_03188b1c(*
                                                  unaff_x21,1);
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < uVar1) {
                                                      *(long *)(lVar11 + 0xa0) = lVar10;
                                                      lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                      if (lVar10 == 0) goto LAB_05bf2fbc;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                        if (0x11 < uVar1) {
                                                          *(long *)(lVar11 + 0xa8) = lVar10;
                                                          lVar10 = FUN_03188b1c(*unaff_x21,1);
                                                          if (lVar10 == 0) goto LAB_05bf2fbc;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                            if (0x12 < uVar1) {
                                                              *(long *)(lVar11 + 0xb0) = lVar10;
                                                              uVar8 = FUN_03188b1c(*unaff_x21,0);
                                                              if (0x13 < *(uint *)(lVar11 + 0x18)) {
                                                                *(undefined8 *)(lVar11 + 0xb8) =
                                                                     uVar8;
                                                                uVar8 = FUN_03188b1c(*unaff_x21,0);
                                                                if (0x14 < *(uint *)(lVar11 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar11 + 0xc0) =
                                                                       uVar8;
                                                                  uVar8 = FUN_03188b1c(*unaff_x21,0)
                                                                  ;
                                                                  if (0x15 < *(uint *)(lVar11 + 0x18
                                                                                      )) {
                                                                    *(undefined8 *)(lVar11 + 200) =
                                                                         uVar8;
                                                                    uVar8 = FUN_03188b1c(*unaff_x21,
                                                                                         0);
                                                                    if (0x16 < *(uint *)(lVar11 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xd0) = uVar8;
                                                    uVar8 = FUN_03188b1c(*unaff_x21,0);
                                                    if (0x17 < *(uint *)(lVar11 + 0x18)) {
                                                      *(undefined8 *)(lVar11 + 0xd8) = uVar8;
                                                      puVar3 = PTR_DAT_07115700;
                                                      uVar8 = *(undefined8 *)PTR_DAT_071156a8;
                                                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) +
                                                               0x18) = lVar11;
                                                      lVar11 = 
                                                  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                            (uVar8);
                                                  FUN_0428426c(lVar11,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_07116d88;
                                                  if (lVar11 != 0) {
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)PTR_DAT_07116d88;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar11 + 0x1c) =
                                                             *(int *)(lVar11 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_04284aa0(lVar11,6,*(undefined8 *)
                                                                               (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_05bf2fbc;
                                                  }
                                                  puVar3 = PTR_DAT_07116da8;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04284aa0(lVar11,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x21;
                                                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           ) = lVar11;
                                                  uVar8 = FUN_03188b1c(uVar8,5);
                                                  FUN_0585c08c(uVar8,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x28) =
                                                       uVar8;
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_05bf2fbc;
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
        }
      }
    }
  }
LAB_05bf2fbc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


