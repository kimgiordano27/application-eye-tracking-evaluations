/*
FUNCTION_NAME: UnityEngine.LowLevel.PlayerLoopSystem.UpdateFunction$$Invoke
ENTRY_POINT: 03c60f18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction__Invoke(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  float *pfVar15;
  undefined4 *puVar16;
  long lVar17;
  int *piVar18;
  float *pfVar19;
  float *pfVar20;
  long unaff_x19;
  int unaff_w20;
  uint uVar21;
  long unaff_x21;
  int unaff_w22;
  undefined1 *__src;
  long unaff_x23;
  float unaff_w24;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong uVar35;
  float fVar36;
  ulong uVar37;
  float fVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  float fVar42;
  ulong unaff_d9;
  undefined8 unaff_d11;
  ulong unaff_d12;
  float unaff_s13;
  ulong unaff_d15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  undefined8 in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float in_stack_00000270;
  float in_stack_00000274;
  float in_stack_00000278;
  ulong in_stack_00000280;
  float in_stack_00000288;
  float in_stack_00000290;
  float in_stack_00000294;
  float in_stack_00000298;
  float in_stack_0000029c;
  
  do {
    fVar25 = (float)FUN_03a4388c(uStack000000000000005c,fStack0000000000000058,0);
    fVar26 = (float)FUN_03a4388c(unaff_d11,unaff_d12,0);
    uVar35 = (ulong)(uint)((float)unaff_d15 +
                          fStack000000000000004c * fStack0000000000000040 +
                          fStack0000000000000048 * fStack0000000000000058 +
                          fStack0000000000000050 * (float)unaff_d12);
    uVar11 = (ulong)(uint)((float)unaff_d9 +
                          fStack000000000000004c * fStack000000000000003c +
                          fStack0000000000000048 * fStack0000000000000054 +
                          fStack0000000000000050 * fStack0000000000000044);
    FUN_03d55fa0(unaff_s13 +
                 fStack000000000000004c * fStack0000000000000060 + fStack0000000000000048 * fVar25 +
                 fStack0000000000000050 * fVar26,uVar35,unaff_x23,0);
    do {
      fVar25 = (float)uVar11;
      uVar11 = FUN_03c631c0();
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_03c631cc();
        if ((uVar11 & 1) != 0) {
          uVar35 = (ulong)(uint)in_stack_00000274;
          FUN_03d498b0(unaff_x21,0);
          fVar25 = in_stack_00000278;
          FUN_03c62b30(in_stack_00000270,uVar35,in_stack_00000278,in_stack_00000280 & 0xffffffff,
                       (int)(in_stack_00000280 >> 0x20),in_stack_00000288);
          if (*(int *)(unaff_x19 + 0x94) == 3) {
            puVar16 = *(undefined4 **)
                       (*(long *)System_ComponentModel_Design_ITypeDescriptorFilterService_TypeInfo
                       + 0xb8);
            uVar35 = (ulong)(uint)puVar16[1];
            fVar25 = (float)puVar16[2];
            fStack0000000000000070 = (float)puVar16[3];
            fStack000000000000007c = (float)FUN_03a46564(*puVar16,0);
            fStack0000000000000078 = (float)uVar35;
            fStack0000000000000074 = fVar25;
          }
        }
        uVar11 = FUN_03c631d8();
        fVar26 = fStack0000000000000090;
        fVar42 = fStack000000000000008c;
        fVar27 = (float)FUN_03a4388c(0);
        fVar36 = fStack0000000000000080;
        fVar38 = fStack0000000000000084;
        fVar28 = (float)FUN_03a4388c(0);
        if (DAT_0452d813 == '\0') {
          FUN_01c5d288();
          DAT_0452d813 = '\x01';
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fVar29 = fVar26 * fVar36 - fVar42 * fVar38;
        fVar36 = fVar42 * fVar28 - fVar27 * fVar36;
        fVar26 = fVar27 * fVar38 - fVar26 * fVar28;
        fVar42 = SQRT(fVar26 * fVar26 + fVar29 * fVar29 + fVar36 * fVar36);
        if (fVar42 <= DAT_00b9323c) {
          if (DAT_0452d6e9 == '\0') {
            FUN_01c5d288(PTR_DAT_042301b0);
            DAT_0452d6e9 = '\x01';
          }
          pfVar15 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
          fVar29 = *pfVar15;
          fVar36 = pfVar15[1];
          fVar26 = pfVar15[2];
        }
        else {
          fVar29 = fVar29 / fVar42;
          fVar36 = fVar36 / fVar42;
          fVar26 = fVar26 / fVar42;
        }
        fVar28 = fStack000000000000008c;
        fVar22 = fStack0000000000000090;
        fVar30 = (float)FUN_03a4388c(fStack0000000000000094,0);
        fVar31 = (float)FUN_03d3e23c(uVar35,0);
        fVar42 = fVar26;
        fVar38 = fVar36;
        fVar27 = fVar29;
        fVar32 = (float)FUN_03d3e23c(uVar11,0);
        uVar35 = (ulong)(uint)fStack0000000000000084;
        uVar37 = (ulong)(uint)fStack0000000000000080;
        uVar34 = FUN_03a4388c(fStack0000000000000088,uVar35,uVar37,0);
        uVar39 = (ulong)(uint)((fVar31 * fVar27 + fVar28 * fVar38 + fVar22 * fVar42) -
                              fVar30 * fVar32);
        uVar10 = (ulong)(uint)((fVar22 * fVar32 + fVar28 * fVar27 + fVar30 * fVar42) -
                              fVar31 * fVar38);
        FUN_03d3e4e0((fVar30 * fVar38 + fVar28 * fVar32 + fVar31 * fVar42) - fVar22 * fVar27,uVar10,
                     uVar39,((fVar28 * fVar42 - fVar31 * fVar32) - fVar30 * fVar27) -
                            fVar22 * fVar38,uVar34,uVar35,uVar37,0);
        uVar35 = FUN_03a43890(0);
        fVar22 = (float)uVar10;
        fVar30 = (float)uVar39;
        fVar27 = (float)FUN_03d3e23c(uVar11 & 0xffffffff,0);
        fVar42 = fVar30;
        fVar38 = fVar22;
        fVar28 = (float)FUN_03a4388c(uVar35,0);
        fVar25 = (float)FUN_03d3e23c(fVar25,0);
        uVar11 = (ulong)(uint)fStack0000000000000090;
        uVar40 = (ulong)(uint)fStack000000000000008c;
        uVar34 = FUN_03a4388c(fStack0000000000000094,uVar11,uVar40,0);
        uVar41 = (ulong)(uint)((fVar27 * fVar28 + fVar26 * fVar38 + fVar36 * fVar42) -
                              fVar29 * fVar25);
        uVar37 = (ulong)(uint)((fVar36 * fVar25 + fVar26 * fVar28 + fVar29 * fVar42) -
                              fVar27 * fVar38);
        FUN_03d3e4e0((fVar29 * fVar38 + fVar26 * fVar25 + fVar27 * fVar42) - fVar36 * fVar28,uVar37,
                     uVar41,((fVar26 * fVar42 - fVar27 * fVar25) - fVar29 * fVar28) -
                            fVar36 * fVar38,uVar34,uVar11,uVar40,0);
        uVar34 = FUN_03a43890(0);
        lVar12 = FUN_03d498b0(unaff_x21,0);
        FUN_03a46aac(uVar35 & 0xffffffff,uVar10 & 0xffffffff,uVar39 & 0xffffffff,uVar34,uVar37,
                     uVar41,0);
        fVar26 = (float)uVar34;
        fVar25 = (float)FUN_03a46564(0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03d558f8((fStack0000000000000074 * fVar22 +
                     fStack000000000000007c * fVar26 + fStack0000000000000070 * fVar25) -
                     fStack0000000000000078 * fVar30,
                     (fStack000000000000007c * fVar30 +
                     fStack0000000000000078 * fVar26 + fStack0000000000000070 * fVar22) -
                     fStack0000000000000074 * fVar25,
                     (fStack0000000000000078 * fVar25 +
                     fStack0000000000000074 * fVar26 + fStack0000000000000070 * fVar30) -
                     fStack000000000000007c * fVar22,
                     ((fStack0000000000000070 * fVar26 - fStack000000000000007c * fVar25) -
                     fStack0000000000000078 * fVar22) - fStack0000000000000074 * fVar30,lVar12,0);
      }
      unaff_w20 = unaff_w20 + 1;
      unaff_w29 = unaff_w29 + 1;
      if (unaff_w22 == unaff_w20) {
        do {
          unaff_w20 = unaff_w22;
          FUN_03c51164(&stack0x000002a0);
          puVar4 = VoxelBusters_EssentialKit_MailComposerResultCode_TypeInfo;
          puVar5 = PTR_DAT_04233d00;
          iStack0000000000000034 = iStack0000000000000034 + 1;
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (plVar8 = (long *)FUN_03c4db04(), puVar3 = PTR_DAT_0422f9e8, plVar8 == (long *)0x0)) {
LAB_03c5fe14:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar12 = *plVar8;
          uVar35 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar35 != 0) {
            piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03c60088;
              }
              uVar35 = uVar35 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar35 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar4,0);
LAB_03c60088:
          iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if (iVar7 <= iStack0000000000000034) {
            *(undefined1 *)(unaff_x19 + 0xf8) = 0;
            FUN_03d44350(in_stack_00000018,in_stack_00000010,0);
            return;
          }
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (plVar8 = (long *)FUN_03c4db04(), plVar8 == (long *)0x0)) goto LAB_03c5fe14;
          lVar12 = *plVar8;
          uVar35 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar35 != 0) {
            piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)System_Collections_Generic_List<Pet>_TypeInfo)
              {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03c60108;
              }
              uVar35 = uVar35 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar35 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01c72498(plVar8,*(long *)System_Collections_Generic_List<Pet>_TypeInfo,0);
LAB_03c60108:
          uVar34 = (*(code *)*puVar9)(plVar8,iStack0000000000000034,puVar9[1]);
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar12 = FUN_03d468ac(*(long *)(unaff_x19 + 0x28),0), lVar12 == 0)) goto LAB_03c5fe14;
          FUN_03d54e2c(&stack0x00000098,lVar12,0);
          in_stack_00000128 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
          in_stack_00000130 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
          in_stack_00000120 = in_stack_00000098;
          in_stack_00000138 = in_stack_000000b0;
          in_stack_00000148 = in_stack_000000c0;
          in_stack_00000140 = in_stack_000000b8;
          in_stack_00000158 = in_stack_000000d0;
          in_stack_00000150 = in_stack_000000c8;
          FUN_03a4561c(&stack0x00000098,&stack0x00000120,0);
          in_stack_000000e8 = CONCAT44(fStack00000000000000a4,uStack00000000000000a0);
          in_stack_000000f0 = CONCAT44(fStack00000000000000ac,fStack00000000000000a8);
          in_stack_000000e0 = in_stack_00000098;
          in_stack_000000f8 = in_stack_000000b0;
          in_stack_00000108 = in_stack_000000c0;
          in_stack_00000100 = in_stack_000000b8;
          in_stack_00000118 = in_stack_000000d0;
          in_stack_00000110 = in_stack_000000c8;
          FUN_03c503b4(&stack0x000002a0,uVar34,&stack0x000000e0,3);
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          fVar25 = (float)FUN_02da6ef4(*(long *)(unaff_x19 + 0x110),iStack0000000000000034,
                                       *(undefined8 *)PTR_DAT_04233ce8);
          fVar26 = fVar25 + in_stack_00000028;
          if (*(int *)(unaff_x19 + 0x38) == 0) {
            bVar2 = fStack0000000000000064 <= fStack0000000000000020 &&
                    fVar26 < fStack0000000000000064;
            if (fStack0000000000000064 <= fStack0000000000000020 && fVar26 < fStack0000000000000064)
            {
              fStack0000000000000064 = fStack0000000000000064 - fVar25;
            }
          }
          else {
            bVar2 = false;
            fStack0000000000000064 = 0.0;
          }
          lVar12 = *(long *)(unaff_x19 + 0x108);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          unaff_w22 = unaff_w20;
          if (!bVar2 && fStack0000000000000064 <= fVar26) {
            while (uVar35 = FUN_03c62844(), (uVar35 & 1) != 0) {
              lVar12 = *(long *)(unaff_x19 + 0x108);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar17 = *(long *)puVar5;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(float *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = fStack0000000000000064 / fVar25;
              }
              else {
                FUN_02da71ec(lVar12,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              iVar7 = *(int *)(unaff_x19 + 0x38);
              if (iVar7 == 0) {
                fVar36 = fStack0000000000000030;
                if (fStack0000000000000038 <= 1.0) goto LAB_03c61798;
                bVar6 = fStack0000000000000064 < fVar25;
                fVar36 = fStack0000000000000024 + fStack0000000000000064;
                bVar2 = bVar6 && fVar26 < fVar36;
                fStack0000000000000064 = fVar36 - fVar25;
                if (!bVar6 || fVar26 >= fVar36) {
                  fStack0000000000000064 = fVar36;
                }
              }
              else if (iVar7 == 1) {
                fStack0000000000000038 =
                     (float)FUN_03d443cc(*(undefined4 *)(unaff_x19 + 0x40),
                                         *(undefined4 *)(unaff_x19 + 0x44),0);
                fVar36 = fStack0000000000000038;
LAB_03c61798:
                bVar2 = false;
                fStack0000000000000064 = fStack0000000000000064 + fVar36;
              }
              else if (iVar7 == 2) {
                if ((*(uint *)(unaff_x19 + 0x44) & 0x7fffffff) < 0x7f800001) {
                  fStack0000000000000038 = (float)FUN_03d443cc(*(undefined4 *)(unaff_x19 + 0x40),0);
                }
                else {
                  if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar12 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),unaff_w22,
                                        *(undefined8 *)PTR_DAT_04231fb8);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4a4();
                  }
                  lVar12 = FUN_02362b68(lVar12,*(undefined8 *)PTR_DAT_04231150);
                  if (DAT_0452d9a9 == '\0') {
                    FUN_01c5d288(PTR_DAT_042301b0);
                    DAT_0452d9a9 = '\x01';
                  }
                  puVar4 = PTR_DAT_042301b0;
                  iVar7 = *(int *)(unaff_x19 + 0x4c);
                  lVar14 = *(long *)PTR_DAT_042301b0;
                  lVar17 = *(long *)(lVar14 + 0xb8);
                  if ((iVar7 == 2) || (iVar7 == 5)) {
                    if (DAT_0452d851 == '\0') {
                      FUN_01c5d288(PTR_DAT_042301b0);
                      lVar14 = *(long *)puVar4;
                      DAT_0452d851 = '\x01';
                      lVar17 = *(long *)(lVar14 + 0xb8);
                      iVar7 = *(int *)(unaff_x19 + 0x4c);
                    }
                    pfVar15 = (float *)(lVar17 + 0x48);
                    pfVar19 = (float *)(lVar17 + 0x4c);
                    pfVar20 = (float *)(lVar17 + 0x50);
                  }
                  else {
                    pfVar15 = (float *)(lVar17 + 0x3c);
                    pfVar19 = (float *)(lVar17 + 0x40);
                    pfVar20 = (float *)(lVar17 + 0x44);
                  }
                  puVar4 = PTR_DAT_042301b0;
                  if ((iVar7 == 1) || (iVar7 == 4)) {
                    if (DAT_0452d9ab == '\0') {
                      FUN_01c5d288(PTR_DAT_042301b0);
                      lVar14 = *(long *)puVar4;
                      DAT_0452d9ab = '\x01';
                    }
                    lVar14 = *(long *)(lVar14 + 0xb8);
                    pfVar15 = (float *)(lVar14 + 0x18);
                    pfVar19 = (float *)(lVar14 + 0x1c);
                    pfVar20 = (float *)(lVar14 + 0x20);
                  }
                  fVar38 = *pfVar20;
                  fVar42 = *pfVar19;
                  fVar36 = *pfVar15;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar35 = FUN_03d4dc54(lVar12,0,0);
                  if ((uVar35 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    lVar12 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),unaff_w22,
                                          *(undefined8 *)PTR_DAT_04231fb8);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    lVar12 = FUN_02362ec8(lVar12,*(undefined8 *)StringLiteral_5880);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar35 = FUN_03d4f3bc(lVar12,0,0);
                    if ((uVar35 & 1) != 0) {
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      lVar14 = FUN_03d468ac(lVar12,0);
                      if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      lVar17 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),unaff_w22,
                                            *(undefined8 *)PTR_DAT_04231fb8);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      lVar17 = FUN_03d498b0(lVar17,0);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      FUN_03d565ec(fVar36,lVar17,0);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      fVar36 = (float)FUN_03d57160(lVar14,0);
                      fVar27 = fVar42;
                      fVar28 = fVar38;
                      lVar14 = FUN_03d468ac(lVar12,0);
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      fVar29 = (float)FUN_03d582f4(lVar14,0);
                      fVar36 = fVar36 * fVar29;
                      fVar42 = fVar42 * fVar27;
                      fVar38 = fVar38 * fVar28;
                    }
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar35 = FUN_03d4f3bc(lVar12,0,0);
                  if ((uVar35 & 1) != 0) {
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    lVar14 = FUN_03d205c0(lVar12,0);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    FUN_03d234ac(&stack0x00000098,lVar14,0);
                    fVar29 = fStack00000000000000ac;
                    fVar28 = fStack00000000000000a8;
                    fVar27 = fStack00000000000000a4;
                    lVar12 = FUN_0230cb9c(lVar12,*(undefined8 *)StringLiteral_5879);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d4a4();
                    }
                    uVar1 = *(uint *)(lVar12 + 0x18);
                    if (0 < (int)uVar1) {
                      uVar21 = 0;
                      fVar28 = fVar29;
                      do {
                        if (uVar1 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4ac();
                        }
                        lVar14 = *(long *)(lVar12 + (long)(int)uVar21 * 8 + 0x20);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        lVar14 = FUN_03d205c0(lVar14,0);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d4a4();
                        }
                        FUN_03d234ac(&stack0x00000098,lVar14,0);
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        fVar29 = fVar27 + fVar27;
                        if (fVar27 + fVar27 <= fStack00000000000000a4 + fStack00000000000000a4) {
                          fVar29 = fStack00000000000000a4 + fStack00000000000000a4;
                        }
                        fVar27 = fVar28 + fVar28;
                        if (fVar28 + fVar28 <= fStack00000000000000ac + fStack00000000000000ac) {
                          fVar27 = fStack00000000000000ac + fStack00000000000000ac;
                        }
                        uVar21 = uVar21 + 1;
                        fVar28 = fVar27 * 0.5;
                        fVar27 = fVar29 * 0.5;
                        fVar29 = fVar28;
                      } while ((int)uVar21 < (int)uVar1);
                    }
                    if (DAT_0452d9af == '\0') {
                      FUN_01c5d288();
                      DAT_0452d9af = '\x01';
                    }
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    fVar36 = fVar36 * (fVar27 + fVar27);
                    fVar42 = fVar42 * (fVar28 + fVar28);
                    fVar38 = fVar38 * (fVar29 + fVar29);
                    fStack0000000000000038 =
                         SQRT(fVar38 * fVar38 + fVar42 * fVar42 + fVar36 * fVar36);
                  }
                }
                memcpy(&stack0x00000098,&stack0x000002a0,0x48);
                if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                uVar33 = FUN_02da6ef4(*(long *)(unaff_x19 + 0x108),unaff_w22,
                                      *(undefined8 *)PTR_DAT_04233ce8);
                uVar34 = *(undefined8 *)StringLiteral_5882;
                memcpy(&stack0x000002e8,&stack0x00000098,0x48);
                FUN_023ec724(uVar33,fStack0000000000000038,&stack0x000002e8,&stack0x0000029c,uVar34)
                ;
                bVar2 = false;
                fStack0000000000000064 = fVar25 + 1.0;
                if (in_stack_0000029c < 1.0) {
                  fStack0000000000000064 = fVar25 * in_stack_0000029c;
                }
              }
              else {
                bVar2 = false;
              }
              unaff_w22 = unaff_w22 + 1;
              if ((bVar2) || (fVar26 < fStack0000000000000064)) break;
            }
          }
          lVar12 = *(long *)(unaff_x19 + 0xd0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          iVar7 = *(int *)(lVar12 + 0x18) + -1;
          if (unaff_w22 <= iVar7) {
            while( true ) {
              uVar34 = FUN_02d4fd88(lVar12,iVar7,*(undefined8 *)PTR_DAT_04231fb8);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar35 = FUN_03d4f3bc(uVar34,0,0);
              if ((uVar35 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                uVar34 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),iVar7,
                                      *(undefined8 *)PTR_DAT_04231fb8);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                FUN_03d4ea0c(uVar34,0);
                if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                FUN_02d51704(*(long *)(unaff_x19 + 0xd0),iVar7,*(undefined8 *)PTR_DAT_04236680);
              }
              iVar7 = iVar7 + -1;
              if (iVar7 < unaff_w22) break;
              lVar12 = *(long *)(unaff_x19 + 0xd0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
            }
          }
        } while (unaff_w22 <= unaff_w20);
        unaff_w29 = 0;
      }
      if (*(long *)(unaff_x19 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      unaff_x21 = FUN_02d4fd88(*(long *)(unaff_x19 + 0xd0),unaff_w20,*(undefined8 *)PTR_DAT_04231fb8
                              );
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar33 = FUN_02da6ef4(*(long *)(unaff_x19 + 0x108),unaff_w29,*(undefined8 *)PTR_DAT_04233ce8);
      uVar34 = *(undefined8 *)Unity_Services_Core_Internal_LockedComponentRegistry_TypeInfo;
      memcpy(&stack0x00000330,&stack0x000002a0,0x48);
      FUN_023e7140(uVar33,&stack0x00000330,&stack0x00000290,&stack0x00000280,&stack0x00000270,uVar34
                  );
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar12 = FUN_03d498b0(unaff_x21,0);
      fVar25 = in_stack_00000294;
      fVar26 = in_stack_00000298;
      FUN_03a4388c(in_stack_00000290,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03d55578(lVar12,0);
      if (*(int *)(unaff_x19 + 0x38) == 2) {
        memcpy(&stack0x00000330,&stack0x000002a0,0x48);
        if (unaff_w20 + 1 < unaff_w22) {
          memcpy(&stack0x00000200,&stack0x00000330,0x48);
          if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar34 = FUN_02da6ef4(*(long *)(unaff_x19 + 0x108),unaff_w29 + 1,
                                *(undefined8 *)PTR_DAT_04233ce8);
          __src = &stack0x00000200;
        }
        else {
          __src = &stack0x000001b0;
          memcpy(&stack0x000001b0,&stack0x00000330,0x48);
          uVar34 = 0x3f800000;
        }
        memcpy(&stack0x00000160,__src,0x48);
        uVar33 = *(undefined8 *)Oculus_Platform_LogEventName_TypeInfo;
        memcpy(&stack0x00000378,&stack0x00000160,0x48);
        fVar36 = (float)FUN_023e86f0(uVar34,&stack0x00000378,uVar33);
        in_stack_00000280 = CONCAT44(fVar25 - in_stack_00000294,fVar36 - in_stack_00000290);
        in_stack_00000288 = fVar26 - in_stack_00000298;
      }
      if (*(char *)(unaff_x28 + 0xfe3) == '\0') {
        FUN_01c5d288();
        *(undefined1 *)(unaff_x28 + 0xfe3) = 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        cVar13 = *(char *)(unaff_x28 + 0xfe3);
      }
      else {
        cVar13 = '\x01';
      }
      fVar25 = in_stack_00000278 * in_stack_00000278 +
               in_stack_00000270 * in_stack_00000270 + in_stack_00000274 * in_stack_00000274;
      fVar26 = 1.0 / SQRT(fVar25);
      fVar36 = (float)in_stack_00000280;
      fVar42 = (float)(in_stack_00000280 >> 0x20);
      fStack0000000000000094 = in_stack_00000270 * fVar26;
      fStack0000000000000090 = in_stack_00000274 * fVar26;
      fStack000000000000008c = in_stack_00000278 * fVar26;
      if (fVar25 <= unaff_w24) {
        fStack0000000000000090 = 0.0;
        fStack0000000000000094 = 0.0;
        fStack000000000000008c = 0.0;
      }
      if (cVar13 == '\0') {
        FUN_01c5d288();
        *(undefined1 *)(unaff_x28 + 0xfe3) = 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar25 = in_stack_00000288 * in_stack_00000288 + fVar36 * fVar36 + fVar42 * fVar42;
      fVar26 = 1.0 / SQRT(fVar25);
      fVar36 = fVar36 * fVar26;
      fVar38 = fVar42 * fVar26;
      fStack0000000000000088 = fVar36;
      fStack0000000000000084 = fVar38;
      fStack0000000000000080 = in_stack_00000288 * fVar26;
      if (fVar25 <= unaff_w24) {
        fStack0000000000000084 = 0.0;
        fStack0000000000000088 = 0.0;
        fStack0000000000000080 = 0.0;
      }
      if (*(int *)(unaff_x19 + 0x3c) == 1) {
        lVar12 = FUN_03d468ac();
        if (DAT_0452d9ab == '\0') {
          FUN_01c5d288(PTR_DAT_042301b0);
          DAT_0452d9ab = '\x01';
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
        fStack0000000000000090 = *(float *)(lVar14 + 0x1c);
        fStack000000000000008c = *(float *)(lVar14 + 0x20);
        FUN_03d565ec(*(undefined4 *)(lVar14 + 0x18),lVar12,0);
        fStack0000000000000094 = (float)FUN_03a43890(0);
        lVar12 = FUN_03d468ac();
        if (DAT_0452d851 == '\0') {
          FUN_01c5d288(PTR_DAT_042301b0);
          DAT_0452d851 = '\x01';
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar14 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
        fVar36 = *(float *)(lVar14 + 0x4c);
        fVar38 = *(float *)(lVar14 + 0x50);
        FUN_03d565ec(*(undefined4 *)(lVar14 + 0x48),lVar12,0);
        fStack0000000000000088 = (float)FUN_03a43890(0);
        fStack0000000000000080 = fVar38;
        fStack0000000000000084 = fVar36;
      }
      else if (*(int *)(unaff_x19 + 0x3c) == 2) {
        if (DAT_0452d9ab == '\0') {
          FUN_01c5d288(PTR_DAT_042301b0);
          DAT_0452d9ab = '\x01';
        }
        lVar12 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
        fStack0000000000000090 = *(float *)(lVar12 + 0x1c);
        fStack000000000000008c = *(float *)(lVar12 + 0x20);
        fStack0000000000000094 = (float)FUN_03a43890(*(undefined4 *)(lVar12 + 0x18),0);
        if (DAT_0452d851 == '\0') {
          FUN_01c5d288(PTR_DAT_042301b0);
          DAT_0452d851 = '\x01';
        }
        lVar12 = *(long *)(*(long *)PTR_DAT_042301b0 + 0xb8);
        fVar36 = *(float *)(lVar12 + 0x4c);
        fVar38 = *(float *)(lVar12 + 0x50);
        fStack0000000000000088 = (float)FUN_03a43890(*(undefined4 *)(lVar12 + 0x48),0);
        fStack0000000000000080 = fVar38;
        fStack0000000000000084 = fVar36;
      }
      fVar25 = (float)FUN_03c59afc();
      if (*(char *)(unaff_x28 + 0xfe3) == '\0') {
        FUN_01c5d288();
        *(undefined1 *)(unaff_x28 + 0xfe3) = 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar27 = fVar38 * fVar38 + fVar25 * fVar25 + fVar36 * fVar36;
      fVar28 = 1.0 / SQRT(fVar27);
      fVar25 = fVar25 * fVar28;
      fVar36 = fVar36 * fVar28;
      fVar29 = 0.0;
      fVar26 = fVar25;
      fStack0000000000000078 = fVar36;
      fStack0000000000000074 = fVar38 * fVar28;
      if (fVar27 <= unaff_w24) {
        fVar26 = fVar29;
        fStack0000000000000078 = fVar29;
        fStack0000000000000074 = fVar29;
      }
      fVar38 = (float)FUN_03c59afc();
      if (*(char *)(unaff_x28 + 0xfe3) == '\0') {
        FUN_01c5d288();
        *(undefined1 *)(unaff_x28 + 0xfe3) = 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar25 = fVar36 * fVar36 + fVar38 * fVar38 + fVar25 * fVar25;
      fStack0000000000000070 = fVar38 * (1.0 / SQRT(fVar25));
      if (fVar25 <= unaff_w24) {
        fStack0000000000000070 = 0.0;
      }
      FUN_03a46aac(fVar26,0);
      FUN_03a46564(0);
      fStack000000000000007c = (float)FUN_03d3dd44(0);
      lVar12 = FUN_03d498b0(unaff_x21,0);
      fVar25 = fStack0000000000000094;
      fVar26 = fStack0000000000000084;
      fVar36 = fStack0000000000000080;
      FUN_03a46aac(fStack0000000000000088,0);
      fVar38 = (float)FUN_03a46564(0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = (ulong)(uint)((fStack0000000000000078 * fVar38 +
                             fStack0000000000000074 * fVar25 + fStack0000000000000070 * fVar36) -
                            fStack000000000000007c * fVar26);
      uVar35 = (ulong)(uint)((fStack000000000000007c * fVar36 +
                             fStack0000000000000078 * fVar25 + fStack0000000000000070 * fVar26) -
                            fStack0000000000000074 * fVar38);
      FUN_03d558f8((fStack0000000000000074 * fVar26 +
                   fStack000000000000007c * fVar25 + fStack0000000000000070 * fVar38) -
                   fStack0000000000000078 * fVar36,uVar35,uVar11,
                   ((fStack0000000000000070 * fVar25 - fStack000000000000007c * fVar38) -
                   fStack0000000000000078 * fVar26) - fStack0000000000000074 * fVar36,lVar12,0);
      uVar10 = FUN_03c631c0(in_stack_00000068,0);
      fVar25 = (float)uVar11;
      if ((uVar10 & 1) != 0) {
        uVar11 = FUN_03c631cc(in_stack_00000068,0);
        fVar26 = (float)uVar35;
        if ((uVar11 & 1) != 0) {
          FUN_03d498b0(unaff_x21,0);
          fVar26 = in_stack_00000274;
          fVar25 = in_stack_00000278;
          FUN_03c62b30(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                       in_stack_00000280 & 0xffffffff,fVar42,in_stack_00000288);
        }
        fVar29 = (float)FUN_03c631d8(in_stack_00000068,0);
        fVar38 = fStack0000000000000090;
        fVar27 = fStack000000000000008c;
        fVar22 = (float)FUN_03a4388c(0);
        fVar36 = fStack0000000000000080;
        fVar28 = fStack0000000000000084;
        fVar30 = (float)FUN_03a4388c(fStack0000000000000088,0);
        if (DAT_0452d813 == '\0') {
          FUN_01c5d288();
          DAT_0452d813 = '\x01';
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fStack0000000000000044 = fVar38 * fVar36 - fVar27 * fVar28;
        fVar36 = fVar27 * fVar30 - fVar22 * fVar36;
        fVar27 = fVar22 * fVar28 - fVar38 * fVar30;
        fVar38 = SQRT(fVar27 * fVar27 +
                      fStack0000000000000044 * fStack0000000000000044 + fVar36 * fVar36);
        if (fVar38 <= DAT_00b9323c) {
          if (DAT_0452d6e9 == '\0') {
            FUN_01c5d288(PTR_DAT_042301b0);
            DAT_0452d6e9 = '\x01';
          }
          pfVar15 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
          fStack0000000000000044 = *pfVar15;
          fStack0000000000000040 = pfVar15[1];
          fVar38 = pfVar15[2];
          fVar36 = fStack0000000000000044;
        }
        else {
          fStack0000000000000044 = fStack0000000000000044 / fVar38;
          fStack0000000000000040 = fVar36 / fVar38;
          fVar38 = fVar27 / fVar38;
        }
        lVar12 = FUN_03d498b0(unaff_x21,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        fVar32 = (float)FUN_03d554d8(lVar12,0);
        fVar28 = fStack000000000000008c;
        fVar22 = fStack0000000000000090;
        fVar23 = (float)FUN_03a4388c(fStack0000000000000094,0);
        fVar30 = fStack0000000000000084;
        fVar31 = fStack0000000000000080;
        fVar24 = (float)FUN_03a4388c(fStack0000000000000088,0);
        uVar35 = (ulong)(uint)(fVar36 + fVar29 * fStack0000000000000040 + fVar26 * fVar22 +
                                        fVar25 * fVar30);
        uVar11 = (ulong)(uint)(fVar27 + fVar29 * fVar38 + fVar26 * fVar28 + fVar25 * fVar31);
        FUN_03d55578(fVar32 + fVar29 * fStack0000000000000044 + fVar26 * fVar23 + fVar25 * fVar24,
                     lVar12,0);
      }
      uVar10 = FUN_03c631c0();
    } while ((uVar10 & 1) == 0);
    uVar35 = FUN_03c631cc();
    if ((uVar35 & 1) != 0) {
      FUN_03d498b0(unaff_x21,0);
      FUN_03c62b30(in_stack_00000270,in_stack_00000274,in_stack_00000278,
                   in_stack_00000280 & 0xffffffff,fVar42,in_stack_00000288);
    }
    lVar12 = FUN_03d498b0(unaff_x21,0);
    fStack0000000000000058 = fStack0000000000000090;
    fStack0000000000000054 = fStack000000000000008c;
    FUN_03a4388c(fStack0000000000000094,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    fVar25 = (float)FUN_03d57160(lVar12,0);
    if (DAT_0452d813 == '\0') {
      FUN_01c5d288();
      DAT_0452d813 = '\x01';
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar26 = DAT_00b9323c;
    fVar36 = SQRT(fStack0000000000000054 * fStack0000000000000054 +
                  fVar25 * fVar25 + fStack0000000000000058 * fStack0000000000000058);
    if (fVar36 <= DAT_00b9323c) {
      if (DAT_0452d6e9 == '\0') {
        FUN_01c5d288(PTR_DAT_042301b0);
        DAT_0452d6e9 = '\x01';
      }
      pfVar15 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      fVar25 = *pfVar15;
      fStack0000000000000058 = pfVar15[1];
      fStack0000000000000054 = pfVar15[2];
    }
    else {
      fVar25 = fVar25 / fVar36;
      fStack0000000000000058 = fStack0000000000000058 / fVar36;
      fStack0000000000000054 = fStack0000000000000054 / fVar36;
    }
    uVar34 = FUN_03a43890(fVar25,0);
    uStack000000000000005c = (undefined4)uVar34;
    lVar12 = FUN_03d498b0(unaff_x21,0);
    fVar25 = fStack0000000000000084;
    fStack0000000000000044 = fStack0000000000000080;
    FUN_03a4388c(fStack0000000000000088,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    fVar36 = (float)FUN_03d57160(lVar12,0);
    if (DAT_0452d813 == '\0') {
      FUN_01c5d288();
      DAT_0452d813 = '\x01';
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fVar42 = SQRT(fStack0000000000000044 * fStack0000000000000044 +
                  fVar36 * fVar36 + fVar25 * fVar25);
    if (fVar42 <= fVar26) {
      if (DAT_0452d6e9 == '\0') {
        FUN_01c5d288(PTR_DAT_042301b0);
        DAT_0452d6e9 = '\x01';
      }
      pfVar15 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      fVar36 = *pfVar15;
      fVar25 = pfVar15[1];
      fStack0000000000000044 = pfVar15[2];
    }
    else {
      fVar36 = fVar36 / fVar42;
      fVar25 = fVar25 / fVar42;
      fStack0000000000000044 = fStack0000000000000044 / fVar42;
    }
    unaff_d12 = (ulong)(uint)fVar25;
    unaff_d11 = FUN_03a43890(fVar36,0);
    uVar35 = unaff_d12;
    fStack0000000000000050 = fStack0000000000000044;
    fStack000000000000004c = (float)FUN_03c631d8();
    fStack0000000000000048 = (float)uVar35;
    fVar36 = fStack0000000000000058;
    fVar42 = fStack0000000000000054;
    fVar38 = (float)FUN_03a4388c(uVar34,0);
    uVar35 = unaff_d12;
    fVar25 = fStack0000000000000044;
    fVar27 = (float)FUN_03a4388c(unaff_d11,0);
    if (DAT_0452d813 == '\0') {
      FUN_01c5d288();
      DAT_0452d813 = '\x01';
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    fStack0000000000000060 = fVar36 * fVar25 - fVar42 * (float)uVar35;
    unaff_d9 = (ulong)(uint)fStack0000000000000060;
    fStack0000000000000040 = fVar42 * fVar27 - fVar38 * fVar25;
    unaff_d15 = (ulong)(uint)fStack0000000000000040;
    fStack000000000000003c = fVar38 * (float)uVar35 - fVar36 * fVar27;
    fVar25 = SQRT(fStack000000000000003c * fStack000000000000003c +
                  fStack0000000000000060 * fStack0000000000000060 +
                  fStack0000000000000040 * fStack0000000000000040);
    if (fVar25 <= fVar26) {
      if (DAT_0452d6e9 == '\0') {
        FUN_01c5d288(PTR_DAT_042301b0);
        DAT_0452d6e9 = '\x01';
      }
      pfVar15 = *(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      fStack0000000000000060 = *pfVar15;
      fStack0000000000000040 = pfVar15[1];
      fStack000000000000003c = pfVar15[2];
    }
    else {
      fStack0000000000000060 = fStack0000000000000060 / fVar25;
      unaff_d9 = (ulong)(uint)fStack0000000000000060;
      fStack0000000000000040 = fStack0000000000000040 / fVar25;
      unaff_d15 = (ulong)(uint)fStack0000000000000040;
      fStack000000000000003c = fStack000000000000003c / fVar25;
    }
    unaff_x23 = FUN_03d498b0(unaff_x21,0);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    unaff_s13 = (float)FUN_03d55f00(unaff_x23,0);
  } while( true );
}


