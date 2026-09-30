/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 03145844
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar2 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      uVar4 = param_2[1];
      uVar3 = *param_2;
      lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar2 + 0x30) = param_2[2];
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
    }
    else {
      in_stack_00000030 = param_2[2];
      in_stack_00000028 = param_2[1];
      in_stack_00000020 = *param_2;
      FUN_031458cc(param_1,&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


