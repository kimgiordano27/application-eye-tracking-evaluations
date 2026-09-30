/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 08a80194
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar1 = PTR_DAT_0ac111a0;
  if ((DAT_0b32c663 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac54880);
    FUN_04947ee4(PTR_DAT_0ac111a0);
    DAT_0b32c663 = 1;
  }
  puVar2 = PTR_DAT_0ac54880;
  in_stack_00000050 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c81b38(&stack0x00000008,0);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_049ee3d8((ulong)&stack0x00000020 | 8,0);
  in_stack_00000040 = param_1;
  thunk_FUN_049ee3d8(&stack0x00000040,param_1);
  in_stack_00000048 = param_2;
  thunk_FUN_049ee3d8(&stack0x00000048,0);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_05a499d0((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar2);
  FUN_08c7f8c8((ulong)&stack0x00000020 | 8,0);
  return;
}


