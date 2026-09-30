/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 0696a89c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_UnityOpenXR__OnSessionBegin(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  int iVar4;
  
  puVar2 = PTR_DAT_084b7048;
  if ((param_1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) {
LAB_0696a900:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
           (lVar3 = FUN_04de82e0(*(long *)(unaff_x19 + 0x38),iVar4,*(undefined8 *)puVar2),
           lVar3 == 0)) goto LAB_0696a900;
        FUN_0696a904();
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return param_1 & 1;
}


