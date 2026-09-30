/*
FUNCTION_NAME: UnityEngine.Bounds$$ClosestPoint_Injected
ENTRY_POINT: 0357fcb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Bounds__ClosestPoint_Injected(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long in_x9;
  long *unaff_x19;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack000000000000000c;
  
  lVar2 = 0x1e4;
  if (in_w8 != 0) {
    lVar2 = in_x9;
  }
  uStack000000000000000c = *(undefined4 *)((long)unaff_x19 + lVar2);
  uVar3 = NEON_rev64(unaff_x19[0x4a],4);
  *(undefined8 *)((long)unaff_x19 + 0x23c) = uVar3;
  *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  lVar2 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar4 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x1598);
  uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x159c);
  *(undefined1 *)((long)unaff_x19 + 0x3f5) = 1;
  FUN_03580470();
  *(undefined4 *)((long)unaff_x19 + 0x244) = 0;
  (**(code **)(*unaff_x19 + 0x838))(uVar4,uVar5);
  *(undefined1 *)(unaff_x19 + 0x7d) = 0;
  return;
}


