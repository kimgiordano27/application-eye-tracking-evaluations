/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 0696ab14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    FUN_07c9f0c8(param_1,param_2,0);
    if (*(long *)(unaff_x19 + 0xd8) != 0) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0696abc4;
      FUN_07c9f0c8(*(long *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0xd8),0);
    }
    puVar1 = PTR_DAT_08486738;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0696abc4;
      FUN_07d1c440(*(long *)(unaff_x19 + 0x28),0);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_07d1c440(*(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
LAB_0696abc4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


