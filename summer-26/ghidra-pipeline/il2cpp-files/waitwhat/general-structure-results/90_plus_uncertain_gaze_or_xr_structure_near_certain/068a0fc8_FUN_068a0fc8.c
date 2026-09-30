/*
FUNCTION_NAME: FUN_068a0fc8
ENTRY_POINT: 068a0fc8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_068a0fc8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_07559098 & 1) == 0) {
    FUN_03188a78(UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_NavigateFocusRing_ChangeDirection_TypeInfo);
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
    DAT_07559098 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_06892f34(param_1,0);
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    lVar6 = *(long *)(param_1 + 0xc0);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0595236c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      FUN_068a15f0(param_1);
      *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0x88) ^ 1;
      puVar4 = UnityEngine_UIElements_NavigateFocusRing_ChangeDirection_TypeInfo;
      puVar3 = UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo;
      puVar2 = PTR_DAT_070c1b68;
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN_042e54fc(&local_48,*(long *)(param_1 + 0xe0),
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_NegateCheckedInstruction_NegateCheckedInt32_TypeInfo
                    );
        while (uVar5 = FUN_054518b4(&local_48,*(undefined8 *)puVar4), lVar6 = local_38,
              (uVar5 & 1) != 0) {
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
        FUN_054518b0(&local_48,*(undefined8 *)puVar3);
        lVar6 = *(long *)(param_1 + 0xe0);
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


