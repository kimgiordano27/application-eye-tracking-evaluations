/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 01d8e260
PROGRAM: LethalApe-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 *puVar7;
  int unaff_w25;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  puVar7 = *(undefined8 **)(unaff_x24 + 0x720);
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x23;
  thunk_FUN_00a502ec();
  lVar4 = thunk_FUN_00a05c70(*puVar7);
  puVar3 = PTR_DAT_02bedfd0;
  puVar2 = PTR_DAT_02bdda10;
  if (lVar4 != 0) {
    FUN_010c1fd4(lVar4,8,*(undefined8 *)PTR_DAT_02bdda10);
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    FUN_01f49290(&stack0x00000070,0,0,unaff_w20 - unaff_w25,unaff_w19 - unaff_w25,0);
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *(long *)puVar3;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x20) = in_stack_00000070;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000078;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))(lVar4);
      }
      *(long *)(unaff_x21 + 0xf0) = lVar4;
      thunk_FUN_00a502ec((long *)(unaff_x21 + 0xf0),lVar4);
      lVar4 = thunk_FUN_00a05c70(*puVar7);
      if (lVar4 != 0) {
        FUN_010c1fd4(lVar4,8,*(undefined8 *)puVar2);
        *(long *)(unaff_x21 + 0xe8) = lVar4;
        thunk_FUN_00a502ec((long *)(unaff_x21 + 0xe8),lVar4);
        FUN_01d8d964();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


