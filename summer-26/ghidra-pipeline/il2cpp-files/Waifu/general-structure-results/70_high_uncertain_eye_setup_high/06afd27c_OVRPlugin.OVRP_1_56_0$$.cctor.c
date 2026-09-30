/*
FUNCTION_NAME: OVRPlugin.OVRP_1_56_0$$.cctor
ENTRY_POINT: 06afd27c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_56_0___cctor(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *unaff_x20;
  void *__ptr;
  long unaff_x21;
  long unaff_x23;
  int iVar7;
  uint uVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (unaff_x21 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28);
  }
  lVar3 = FUN_03398188(DAT_083c7848,iVar7 << 1);
  if (0 < iVar7) {
    if (unaff_x21 == 0) goto LAB_06afd450;
    FUN_0609cfe4();
    uVar8 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    while (uVar4 = FUN_0609d050(&stack0x00000030,DAT_083e9750), uVar2 = in_stack_00000048,
          uVar5 = in_stack_00000040, (uVar4 & 1) != 0) {
      if (*(int *)(*(long *)(unaff_x23 + 0x548) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_06afc048(uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      *(undefined8 *)(lVar3 + (long)(int)uVar8 * 8 + 0x20) = uVar5;
      uVar5 = FUN_06afc048(uVar2);
      uVar1 = uVar8 + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      uVar8 = uVar8 + 2;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    }
  }
  if (*(int *)(*(long *)(unaff_x23 + 0x548) + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06afd470();
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  free(unaff_x20);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        __ptr = *(void **)(lVar3 + 0x20 + uVar4 * 8);
        if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        free(__ptr);
        uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    return;
  }
LAB_06afd450:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


