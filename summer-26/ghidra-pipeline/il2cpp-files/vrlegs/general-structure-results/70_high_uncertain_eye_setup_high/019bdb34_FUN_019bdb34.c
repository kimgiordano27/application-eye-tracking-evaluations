/*
FUNCTION_NAME: FUN_019bdb34
ENTRY_POINT: 019bdb34
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_019bdb34(long *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(*(long *)param_1[2] + 0x20);
  if (plVar6 != (long *)0x0) {
    iVar1 = *(int *)param_1[1];
    iVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    iVar2 = *(int *)param_1[1];
    if (iVar1 == iVar5) {
      iVar2 = iVar2 + -1;
      *(int *)param_1[1] = iVar2;
    }
    *(int *)param_1[3] = iVar2;
    puVar4 = PTR_DAT_03d15248;
    while( true ) {
      if (iVar2 < 0) {
        if (*param_1 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01a28d1c();
      }
      plVar6 = *(long **)(*(long *)param_1[2] + 0x20);
      if (plVar6 == (long *)0x0) break;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x378))(plVar6,iVar2,*(undefined8 *)(*plVar6 + 0x380))
      ;
      if (plVar6 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
      }
      *(long **)param_1[4] = plVar6;
      lVar8 = *(long *)param_1[4];
      lVar7 = FUN_02d2f18c(0);
      if (lVar8 == lVar7) {
        lVar7 = *(long *)param_1[4];
      }
      else {
        lVar7 = *(long *)param_1[4];
        if (lVar7 == 0) break;
        *(undefined1 *)(lVar7 + 0x79) = *(undefined1 *)(*(long *)param_1[2] + 0x38);
      }
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
      iVar2 = *(int *)param_1[3] + -1;
      *(int *)param_1[3] = iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


