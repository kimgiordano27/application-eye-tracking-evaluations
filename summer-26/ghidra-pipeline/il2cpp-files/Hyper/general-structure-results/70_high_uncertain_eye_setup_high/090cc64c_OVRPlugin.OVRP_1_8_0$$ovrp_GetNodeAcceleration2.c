/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeAcceleration2
ENTRY_POINT: 090cc64c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_8_0__ovrp_GetNodeAcceleration2(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar5;
  
  FUN_04947ee4(PTR_DAT_0ac76fb8);
  *(undefined1 *)(unaff_x19 + 0x509) = 1;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar2 = *unaff_x20;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_090cc744:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac20648,
                       *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18));
  lVar3 = *unaff_x20;
  uVar5 = 0;
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = *unaff_x20;
    }
    lVar4 = **(long **)(lVar3 + 0xb8);
    if (lVar4 == 0) goto LAB_090cc744;
    if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
      return lVar2;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = *unaff_x20;
      lVar4 = **(long **)(lVar3 + 0xb8);
      if (lVar4 == 0) goto LAB_090cc744;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar5) break;
    uVar1 = *(uint *)(lVar4 + uVar5 * 4 + 0x20);
    if (lVar2 == 0) goto LAB_090cc744;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) break;
    lVar4 = lVar2 + uVar5;
    uVar5 = uVar5 + 1;
    *(byte *)(lVar4 + 0x20) = 0x10 < uVar1 | (byte)(0xf7bf >> (ulong)(uVar1 & 0x1f)) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


