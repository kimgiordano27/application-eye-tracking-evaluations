/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 0602fdc0
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


bool OVRPlugin_TextureRectMatrixf___cctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  code *pcVar7;
  int *piVar8;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  if (unaff_w19 == 0) {
    if (*(int *)(*(long *)PTR_DAT_075d64f0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06e684bc(&stack0x00000040,0);
    *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000054;
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    uVar10 = *(undefined8 *)(unaff_x23 + 0x14);
    uVar9 = *(undefined8 *)(unaff_x23 + 0xc);
    unaff_x20[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *unaff_x20 = in_stack_00000040;
    *(undefined8 *)((long)unaff_x20 + 0x14) = uVar10;
    *(undefined8 *)((long)unaff_x20 + 0xc) = uVar9;
  }
  else {
    lVar3 = FUN_0602c3c8();
    if (lVar3 == 0) {
      in_stack_00000060 = *unaff_x21;
      uStack0000000000000074 = (undefined4)*(undefined8 *)((long)unaff_x21 + 0x14);
      in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0x14) >> 0x20);
      uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      in_stack_00000068 = (undefined4)unaff_x21[1];
      uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    }
    else {
      plVar4 = (long *)FUN_0602c3c8();
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar9 = *unaff_x21;
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      uVar2 = uStack0000000000000050;
      uStack0000000000000048 = (undefined4)unaff_x21[1];
      uVar1 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
      in_stack_00000040 = uVar9;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uStack000000000000000c = uStack000000000000004c;
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_075f3788) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0602fec0;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar4,*(long *)PTR_DAT_075f3788,1);
LAB_0602fec0:
      in_stack_00000088 = CONCAT44(uStack000000000000000c,uVar1);
      pcVar7 = (code *)*puVar5;
      *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000014;
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uVar2,uStack000000000000000c);
      in_stack_00000080 = uVar9;
      (*pcVar7)(&stack0x00000020,plVar4,&stack0x00000080,puVar5[1]);
      in_stack_00000068 = uStack0000000000000028;
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = (undefined4)uStack0000000000000034;
      in_stack_00000078 = SUB84(uStack0000000000000034,4);
      uStack000000000000006c = uStack000000000000002c;
      uStack0000000000000070 = uStack0000000000000030;
    }
    *(ulong *)((long)unaff_x20 + 0x14) = CONCAT44(in_stack_00000078,uStack0000000000000074);
    *(ulong *)((long)unaff_x20 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    unaff_x20[1] = CONCAT44(uStack000000000000006c,in_stack_00000068);
    *unaff_x20 = in_stack_00000060;
  }
  return unaff_w19 != 0;
}


