/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetNodePoseState
ENTRY_POINT: 07a669dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_12_0__ovrp_GetNodePoseState(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  int iVar4;
  long unaff_x23;
  long *unaff_x25;
  undefined8 uStack0000000000000028;
  
  *(undefined1 *)(unaff_x23 + 0x5c3) = 1;
  uStack0000000000000028 = 0;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (DAT_098955e3 == '\0') {
    FUN_04077588(PTR_DAT_092f0d40);
    DAT_098955e3 = '\x01';
  }
  lVar2 = *unaff_x25;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *unaff_x25;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    uVar1 = 2;
    if ((unaff_x22 & 1) != 0) {
      uVar1 = 3;
    }
    if ((unaff_x22 & 1) == 0) {
      if (unaff_x21 == 0) goto LAB_07a66b0c;
      iVar4 = *(int *)(unaff_x21 + 0x18);
    }
    else {
      if (unaff_x21 == 0) goto LAB_07a66b0c;
      iVar4 = *(int *)(unaff_x21 + 0x18);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
    }
    uStack0000000000000028 = FUN_0758dc78();
    uVar3 = FUN_0758dba8(&stack0x00000028,0);
    if ((unaff_x19 == 0) || (lVar2 = *(long *)(unaff_x19 + 0x18), lVar2 == 0)) {
LAB_07a66b0c:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_07a65db0(unaff_w20,uVar3,iVar4,uVar1,unaff_x19 + 0x10,unaff_x19 + 0x14,lVar2,
                         *(undefined4 *)(lVar2 + 0x18));
    FUN_0758dc8c(&stack0x00000028,0);
  }
  else {
    uVar1 = 0xfffff768;
  }
  return uVar1;
}


