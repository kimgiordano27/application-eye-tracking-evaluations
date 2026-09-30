/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_PositionValid
ENTRY_POINT: 0316528c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_BodyJointLocation__get_PositionValid(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if ((DAT_03ff206a & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d80700);
    DAT_03ff206a = 1;
  }
  puVar2 = PTR_DAT_03d80700;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  thunk_FUN_01b4f09c(&stack0x00000020,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927648(0);
  uStack000000000000003c = uStack0000000000000010;
  uStack0000000000000034 = uStack0000000000000008;
  uStack000000000000002c = (undefined4)in_stack_00000000;
  in_stack_00000030 = (undefined4)((ulong)in_stack_00000000 >> 0x20);
  puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar3[4] = uStack0000000000000014;
  puVar3[1] = CONCAT44(uStack000000000000002c,in_stack_00000028);
  *puVar3 = in_stack_00000020;
  puVar3[3] = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  puVar3[2] = CONCAT44(uStack0000000000000008,in_stack_00000030);
  thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),0);
  return;
}


