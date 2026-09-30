/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetLayerAndroidSurfaceObject
ENTRY_POINT: 05befd98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_29_0__ovrp_GetLayerAndroidSurfaceObject(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_070c22b0);
  FUN_03188a78(PTR_DAT_07116cb0);
  FUN_03188a78(PTR_DAT_07116cf0);
  *(undefined1 *)(unaff_x26 + 0xdae) = 1;
  uVar1 = thunk_FUN_031c39fc(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_057b5e54(*unaff_x24,uVar1,0);
  lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x23);
  FUN_069d76f4(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_03ac2e98(lVar2,*(undefined8 *)PTR_DAT_07113cc0), lVar2 != 0)) {
    FUN_06a63e1c(0x3f800000,lVar2,0);
    FUN_06a6411c(lVar2,1,0);
    FUN_06a63fa4(lVar2,0,0);
    FUN_06a641e0(lVar2,3,0);
    lVar3 = FUN_069d3a80(lVar2,0);
    if (lVar3 != 0) {
      FUN_069e7a48();
      FUN_069d3a80(lVar2,0);
      FUN_05b64410();
      FUN_06a64884(lVar2,0);
      lVar3 = FUN_069d3b50(lVar2,0);
      if (lVar3 != 0) {
        FUN_069d7048(lVar3,0,0);
        lVar3 = FUN_069d3b50(lVar2,0);
        if (lVar3 != 0) {
          FUN_069d6f84(lVar3,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


