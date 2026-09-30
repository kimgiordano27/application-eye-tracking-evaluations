/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 05be49b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_03188a78(PTR_DAT_07112a48);
  FUN_03188a78(PTR_DAT_070f13a0);
  *(undefined1 *)(unaff_x20 + 0xd00) = 1;
  uVar1 = (**(code **)(*unaff_x22 + 0x358))();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069e53e4(&stack0x00000040,0);
    uVar8 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    uVar9 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    in_stack_00000020._4_8_ = in_stack_00000040;
    in_stack_00000038 = uStack0000000000000054;
LAB_05be4af4:
    unaff_x19[1] = uVar8;
    *unaff_x19 = in_stack_00000020._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
    *(undefined8 *)((long)unaff_x19 + 0xc) = uVar9;
    return uVar1 & 1;
  }
  lVar2 = FUN_0506e670();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x78) != 0)) {
    plVar7 = *(long **)(*(long *)(lVar2 + 0x78) + 0x18);
    lVar2 = FUN_0506e670();
    if ((lVar2 != 0) && (plVar7 != (long *)0x0)) {
      lVar4 = *plVar7;
      uVar8 = *(undefined8 *)(lVar2 + 0x30);
      uStack0000000000000014 = *(undefined8 *)(lVar2 + 0x44);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar2 + 0x38);
      uStack000000000000000c = (undefined4)*(undefined8 *)(lVar2 + 0x3c);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x3c) >> 0x20);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07112a48) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_05be4ac4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_07112a48,1);
LAB_05be4ac4:
      uStack0000000000000048 = uStack0000000000000008;
      uStack0000000000000054 = uStack0000000000000014;
      uStack000000000000004c = uStack000000000000000c;
      uStack0000000000000050 = uStack0000000000000010;
      in_stack_00000040 = uVar8;
      (*(code *)*puVar3)(&stack0x00000020 + 4,plVar7,&stack0x00000040,puVar3[1]);
      uVar8 = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      uVar9 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      goto LAB_05be4af4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


