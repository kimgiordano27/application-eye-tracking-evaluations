/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 0683b460
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(void)

{
  undefined *puVar1;
  bool in_CY;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *puVar9;
  uint unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (!in_CY) {
    lVar4 = *unaff_x26;
    if (lVar4 == 0) {
LAB_0683b684:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (unaff_w28 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = *(long *)(lVar4 + unaff_x27 + 0x28);
      if (lVar4 == 0) {
        lVar2 = FUN_03188b1c(*(undefined8 *)
                              DG_Tweening_DOTweenModuleUI_<>c__DisplayClass41_0_TypeInfo,1);
      }
      else {
        uVar3 = (uint)*(ulong *)(lVar4 + 0x18);
        if (0 < (int)uVar3) {
          uVar6 = 0;
          uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          puVar9 = (undefined8 *)(lVar4 + 0x20);
          do {
            if (uVar5 <= uVar6) goto LAB_0683b40c;
            uVar7 = *puVar9;
            uVar8 = *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo;
            if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar8 = FUN_0593e698(uVar8,0);
            uVar5 = FUN_05947b18(uVar7,uVar8,0);
            if ((uVar5 & 1) != 0) {
              return;
            }
            uVar3 = *(uint *)(lVar4 + 0x18);
            uVar5 = (ulong)uVar3;
            uVar6 = uVar6 + 1;
            puVar9 = puVar9 + 5;
          } while ((long)uVar6 < (long)(int)uVar3);
        }
        lVar2 = FUN_03188b1c(*(undefined8 *)
                              DG_Tweening_DOTweenModuleUI_<>c__DisplayClass41_0_TypeInfo,uVar3 + 1);
        FUN_0595261c(lVar4,0,lVar2,1,*(undefined4 *)(lVar4 + 0x18),0);
      }
      uVar7 = *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo;
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar7 = FUN_0593e698(uVar7,0);
      uVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_070d4d38);
      FUN_069f0b40(uVar8,unaff_x24,
                   *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_TypeInfo,0);
      if (lVar2 == 0) goto LAB_0683b684;
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = uVar7;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x40) = 0;
        puVar1 = PTR_DAT_070f1038;
        *(undefined8 *)(lVar2 + 0x30) = uVar8;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)puVar1);
        FUN_069ed548(uVar7,unaff_x24,
                     *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06987fa4(uVar7,0);
        if (unaff_w25 < *(uint *)(unaff_x23 + 0x18)) {
          lVar4 = *unaff_x26;
          if (lVar4 == 0) goto LAB_0683b684;
          if (unaff_w28 < *(uint *)(lVar4 + 0x18)) {
            *(long *)(lVar4 + unaff_x27 + 0x28) = lVar2;
            in_stack_00000010 = in_stack_00000008;
            FUN_069f0e5c(&stack0x00000010,0);
            return;
          }
        }
      }
    }
  }
LAB_0683b40c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


