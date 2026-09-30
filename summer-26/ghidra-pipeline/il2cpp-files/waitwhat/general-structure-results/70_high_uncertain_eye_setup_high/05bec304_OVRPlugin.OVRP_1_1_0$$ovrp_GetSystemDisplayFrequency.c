/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemDisplayFrequency
ENTRY_POINT: 05bec304
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetSystemDisplayFrequency(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  puVar2 = PTR_DAT_07112148;
  puVar1 = PTR_DAT_070c2428;
  if ((DAT_0754ed71 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112148);
    FUN_03188a78(PTR_DAT_070c2428);
    DAT_0754ed71 = 1;
  }
  lVar3 = FUN_03188b1c(*(undefined8 *)puVar1,0x18);
  lVar4 = *(long *)puVar2;
  uVar7 = 0;
  while( true ) {
    iVar8 = -1;
    uVar10 = uVar7 & 0xffffffff;
    while( true ) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = *(long *)puVar2;
      }
      lVar5 = *(long *)(lVar4 + 0xb8);
      lVar6 = *(long *)(lVar5 + 8);
      if (lVar6 == 0) goto LAB_05bec418;
      uVar9 = (uint)uVar10;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_05bec414;
      if (*(int *)(lVar6 + (long)(int)uVar9 * 4 + 0x20) == -1) break;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar4 = *(long *)puVar2;
        lVar5 = *(long *)(lVar4 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) goto LAB_05bec418;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_05bec414;
      iVar8 = iVar8 + 1;
      uVar10 = (ulong)*(uint *)(lVar5 + (long)(int)uVar9 * 4 + 0x20);
    }
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_05bec414:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar5 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    *(int *)(lVar3 + lVar5 + 0x20) = iVar8;
    if (uVar7 == 0x18) {
      return lVar3;
    }
  }
LAB_05bec418:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


