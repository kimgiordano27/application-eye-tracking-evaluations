/*
FUNCTION_NAME: FUN_05a169bc
ENTRY_POINT: 05a169bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a169bc(long param_1,int *param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
                    /* try { // try from 05a169cc to 05b169d7 has its CatchHandler @ 05a16a00 */
  if ((DAT_06bc204e & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc204e = 1;
  }
  iVar6 = 4;
  if ((param_4 & 1) == 0) {
    iVar6 = 5;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar2 = (param_5 << 0x10) >> 0x18;
  if ((0 < iVar2) && (iVar4 = iVar2 - iVar6, iVar4 != 0 && iVar6 <= iVar2)) {
    do {
      iVar1 = *param_2;
      if (param_3 <= iVar1) {
        return;
      }
      iVar4 = iVar4 + -1;
      *param_2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + param_1) = 0x20;
    } while (iVar4 != 0);
  }
  iVar4 = *param_2;
  if ((param_4 & 1) == 0) {
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    *(undefined1 *)(iVar4 + param_1) = 0x46;
    iVar4 = *param_2;
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    *(undefined1 *)(iVar4 + param_1) = 0x61;
    iVar4 = *param_2;
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    *(undefined1 *)(iVar4 + param_1) = 0x6c;
    iVar4 = *param_2;
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    uVar5 = 0x73;
  }
  else {
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    *(undefined1 *)(iVar4 + param_1) = 0x54;
    iVar4 = *param_2;
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    *(undefined1 *)(iVar4 + param_1) = 0x72;
    iVar4 = *param_2;
    if (param_3 <= iVar4) {
      return;
    }
    *param_2 = iVar4 + 1;
    uVar5 = 0x75;
  }
  *(undefined1 *)(iVar4 + param_1) = uVar5;
  iVar4 = *param_2;
  if (param_3 <= iVar4) {
    return;
  }
  *param_2 = iVar4 + 1;
  *(undefined1 *)(param_1 + iVar4) = 0x65;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a162a0(param_1,param_2,param_3,iVar2,iVar6);
  return;
}


