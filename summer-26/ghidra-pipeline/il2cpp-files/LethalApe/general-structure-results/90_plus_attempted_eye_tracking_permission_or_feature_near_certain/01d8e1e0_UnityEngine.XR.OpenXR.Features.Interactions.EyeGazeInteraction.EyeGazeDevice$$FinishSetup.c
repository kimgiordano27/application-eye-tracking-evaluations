/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 01d8e1e0
PROGRAM: LethalApe-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x27;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  lVar5 = thunk_FUN_00a05c70(*unaff_x24);
  if (lVar5 != 0) {
    FUN_01edc0f8(lVar5,param_1,0);
    FUN_01edc698(lVar5,**(undefined4 **)(*unaff_x27 + 0xb8));
    FUN_01edd51c((float)unaff_w20,lVar5,*(undefined4 *)(*(long *)(*unaff_x27 + 0xb8) + 0x68),0);
    FUN_01edd51c((float)unaff_w19,lVar5,*(undefined4 *)(*(long *)(*unaff_x27 + 0xb8) + 0x6c),0);
    puVar4 = PTR_DAT_02c0a720;
    *(long *)(unaff_x21 + 0x20) = lVar5;
    thunk_FUN_00a502ec((long *)(unaff_x21 + 0x20),lVar5);
    lVar5 = thunk_FUN_00a05c70(*(undefined8 *)puVar4);
    puVar3 = PTR_DAT_02bedfd0;
    puVar2 = PTR_DAT_02bdda10;
    if (lVar5 != 0) {
      FUN_010c1fd4(lVar5,8,*(undefined8 *)PTR_DAT_02bdda10);
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_01f49290(&stack0x00000070,0,0,unaff_w20,unaff_w19,0);
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar7 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000070;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000078;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))(lVar5);
        }
        *(long *)(unaff_x21 + 0xf0) = lVar5;
        thunk_FUN_00a502ec((long *)(unaff_x21 + 0xf0),lVar5);
        lVar5 = thunk_FUN_00a05c70(*(undefined8 *)puVar4);
        if (lVar5 != 0) {
          FUN_010c1fd4(lVar5,8,*(undefined8 *)puVar2);
          *(long *)(unaff_x21 + 0xe8) = lVar5;
          thunk_FUN_00a502ec((long *)(unaff_x21 + 0xe8),lVar5);
          FUN_01d8d964();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


