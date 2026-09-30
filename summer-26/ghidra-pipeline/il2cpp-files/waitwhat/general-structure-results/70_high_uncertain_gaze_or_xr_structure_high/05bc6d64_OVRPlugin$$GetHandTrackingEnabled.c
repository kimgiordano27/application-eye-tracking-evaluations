/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 05bc6d64
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled
               (long param_1,undefined8 param_2,undefined1 param_3 [16],undefined4 param_4,
               undefined4 param_5)

{
  undefined4 *puVar1;
  long lVar2;
  long *unaff_x19;
  undefined4 uVar3;
  undefined4 unaff_s8;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  puVar1 = *(undefined4 **)(param_1 + 0xb8);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar3 = FUN_069c5208(param_2,unaff_s8,0);
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_069e4d6c(uVar4,uVar5,uVar6,uVar3,unaff_s8,param_4,param_5);
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(ulong *)(lVar2 + 0x24) = (ulong)uStack000000000000000c << 0x20;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(ulong *)(lVar2 + 0x30) = (ulong)uStack0000000000000014;
  *(ulong *)(lVar2 + 0x28) = (ulong)uStack000000000000000c;
  return;
}


