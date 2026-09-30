/*
FUNCTION_NAME: FUN_05a1796c
ENTRY_POINT: 05a1796c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a1796c(undefined8 *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  if ((DAT_06bc2060 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2060 = 1;
  }
  puVar4 = (undefined1 *)*param_1;
  if ((int)param_2 < 1) {
    uVar5 = 0;
LAB_05a179d8:
    if ((uint)uVar5 == param_2) goto LAB_05a179e0;
  }
  else {
    uVar5 = 0;
    do {
      if (puVar4[uVar5] == '\0') goto LAB_05a179d8;
      uVar5 = uVar5 + 1;
    } while (param_2 != (uint)uVar5);
    uVar5 = (ulong)param_2;
LAB_05a179e0:
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((0x34 < (byte)puVar4[(int)param_2]) && ((param_3 & 1) == 0)) {
      pcVar2 = puVar4 + param_2;
      do {
        uVar3 = param_2;
        pcVar2 = pcVar2 + -1;
        if ((int)uVar3 < 1) {
          *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
          uVar5 = 1;
          *puVar4 = 0x31;
          goto LAB_05a17a84;
        }
        param_2 = uVar3 - 1;
      } while (*pcVar2 == '9');
      *pcVar2 = *pcVar2 + '\x01';
      uVar5 = (ulong)uVar3;
      goto LAB_05a17a84;
    }
  }
  uVar1 = uVar5 & 0xffffffff;
  do {
    uVar5 = uVar1;
    if ((int)uVar5 < 1) {
      if ((int)uVar5 == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      break;
    }
    uVar1 = uVar5 - 1;
  } while (puVar4[uVar5 - 1] == '0');
LAB_05a17a84:
  puVar4[(int)uVar5] = 0;
  *(int *)((long)param_1 + 0xc) = (int)uVar5;
  return;
}


