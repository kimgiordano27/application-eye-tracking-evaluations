/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 08a7f8a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(void)

{
  long lVar1;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 in_stack_00000020;
  
  thunk_FUN_049ee3d8(unaff_x21 + 0x30,0);
  lVar1 = *unaff_x22;
  in_stack_00000020 = 0xffffffff;
  if (*(long *)(lVar1 + 0x38) == 0) {
    FUN_04947ee4(PTR_DAT_0ac111a0);
    if (*(long *)(lVar1 + 0x38) == 0) {
      FUN_04980b90(lVar1);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0ac111a0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_05a4ace0(unaff_x21 | 8,&stack0x00000020,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 8));
  FUN_08c7f818(unaff_x21 | 8,0);
  return;
}


