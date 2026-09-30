/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyState
ENTRY_POINT: 033f774c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f7928) */
/* WARNING: Removing unreachable block (ram,0x033f7830) */
/* WARNING: Removing unreachable block (ram,0x033f7930) */

bool OVRPlugin_OVRP_1_78_0__ovrp_GetBodyState(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long unaff_x19;
  long lVar4;
  int unaff_w21;
  int unaff_w23;
  int iVar5;
  undefined8 in_stack_00000038;
  
  thunk_FUN_01da0934();
  if (unaff_w23 == 0) {
    if (unaff_w21 == 0) {
      bVar2 = false;
      iVar5 = 0xf;
      goto LAB_033f77f0;
    }
    uVar3 = FUN_033f7e34();
    uVar3 = uVar3 & 1;
  }
  else {
    uVar3 = 0;
  }
  iVar5 = *(int *)(unaff_x19 + 0x10);
  thunk_FUN_01da0934();
  if (0 < iVar5) {
    iVar5 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    uVar3 = 1;
    *(int *)(unaff_x19 + 0x10) = iVar5 + -1;
  }
  lVar4 = *(long *)(unaff_x19 + 0x28);
  thunk_FUN_01da0934();
  if ((lVar4 != 0) && (iVar5 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar5 == 0)) {
    lVar4 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_01da0934();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_033f7f00(lVar4);
  }
  bVar2 = uVar3 != 0;
  iVar5 = 0xc;
LAB_033f77f0:
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_033f597c(&stack0x00000020);
  if ((iVar5 != 0xc) && (iVar5 != 0)) {
    bVar2 = false;
  }
  return bVar2;
}


