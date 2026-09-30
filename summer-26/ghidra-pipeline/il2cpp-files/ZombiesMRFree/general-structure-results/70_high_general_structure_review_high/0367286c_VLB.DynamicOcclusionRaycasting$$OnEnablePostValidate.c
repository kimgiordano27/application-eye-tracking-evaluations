/*
FUNCTION_NAME: VLB.DynamicOcclusionRaycasting$$OnEnablePostValidate
ENTRY_POINT: 0367286c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void VLB_DynamicOcclusionRaycasting__OnEnablePostValidate(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *unaff_x19;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar18;
  uint *puVar19;
  uint *unaff_x22;
  int *piVar20;
  int iVar21;
  undefined8 *unaff_x23;
  ulong uVar22;
  uint uVar23;
  undefined8 *unaff_x25;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  uint unaff_w29;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  int iStack000000000000001c;
  uint uStack000000000000003c;
  ulong uStack0000000000000048;
  long *in_stack_00000068;
  undefined8 in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  uint uStack00000000000000a8;
  long in_stack_000000b0;
  int iStack00000000000000d8;
  int iStack00000000000000dc;
  
  puVar5 = PTR_DAT_06f8f9d0;
  puVar4 = PTR_DAT_06f8f9c0;
  FUN_046e8e00(&stack0x000000b0,param_2,2,0,*unaff_x23);
  _in_stack_00000090 = FUN_0362c860(*in_stack_00000068,*(undefined8 *)PTR_DAT_06f8d9c0);
  auVar32 = FUN_02b10738(&stack0x00000090,*(undefined8 *)PTR_DAT_06f8f188);
  uVar8 = auVar32._8_4_;
  lVar6 = auVar32._0_8_;
  auVar30 = FUN_0362c920(in_stack_00000068[1],*unaff_x25);
  piVar7 = auVar30._0_8_;
  lVar13 = *in_stack_00000068;
  if ((*(byte *)(*(long *)(*unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_04764498(&stack0x00000070,*(undefined4 *)(lVar13 + 8),2,0,*(undefined8 *)puVar4);
  uVar17 = in_stack_00000078;
  uVar25 = in_stack_00000070;
  lVar24 = *(long *)puVar5;
  lVar13 = *(long *)(lVar24 + 0x38);
  if (lVar13 == 0) {
    FUN_02feb320(lVar24);
    lVar13 = *(long *)(lVar24 + 0x38);
  }
  lVar13 = FUN_03d0af1c(uVar25,uVar17,*(undefined8 *)(lVar13 + 8));
  uVar25 = *(undefined8 *)(*(long *)(lVar24 + 0x38) + 0x28);
  if ((int)uVar17 < 0) {
    thunk_FUN_03037804(PTR_DAT_06f7a510);
    uVar16 = thunk_FUN_0301080c();
    FUN_05a66294(uVar16,0);
  }
  else {
    if (((int)uVar17 == 0) || (lVar13 != 0)) {
      _uStack00000000000000a8 = uVar17 & 0xffffffff;
      lVar24 = in_stack_00000068[2];
      in_stack_000000a0 = lVar13;
      if (DAT_0738e5d1 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e5d1 = '\x01';
      }
      puVar4 = PTR_DAT_06f6d508;
      if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (DAT_07390b79 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_07390b79 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iStack000000000000001c = -0x80000000;
      if ((float)(int)SQRT((float)(int)lVar24) != INFINITY) {
        iStack000000000000001c = (int)SQRT((float)(int)lVar24);
      }
      if (unaff_w29 == 0) {
        uVar23 = 0;
      }
      else {
        uVar26 = 0;
        uVar23 = 0;
        uVar17 = (ulong)unaff_w29;
        uStack0000000000000048 = 1;
        uStack000000000000003c = 1;
        puVar19 = unaff_x22;
        do {
          puVar19 = puVar19 + 1;
          FUN_064494d4(unaff_x22 != (uint *)0x0,0);
          FUN_064494d4(unaff_x22 + uVar26 != (uint *)0x0,0);
          if (unaff_x22[uVar26] != 0xffffffff) {
            FUN_064494d4(unaff_x22 != (uint *)0x0,0);
            FUN_064494d4(unaff_x22 + uVar26 != (uint *)0x0,0);
            uVar1 = unaff_x22[uVar26];
            puVar12 = (undefined8 *)PTR_DAT_06f8f9e8;
            if (uVar8 <= uVar1) {
LAB_03672ed8:
              uVar16 = *puVar12;
              thunk_FUN_03037804(PTR_DAT_06f8b488);
              uVar25 = thunk_FUN_0301080c();
              FUN_05aea970(uVar25,0);
                    /* WARNING: Subroutine does not return */
              FUN_02fe93c0(uVar25,uVar16);
            }
            FUN_064494d4(lVar6 != 0,0);
            puVar9 = (ulong *)(lVar6 + (long)(int)uVar1 * 0xc);
            uVar22 = *puVar9;
            iStack00000000000000dc = (int)puVar9[1];
            FUN_064494d4(unaff_x22 != (uint *)0x0,0);
            FUN_064494d4(unaff_x22 + uVar26 != (uint *)0x0,0);
            *(uint *)(in_stack_000000b0 + (long)(int)unaff_x22[uVar26] * 4) = uVar23;
            iVar21 = (int)uVar22;
            if (uStack000000000000003c < unaff_w29) {
              uVar14 = (ulong)uStack000000000000003c;
              iVar18 = iStack000000000000001c + iVar21;
              puVar15 = unaff_x22 + uStack000000000000003c;
              do {
                FUN_064494d4(unaff_x22 != (uint *)0x0,0);
                FUN_064494d4(puVar15 != (uint *)0x0,0);
                uVar1 = *puVar15;
                puVar12 = (undefined8 *)PTR_DAT_06f8f9e8;
                if (uVar8 <= uVar1) goto LAB_03672ed8;
                FUN_064494d4(lVar6 != 0,0);
                if (iVar18 < *(int *)((long)(int)uVar1 * 0xc + lVar6)) {
                  uStack000000000000003c = (uint)uVar14;
                  break;
                }
                uVar14 = uVar14 + 1;
                puVar15 = puVar15 + 1;
                uStack000000000000003c = unaff_w29;
              } while (uVar17 != uVar14);
            }
            if (uVar26 + 1 < (ulong)uStack000000000000003c) {
              uVar10 = uVar22 & 0xffffffff00000000;
              iVar18 = 1;
              iStack00000000000000d8 = iStack00000000000000dc;
              puVar15 = puVar19;
              uVar14 = uStack0000000000000048;
              do {
                puVar12 = (undefined8 *)PTR_DAT_06f8f6d0;
                if (uVar17 <= uVar14) goto LAB_03672ed8;
                FUN_064494d4(unaff_x22 != (uint *)0x0,0);
                FUN_064494d4(puVar15 != (uint *)0x0,0);
                if (*puVar15 != 0xffffffff) {
                  FUN_064494d4(unaff_x22 != (uint *)0x0,0);
                  FUN_064494d4(puVar15 != (uint *)0x0,0);
                  uVar1 = *puVar15;
                  puVar12 = (undefined8 *)PTR_DAT_06f8f9e8;
                  if (uVar8 <= uVar1) goto LAB_03672ed8;
                  FUN_064494d4(lVar6 != 0,0);
                  puVar9 = (ulong *)(lVar6 + (long)(int)uVar1 * 0xc);
                  uVar11 = *puVar9;
                  iVar2 = (int)puVar9[1];
                  fVar27 = (float)((int)uVar11 - iVar21);
                  fVar28 = (float)(int)(uVar11 - uVar10 >> 0x20);
                  fVar29 = (float)(iVar2 - iStack00000000000000dc);
                  if (fVar29 * fVar29 + fVar27 * fVar27 + fVar28 * fVar28 <=
                      (float)(int)in_stack_00000068[2]) {
                    iStack00000000000000d8 = iVar2 + iStack00000000000000d8;
                    uVar22 = (uVar11 & 0xffffffff00000000) + uVar22 & 0xffffffff00000000 |
                             (ulong)(uint)((int)uVar11 + (int)uVar22);
                    iVar18 = iVar18 + 1;
                    FUN_064494d4(unaff_x22 != (uint *)0x0,0);
                    FUN_064494d4(puVar15 != (uint *)0x0,0);
                    *(uint *)(in_stack_000000b0 + (long)(int)*puVar15 * 4) = uVar23;
                    FUN_064494d4(unaff_x22 != (uint *)0x0,0);
                    FUN_064494d4(puVar15 != (uint *)0x0,0);
                    *puVar15 = 0xffffffff;
                  }
                }
                uVar14 = uVar14 + 1;
                puVar15 = puVar15 + 1;
              } while (uStack000000000000003c != (uint)uVar14);
            }
            else {
              iVar18 = 1;
              iStack00000000000000d8 = iStack00000000000000dc;
            }
            puVar12 = (undefined8 *)PTR_DAT_06f8f9e8;
            if (uStack00000000000000a8 <= uVar23) goto LAB_03672ed8;
            FUN_064494d4(in_stack_000000a0 != 0,0);
            iVar21 = 0;
            if (iVar18 != 0) {
              iVar21 = (int)uVar22 / iVar18;
            }
            iVar2 = 0;
            if (iVar18 != 0) {
              iVar2 = iStack00000000000000d8 / iVar18;
            }
            iVar3 = 0;
            if (iVar18 != 0) {
              iVar3 = (int)(uVar22 >> 0x20) / iVar18;
            }
            puVar12 = (undefined8 *)(in_stack_000000a0 + (long)(int)uVar23 * 0xc);
            uVar23 = uVar23 + 1;
            *puVar12 = CONCAT44(iVar3,iVar21);
            *(int *)(puVar12 + 1) = iVar2;
          }
          uVar26 = uVar26 + 1;
          uStack0000000000000048 = uStack0000000000000048 + 1;
        } while (uVar26 != uVar17);
      }
      puVar5 = PTR_DAT_06f8f9e0;
      puVar4 = PTR_DAT_06f8f9d8;
      System_Collections_Generic_ObjectEqualityComparer<IntPtr>__IndexOf
                (in_stack_00000068,uVar23,*(undefined8 *)PTR_DAT_06f8d990);
      _in_stack_00000080 = FUN_04dab854(&stack0x000000a0,0,uVar23,*(undefined8 *)puVar5);
      auVar31 = FUN_0362c860(*in_stack_00000068,*(undefined8 *)PTR_DAT_06f8d9c0);
      _in_stack_00000090 = auVar31;
      auVar31 = FUN_02b10738(&stack0x00000090,*(undefined8 *)PTR_DAT_06f8f188);
      FUN_04dababc(&stack0x00000080,auVar31._0_8_,auVar31._8_8_,*(undefined8 *)puVar4);
      if (auVar30._8_4_ != 0) {
        uVar17 = auVar30._8_8_ & 0xffffffff;
        piVar20 = piVar7;
        do {
          FUN_064494d4(piVar7 != (int *)0x0,0);
          FUN_064494d4(piVar20 != (int *)0x0,0);
          FUN_064494d4(piVar7 != (int *)0x0,0);
          FUN_064494d4(piVar20 != (int *)0x0,0);
          uVar17 = uVar17 - 1;
          *piVar20 = *(int *)(in_stack_000000b0 + (long)*piVar20 * 4);
          piVar20 = piVar20 + 1;
        } while (uVar17 != 0);
      }
      return;
    }
    thunk_FUN_03037804(PTR_DAT_06f7c188);
    uVar16 = thunk_FUN_0301080c();
    FUN_05a661f0(uVar16,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar16,uVar25);
}


