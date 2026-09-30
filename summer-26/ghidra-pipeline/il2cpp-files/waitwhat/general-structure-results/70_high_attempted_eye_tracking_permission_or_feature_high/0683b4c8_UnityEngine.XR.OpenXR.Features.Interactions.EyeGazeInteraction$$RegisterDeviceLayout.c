/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterDeviceLayout
ENTRY_POINT: 0683b4c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterDeviceLayout(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while( true ) {
    uVar3 = FUN_0593e698(unaff_x22,0);
    uVar4 = FUN_05947b18(unaff_x20,uVar3,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    unaff_x19 = unaff_x19 + 1;
    unaff_x24 = unaff_x24 + 5;
    if ((long)(int)uVar1 <= (long)unaff_x19) break;
    if (uVar1 <= unaff_x19) goto LAB_0683b40c;
    unaff_x20 = *unaff_x24;
    unaff_x22 = *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo;
    if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
  }
  lVar5 = FUN_03188b1c(*(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass41_0_TypeInfo,
                       uVar1 + 1);
  FUN_0595261c();
  uVar3 = *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo;
  if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_0593e698(uVar3,0);
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070d4d38);
  FUN_069f0b40(uVar6,in_stack_00000000,
               *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass5_0_TypeInfo,0);
  if (lVar5 == 0) {
LAB_0683b684:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar3;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    puVar2 = PTR_DAT_070f1038;
    *(undefined8 *)(lVar5 + 0x30) = uVar6;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_069ed548(uVar3,in_stack_00000000,
                 *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_TypeInfo,0);
    if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06987fa4(uVar3,0);
    if (unaff_w25 < *(uint *)(unaff_x23 + 0x18)) {
      lVar7 = *unaff_x26;
      if (lVar7 == 0) goto LAB_0683b684;
      if (unaff_w28 < *(uint *)(lVar7 + 0x18)) {
        *(long *)(lVar7 + unaff_x27 + 0x28) = lVar5;
        in_stack_00000010 = in_stack_00000008;
        FUN_069f0e5c(&stack0x00000010,0);
        return;
      }
    }
  }
LAB_0683b40c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


