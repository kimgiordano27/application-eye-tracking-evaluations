/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 08a7f76c
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake(void)

{
  long lVar1;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  
  uStack0000000000000030 = in_stack_00000008;
  uStack0000000000000028 = in_stack_00000000;
  uStack0000000000000040 = in_stack_00000018;
  uStack0000000000000038 = in_stack_00000010;
  thunk_FUN_049ee3d8(unaff_x21 | 8,0);
  thunk_FUN_049ee3d8(unaff_x21 + 0x28);
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
  FUN_05a4abec(unaff_x21 | 8,&stack0x00000020,*(undefined8 *)(*(long *)(lVar1 + 0x38) + 8));
  FUN_08c7f818(unaff_x21 | 8,0);
  return;
}


