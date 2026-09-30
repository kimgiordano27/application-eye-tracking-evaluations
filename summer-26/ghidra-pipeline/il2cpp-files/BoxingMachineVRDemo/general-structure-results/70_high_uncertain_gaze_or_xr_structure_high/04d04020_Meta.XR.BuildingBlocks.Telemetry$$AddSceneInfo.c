/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 04d04020
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(long **)(unaff_x21 + 0x3c0);
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b77dac == '\0') {
    FUN_02d6084c(PTR_DAT_0676c3c0);
    DAT_06b77dac = '\x01';
  }
  lVar1 = *plVar2;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *plVar2;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x20),uVar3);
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10) + 0x135) & 1) ==
        0) {
      FUN_02d9a2e0();
    }
    uVar3 = thunk_FUN_02d9d534();
    FUN_046b09d0();
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
    thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x10),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


