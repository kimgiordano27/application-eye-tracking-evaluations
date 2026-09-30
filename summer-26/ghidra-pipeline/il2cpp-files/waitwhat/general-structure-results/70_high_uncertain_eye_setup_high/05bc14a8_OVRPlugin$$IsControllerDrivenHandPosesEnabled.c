/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 05bc14a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__IsControllerDrivenHandPosesEnabled(void)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  
  FUN_03188a78(PTR_DAT_07113e80);
  *(undefined1 *)(unaff_x21 + 0xb38) = 1;
  lVar2 = *unaff_x23;
  in_stack_00000028 = 0;
  _uStack0000000000000020 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x23;
  }
  puVar3 = *(undefined4 **)(lVar2 + 0xb8);
  uStack0000000000000004 = *puVar3;
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  *unaff_x19 = unaff_s10;
  unaff_x19[1] = unaff_s9;
  unaff_x19[2] = unaff_s8;
  if (unaff_x20 == 0) {
LAB_05bc1634:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
    uVar5 = 0;
    uVar4 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar2 = *(long *)(unaff_x20 + 0x20 + uVar5 * 8);
      uVar1 = FUN_05aeb514(lVar2,0);
      if ((uVar1 & 1) == 0) {
        if (lVar2 == 0) goto LAB_05bc1634;
        uVar7 = unaff_s9;
        uVar8 = unaff_s8;
        uVar6 = FUN_06a58e2c(lVar2,0);
      }
      else {
        if (lVar2 == 0) goto LAB_05bc1634;
        FUN_06a58f24(&stack0x00000008,lVar2,0);
        uVar6 = uStack0000000000000008;
        uVar7 = uStack000000000000000c;
        uVar8 = in_stack_00000010;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_05bcae24(&stack0x00000020,uVar1 & 1);
      uVar4 = FUN_05bc5120(uStack0000000000000004,uVar10,uVar11,&stack0x00000020);
      if ((uVar4 & 1) != 0) {
        uVar9 = unaff_s8;
        uVar10 = unaff_s9;
        uVar11 = unaff_s10;
        if ((uVar1 & 1) == 0) {
          uVar9 = uVar8;
          uVar10 = uVar7;
          uVar11 = uVar6;
        }
        *unaff_x19 = uVar11;
        unaff_x19[1] = uVar10;
        unaff_x19[2] = uVar9;
        uStack0000000000000004 = uStack0000000000000020;
        uVar10 = uStack0000000000000024;
        uVar11 = in_stack_00000028;
      }
      uVar4 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  return uStack0000000000000004;
}


