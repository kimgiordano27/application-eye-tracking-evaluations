/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilSupported
ENTRY_POINT: 033c3d58
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_gpuUtilSupported(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x25;
  long lVar5;
  uint unaff_w26;
  long unaff_x28;
  
  do {
    uVar1 = (int)unaff_x25 + 1;
    lVar5 = unaff_x25;
LAB_033c3d64:
    do {
      unaff_x25 = lVar5 + 1;
      if (unaff_x28 == unaff_x25) {
        if ((unaff_w26 & 1) != 0) {
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar3 = thunk_FUN_01de27b8();
          uVar4 = thunk_FUN_01dd295c(StringLiteral_6016);
          FUN_033063d0(uVar3,uVar4,0);
          uVar4 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar3,uVar4);
        }
        if (uVar1 < *(uint *)(unaff_x20 + 0x18)) {
          return *(undefined8 *)(unaff_x20 + (long)(int)uVar1 * 8 + 0x20);
        }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (((uint)*(ulong *)(unaff_x20 + 0x18) <= uVar1) ||
         ((*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) <= lVar5 + 2U)) goto thunk_FUN_01d7db78;
      uVar3 = *(undefined8 *)(unaff_x20 + (long)(int)uVar1 * 8 + 0x20);
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar2 = FUN_033c0e28(uVar3);
      lVar5 = unaff_x25;
      if (iVar2 == 0) {
        unaff_w26 = 1;
        goto LAB_033c3d64;
      }
    } while (iVar2 != 2);
    unaff_w26 = 0;
  } while( true );
}


