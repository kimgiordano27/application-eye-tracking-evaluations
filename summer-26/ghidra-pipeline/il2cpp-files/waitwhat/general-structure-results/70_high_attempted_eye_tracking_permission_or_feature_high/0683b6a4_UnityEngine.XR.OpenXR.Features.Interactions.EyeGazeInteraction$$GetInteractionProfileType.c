/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 0683b6a4
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


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
               (undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  puVar4 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_TypeInfo;
  puVar3 = PTR_DAT_070f1038;
  puVar2 = PTR_DAT_070c2278;
  if ((DAT_07558c2b & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(PTR_DAT_070d3370);
    FUN_03188a78(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass40_0_TypeInfo);
    FUN_03188a78(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1038);
    FUN_03188a78(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo);
    FUN_03188a78(DG_Tweening_DOTweenModuleUI_<>c__DisplayClass8_0_TypeInfo);
    DAT_07558c2b = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  FUN_069ed548(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_06988344(uVar6,0);
  FUN_069f0bdc(&stack0x00000030,0);
  plVar5 = in_stack_00000038;
  uVar6 = in_stack_00000030;
  puVar3 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass40_0_TypeInfo;
  puVar2 = PTR_DAT_070c1958;
  in_stack_00000068 = in_stack_00000048;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000050;
  if (in_stack_00000038 == (long *)0x0) {
LAB_0683ba34:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if ((int)in_stack_00000038[3] < 1) {
    return;
  }
  uVar16 = 0;
  uVar8 = in_stack_00000038[3] & 0xffffffff;
  plVar1 = in_stack_00000038;
  while (plVar17 = plVar1 + 5, uVar16 < uVar8) {
    lVar10 = plVar1[4];
    uVar12 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar12 = FUN_0593e698(uVar12,0);
    uVar8 = FUN_05947b18(lVar10,uVar12,0);
    puVar4 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass8_0_TypeInfo;
    if ((uVar8 & 1) != 0) {
      uVar15 = (uint)uVar16;
      if ((int)uVar15 < 0) {
        return;
      }
      if (*(uint *)(plVar5 + 3) <= uVar15) break;
      lVar10 = 0;
      uVar16 = 0;
      goto LAB_0683b830;
    }
    uVar8 = (ulong)*(uint *)(plVar5 + 3);
    uVar16 = uVar16 + 1;
    plVar1 = plVar17;
    if ((long)(int)*(uint *)(plVar5 + 3) <= (long)uVar16) {
      return;
    }
  }
LAB_0683b89c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
  while( true ) {
    uVar16 = uVar16 + 1;
    lVar10 = lVar10 + 0x28;
    if (*(uint *)(plVar5 + 3) <= uVar15) break;
LAB_0683b830:
    lVar9 = *plVar17;
    if (lVar9 == 0) goto LAB_0683ba34;
    if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar16) {
      return;
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar16) break;
    uVar13 = *(undefined8 *)puVar4;
    uVar12 = *(undefined8 *)(lVar9 + lVar10 + 0x20);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar13 = FUN_0593e698(uVar13,0);
    uVar8 = FUN_05947b18(uVar12,uVar13,0);
    if ((uVar8 & 1) != 0) {
      uVar18 = (uint)uVar16;
      if ((int)uVar18 < 0) {
        return;
      }
      if (uVar15 < *(uint *)(plVar5 + 3)) {
        lVar9 = *plVar17;
        if (lVar9 == 0) goto LAB_0683ba34;
        if (uVar18 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = *(long *)(lVar9 + lVar10 + 0x28);
          if (lVar9 == 0) {
            return;
          }
          if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
            return;
          }
          uVar16 = 0;
          uVar8 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          lVar14 = 0x20;
          in_stack_00000058 = lVar9;
          goto LAB_0683b8f0;
        }
      }
      break;
    }
  }
  goto LAB_0683b89c;
LAB_0683b8f0:
  if (uVar8 <= uVar16) goto LAB_0683b89c;
  uVar12 = *(undefined8 *)(lVar9 + lVar14);
  uVar13 = *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo;
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar13 = FUN_0593e698(uVar13,0);
  uVar8 = FUN_05947b18(uVar12,uVar13,0);
  if ((uVar8 & 1) != 0) {
    uVar11 = (uint)uVar16;
    if ((int)uVar11 < 0) {
      return;
    }
    if ((uVar11 == 0) && (*(int *)(lVar9 + 0x18) == 1)) {
      in_stack_00000058 = 0;
    }
    else {
      iVar7 = (int)*(undefined8 *)(lVar9 + 0x18);
      if ((int)uVar11 < iVar7 + -1) {
        FUN_0595261c(lVar9,uVar11 + 1,lVar9,uVar16 & 0xffffffff,~uVar11 + iVar7,0);
      }
      FUN_03952678(&stack0x00000058,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_070d3370);
    }
    if (*(uint *)(plVar5 + 3) <= uVar15) goto LAB_0683b89c;
    lVar9 = *plVar17;
    if (lVar9 == 0) goto LAB_0683ba34;
    if (uVar18 < *(uint *)(lVar9 + 0x18)) {
      *(long *)(lVar9 + lVar10 + 0x28) = in_stack_00000058;
      in_stack_00000020 = in_stack_00000068;
      in_stack_00000018 = in_stack_00000060;
      in_stack_00000028 = in_stack_00000070;
      in_stack_00000008 = uVar6;
      in_stack_00000010 = plVar5;
      FUN_069f0e5c(&stack0x00000008,0);
      return;
    }
    goto LAB_0683b89c;
  }
  uVar16 = uVar16 + 1;
  lVar14 = lVar14 + 0x28;
  uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
  if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar16) {
    return;
  }
  goto LAB_0683b8f0;
}


