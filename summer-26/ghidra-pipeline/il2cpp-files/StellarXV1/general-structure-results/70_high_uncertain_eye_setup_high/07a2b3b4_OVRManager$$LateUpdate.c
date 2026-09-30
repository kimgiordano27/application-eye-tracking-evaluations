/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 07a2b3b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__LateUpdate(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long unaff_x21;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  puVar1 = PTR_DAT_092edde0;
  if ((*(byte *)(unaff_x21 + 0x255) & 1) == 0) {
    FUN_04077588(PTR_DAT_092edde0);
    *(undefined1 *)(unaff_x21 + 0x255) = 1;
  }
  lVar3 = *(long *)puVar1;
  in_stack_00000028 = 0;
  _uStack0000000000000020 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar1;
  }
  puVar4 = *(undefined4 **)(lVar3 + 0xb8);
  uStack0000000000000004 = *puVar4;
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  *param_2 = unaff_s10;
  param_2[1] = unaff_s9;
  param_2[2] = unaff_s8;
  if (param_1 == 0) {
LAB_07a2b558:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar6 = 0;
    uVar5 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar3 = *(long *)(param_1 + 0x20 + uVar6 * 8);
      uVar2 = FUN_079792c0(lVar3,0);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) goto LAB_07a2b558;
        uVar8 = unaff_s9;
        uVar9 = unaff_s8;
        uVar7 = FUN_08a47d30(lVar3,0);
      }
      else {
        if (lVar3 == 0) goto LAB_07a2b558;
        FUN_08a47e28(&stack0x00000008,lVar3,0);
        uVar7 = uStack0000000000000008;
        uVar8 = uStack000000000000000c;
        uVar9 = in_stack_00000010;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_07a260e4(&stack0x00000020,uVar2 & 1);
      uVar5 = FUN_07a2d570(uStack0000000000000004,uVar11,uVar12,&stack0x00000020);
      if ((uVar5 & 1) != 0) {
        uVar10 = unaff_s8;
        uVar11 = unaff_s9;
        uVar12 = unaff_s10;
        if ((uVar2 & 1) == 0) {
          uVar10 = uVar9;
          uVar11 = uVar8;
          uVar12 = uVar7;
        }
        *param_2 = uVar12;
        param_2[1] = uVar11;
        param_2[2] = uVar10;
        uStack0000000000000004 = uStack0000000000000020;
        uVar11 = uStack0000000000000024;
        uVar12 = in_stack_00000028;
      }
      uVar5 = (ulong)*(uint *)(param_1 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  return uStack0000000000000004;
}


