/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$.ctor
ENTRY_POINT: 0634071c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_BuildingBlock___ctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar13;
  int unaff_w23;
  ulong uVar14;
  long unaff_x27;
  long unaff_x28;
  ulong uVar15;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  
  do {
    iVar4 = FUN_04a02654();
    if (iVar4 == 0) {
      if ((unaff_x22 == 0) || (lVar5 = FUN_04ab0b48(), lVar5 == 0)) goto LAB_06340b50;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      in_stack_00000018 = 0;
      FUN_05fc0dd4(&stack0x00000018,lVar5,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(unaff_x27 + 0x8f8) + 0x20) + 0xc0) + 0xe0));
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000060 = in_stack_00000028;
      while (uVar8 = FUN_05fc0e40(&stack0x00000050,*(undefined8 *)(unaff_x28 + 0x6f0)),
            (uVar8 & 1) != 0) {
        iVar4 = FUN_04a02654();
        if ((iVar4 == 1) || (iVar4 = FUN_04a02654(), iVar4 == 2)) {
          FUN_04a02698();
        }
      }
    }
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w23 < *(int *)(unaff_x21 + 0x24));
  if ((unaff_x20 & 1) == 0) {
    return;
  }
  lVar6 = FUN_03398a84(DAT_083c2980);
  lVar5 = DAT_083ec8c8;
  uVar7 = FUN_03886b80(**(undefined8 **)(*(long *)(DAT_083ec8c8 + 0x20) + 0xc0));
  FUN_044fe7cc(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x18));
  if (*(long *)(unaff_x21 + 0x80) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    FUN_05fd5ad4(&stack0x00000018,*(long *)(unaff_x21 + 0x80),
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f6bc0 + 0x20) + 0xc0) + 0x138));
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
LAB_063408ac:
    do {
      uVar8 = FUN_05fd5b44(&stack0x00000030,DAT_083e81c0);
      lVar5 = in_stack_00000040;
      if ((uVar8 & 1) == 0) goto LAB_06340adc;
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (0 < *(int *)(in_stack_00000040 + 0x14)) {
        uVar8 = 0;
LAB_063408d8:
        lVar9 = *(long *)(lVar5 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        uVar1 = *(uint *)(lVar9 + uVar8 * 4 + 0x20);
        uVar3 = uVar1 >> 0x1c;
        uVar15 = (ulong)uVar3;
        if (uVar3 != 0) {
          uVar10 = 0;
          bVar12 = false;
          uVar13 = (ulong)uVar1 & 0xfffffff;
LAB_06340910:
          lVar9 = (ulong)(uint)((int)uVar13 + (int)uVar10) << 0x20;
          uVar14 = uVar10;
          do {
            lVar11 = *(long *)(lVar5 + 0x20);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar13 + uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            if (0.0 < *(float *)(lVar11 + (lVar9 >> 0x20) * 0x2c + 0x48)) {
              if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              iVar4 = FUN_04a02654();
              if ((iVar4 == 1) || (iVar4 = FUN_04a02654(), iVar4 == 2)) goto LAB_06340998;
            }
            uVar14 = uVar14 + 1;
            lVar9 = lVar9 + 0x100000000;
            if (uVar15 == uVar14) {
              if (!bVar12) break;
              goto LAB_063409c0;
            }
          } while( true );
        }
        goto LAB_06340a3c;
      }
    } while( true );
  }
LAB_06340b50:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
LAB_06340adc:
  if (lVar6 != 0) {
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    FUN_05fc0dd4(&stack0x00000018,lVar6,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083ec8f8 + 0x20) + 0xc0) + 0xe0));
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000028;
    while( true ) {
      uVar8 = FUN_05fc0e40(&stack0x00000050,DAT_083e66f0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (unaff_x19 == 0) break;
      FUN_04a02698();
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  goto LAB_06340b50;
LAB_06340998:
  uVar10 = uVar14 + 1;
  bVar12 = true;
  if (uVar15 - 1 == uVar14) goto LAB_063409c0;
  goto LAB_06340910;
LAB_063409c0:
  lVar9 = uVar13 << 0x20;
  do {
    lVar11 = *(long *)(lVar5 + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar11 = lVar11 + (lVar9 >> 0x20) * 0x2c;
    if (0.0 < *(float *)(lVar11 + 0x48)) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar2 = *(undefined4 *)(lVar11 + 0x44);
      iVar4 = FUN_04a02654();
      if (iVar4 == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        FUN_04501b14(lVar6,uVar2,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083ec8e0 + 0x20) + 0xc0) + 0xa8));
      }
    }
    uVar15 = uVar15 - 1;
    lVar9 = lVar9 + 0x100000000;
    uVar13 = uVar13 + 1;
  } while (uVar15 != 0);
LAB_06340a3c:
  uVar8 = uVar8 + 1;
  if ((long)*(int *)(lVar5 + 0x14) <= (long)uVar8) goto LAB_063408ac;
  goto LAB_063408d8;
}


