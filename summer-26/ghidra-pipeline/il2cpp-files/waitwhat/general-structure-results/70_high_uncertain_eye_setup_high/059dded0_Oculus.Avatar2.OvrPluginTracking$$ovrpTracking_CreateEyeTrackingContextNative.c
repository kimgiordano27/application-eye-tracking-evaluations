/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContextNative
ENTRY_POINT: 059dded0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContextNative
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_042e4a64(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x21);
  uVar12 = *unaff_x25;
  uVar13 = *unaff_x26;
  FUN_05971910(lVar8,0);
  iVar1 = *(int *)(unaff_x19 + 0x1c);
  lVar9 = *(long *)(unaff_x19 + 0x10);
  *(undefined8 *)(lVar8 + 0x10) = uVar12;
  *(undefined8 *)(lVar8 + 0x18) = uVar12;
  *(undefined8 *)(lVar8 + 0x20) = uVar13;
  *(int *)(unaff_x19 + 0x1c) = iVar1 + 1;
  puVar4 = PTR_DAT_07109ba8;
  puVar5 = PTR_DAT_07109b98;
  puVar3 = PTR_DAT_07109b60;
  if (lVar9 != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
    }
    else {
      FUN_042e4a64();
    }
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x21)
    ;
    uVar12 = *(undefined8 *)puVar4;
    uVar13 = *(undefined8 *)puVar5;
    uVar14 = *(undefined8 *)puVar3;
    FUN_05971910(lVar8,0);
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    lVar9 = *(long *)(unaff_x19 + 0x10);
    *(undefined8 *)(lVar8 + 0x10) = uVar12;
    *(undefined8 *)(lVar8 + 0x18) = uVar13;
    *(undefined8 *)(lVar8 + 0x20) = uVar14;
    *(int *)(unaff_x19 + 0x1c) = iVar1 + 1;
    puVar6 = PTR_DAT_07109b78;
    puVar4 = PTR_DAT_07109b70;
    if (lVar9 != 0) {
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
      }
      else {
        FUN_042e4a64();
      }
      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*unaff_x21);
      uVar12 = *(undefined8 *)puVar6;
      uVar13 = *(undefined8 *)puVar4;
      FUN_05971910(lVar8,0);
      iVar1 = *(int *)(unaff_x19 + 0x1c);
      lVar9 = *(long *)(unaff_x19 + 0x10);
      *(undefined8 *)(lVar8 + 0x10) = uVar12;
      *(undefined8 *)(lVar8 + 0x18) = uVar12;
      *(undefined8 *)(lVar8 + 0x20) = uVar13;
      *(int *)(unaff_x19 + 0x1c) = iVar1 + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
        }
        else {
          FUN_042e4a64();
        }
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x21);
        uVar12 = *(undefined8 *)puVar5;
        uVar13 = *(undefined8 *)puVar3;
        FUN_05971910(lVar8,0);
        iVar1 = *(int *)(unaff_x19 + 0x1c);
        lVar9 = *(long *)(unaff_x19 + 0x10);
        *(undefined8 *)(lVar8 + 0x10) = uVar12;
        *(undefined8 *)(lVar8 + 0x18) = uVar12;
        *(undefined8 *)(lVar8 + 0x20) = uVar13;
        *(int *)(unaff_x19 + 0x1c) = iVar1 + 1;
        puVar5 = PTR_DAT_07109b58;
        puVar3 = PTR_DAT_07109b40;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(unaff_x19 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
            *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
          }
          else {
            FUN_042e4a64();
          }
          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x21);
          uVar12 = *(undefined8 *)puVar3;
          uVar13 = *(undefined8 *)puVar5;
          FUN_05971910(lVar8,0);
          iVar1 = *(int *)(unaff_x19 + 0x1c);
          lVar9 = *(long *)(unaff_x19 + 0x10);
          *(undefined8 *)(lVar8 + 0x10) = uVar12;
          *(undefined8 *)(lVar8 + 0x18) = uVar12;
          *(undefined8 *)(lVar8 + 0x20) = uVar13;
          *(int *)(unaff_x19 + 0x1c) = iVar1 + 1;
          puVar6 = PTR_DAT_07109b88;
          puVar4 = PTR_DAT_07109b68;
          puVar5 = PTR_DAT_07109b48;
          puVar3 = PTR_DAT_07109ab0;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(unaff_x19 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
            }
            else {
              FUN_042e4a64();
            }
            **(long **)(*(long *)puVar3 + 0xb8) = unaff_x19;
            lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*unaff_x23);
            FUN_042e4268(lVar8,*unaff_x22);
            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*unaff_x21);
            uVar12 = *(undefined8 *)puVar4;
            uVar13 = *(undefined8 *)puVar5;
            uVar14 = *(undefined8 *)puVar6;
            FUN_05971910(lVar9,0);
            *(undefined8 *)(lVar9 + 0x10) = uVar12;
            *(undefined8 *)(lVar9 + 0x18) = uVar13;
            *(undefined8 *)(lVar9 + 0x20) = uVar14;
            if (lVar8 != 0) {
              lVar10 = *(long *)(lVar8 + 0x10);
              lVar11 = *unaff_x24;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              puVar7 = PTR_DAT_07109b80;
              puVar4 = PTR_DAT_07109b30;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(lVar8 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                  *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                }
                else {
                  FUN_042e4a64(lVar8,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*unaff_x21);
                uVar12 = *(undefined8 *)puVar4;
                uVar13 = *(undefined8 *)puVar7;
                FUN_05971910(lVar9,0);
                iVar1 = *(int *)(lVar8 + 0x1c);
                lVar10 = *(long *)(lVar8 + 0x10);
                lVar11 = *unaff_x24;
                *(undefined8 *)(lVar9 + 0x10) = uVar12;
                *(undefined8 *)(lVar9 + 0x18) = uVar12;
                *(undefined8 *)(lVar9 + 0x20) = uVar13;
                *(int *)(lVar8 + 0x1c) = iVar1 + 1;
                if (lVar10 != 0) {
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                    *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                  }
                  else {
                    FUN_042e4a64(lVar8,lVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*unaff_x21);
                  uVar12 = *(undefined8 *)puVar5;
                  uVar13 = *(undefined8 *)puVar6;
                  FUN_05971910(lVar9,0);
                  iVar1 = *(int *)(lVar8 + 0x1c);
                  lVar10 = *(long *)(lVar8 + 0x10);
                  lVar11 = *unaff_x24;
                  *(undefined8 *)(lVar9 + 0x10) = uVar12;
                  *(undefined8 *)(lVar9 + 0x18) = uVar12;
                  *(undefined8 *)(lVar9 + 0x20) = uVar13;
                  *(int *)(lVar8 + 0x1c) = iVar1 + 1;
                  if (lVar10 != 0) {
                    uVar2 = *(uint *)(lVar8 + 0x18);
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                    }
                    else {
                      FUN_042e4a64(lVar8,lVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar8;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


