/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 06011dd0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar3;
  long unaff_x23;
  undefined8 *puVar4;
  long unaff_x24;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(unaff_x24 + 0x730);
  puVar4 = *(undefined8 **)(unaff_x23 + 0x40);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x3b8);
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f73b8);
    FUN_031f20f4(PTR_DAT_0759c040);
    FUN_031f20f4(PTR_DAT_075f5680);
    FUN_031f20f4(PTR_DAT_075de730);
    *(undefined1 *)(unaff_x20 + 0x9ae) = 1;
  }
  FUN_06010dcc(param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar1 = thunk_FUN_0322f148(*unaff_x21);
  FUN_05f98ca8(uVar1,uVar2,1,0);
  *(undefined8 *)(param_2 + 0x90) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(param_2 + 0x90),uVar1);
  uVar1 = FUN_031f21dc(*puVar5,*(undefined4 *)(param_2 + 0x50));
  uVar2 = thunk_FUN_0322f148(*puVar4);
  FUN_0487d68c(uVar2,uVar1,*puVar3);
  *(undefined8 *)(param_2 + 0x80) = uVar2;
  thunk_FUN_0329bf60((undefined8 *)(param_2 + 0x80),uVar2);
  return;
}


