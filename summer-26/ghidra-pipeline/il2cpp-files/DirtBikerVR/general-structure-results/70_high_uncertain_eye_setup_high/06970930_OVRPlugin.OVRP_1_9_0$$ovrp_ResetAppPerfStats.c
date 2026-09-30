/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_ResetAppPerfStats
ENTRY_POINT: 06970930
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_ResetAppPerfStats(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  int iVar6;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  while (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) <= (int)param_2) {
      FUN_0697110c();
      FUN_06971364();
      FUN_0697110c();
      FUN_06971364();
      FUN_0697110c();
      puVar1 = PTR_DAT_084b5da8;
      plVar5 = *(long **)(unaff_x20 + 0xe0);
      if (plVar5 != (long *)0x0) {
        iVar6 = 0;
        goto LAB_06970b08;
      }
      break;
    }
    lVar2 = FUN_04de82e0(param_1,param_2,*unaff_x24);
    uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*unaff_x25,uVar3,0);
    FUN_0697110c();
    FUN_06971364();
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x48) == 0)) break;
    iVar6 = *(int *)(*(long *)(lVar2 + 0x48) + 0x18);
    if (iVar6 == 2) {
      uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x26,uVar3,0);
      FUN_0697110c();
      lVar4 = FUN_0694d3e8(lVar2,0);
      if (lVar4 == 0) break;
      FUN_06971364();
      uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x27,uVar3,0);
      FUN_0697110c();
      lVar2 = FUN_0694d460(lVar2,0);
      if (lVar2 == 0) break;
LAB_06970a80:
      FUN_06971364();
    }
    else if (iVar6 == 1) {
      uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x28,uVar3,0);
      FUN_0697110c();
      if ((*(long *)(lVar2 + 0x48) != 0) &&
         (lVar2 = FUN_04de82e0(*(long *)(lVar2 + 0x48),0,*unaff_x29), lVar2 != 0))
      goto LAB_06970a80;
      break;
    }
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    param_2 = (ulong)in_stack_00000008._4_4_;
    if (*(long *)(unaff_x20 + 0xe8) == 0) break;
    param_1 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x50);
  }
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_06970b08:
  lVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if (lVar2 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar2 + 0x18) <= iVar6) {
    return;
  }
  plVar5 = *(long **)(unaff_x20 + 0xe0);
  if ((((plVar5 == (long *)0x0) ||
       (lVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)), lVar2 == 0)
       ) || (lVar2 = FUN_04de82e0(lVar2,iVar6,*(undefined8 *)puVar1), lVar2 == 0)) ||
     (plVar5 = (long *)thunk_FUN_03a9a6e8(lVar2,0), plVar5 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  FUN_0697110c();
  plVar5 = *(long **)(unaff_x20 + 0xe0);
  if ((plVar5 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)), lVar2 == 0))
  goto LAB_06970bbc;
  FUN_04de82e0(lVar2,iVar6,*(undefined8 *)puVar1);
  FUN_06971364();
  plVar5 = *(long **)(unaff_x20 + 0xe0);
  iVar6 = iVar6 + 1;
  if (plVar5 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


