/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceSemanticLabels
ENTRY_POINT: 05bf455c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceSemanticLabels(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  float fVar6;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07112148);
    *(undefined1 *)(unaff_x21 + 0xddf) = 1;
  }
  puVar1 = PTR_DAT_07112148;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  uVar5 = 1L << (unaff_x19 & 0x3f);
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  _fStack0000000000000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  if ((*(ulong *)(unaff_x20 + 0x40) & uVar5) == 0) {
    return;
  }
  lVar2 = *(long *)PTR_DAT_07112148;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_05bf46e4:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar4 = (uint)unaff_x19;
  if (uVar4 < *(uint *)(lVar2 + 0x18)) {
    if (*(int *)(lVar2 + (long)(int)uVar4 * 4 + 0x20) == -1) {
      uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x28);
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (uVar5 ^ 0xffffffffffffffff);
      uStack0000000000000014 = (undefined4)*(undefined8 *)(unaff_x20 + 0x34);
      uStack0000000000000018 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x34) >> 0x20);
      uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0x2c);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
    }
    else {
      FUN_05bf453c();
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (uVar5 ^ 0xffffffffffffffff);
      FUN_05bde6bc();
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = uStack0000000000000000;
    uStack0000000000000054 = uStack0000000000000014;
    in_stack_00000058 = uStack0000000000000018;
    uStack000000000000004c = uStack000000000000000c;
    in_stack_00000050 = uStack0000000000000010;
    if (lVar2 == 0) goto LAB_05bf46e4;
    if (uVar4 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar4 * 0x1c;
      in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
      in_stack_00000038 = *(undefined4 *)(lVar2 + 0x38);
      fVar6 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar2 + 0x28);
      lVar3 = *(long *)(unaff_x20 + 0x18);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar2 + 0x20) * fVar6);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar6);
      if (lVar3 == 0) goto LAB_05bf46e4;
      if (uVar4 < *(uint *)(lVar3 + 0x18)) {
        FUN_05b5ed20(&stack0x00000040,&stack0x00000020,lVar3 + (long)(int)uVar4 * 0x1c + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


