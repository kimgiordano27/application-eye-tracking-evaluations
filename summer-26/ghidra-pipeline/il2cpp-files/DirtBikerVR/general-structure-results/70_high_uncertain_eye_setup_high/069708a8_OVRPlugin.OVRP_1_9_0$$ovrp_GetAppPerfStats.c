/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetAppPerfStats
ENTRY_POINT: 069708a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetAppPerfStats(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  int iVar12;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_084b6410;
  if (param_1 != 0) {
    iVar12 = 0;
    do {
      puVar7 = PTR_DAT_084b7290;
      puVar6 = PTR_DAT_084b7280;
      puVar5 = PTR_DAT_084b7250;
      puVar4 = PTR_DAT_084b7220;
      puVar3 = PTR_DAT_084b63c8;
      puVar1 = PTR_DAT_084b5d60;
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x18) <= iVar12) {
        in_stack_00000008._4_4_ = 0;
        goto LAB_0697092c;
      }
      FUN_04de82e0(lVar8,iVar12,*(undefined8 *)puVar2);
      FUN_06971364();
      param_1 = *(long *)(unaff_x20 + 0xe8);
      iVar12 = iVar12 + 1;
    } while (param_1 != 0);
  }
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_0697092c:
  lVar8 = *(long *)(param_1 + 0x50);
  if (lVar8 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar8 + 0x18) <= in_stack_00000008._4_4_) {
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    puVar2 = PTR_DAT_084b5da8;
    plVar11 = *(long **)(unaff_x20 + 0xe0);
    if (plVar11 != (long *)0x0) {
      iVar12 = 0;
      goto LAB_06970b08;
    }
    goto LAB_06970bbc;
  }
  lVar8 = FUN_04de82e0(lVar8,in_stack_00000008._4_4_,*(undefined8 *)puVar3);
  uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
  FUN_065c0764(*(undefined8 *)puVar4,uVar9,0);
  FUN_0697110c();
  FUN_06971364();
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) goto LAB_06970bbc;
  iVar12 = *(int *)(*(long *)(lVar8 + 0x48) + 0x18);
  if (iVar12 == 2) {
    uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar5,uVar9,0);
    FUN_0697110c();
    lVar10 = FUN_0694d3e8(lVar8,0);
    if (lVar10 == 0) goto LAB_06970bbc;
    FUN_06971364();
    uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar6,uVar9,0);
    FUN_0697110c();
    lVar8 = FUN_0694d460(lVar8,0);
    if (lVar8 == 0) goto LAB_06970bbc;
LAB_06970a80:
    FUN_06971364();
  }
  else if (iVar12 == 1) {
    uVar9 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar7,uVar9,0);
    FUN_0697110c();
    if ((*(long *)(lVar8 + 0x48) != 0) &&
       (lVar8 = FUN_04de82e0(*(long *)(lVar8 + 0x48),0,*(undefined8 *)puVar1), lVar8 != 0))
    goto LAB_06970a80;
    goto LAB_06970bbc;
  }
  param_1 = *(long *)(unaff_x20 + 0xe8);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
  if (param_1 == 0) goto LAB_06970bbc;
  goto LAB_0697092c;
LAB_06970b08:
  lVar8 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
  if (lVar8 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar8 + 0x18) <= iVar12) {
    return;
  }
  plVar11 = *(long **)(unaff_x20 + 0xe0);
  if ((((plVar11 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
       lVar8 == 0)) || (lVar8 = FUN_04de82e0(lVar8,iVar12,*(undefined8 *)puVar2), lVar8 == 0)) ||
     (plVar11 = (long *)thunk_FUN_03a9a6e8(lVar8,0), plVar11 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  FUN_0697110c();
  plVar11 = *(long **)(unaff_x20 + 0xe0);
  if ((plVar11 == (long *)0x0) ||
     (lVar8 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)), lVar8 == 0
     )) goto LAB_06970bbc;
  FUN_04de82e0(lVar8,iVar12,*(undefined8 *)puVar2);
  FUN_06971364();
  plVar11 = *(long **)(unaff_x20 + 0xe0);
  iVar12 = iVar12 + 1;
  if (plVar11 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


