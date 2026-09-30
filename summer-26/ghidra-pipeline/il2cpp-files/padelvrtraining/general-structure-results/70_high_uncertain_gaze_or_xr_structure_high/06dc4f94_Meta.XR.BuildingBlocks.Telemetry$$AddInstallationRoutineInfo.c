/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 06dc4f94
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  void *__s;
  long unaff_x20;
  size_t unaff_x21;
  
  piVar2 = (int *)thunk_FUN_03db67a8();
  iVar1 = *piVar2;
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  plVar3 = (long *)thunk_FUN_03db67a8();
  if (*plVar3 != 0) {
    if (iVar1 != *(int *)(*plVar3 + 0x1c)) {
      FUN_07199bdc(0);
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_037fce78();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    __s = (void *)thunk_FUN_03db67a8();
    memset(__s,0,unaff_x21);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


