/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 06afd340
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_SetEyeFovPremultipliedAlphaMode(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  undefined8 unaff_x21;
  long unaff_x23;
  uint unaff_w25;
  long unaff_x26;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    uVar3 = FUN_06afc048(unaff_x21);
    uVar1 = unaff_w25 + 1;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    unaff_w25 = unaff_w25 + 2;
    *(undefined8 *)(unaff_x19 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
    uVar2 = FUN_0609d050(&stack0x00000030,*(undefined8 *)(unaff_x26 + 0x750));
    unaff_x21 = in_stack_00000048;
    uVar3 = in_stack_00000040;
    if ((uVar2 & 1) == 0) break;
    if (*(int *)(*(long *)(unaff_x23 + 0x548) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar3 = FUN_06afc048(uVar3);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)unaff_w25 * 8 + 0x20) = uVar3;
  }
  if (*(int *)(*(long *)(unaff_x23 + 0x548) + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06afd470();
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar2 = 0;
      uVar4 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar2 * 8);
        if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        free(__ptr);
        uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


