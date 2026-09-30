/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox2D
ENTRY_POINT: 07cad264
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox2D(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar5;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  thunk_FUN_044a54b4();
  if (*(int *)(*(long *)(*unaff_x25 + 0xb8) + 8) != 0) {
    return 0xfffff768;
  }
  if (unaff_x22 != 0) {
    iVar2 = *(int *)(unaff_x22 + 0x18);
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar2 + 1;
    }
    iVar1 = iVar1 >> 1;
    if ((unaff_w21 & 1) == 0) {
      iVar1 = iVar2;
    }
    in_stack_00000028 = FUN_0795714c();
    uVar4 = System_Type__GetRootElementType(&stack0x00000028,0);
    if ((unaff_x20 != 0) && (lVar5 = *(long *)(unaff_x20 + 0x18), lVar5 != 0)) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar3 = FUN_07cac47c(unaff_w19,uVar4,iVar1,unaff_w21 & 1,unaff_x20 + 0x10,unaff_x20 + 0x14,
                           lVar5,*(undefined4 *)(lVar5 + 0x18));
      FUN_07957160(&stack0x00000028,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


