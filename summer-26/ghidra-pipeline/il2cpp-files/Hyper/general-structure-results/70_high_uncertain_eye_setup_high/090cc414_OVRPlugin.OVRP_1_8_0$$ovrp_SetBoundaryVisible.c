/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_SetBoundaryVisible
ENTRY_POINT: 090cc414
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar1 = *unaff_x20;
  uVar4 = 0;
  while( true ) {
    iVar5 = -1;
    uVar7 = uVar4 & 0xffffffff;
    while( true ) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar1 = *unaff_x20;
      }
      lVar2 = *(long *)(lVar1 + 0xb8);
      lVar3 = *(long *)(lVar2 + 8);
      if (lVar3 == 0) goto LAB_090cc4d8;
      uVar6 = (uint)uVar7;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_090cc4d4;
      if (*(int *)(lVar3 + (long)(int)uVar6 * 4 + 0x20) == -1) break;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar1 = *unaff_x20;
        lVar2 = *(long *)(lVar1 + 0xb8);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) goto LAB_090cc4d8;
      if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_090cc4d4;
      iVar5 = iVar5 + 1;
      uVar7 = (ulong)*(uint *)(lVar2 + (long)(int)uVar6 * 4 + 0x20);
    }
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar4) {
LAB_090cc4d4:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar2 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(int *)(unaff_x19 + lVar2 + 0x20) = iVar5;
    if (uVar4 == 0x1a) {
      return;
    }
  }
LAB_090cc4d8:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


