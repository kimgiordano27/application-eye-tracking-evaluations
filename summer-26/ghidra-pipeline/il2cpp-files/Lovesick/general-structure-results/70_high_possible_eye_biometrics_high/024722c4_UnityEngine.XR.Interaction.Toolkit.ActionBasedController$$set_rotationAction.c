/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.ActionBasedController$$set_rotationAction
ENTRY_POINT: 024722c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;keyword_support;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;eye_or_gaze_keyword_boost_only;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_possible_biometrics_hits_4
*/


void UnityEngine_XR_Interaction_Toolkit_ActionBasedController__set_rotationAction(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000038;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000318;
  
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_026a8aa4();
  lVar7 = *(long *)(unaff_x20 + 0xe0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(lVar7 + 0x13) != '\0') {
    FUN_0245d464(lVar7);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b6dc8(&stack0x00000090);
    FUN_026a8aa4();
  }
  puVar5 = Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0241d824(&stack0x00000098);
  puVar4 = Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_get_Item__;
  memcpy(&stack0x000001d8,&stack0x00000098,0x13c);
  uVar3 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
  FUN_01342368(&stack0x00000078,*(undefined8 *)(unaff_x20 + 0xe8),2,*(undefined8 *)puVar4);
  FUN_01342368(&stack0x00000068,*(undefined8 *)(unaff_x20 + 0xf0),2,
               *(undefined8 *)Method_DialogueSkip_SkipReleased__);
  uVar1 = *unaff_x21;
  uVar2 = unaff_x21[1];
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b69d0(&stack0x00000090,uVar1,uVar2,&stack0x000001d8,unaff_x20 + 0xf8,uVar3,0);
  FUN_01342a94(&stack0x00000078,*(undefined8 *)System_Data_XDRSchema_NameType_TypeInfo);
  FUN_01342a94(&stack0x00000068,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<EyesControl>__);
  puVar5 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  lVar7 = *(long *)(unaff_x20 + 0xe0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *(long *)(lVar7 + 0x100);
  uVar6 = FUN_02457364(lVar7,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (uVar6 < *(uint *)(lVar8 + 0x18)) {
    FUN_026acb10();
    FUN_023ae3b0(&stack0x00000088,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b6dc8(&stack0x00000090);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_023a1000();
    if (*(long *)(in_stack_00000038 + 0x28) == in_stack_00000318) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


