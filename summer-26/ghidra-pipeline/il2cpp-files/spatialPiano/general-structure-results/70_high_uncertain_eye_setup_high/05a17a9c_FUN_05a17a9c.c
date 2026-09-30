/*
FUNCTION_NAME: FUN_05a17a9c
ENTRY_POINT: 05a17a9c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


int FUN_05a17a9c(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if ((DAT_06bc205e & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc205e = 1;
  }
  uVar3 = *(uint *)(param_1 + 2);
  pcVar9 = (char *)*param_1;
  uVar2 = uVar3;
  if (param_2 < (int)uVar3 || (int)uVar3 < -3) {
    uVar2 = 1;
  }
  uVar10 = (uint)*(byte *)((long)param_1 + 0x14);
  if ((int)uVar2 < 1) {
    iVar12 = uVar10 + 1;
    uVar11 = uVar3;
  }
  else {
    uVar11 = uVar2 + 1;
    do {
      uVar11 = uVar11 - 1;
      if (*pcVar9 != '\0') {
        pcVar9 = pcVar9 + 1;
      }
    } while (1 < uVar11);
    iVar12 = uVar2 + uVar10;
    uVar11 = 0;
  }
  cVar4 = *pcVar9;
  if (((int)uVar11 < 0) || (cVar4 != '\0')) {
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
    iVar12 = (uVar2 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) + uVar10) - uVar11;
    while (iVar12 = iVar12 + 1, cVar4 != '\0') {
      pcVar9 = pcVar9 + 1;
      cVar4 = *pcVar9;
    }
  }
  if (param_2 < (int)uVar3 || (int)uVar3 < -3) {
    iVar5 = uVar3 - 1;
    iVar7 = 1;
    if (-1 < iVar5) {
      iVar7 = 2;
    }
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar8 = (long)iVar5;
    iVar6 = 0;
    do {
                    /* try { // try from 05a17ba8 to 05b17c3f has its CatchHandler @ 05a17ba8
                       catch() { ... } // from try @ 05a17ba8 with catch @ 05a17ba8
                       catch() { ... } // from try @ 05a17c54 with catch @ 05a17ba8
                       catch() { ... } // from try @ 05a17cc0 with catch @ 05a17ba8
                       catch() { ... } // from try @ 05a17d14 with catch @ 05a17ba8 */
      uVar1 = lVar8 + 9;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 / 10;
    } while (0x12 < uVar1);
    if (iVar6 < 3) {
      iVar6 = 2;
    }
    iVar12 = ((iVar7 + iVar12) - (iVar5 >> 0x1f)) + iVar6;
  }
  return iVar12;
}


