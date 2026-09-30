/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RetrieveSpaceQueryResults
ENTRY_POINT: 07cad0b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a526ad1 == '\0') {
    FUN_04447ba8(PTR_DAT_09f511b8);
    DAT_0a526ad1 = '\x01';
  }
  lVar4 = *unaff_x25;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar4 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar4 + 0xb8) + 8) != 0) {
    return 0xfffff768;
  }
  uVar3 = 2;
  if ((unaff_x22 & 1) != 0) {
    uVar3 = 3;
  }
  if (unaff_x21 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x18);
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar2 + 1;
    }
    iVar1 = iVar1 >> 1;
    if ((unaff_x22 & 1) == 0) {
      iVar1 = iVar2;
    }
    in_stack_00000028 = FUN_0795714c();
    uVar5 = System_Type__GetRootElementType(&stack0x00000028,0);
    if ((unaff_x20 != 0) && (lVar4 = *(long *)(unaff_x20 + 0x18), lVar4 != 0)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar3 = FUN_07cac47c(unaff_w19,uVar5,iVar1,uVar3,unaff_x20 + 0x10,unaff_x20 + 0x14,lVar4,
                           *(undefined4 *)(lVar4 + 0x18));
      FUN_07957160(&stack0x00000028,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


