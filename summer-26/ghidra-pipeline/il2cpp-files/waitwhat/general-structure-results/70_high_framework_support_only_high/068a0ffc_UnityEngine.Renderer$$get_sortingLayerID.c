/*
FUNCTION_NAME: UnityEngine.Renderer$$get_sortingLayerID
ENTRY_POINT: 068a0ffc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Renderer__get_sortingLayerID(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_03188a78();
  FUN_03188a78(UnityEngine_InputForUI_NavigationEvent_Direction_TypeInfo);
  FUN_03188a78(OVRManager_PassthroughCapabilities_TypeInfo);
  FUN_03188a78(NotificationManager_<DisplayNotification>d__18_TypeInfo);
  FUN_03188a78(
              System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt16_TypeInfo
              );
  FUN_03188a78(
              System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt32_TypeInfo
              );
  FUN_03188a78(PTR_DAT_070c1b68);
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_06892f34();
  lVar6 = *(long *)(unaff_x19 + 0xb8);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    lVar6 = *(long *)(unaff_x19 + 0xc0);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      FUN_068a15f0();
      *(byte *)(unaff_x19 + 0xa0) = *(byte *)(unaff_x19 + 0x88) ^ 1;
      puVar4 = UnityEngine_UIElements_NavigateFocusRing_ChangeDirection_TypeInfo;
      puVar3 = UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo;
      puVar2 = PTR_DAT_070c1b68;
      if (*(long *)(unaff_x19 + 0xe0) != 0) {
        FUN_042e54fc(&stack0x00000018,*(long *)(unaff_x19 + 0xe0),
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt32_TypeInfo
                    );
        while (uVar5 = FUN_054518b4(&stack0x00000018,*(undefined8 *)puVar4),
              lVar6 = in_stack_00000028, (uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar5 = FUN_069d8404(lVar6,0,0);
          if ((uVar5 & 1) == 0) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            FUN_069d32d4(lVar6,1,0);
          }
        }
        FUN_054518b0(&stack0x00000018,*(undefined8 *)puVar3);
        lVar6 = *(long *)(unaff_x19 + 0xe0);
        if (lVar6 != 0) {
          iVar1 = *(int *)(lVar6 + 0x18);
          *(undefined4 *)(lVar6 + 0x18) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


