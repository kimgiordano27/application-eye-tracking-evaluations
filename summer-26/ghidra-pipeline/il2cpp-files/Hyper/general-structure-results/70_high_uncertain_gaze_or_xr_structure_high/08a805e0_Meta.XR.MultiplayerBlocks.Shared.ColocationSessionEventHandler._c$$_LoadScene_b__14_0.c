/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c$$<LoadScene>b__14_0
ENTRY_POINT: 08a805e0
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


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__<LoadScene>b__14_0(void)

{
  int in_w8;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c81b38(&stack0x00000008,0);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_049ee3d8((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_049ee3d8(&stack0x00000040);
  thunk_FUN_049ee3d8(&stack0x00000048,0);
  in_stack_00000020 = 0xffffffff;
  FUN_05a49e94((ulong)&stack0x00000020 | 8,&stack0x00000020,*unaff_x21);
  FUN_08c7f8c8((ulong)&stack0x00000020 | 8,0);
  return;
}


