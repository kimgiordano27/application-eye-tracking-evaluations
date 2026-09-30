/*
FUNCTION_NAME: FUN_05a16b84
ENTRY_POINT: 05a16b84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a16b84(long param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  byte bVar6;
  
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if ((DAT_06bc204f & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc204f = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar3 = (param_5 << 0x10) >> 0x18;
  if (1 < iVar3) {
    iVar5 = iVar3 + -1;
    do {
      iVar2 = *param_2;
      if (param_3 <= iVar2) {
        return;
      }
      iVar5 = iVar5 + -1;
      *param_2 = iVar2 + 1;
      *(undefined1 *)(iVar2 + param_1) = 0x20;
    } while (iVar5 != 0);
  }
  uVar1 = param_4 & 0xffff;
  bVar6 = (byte)param_4;
  if (uVar1 < 0x80) {
    iVar5 = *param_2;
    if (param_3 <= iVar5) {
      return;
    }
    *param_2 = iVar5 + 1;
  }
  else {
    if (uVar1 < 0x800) {
      iVar5 = *param_2;
      if (param_3 <= iVar5) {
        return;
      }
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + param_1) = (byte)(uVar1 >> 6) | 0xc0;
      iVar5 = *param_2;
    }
    else {
      iVar5 = *param_2;
      if ((param_4 & 0xf800) == 0xd800) {
        if (param_3 <= iVar5) {
          return;
        }
        *param_2 = iVar5 + 1;
        *(undefined1 *)(iVar5 + param_1) = 0xef;
        iVar5 = *param_2;
        if (param_3 <= iVar5) {
          return;
        }
        *param_2 = iVar5 + 1;
        *(undefined1 *)(iVar5 + param_1) = 0xbf;
        iVar5 = *param_2;
        if (param_3 <= iVar5) {
          return;
        }
        bVar6 = 0xbd;
        *param_2 = iVar5 + 1;
        goto LAB_05a16ce4;
      }
      if (param_3 <= iVar5) {
        return;
      }
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + param_1) = (byte)(uVar1 >> 0xc) | 0xe0;
      iVar5 = *param_2;
      if (param_3 <= iVar5) {
        return;
      }
      *param_2 = iVar5 + 1;
      *(byte *)(iVar5 + param_1) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      iVar5 = *param_2;
    }
    if (param_3 <= iVar5) {
      return;
    }
    bVar6 = bVar6 & 0x3f | 0x80;
    *param_2 = iVar5 + 1;
  }
LAB_05a16ce4:
  *(byte *)(param_1 + iVar5) = bVar6;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a162a0(param_1,param_2,param_3,iVar3,1);
  return;
}


