/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 04f8c17c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x708));
  FUN_02b3c81c(PTR_DAT_06313588);
  *(undefined1 *)(unaff_x19 + 0xd77) = 1;
  lVar1 = FUN_02b3c908(*unaff_x21,0x1a);
  lVar2 = *unaff_x20;
  uVar5 = 0;
  while( true ) {
    iVar6 = -1;
    uVar8 = uVar5 & 0xffffffff;
    while( true ) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *unaff_x20;
      }
      lVar3 = *(long *)(lVar2 + 0xb8);
      lVar4 = *(long *)(lVar3 + 8);
      if (lVar4 == 0) goto LAB_04f8c26c;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_04f8c268;
      if (*(int *)(lVar4 + (long)(int)uVar7 * 4 + 0x20) == -1) break;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *unaff_x20;
        lVar3 = *(long *)(lVar2 + 0xb8);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) goto LAB_04f8c26c;
      if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_04f8c268;
      iVar6 = iVar6 + 1;
      uVar8 = (ulong)*(uint *)(lVar3 + (long)(int)uVar7 * 4 + 0x20);
    }
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) {
LAB_04f8c268:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    *(int *)(lVar1 + lVar3 + 0x20) = iVar6;
    if (uVar5 == 0x1a) {
      return lVar1;
    }
  }
LAB_04f8c26c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


