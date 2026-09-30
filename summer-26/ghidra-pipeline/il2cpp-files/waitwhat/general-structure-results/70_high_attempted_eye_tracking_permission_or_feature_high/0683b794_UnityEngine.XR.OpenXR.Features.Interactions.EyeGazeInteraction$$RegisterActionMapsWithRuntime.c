/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 0683b794
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint in_w8;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  puVar3 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass40_0_TypeInfo;
  puVar2 = PTR_DAT_070c1958;
  if ((int)in_w8 < 1) {
    return;
  }
  uVar14 = 0;
  plVar1 = unaff_x23;
  while (plVar15 = plVar1 + 5, uVar14 < in_w8) {
    lVar8 = plVar1[4];
    uVar10 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_0593e698(uVar10,0);
    uVar5 = FUN_05947b18(lVar8,uVar10,0);
    puVar4 = DG_Tweening_DOTweenModuleUI_<>c__DisplayClass8_0_TypeInfo;
    if ((uVar5 & 1) != 0) {
      uVar13 = (uint)uVar14;
      if ((int)uVar13 < 0) {
        return;
      }
      if (*(uint *)(unaff_x23 + 3) <= uVar13) break;
      lVar8 = 0;
      uVar14 = 0;
      goto LAB_0683b830;
    }
    in_w8 = *(uint *)(unaff_x23 + 3);
    uVar14 = uVar14 + 1;
    plVar1 = plVar15;
    if ((long)(int)in_w8 <= (long)uVar14) {
      return;
    }
  }
  goto LAB_0683b89c;
LAB_0683b8f0:
  if (uVar5 <= uVar14) goto LAB_0683b89c;
  uVar10 = *(undefined8 *)(lVar7 + lVar12);
  uVar11 = *(undefined8 *)DG_Tweening_DOTweenModuleUI_<>c__DisplayClass7_0_TypeInfo;
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar11 = FUN_0593e698(uVar11,0);
  uVar5 = FUN_05947b18(uVar10,uVar11,0);
  if ((uVar5 & 1) != 0) {
    uVar9 = (uint)uVar14;
    if ((int)uVar9 < 0) {
      return;
    }
    if ((uVar9 == 0) && (*(int *)(lVar7 + 0x18) == 1)) {
      in_stack_00000058 = 0;
    }
    else {
      iVar6 = (int)*(undefined8 *)(lVar7 + 0x18);
      if ((int)uVar9 < iVar6 + -1) {
        FUN_0595261c(lVar7,uVar9 + 1,lVar7,uVar14 & 0xffffffff,~uVar9 + iVar6,0);
      }
      FUN_03952678(&stack0x00000058,*(int *)(lVar7 + 0x18) + -1,*(undefined8 *)PTR_DAT_070d3370);
    }
    if (uVar13 < *(uint *)(unaff_x23 + 3)) {
      lVar7 = *plVar15;
      if (lVar7 == 0) {
LAB_0683ba34:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (uVar16 < *(uint *)(lVar7 + 0x18)) {
        *(long *)(lVar7 + lVar8 + 0x28) = in_stack_00000058;
        FUN_069f0e5c(&stack0x00000008,0);
        return;
      }
    }
    goto LAB_0683b89c;
  }
  uVar14 = uVar14 + 1;
  lVar12 = lVar12 + 0x28;
  uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
  if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar14) {
    return;
  }
  goto LAB_0683b8f0;
  while( true ) {
    uVar14 = uVar14 + 1;
    lVar8 = lVar8 + 0x28;
    if (*(uint *)(unaff_x23 + 3) <= uVar13) break;
LAB_0683b830:
    lVar7 = *plVar15;
    if (lVar7 == 0) goto LAB_0683ba34;
    if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar14) {
      return;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar14) break;
    uVar11 = *(undefined8 *)puVar4;
    uVar10 = *(undefined8 *)(lVar7 + lVar8 + 0x20);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar11 = FUN_0593e698(uVar11,0);
    uVar5 = FUN_05947b18(uVar10,uVar11,0);
    if ((uVar5 & 1) != 0) {
      uVar16 = (uint)uVar14;
      if ((int)uVar16 < 0) {
        return;
      }
      if (uVar13 < *(uint *)(unaff_x23 + 3)) {
        lVar7 = *plVar15;
        if (lVar7 == 0) goto LAB_0683ba34;
        if (uVar16 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = *(long *)(lVar7 + lVar8 + 0x28);
          if (lVar7 == 0) {
            return;
          }
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            return;
          }
          uVar14 = 0;
          uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          lVar12 = 0x20;
          in_stack_00000058 = lVar7;
          goto LAB_0683b8f0;
        }
      }
      break;
    }
  }
LAB_0683b89c:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


