/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 05160ed8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_UnityOpenXR__OnSessionCreate(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_06b79e53 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782480);
    DAT_06b79e53 = 1;
  }
  lVar2 = FUN_0515ff88(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_0552f6b4(lVar2,0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_0515ff88(param_1);
      puVar1 = PTR_DAT_06782480;
      if (lVar2 == 0) goto LAB_05160f7c;
      uVar3 = FUN_0552f6b4(lVar2,0);
      lVar2 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_0504920c(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      thunk_FUN_02dd37b4((undefined8 *)(lVar2 + 0x10),uVar3);
    }
    return lVar2;
  }
LAB_05160f7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


