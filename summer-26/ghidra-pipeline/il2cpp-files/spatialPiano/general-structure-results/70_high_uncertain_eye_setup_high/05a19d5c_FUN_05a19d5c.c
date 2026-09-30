/*
FUNCTION_NAME: FUN_05a19d5c
ENTRY_POINT: 05a19d5c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_05a19d5c(undefined1 *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  uint local_54;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if ((DAT_06bc2068 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2068 = 1;
  }
  uVar2 = param_2 - 1;
  local_54 = 0;
  if (param_7 < 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = 0;
    iVar7 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = 2;
    iVar7 = param_7;
  }
  uVar5 = FUN_05a191e0(param_3,param_4,param_5,param_6 & 1,uVar6,iVar7,param_1,uVar2,&local_54);
  uVar1 = local_54;
  uVar4 = (uint)uVar5;
  if ((int)local_54 < 0) {
    if (uVar2 < 3) {
      uVar11 = 0;
    }
    else {
      if (local_54 <= 2U - param_2) {
        uVar1 = 2U - param_2;
      }
      uVar11 = 1 - uVar1;
      if (uVar2 - uVar11 <= uVar4) {
        uVar4 = uVar2 - uVar11;
      }
      memcpy(param_1 + uVar11,param_1,(ulong)uVar4);
      if (2 < uVar11) {
        lVar10 = (ulong)uVar11 - 2;
        puVar9 = param_1 + 2;
        do {
          lVar10 = lVar10 + -1;
          *puVar9 = 0x30;
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
      }
      uVar11 = uVar4 + ~uVar1;
      uVar5 = (ulong)uVar11;
    }
    if (uVar2 < 2) {
      if (uVar2 == 0) goto LAB_05a19f50;
    }
    else {
      uVar5 = (ulong)((int)uVar5 + 1);
      param_1[1] = 0x2e;
    }
    uVar5 = (ulong)((int)uVar5 + 1);
    *param_1 = 0x30;
  }
  else {
    uVar8 = (uint)((ulong)local_54 + 1);
    if (local_54 < uVar4) {
      uVar11 = uVar4 - uVar8;
      if (uVar8 <= uVar4 && uVar11 != 0) {
        puVar9 = param_1 + (ulong)local_54 + 1;
        uVar4 = (param_2 - local_54) - 3;
        if (uVar4 <= uVar11) {
          uVar11 = uVar4;
        }
        memcpy(puVar9 + 1,puVar9,(ulong)uVar11);
        *puVar9 = 0x2e;
        uVar5 = (ulong)(uVar1 + uVar11 + 2);
        goto LAB_05a19f50;
      }
    }
    else {
      if (uVar2 <= uVar8) {
        uVar8 = uVar2;
      }
      if (uVar4 < uVar8) {
        lVar10 = (ulong)uVar8 - (uVar5 & 0xffffffff);
        puVar9 = param_1 + (uVar5 & 0xffffffff);
        do {
          lVar10 = lVar10 + -1;
          *puVar9 = 0x30;
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
        uVar11 = 0;
        uVar5 = (ulong)uVar8;
        goto LAB_05a19f50;
      }
    }
    uVar11 = 0;
  }
LAB_05a19f50:
  if ((param_7 - uVar11 != 0 && (int)uVar11 <= param_7) && ((uint)uVar5 < uVar2)) {
    if (uVar11 == 0) {
      param_1[uVar5 & 0xffffffff] = 0x2e;
      uVar5 = (ulong)((uint)uVar5 + 1);
    }
    uVar4 = (param_7 - uVar11) + (uint)uVar5;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    if ((uint)uVar5 < uVar2) {
      lVar10 = (ulong)uVar2 - (uVar5 & 0xffffffff);
      puVar9 = param_1 + (uVar5 & 0xffffffff);
      do {
        lVar10 = lVar10 + -1;
        *puVar9 = 0x30;
        puVar9 = puVar9 + 1;
      } while (lVar10 != 0);
      uVar5 = (ulong)uVar2;
    }
  }
  return uVar5;
}


