/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.ActionBasedController$$SetInputActionProperty
ENTRY_POINT: 02472218
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;keyword_support;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;eye_or_gaze_keyword_boost_only;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_possible_biometrics_hits_4
*/


void UnityEngine_XR_Interaction_Toolkit_ActionBasedController__SetInputActionProperty(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar10;
  long unaff_x22;
  long *unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined1 in_stack_00000088;
  long in_stack_00000318;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xba0));
  thunk_FUN_00d48444(Method_DialogueSkip_SkipReleased__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_get_Item__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
  *(undefined1 *)(unaff_x19 + 0x553) = 1;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  in_stack_00000088 = 0;
  memset(&stack0x000001d8,0,0x13c);
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar8 = FUN_023a0ea8(0);
  FUN_023ae3ac(&stack0x00000088,lVar8,*(undefined8 *)(unaff_x20 + 0xd8),0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&stack0x00000090,lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_026a8aa4(lVar8,0);
  lVar9 = *(long *)(unaff_x20 + 0xe0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(lVar9 + 0x13) != '\0') {
    FUN_0245d464(lVar9,lVar8,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b6dc8(&stack0x00000090,lVar8,0);
    FUN_026a8aa4(lVar8,0);
  }
  puVar6 = Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0241d824(&stack0x00000098);
  puVar4 = Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_get_Item__;
  memcpy(&stack0x000001d8,&stack0x00000098,0x13c);
  uVar3 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14);
  FUN_01342368(&stack0x00000078,*(undefined8 *)(unaff_x20 + 0xe8),2,*(undefined8 *)puVar4);
  FUN_01342368(&stack0x00000068,*(undefined8 *)(unaff_x20 + 0xf0),2,
               *(undefined8 *)Method_DialogueSkip_SkipReleased__);
  uVar1 = *unaff_x21;
  uVar2 = unaff_x21[1];
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b69d0(&stack0x00000090,uVar1,uVar2,&stack0x000001d8,unaff_x20 + 0xf8,uVar3,0);
  FUN_01342a94(&stack0x00000078,*(undefined8 *)System_Data_XDRSchema_NameType_TypeInfo);
  FUN_01342a94(&stack0x00000068,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<EyesControl>__);
  puVar5 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  lVar9 = *(long *)(unaff_x20 + 0xe0);
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x100);
    uVar3 = **(undefined4 **)(*(long *)puVar6 + 0xb8);
    uVar7 = FUN_02457364(lVar9,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (uVar7 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar7 * 0x28;
      in_stack_00000060 = *(undefined8 *)(lVar10 + 0x40);
      in_stack_00000048 = *(undefined8 *)(lVar10 + 0x28);
      in_stack_00000040 = *(undefined8 *)(lVar10 + 0x20);
      in_stack_00000058 = *(undefined8 *)(lVar10 + 0x38);
      in_stack_00000050 = *(undefined8 *)(lVar10 + 0x30);
      FUN_026acb10(lVar8,uVar3,&stack0x00000040,0);
      FUN_023ae3b0(&stack0x00000088,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026b6dc8(&stack0x00000090,lVar8,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_023a1000(lVar8,0);
      if (*(long *)(unaff_x22 + 0x28) == in_stack_00000318) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


