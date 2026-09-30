/*
FUNCTION_NAME: FUN_019bd328
ENTRY_POINT: 019bd328
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_019bd328(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar7 = *(long **)(*(long *)param_1[2] + 0x98);
  if (plVar7 != (long *)0x0) {
    iVar1 = *(int *)param_1[1];
    iVar6 = (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    iVar2 = *(int *)param_1[1];
    puVar3 = PTR_DAT_03d15248;
    if (iVar1 == iVar6) {
      iVar2 = iVar2 + -1;
      *(int *)param_1[1] = iVar2;
      puVar3 = PTR_DAT_03d15248;
    }
    while( true ) {
      puVar4 = PTR_DAT_03d15248;
      PTR_DAT_03d15248 = puVar3;
      if (iVar2 < 0) {
        if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01a28d1c();
        }
        return;
      }
      plVar7 = *(long **)(*(long *)param_1[2] + 0x98);
      if (plVar7 == (long *)0x0) break;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x378))(plVar7,iVar2,*(undefined8 *)(*plVar7 + 0x380))
      ;
      if (plVar7 != (long *)0x0) {
        lVar9 = *(long *)puVar4;
        bVar5 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar5 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
      }
      *(long **)param_1[3] = plVar7;
      lVar9 = *(long *)param_1[3];
      if (lVar9 == 0) break;
      *(undefined1 *)(lVar9 + 0x30) = 0;
      lVar8 = FUN_02d2f18c();
      if (lVar9 != lVar8) {
        lVar9 = *(long *)param_1[3];
        if (lVar9 == 0) break;
        *(undefined1 *)(lVar9 + 0x79) = 0;
        bVar5 = FUN_02e7795c(*(undefined8 *)param_1[2],0);
        *(byte *)(lVar9 + 0x7a) = ~bVar5 & 1;
      }
      OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)param_1[3],0);
      iVar2 = *(int *)param_1[1] + -1;
      *(int *)param_1[1] = iVar2;
      puVar3 = PTR_DAT_03d15248;
      PTR_DAT_03d15248 = puVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


