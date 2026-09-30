/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_InitializeMixedReality
ENTRY_POINT: 07a66b7c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  int iVar4;
  long unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  FUN_04077588(PTR_DAT_092f0d40);
  *(undefined1 *)(unaff_x23 + 0x5e3) = 1;
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    if ((unaff_w20 & 1) == 0) {
      if (unaff_x22 == 0) goto LAB_07a66c78;
      iVar4 = *(int *)(unaff_x22 + 0x18);
    }
    else {
      if (unaff_x22 == 0) goto LAB_07a66c78;
      iVar4 = *(int *)(unaff_x22 + 0x18);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
    }
    in_stack_00000028 = FUN_0758dc78();
    uVar3 = FUN_0758dba8(&stack0x00000028,0);
    if ((unaff_x19 == 0) || (lVar2 = *(long *)(unaff_x19 + 0x18), lVar2 == 0)) {
LAB_07a66c78:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_07a65db0(unaff_w21,uVar3,iVar4,unaff_w20 & 1,unaff_x19 + 0x10,unaff_x19 + 0x14,lVar2
                         ,*(undefined4 *)(lVar2 + 0x18));
    FUN_0758dc8c(&stack0x00000028,0);
  }
  else {
    uVar1 = 0xfffff768;
  }
  return uVar1;
}


