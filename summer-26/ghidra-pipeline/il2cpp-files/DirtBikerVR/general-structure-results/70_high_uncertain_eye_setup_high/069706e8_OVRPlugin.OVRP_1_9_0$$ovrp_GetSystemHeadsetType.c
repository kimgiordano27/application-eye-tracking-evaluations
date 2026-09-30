/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetSystemHeadsetType
ENTRY_POINT: 069706e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetSystemHeadsetType(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long in_x9;
  int iVar13;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  if (in_x9 != param_1) {
    param_2 = 0;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
                    /* try { // try from 06970700 to 06a70727 has its CatchHandler @ 06970844 */
  uVar8 = FUN_07c9e200(param_2,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  FUN_0697110c();
  FUN_0697110c();
  if (param_2 != 0) {
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_0697110c();
    if (*(long *)(param_2 + 0xe8) != 0) {
      FUN_06971364();
      FUN_0697110c();
      if ((*(long *)(param_2 + 0xe8) != 0) && (*(long *)(*(long *)(param_2 + 0xe8) + 0x40) != 0)) {
        FUN_06971364();
        FUN_0697110c();
        if (*(long *)(param_2 + 0xe8) != 0) {
          FUN_06971364();
          FUN_0697110c();
          if (*(long *)(param_2 + 0xe8) != 0) {
            FUN_06971364();
            FUN_0697110c();
            puVar2 = PTR_DAT_084b6410;
            lVar12 = *(long *)(param_2 + 0xe8);
            if (lVar12 != 0) {
              iVar13 = 0;
              do {
                puVar7 = PTR_DAT_084b7290;
                puVar6 = PTR_DAT_084b7280;
                puVar5 = PTR_DAT_084b7250;
                puVar4 = PTR_DAT_084b7220;
                puVar3 = PTR_DAT_084b63c8;
                puVar1 = PTR_DAT_084b5d60;
                lVar9 = *(long *)(lVar12 + 0x38);
                if (lVar9 == 0) break;
                if (*(int *)(lVar9 + 0x18) <= iVar13) {
                  in_stack_00000008._4_4_ = 0;
                  goto LAB_0697092c;
                }
                FUN_04de82e0(lVar9,iVar13,*(undefined8 *)puVar2);
                FUN_06971364();
                lVar12 = *(long *)(param_2 + 0xe8);
                iVar13 = iVar13 + 1;
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
  }
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_0697092c:
  lVar12 = *(long *)(lVar12 + 0x50);
  if (lVar12 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar12 + 0x18) <= in_stack_00000008._4_4_) {
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    FUN_06971364();
    FUN_0697110c();
    puVar2 = PTR_DAT_084b5da8;
    plVar11 = *(long **)(param_2 + 0xe0);
    if (plVar11 != (long *)0x0) {
      iVar13 = 0;
      goto LAB_06970b08;
    }
    goto LAB_06970bbc;
  }
  lVar12 = FUN_04de82e0(lVar12,in_stack_00000008._4_4_,*(undefined8 *)puVar3);
  uVar10 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
  FUN_065c0764(*(undefined8 *)puVar4,uVar10,0);
  FUN_0697110c();
  FUN_06971364();
  if ((lVar12 == 0) || (*(long *)(lVar12 + 0x48) == 0)) goto LAB_06970bbc;
  iVar13 = *(int *)(*(long *)(lVar12 + 0x48) + 0x18);
  if (iVar13 == 2) {
    uVar10 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar5,uVar10,0);
    FUN_0697110c();
    lVar9 = FUN_0694d3e8(lVar12,0);
    if (lVar9 == 0) goto LAB_06970bbc;
    FUN_06971364();
    uVar10 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar6,uVar10,0);
    FUN_0697110c();
    lVar12 = FUN_0694d460(lVar12,0);
    if (lVar12 == 0) goto LAB_06970bbc;
LAB_06970a80:
    FUN_06971364();
  }
  else if (iVar13 == 1) {
    uVar10 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*(undefined8 *)puVar7,uVar10,0);
    FUN_0697110c();
    if ((*(long *)(lVar12 + 0x48) != 0) &&
       (lVar12 = FUN_04de82e0(*(long *)(lVar12 + 0x48),0,*(undefined8 *)puVar1), lVar12 != 0))
    goto LAB_06970a80;
    goto LAB_06970bbc;
  }
  lVar12 = *(long *)(param_2 + 0xe8);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
  if (lVar12 == 0) goto LAB_06970bbc;
  goto LAB_0697092c;
LAB_06970b08:
  lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
  if (lVar12 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar12 + 0x18) <= iVar13) {
    return;
  }
  plVar11 = *(long **)(param_2 + 0xe0);
  if ((((plVar11 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
       lVar12 == 0)) || (lVar12 = FUN_04de82e0(lVar12,iVar13,*(undefined8 *)puVar2), lVar12 == 0))
     || (plVar11 = (long *)thunk_FUN_03a9a6e8(lVar12,0), plVar11 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  FUN_0697110c();
  plVar11 = *(long **)(param_2 + 0xe0);
  if ((plVar11 == (long *)0x0) ||
     (lVar12 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
     lVar12 == 0)) goto LAB_06970bbc;
  FUN_04de82e0(lVar12,iVar13,*(undefined8 *)puVar2);
  FUN_06971364();
  plVar11 = *(long **)(param_2 + 0xe0);
  iVar13 = iVar13 + 1;
  if (plVar11 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


