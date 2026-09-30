/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 05be1ff4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f__ToString(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  lVar1 = thunk_FUN_031c3cac(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar1 != 0) {
    if ((int)unaff_x20[3] != 0) {
      unaff_x20[4] = unaff_x21;
      lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*unaff_x22);
      FUN_05be212c(lVar1,1);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_031c3cac(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_05be211c;
      if ((*(uint *)(unaff_x20 + 3) & 0xfffffffe) != 0) {
        unaff_x20[5] = lVar1;
        lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*unaff_x22);
        FUN_05be212c(lVar1,2);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_031c3cac(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
        goto LAB_05be211c;
        if (2 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[6] = lVar1;
          lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*unaff_x22);
          FUN_05be212c(lVar1,3);
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_031c3cac(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
          goto LAB_05be211c;
          if ((*(uint *)(unaff_x20 + 3) & 0xfffffffc) != 0) {
            unaff_x20[7] = lVar1;
            lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*unaff_x22);
            FUN_05be212c(lVar1,4);
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_031c3cac(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
            goto LAB_05be211c;
            if (4 < *(uint *)(unaff_x20 + 3)) {
              unaff_x20[8] = lVar1;
              *(long **)(unaff_x19 + 0x10) = unaff_x20;
              FUN_05971910();
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05be211c:
  uVar3 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,0);
}


