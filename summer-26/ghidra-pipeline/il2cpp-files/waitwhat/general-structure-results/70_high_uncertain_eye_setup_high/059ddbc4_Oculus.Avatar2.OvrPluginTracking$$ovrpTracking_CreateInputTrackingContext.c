/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateInputTrackingContext
ENTRY_POINT: 059ddbc4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContext(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar14;
  undefined8 uVar15;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xb88));
  FUN_03188a78(PTR_DAT_07109b90);
  FUN_03188a78(PTR_DAT_07109b98);
  FUN_03188a78(PTR_DAT_07109ba0);
  FUN_03188a78(PTR_DAT_07109b08);
  FUN_03188a78(PTR_DAT_07109ba8);
  FUN_03188a78(PTR_DAT_07109b18);
  FUN_03188a78(PTR_DAT_07109bb0);
  *(undefined1 *)(unaff_x19 + 0x139) = 1;
  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x23);
  FUN_042e4268(lVar9,*unaff_x22);
  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x21);
  uVar13 = *unaff_x20;
  uVar14 = *unaff_x25;
  uVar15 = *unaff_x26;
  FUN_05971910(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar13;
  *(undefined8 *)(lVar10 + 0x18) = uVar14;
  *(undefined8 *)(lVar10 + 0x20) = uVar15;
  puVar4 = PTR_DAT_07109b20;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)PTR_DAT_07109b20;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
      }
      else {
        FUN_042e4a64(lVar9,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*unaff_x21);
      uVar13 = *unaff_x25;
      uVar14 = *unaff_x26;
      FUN_05971910(lVar10,0);
      iVar1 = *(int *)(lVar9 + 0x1c);
      lVar11 = *(long *)(lVar9 + 0x10);
      lVar12 = *(long *)puVar4;
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
      *(undefined8 *)(lVar10 + 0x18) = uVar13;
      *(undefined8 *)(lVar10 + 0x20) = uVar14;
      *(int *)(lVar9 + 0x1c) = iVar1 + 1;
      puVar5 = PTR_DAT_07109ba0;
      puVar6 = PTR_DAT_07109b90;
      puVar3 = PTR_DAT_07109b50;
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_042e4a64(lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*unaff_x21);
        uVar13 = *(undefined8 *)puVar3;
        uVar14 = *(undefined8 *)puVar6;
        uVar15 = *(undefined8 *)puVar5;
        FUN_05971910(lVar10,0);
        iVar1 = *(int *)(lVar9 + 0x1c);
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar4;
        *(undefined8 *)(lVar10 + 0x10) = uVar13;
        *(undefined8 *)(lVar10 + 0x18) = uVar14;
        *(undefined8 *)(lVar10 + 0x20) = uVar15;
        *(int *)(lVar9 + 0x1c) = iVar1 + 1;
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
          }
          else {
            FUN_042e4a64(lVar9,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*unaff_x21);
          uVar13 = *(undefined8 *)puVar6;
          uVar14 = *(undefined8 *)puVar5;
          FUN_05971910(lVar10,0);
          iVar1 = *(int *)(lVar9 + 0x1c);
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)puVar4;
          *(undefined8 *)(lVar10 + 0x10) = uVar13;
          *(undefined8 *)(lVar10 + 0x18) = uVar13;
          *(undefined8 *)(lVar10 + 0x20) = uVar14;
          *(int *)(lVar9 + 0x1c) = iVar1 + 1;
          puVar5 = PTR_DAT_07109bb0;
          puVar6 = PTR_DAT_07109b38;
          puVar3 = PTR_DAT_07109b28;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
            }
            else {
              FUN_042e4a64(lVar9,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*unaff_x21);
            uVar13 = *(undefined8 *)puVar6;
            uVar14 = *(undefined8 *)puVar5;
            uVar15 = *(undefined8 *)puVar3;
            FUN_05971910(lVar10,0);
            iVar1 = *(int *)(lVar9 + 0x1c);
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar4;
            *(undefined8 *)(lVar10 + 0x10) = uVar13;
            *(undefined8 *)(lVar10 + 0x18) = uVar14;
            *(undefined8 *)(lVar10 + 0x20) = uVar15;
            *(int *)(lVar9 + 0x1c) = iVar1 + 1;
            if (lVar11 != 0) {
              uVar2 = *(uint *)(lVar9 + 0x18);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
              }
              else {
                FUN_042e4a64(lVar9,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*unaff_x21);
              uVar13 = *(undefined8 *)puVar5;
              uVar14 = *(undefined8 *)puVar3;
              FUN_05971910(lVar10,0);
              iVar1 = *(int *)(lVar9 + 0x1c);
              lVar11 = *(long *)(lVar9 + 0x10);
              lVar12 = *(long *)puVar4;
              *(undefined8 *)(lVar10 + 0x10) = uVar13;
              *(undefined8 *)(lVar10 + 0x18) = uVar13;
              *(undefined8 *)(lVar10 + 0x20) = uVar14;
              *(int *)(lVar9 + 0x1c) = iVar1 + 1;
              puVar5 = PTR_DAT_07109ba8;
              puVar6 = PTR_DAT_07109b98;
              puVar3 = PTR_DAT_07109b60;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                }
                else {
                  FUN_042e4a64(lVar9,lVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*unaff_x21);
                uVar13 = *(undefined8 *)puVar5;
                uVar14 = *(undefined8 *)puVar6;
                uVar15 = *(undefined8 *)puVar3;
                FUN_05971910(lVar10,0);
                iVar1 = *(int *)(lVar9 + 0x1c);
                lVar11 = *(long *)(lVar9 + 0x10);
                lVar12 = *(long *)puVar4;
                *(undefined8 *)(lVar10 + 0x10) = uVar13;
                *(undefined8 *)(lVar10 + 0x18) = uVar14;
                *(undefined8 *)(lVar10 + 0x20) = uVar15;
                *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                puVar7 = PTR_DAT_07109b78;
                puVar5 = PTR_DAT_07109b70;
                if (lVar11 != 0) {
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                  }
                  else {
                    FUN_042e4a64(lVar9,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     (*unaff_x21);
                  uVar13 = *(undefined8 *)puVar7;
                  uVar14 = *(undefined8 *)puVar5;
                  FUN_05971910(lVar10,0);
                  iVar1 = *(int *)(lVar9 + 0x1c);
                  lVar11 = *(long *)(lVar9 + 0x10);
                  lVar12 = *(long *)puVar4;
                  *(undefined8 *)(lVar10 + 0x10) = uVar13;
                  *(undefined8 *)(lVar10 + 0x18) = uVar13;
                  *(undefined8 *)(lVar10 + 0x20) = uVar14;
                  *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                  if (lVar11 != 0) {
                    uVar2 = *(uint *)(lVar9 + 0x18);
                    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                      *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                    }
                    else {
                      FUN_042e4a64(lVar9,lVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                       (*unaff_x21);
                    uVar13 = *(undefined8 *)puVar6;
                    uVar14 = *(undefined8 *)puVar3;
                    FUN_05971910(lVar10,0);
                    iVar1 = *(int *)(lVar9 + 0x1c);
                    lVar11 = *(long *)(lVar9 + 0x10);
                    lVar12 = *(long *)puVar4;
                    *(undefined8 *)(lVar10 + 0x10) = uVar13;
                    *(undefined8 *)(lVar10 + 0x18) = uVar13;
                    *(undefined8 *)(lVar10 + 0x20) = uVar14;
                    *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                    puVar6 = PTR_DAT_07109b58;
                    puVar3 = PTR_DAT_07109b40;
                    if (lVar11 != 0) {
                      uVar2 = *(uint *)(lVar9 + 0x18);
                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                        *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                      }
                      else {
                        FUN_042e4a64(lVar9,lVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*unaff_x21);
                      uVar13 = *(undefined8 *)puVar3;
                      uVar14 = *(undefined8 *)puVar6;
                      FUN_05971910(lVar10,0);
                      iVar1 = *(int *)(lVar9 + 0x1c);
                      lVar11 = *(long *)(lVar9 + 0x10);
                      lVar12 = *(long *)puVar4;
                      *(undefined8 *)(lVar10 + 0x10) = uVar13;
                      *(undefined8 *)(lVar10 + 0x18) = uVar13;
                      *(undefined8 *)(lVar10 + 0x20) = uVar14;
                      *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                      puVar7 = PTR_DAT_07109b88;
                      puVar5 = PTR_DAT_07109b68;
                      puVar6 = PTR_DAT_07109b48;
                      puVar3 = PTR_DAT_07109ab0;
                      if (lVar11 != 0) {
                        uVar2 = *(uint *)(lVar9 + 0x18);
                        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                          *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                        }
                        else {
                          FUN_042e4a64(lVar9,lVar10,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                        }
                        **(long **)(*(long *)puVar3 + 0xb8) = lVar9;
                        lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                          (*unaff_x23);
                        FUN_042e4268(lVar9,*unaff_x22);
                        lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                           (*unaff_x21);
                        uVar13 = *(undefined8 *)puVar5;
                        uVar14 = *(undefined8 *)puVar6;
                        uVar15 = *(undefined8 *)puVar7;
                        FUN_05971910(lVar10,0);
                        *(undefined8 *)(lVar10 + 0x10) = uVar13;
                        *(undefined8 *)(lVar10 + 0x18) = uVar14;
                        *(undefined8 *)(lVar10 + 0x20) = uVar15;
                        if (lVar9 != 0) {
                          lVar11 = *(long *)(lVar9 + 0x10);
                          lVar12 = *(long *)puVar4;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          puVar8 = PTR_DAT_07109b80;
                          puVar5 = PTR_DAT_07109b30;
                          if (lVar11 != 0) {
                            uVar2 = *(uint *)(lVar9 + 0x18);
                            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                              *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                            }
                            else {
                              FUN_042e4a64(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                               (*unaff_x21);
                            uVar13 = *(undefined8 *)puVar5;
                            uVar14 = *(undefined8 *)puVar8;
                            FUN_05971910(lVar10,0);
                            iVar1 = *(int *)(lVar9 + 0x1c);
                            lVar11 = *(long *)(lVar9 + 0x10);
                            lVar12 = *(long *)puVar4;
                            *(undefined8 *)(lVar10 + 0x10) = uVar13;
                            *(undefined8 *)(lVar10 + 0x18) = uVar13;
                            *(undefined8 *)(lVar10 + 0x20) = uVar14;
                            *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                            if (lVar11 != 0) {
                              uVar2 = *(uint *)(lVar9 + 0x18);
                              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                                *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                              }
                              else {
                                FUN_042e4a64(lVar9,lVar10,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                                 (*unaff_x21);
                              uVar13 = *(undefined8 *)puVar6;
                              uVar14 = *(undefined8 *)puVar7;
                              FUN_05971910(lVar10,0);
                              iVar1 = *(int *)(lVar9 + 0x1c);
                              lVar11 = *(long *)(lVar9 + 0x10);
                              lVar12 = *(long *)puVar4;
                              *(undefined8 *)(lVar10 + 0x10) = uVar13;
                              *(undefined8 *)(lVar10 + 0x18) = uVar13;
                              *(undefined8 *)(lVar10 + 0x20) = uVar14;
                              *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                              if (lVar11 != 0) {
                                uVar2 = *(uint *)(lVar9 + 0x18);
                                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                                  *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                                }
                                else {
                                  FUN_042e4a64(lVar9,lVar10,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar9;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


