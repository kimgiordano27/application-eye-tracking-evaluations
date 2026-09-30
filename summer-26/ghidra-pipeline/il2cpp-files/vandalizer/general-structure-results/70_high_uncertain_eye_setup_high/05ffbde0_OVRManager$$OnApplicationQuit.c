/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 05ffbde0
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


void OVRManager__OnApplicationQuit(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar15;
  long unaff_x23;
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
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 uStack000000000000014c;
  undefined4 in_stack_00000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack000000000000016c;
  undefined4 in_stack_00000170;
  undefined4 uStack0000000000000174;
  undefined4 in_stack_00000178;
  undefined4 uStack000000000000017c;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  
  FUN_031f20f4(PTR_DAT_0759b2a8);
  FUN_031f20f4(PTR_DAT_075f6f20);
  FUN_031f20f4(PTR_DAT_075f6f08);
  *(undefined1 *)(unaff_x23 + 0x8d7) = 1;
  in_stack_00000140 = 0;
  in_stack_00000148 = 0;
  uStack000000000000014c = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  uStack0000000000000154 = 0;
  in_stack_00000130 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000d8 = *(undefined8 *)(unaff_x20 + 6);
  in_stack_000000d0 = *(undefined8 *)(unaff_x20 + 4);
  in_stack_000000e8 = *(undefined8 *)(unaff_x20 + 10);
  in_stack_000000e0 = *(undefined8 *)(unaff_x20 + 8);
  in_stack_000000c8 = *(undefined8 *)(unaff_x20 + 2);
  in_stack_000000c0 = *(undefined8 *)unaff_x20;
  in_stack_000000f0 = *(undefined8 *)(unaff_x20 + 0xc);
  in_stack_00000168 = (undefined4)in_stack_000000c8;
  uStack000000000000016c = (undefined4)((ulong)in_stack_000000c8 >> 0x20);
  in_stack_00000178 = (undefined4)in_stack_000000d8;
  uStack000000000000017c = (undefined4)((ulong)in_stack_000000d8 >> 0x20);
  in_stack_00000170 = (undefined4)in_stack_000000d0;
  uStack0000000000000174 = (undefined4)((ulong)in_stack_000000d0 >> 0x20);
  in_stack_00000160 = in_stack_000000c0;
  in_stack_00000180 = in_stack_000000e0;
  in_stack_00000188 = in_stack_000000e8;
  in_stack_00000190 = in_stack_000000f0;
  FUN_04d11770();
  uVar15 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar10 = FUN_06e5ba28(uVar15,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) == '\0') {
      return;
    }
    iVar1 = *unaff_x20;
    iVar8 = FUN_0445a2c8();
    if (iVar1 == iVar8) {
      return;
    }
    if ((unaff_x20[4] & 0xfffffffeU) != 2) {
      return;
    }
    FUN_05fffce0(&stack0x00000160);
    uStack00000000000000b4 = CONCAT44(in_stack_00000178,uStack0000000000000174);
    uStack00000000000000b0 = in_stack_00000170;
    uStack00000000000000a8 = in_stack_00000168;
    uStack00000000000000ac = uStack000000000000016c;
    in_stack_000000a0 = in_stack_00000160;
    *(ulong *)(unaff_x19 + 0x1b4) = CONCAT44(uStack000000000000016c,in_stack_00000168);
    *(undefined8 *)(unaff_x19 + 0x1ac) = in_stack_00000160;
    *(undefined8 *)(unaff_x19 + 0x1c0) = uStack00000000000000b4;
    *(ulong *)(unaff_x19 + 0x1b8) = CONCAT44(in_stack_00000170,uStack000000000000016c);
    FUN_05ffc068();
    uVar15 = FUN_05fff2c0();
    *(undefined8 *)(unaff_x19 + 0x180) = uVar15;
    thunk_FUN_0329bf60(unaff_x19 + 0x180);
    FUN_05fff3a8(&stack0x00000160);
    in_stack_00000148 = in_stack_00000168;
    in_stack_00000140 = in_stack_00000160;
    uStack0000000000000154 = uStack0000000000000174;
    in_stack_00000158 = in_stack_00000178;
    uStack000000000000014c = uStack000000000000016c;
    in_stack_00000150 = in_stack_00000170;
    uVar9 = FUN_0445a2c8();
    uStack0000000000000094 = CONCAT44(in_stack_00000158,uStack0000000000000154);
    uStack0000000000000088 = in_stack_00000148;
    in_stack_00000080 = in_stack_00000140;
    uStack000000000000008c = uStack000000000000014c;
    uStack0000000000000090 = in_stack_00000150;
    FUN_05f8600c(&stack0x00000100,uVar9,4,&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x108),0);
    uVar7 = in_stack_00000130;
    uVar6 = in_stack_00000128;
    uVar5 = in_stack_00000120;
    uVar4 = in_stack_00000118;
    uVar3 = in_stack_00000110;
    uVar2 = in_stack_00000108;
    uVar15 = in_stack_00000100;
    if ((*(long *)(unaff_x19 + 0xd0) != 0) &&
       (plVar14 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar14 != (long *)0x0)) {
      lVar12 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_075d99e8) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05ffc020;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)FUN_0322c1e8(plVar14,*(long *)PTR_DAT_075d99e8,0);
LAB_05ffc020:
      in_stack_00000168 = (undefined4)uVar2;
      uStack000000000000016c = (undefined4)((ulong)uVar2 >> 0x20);
      in_stack_00000160 = uVar15;
      in_stack_00000178 = (undefined4)uVar4;
      uStack000000000000017c = (undefined4)((ulong)uVar4 >> 0x20);
      in_stack_00000170 = (undefined4)uVar3;
      uStack0000000000000174 = (undefined4)((ulong)uVar3 >> 0x20);
      in_stack_00000188 = uVar6;
      in_stack_00000180 = uVar5;
      in_stack_00000190 = uVar7;
      (*(code *)*puVar11)(plVar14,&stack0x00000160,puVar11[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


