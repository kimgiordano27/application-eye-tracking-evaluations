/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 090984d0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsOrientationValid(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000048;
  
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    uVar6 = *(undefined8 *)(param_1 + 0x100);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    uVar1 = *(undefined4 *)(param_1 + 0xe4);
    *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(param_1 + 200);
    *(undefined4 *)(unaff_x19 + 0xe0) = uVar1;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 200));
    *(undefined8 *)(unaff_x19 + 0xf4) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xec) = uVar5;
    *(undefined8 *)(unaff_x19 + 0xe4) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x104) = uVar7;
    *(undefined8 *)(unaff_x19 + 0xfc) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x10c) = uVar3;
    if (in_stack_00000048 != 0) {
      uVar3 = *(undefined8 *)(in_stack_00000048 + 0x130);
      uVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac78bc0);
      FUN_06b7f748(uVar2,uVar3,*(undefined8 *)PTR_DAT_0ac78bb8);
      *(undefined8 *)(unaff_x19 + 0x130) = uVar2;
      thunk_FUN_049ee3d8(unaff_x19 + 0x130,uVar2);
      if (in_stack_00000048 != 0) {
        FUN_0717c458();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


