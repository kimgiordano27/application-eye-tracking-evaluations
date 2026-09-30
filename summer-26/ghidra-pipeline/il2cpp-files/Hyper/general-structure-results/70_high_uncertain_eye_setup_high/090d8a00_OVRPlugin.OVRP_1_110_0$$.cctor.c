/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$.cctor
ENTRY_POINT: 090d8a00
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_110_0___cctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 uStack0000000000000008;
  
  fVar3 = *(float *)(unaff_x19 + 0x28);
  uStack0000000000000008 = 0;
  if (fVar3 <= 0.0) goto LAB_090d8a9c;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_090d8b94;
  uVar1 = FUN_0a127d2c(*(long *)(unaff_x19 + 0x10),0);
  if (((uVar1 & 1) == 0) && (DAT_01df4b78 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_0a18665c(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_090d8b94;
                    /* catch() { ... } // from try @ 090d8964 with catch @ 090d8a5c */
                    /* catch() { ... } // from try @ 090d8960 with catch @ 090d8a60 */
      FUN_0a127b48(*(long *)(unaff_x19 + 0x10),0);
    }
  }
                    /* catch() { ... } // from try @ 090d8694 with catch @ 090d8a64 */
                    /* catch() { ... } // from try @ 090d8684 with catch @ 090d8a68 */
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_090d8b94;
                    /* catch() { ... } // from try @ 090d895c with catch @ 090d8a6c */
                    /* catch() { ... } // from try @ 090d87e0 with catch @ 090d8a70 */
  uVar1 = FUN_0a127d2c(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_090d8a9c:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 090d87f8 with catch @ 090d8a7c */
                    /* catch() { ... } // from try @ 090d86b0 with catch @ 090d8a80 */
    fVar4 = (float)FUN_0a18665c(0);
                    /* catch() { ... } // from try @ 090d8814 with catch @ 090d8a84 */
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_090d8a9c;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_0a127d2c(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_0a137afc(*(undefined8 *)PTR_DAT_0ac79988,0);
        return;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uStack0000000000000008 = FUN_08d599a0(0);
      uVar2 = FUN_08d5a834(&stack0x00000008,0);
      uVar2 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac79980,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0a4a0);
      }
      FUN_0a1374b0(uVar2,0);
      FUN_090d8964();
    }
    return;
  }
LAB_090d8b94:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


