/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 02904598
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 in_stack_00000018;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_02904678:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      in_stack_00000018 = param_3;
      thunk_FUN_018617ec(**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000018);
      lVar3 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        FUN_0185daa4(lVar3);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_02904678;
      uVar2 = thunk_FUN_02c28294();
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


