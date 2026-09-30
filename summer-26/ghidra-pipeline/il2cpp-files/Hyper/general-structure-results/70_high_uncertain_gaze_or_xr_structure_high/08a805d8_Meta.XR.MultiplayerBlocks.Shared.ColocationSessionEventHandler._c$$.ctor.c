/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c$$.ctor
ENTRY_POINT: 08a805d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c___ctor(undefined8 param_1)

{
  int in_w8;
  long unaff_x21;
  undefined8 *puVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0x8a0);
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c81b38(&stack0x00000008,0);
  uStack0000000000000030 = in_stack_00000010;
  uStack0000000000000028 = in_stack_00000008;
  uStack0000000000000038 = in_stack_00000018;
  thunk_FUN_049ee3d8((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_049ee3d8(&stack0x00000040);
  thunk_FUN_049ee3d8(&stack0x00000048,0);
  uStack0000000000000020 = CONCAT44(uStack0000000000000020._4_4_,0xffffffff);
  FUN_05a49e94((ulong)&stack0x00000020 | 8,&stack0x00000020,*puVar1);
  FUN_08c7f8c8((ulong)&stack0x00000020 | 8,0);
  return;
}


