/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 05ffbe48
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__ReturnToLauncher
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar14;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 uStack00000000000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined8 uStack0000000000000154;
  undefined8 uStack0000000000000160;
  undefined4 uStack0000000000000168;
  undefined4 uStack000000000000016c;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  undefined4 uStack0000000000000178;
  undefined4 uStack000000000000017c;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 uStack0000000000000190;
  
  uStack0000000000000160 = param_2._0_8_;
  uStack0000000000000168 = param_2._8_4_;
  uStack000000000000016c = param_2._12_4_;
  uStack0000000000000178 = param_3._8_4_;
  uStack000000000000017c = param_3._12_4_;
  uStack0000000000000170 = param_3._0_4_;
  uStack0000000000000174 = param_3._4_4_;
  uStack00000000000000f0 = param_1;
  uStack0000000000000180 = param_4;
  uStack0000000000000190 = param_1;
  FUN_04d11770();
  uVar14 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar9 = FUN_06e5ba28(uVar14,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) == '\0') {
      return;
    }
    iVar1 = *unaff_x20;
    iVar7 = FUN_0445a2c8();
    if (iVar1 == iVar7) {
      return;
    }
    if ((unaff_x20[4] & 0xfffffffeU) != 2) {
      return;
    }
    FUN_05fffce0(&stack0x00000160);
    uStack00000000000000b4 = CONCAT44(uStack0000000000000178,uStack0000000000000174);
    uStack00000000000000b0 = uStack0000000000000170;
    uStack00000000000000a8 = uStack0000000000000168;
    uStack00000000000000ac = uStack000000000000016c;
    in_stack_000000a0 = uStack0000000000000160;
    *(ulong *)(unaff_x19 + 0x1b4) = CONCAT44(uStack000000000000016c,uStack0000000000000168);
    *(undefined8 *)(unaff_x19 + 0x1ac) = uStack0000000000000160;
    *(undefined8 *)(unaff_x19 + 0x1c0) = uStack00000000000000b4;
    *(ulong *)(unaff_x19 + 0x1b8) = CONCAT44(uStack0000000000000170,uStack000000000000016c);
    FUN_05ffc068();
    uVar14 = FUN_05fff2c0();
    *(undefined8 *)(unaff_x19 + 0x180) = uVar14;
    thunk_FUN_0329bf60(unaff_x19 + 0x180);
    FUN_05fff3a8(&stack0x00000160);
    uStack0000000000000154 = CONCAT44(uStack0000000000000178,uStack0000000000000174);
    uStack0000000000000148 = uStack0000000000000168;
    in_stack_00000140 = uStack0000000000000160;
    uStack000000000000014c = uStack000000000000016c;
    uStack0000000000000150 = uStack0000000000000170;
    uVar8 = FUN_0445a2c8();
    uStack0000000000000088 = uStack0000000000000148;
    in_stack_00000080 = in_stack_00000140;
    uStack0000000000000094 = uStack0000000000000154;
    uStack000000000000008c = uStack000000000000014c;
    uStack0000000000000090 = uStack0000000000000150;
    FUN_05f8600c(&stack0x00000100,uVar8,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
    uVar6 = in_stack_00000130;
    uStack0000000000000188 = in_stack_00000128;
    uVar5 = in_stack_00000120;
    uVar4 = in_stack_00000118;
    uVar3 = in_stack_00000110;
    uVar2 = in_stack_00000108;
    uVar14 = in_stack_00000100;
    if ((*(long *)(unaff_x19 + 0xd0) != 0) &&
       (plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar13 != (long *)0x0)) {
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_075d99e8) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05ffc020;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)PTR_DAT_075d99e8,0);
LAB_05ffc020:
      uStack0000000000000168 = (undefined4)uVar2;
      uStack000000000000016c = (undefined4)((ulong)uVar2 >> 0x20);
      uStack0000000000000160 = uVar14;
      uStack0000000000000178 = (undefined4)uVar4;
      uStack000000000000017c = (undefined4)((ulong)uVar4 >> 0x20);
      uStack0000000000000170 = (undefined4)uVar3;
      uStack0000000000000174 = (undefined4)((ulong)uVar3 >> 0x20);
      uStack0000000000000180 = uVar5;
      uStack0000000000000190 = uVar6;
      (*(code *)*puVar10)(plVar13,&stack0x00000160,puVar10[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


