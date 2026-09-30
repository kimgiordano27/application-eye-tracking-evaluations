/*
FUNCTION_NAME: OVRManager$$add_AudioInChanged
ENTRY_POINT: 033a61a8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


ulong OVRManager__add_AudioInChanged(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x19;
  
  lVar2 = FUN_033dc8e0(0,0);
  uVar3 = FUN_033dc8ec(param_3,0);
  uVar4 = FUN_033dc8f8(uVar3,0);
  if (uVar4 < 8) {
    uVar4 = FUN_033dc8f8(uVar3,0);
    uVar6 = FUN_033dc8f8(lVar2,0);
    if (uVar6 < uVar4) {
      do {
        bVar1 = *(char *)(param_1 + lVar2) == *(char *)(unaff_x19 + lVar2);
        uVar4 = (ulong)bVar1;
        if (!bVar1) {
          return uVar4;
        }
        lVar2 = FUN_033dc904(lVar2,1,0);
        uVar6 = FUN_033dc8f8(uVar3,0);
        uVar7 = FUN_033dc8f8(lVar2,0);
      } while (uVar7 < uVar6);
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    lVar5 = FUN_033dc90c(uVar3,8,0);
    while( true ) {
      uVar4 = FUN_033dc8f8(lVar5,0);
      uVar6 = FUN_033dc8f8(lVar2,0);
      if (uVar4 <= uVar6) {
        uVar4 = FUN_033eac50(*(undefined8 *)(param_1 + lVar5),*(undefined8 *)(unaff_x19 + lVar5),0);
        return uVar4;
      }
      uVar4 = OVRPlugin_UnityOpenXR__OnSessionStateChange
                        (*(undefined8 *)(param_1 + lVar2),*(undefined8 *)(unaff_x19 + lVar2),0);
      if ((uVar4 & 1) != 0) break;
      lVar2 = FUN_033dc904(lVar2,8,0);
    }
    uVar4 = 0;
  }
  return uVar4;
}


