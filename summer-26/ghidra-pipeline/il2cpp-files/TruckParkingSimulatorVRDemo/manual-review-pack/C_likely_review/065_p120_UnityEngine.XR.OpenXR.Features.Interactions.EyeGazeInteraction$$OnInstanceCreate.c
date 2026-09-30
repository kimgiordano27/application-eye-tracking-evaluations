/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 025fc8e0
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate
               (undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  FUN_02742340(param_2,*param_1);
  FUN_02743128((float)unaff_w20);
  FUN_02743128((float)unaff_w19);
  FUN_02743128((float)(unaff_w22 + 1));
  FUN_02743128(*(undefined4 *)(unaff_x21 + 0x1a8));
  FUN_02743128(*(undefined4 *)(unaff_x21 + 0x1b0));
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x23;
  puVar3 = PTR_DAT_02ae4c50;
  lVar4 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ae4c50);
  puVar2 = PTR_DAT_02ae4c48;
  FUN_01caa6c0(lVar4,8,*(undefined8 *)PTR_DAT_02ae4c48);
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  FUN_027a8414(&stack0x00000060,0,0,unaff_w20 + -1,unaff_w19 + -1,0);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)PTR_DAT_02ae4c40;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_00000060;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000068;
      }
      else {
        FUN_01caae58(lVar4,in_stack_00000060,in_stack_00000068,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x21 + 0xf0) = lVar4;
      uVar5 = thunk_FUN_01268e40(*(undefined8 *)puVar3);
      FUN_01caa6c0(uVar5,8,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x21 + 0xe8) = uVar5;
      FUN_025fc18c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


