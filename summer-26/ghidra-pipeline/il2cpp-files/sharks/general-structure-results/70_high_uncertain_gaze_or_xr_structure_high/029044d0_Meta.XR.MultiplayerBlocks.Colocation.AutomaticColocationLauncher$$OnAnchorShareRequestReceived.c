/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 029044d0
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  long unaff_x20;
  long unaff_x22;
  undefined8 *puVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar4 = (undefined8 *)(in_x9 + 0x20);
  param_1 = param_1 - (int)param_5;
  while (param_5 < *(uint *)(unaff_x22 + 0x18)) {
    in_stack_00000028 = param_4;
    uVar1 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                               &stack0x00000028);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= param_5) break;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = *puVar4;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_02c28294(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) {
      return param_5;
    }
    param_5 = param_5 + 1;
    param_1 = param_1 + -1;
    puVar4 = puVar4 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


