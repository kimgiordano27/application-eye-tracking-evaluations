/*
FUNCTION_NAME: VoxelBusters.EssentialKit.Demo.ShareSheetDemo$$SetActiveSheet
ENTRY_POINT: 03f03e60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


uint VoxelBusters_EssentialKit_Demo_ShareSheetDemo__SetActiveSheet
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined4 uStack0000000000000170;
  undefined8 uStack0000000000000174;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined4 uStack0000000000000190;
  undefined8 uStack0000000000000194;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  float fStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  
  iVar3 = FUN_03eeca44();
  iVar4 = FUN_03eeca44();
  if (iVar3 == iVar4) {
    iVar3 = FUN_03eec814();
    iVar4 = FUN_03eec814();
    if (iVar3 != iVar4) goto LAB_03f03f10;
    uVar5 = FUN_03eec184();
    uVar6 = FUN_03eec184();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_03f03f10;
    uVar5 = FUN_03eec8b4();
    uVar6 = FUN_03eec8b4();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_03f03f10;
    uVar5 = FUN_03eec864();
    uVar6 = FUN_03eec864();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_03f03f10;
    uVar5 = VoxelBusters_EssentialKit_MediaServices_<>c__DisplayClass10_0__<RequestGalleryAccess>b__0
                      ();
    uVar6 = VoxelBusters_EssentialKit_MediaServices_<>c__DisplayClass10_0__<RequestGalleryAccess>b__0
                      ();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    uVar8 = 0x28;
    if ((uVar7 & 1) == 0) {
      uVar5 = FUN_03eec904();
      uVar6 = FUN_03eec904();
      uVar7 = FUN_03f23028(uVar5,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = 0x20;
      }
    }
  }
  else {
LAB_03f03f10:
    uVar8 = 0x28;
  }
  fVar10 = (float)FUN_03eec684();
  fVar11 = (float)FUN_03eec684();
  if (fVar10 == fVar11) {
    fVar10 = (float)FUN_03eec594();
    fVar11 = (float)FUN_03eec594();
    if (fVar10 != fVar11) goto LAB_03f03f8c;
    fVar10 = (float)FUN_03eec634();
    fVar11 = (float)FUN_03eec634();
    uVar9 = 0x928;
    if (fVar10 == fVar11) {
      fVar10 = (float)FUN_03eec5e4();
      fVar11 = (float)FUN_03eec5e4();
      uVar9 = uVar8;
      if (fVar10 != fVar11) {
        uVar9 = 0x928;
      }
    }
  }
  else {
LAB_03f03f8c:
    uVar9 = 0x928;
  }
  iVar3 = FUN_03eecb34();
  iVar4 = FUN_03eecb34();
  puVar1 = StringLiteral_12745;
  if (iVar3 != iVar4) {
    uVar9 = uVar9 | 0x808;
  }
  uVar7 = FUN_030d44ac();
  if ((uVar7 & 1) == 0) {
    fVar12 = (float)FUN_03eef4e4();
    fVar11 = param_2;
    fVar14 = param_3;
    fVar15 = param_4;
    fVar13 = (float)FUN_03eef4e4();
    fVar10 = DAT_00b92ff0;
    param_2 = (param_2 - fVar11) * (param_2 - fVar11);
    param_3 = (param_3 - fVar14) * (param_3 - fVar14);
    param_4 = (param_4 - fVar15) * (param_4 - fVar15);
    uVar8 = uVar9 | 0x2000;
    if (param_4 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + param_2 < DAT_00b92ff0) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar5 = FUN_03eefa18();
      uVar6 = FUN_03eefa18();
      if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
      }
      uVar7 = FUN_03d4f3bc(uVar5,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar5 = FUN_03eebcb0();
        uVar6 = FUN_03eebcb0();
        uVar7 = FUN_03f23028(uVar5,uVar6,0);
        if ((uVar7 & 1) == 0) {
          auVar16 = FUN_03eefa68();
          auVar17 = FUN_03eefa68();
          uVar7 = FUN_03f0a8fc(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
          if ((uVar7 & 1) == 0) {
            iVar3 = FUN_03eefabc();
            iVar4 = FUN_03eefabc();
            if (iVar3 == iVar4) {
              fVar11 = (float)FUN_03eefde0();
              fVar14 = (float)FUN_03eefde0();
              if (fVar11 == fVar14) {
                uVar5 = FUN_03eef5a0();
                uVar6 = FUN_03eef5a0();
                uVar7 = FUN_03f23028(uVar5,uVar6,0);
                if ((uVar7 & 1) == 0) {
                  uVar5 = FUN_03eeff20();
                  uVar6 = FUN_03eeff20();
                  uVar7 = FUN_03f23028(uVar5,uVar6,0);
                  if ((uVar7 & 1) == 0) {
                    uVar5 = FUN_03eefb5c();
                    uVar6 = FUN_03eefb5c();
                    uVar7 = FUN_03f23028(uVar5,uVar6,0);
                    if ((uVar7 & 1) == 0) goto LAB_03f0419c;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x808;
    }
LAB_03f0419c:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_03eef74c(&stack0x00000080);
      FUN_03eef74c(&stack0x000001a0);
      uStack0000000000000194 = CONCAT44(uStack0000000000000098,uStack0000000000000094);
      uStack0000000000000174 = CONCAT44(in_stack_000001b8,uStack00000000000001b4);
      in_stack_00000188 = uStack0000000000000088;
      in_stack_00000180 = in_stack_00000080;
      uStack0000000000000190 = uStack0000000000000090;
      in_stack_00000168 = uStack00000000000001a8;
      in_stack_00000160 = in_stack_000001a0;
      uStack0000000000000170 = uStack00000000000001b0;
      uVar5 = in_stack_000001a0;
      param_2 = fStack000000000000008c;
      param_4 = fStack00000000000001ac;
      uVar7 = FUN_03f39e08(&stack0x00000180,&stack0x00000160,0);
      param_3 = (float)uVar5;
      if ((uVar7 & 1) == 0) {
        iVar3 = VoxelBusters_EssentialKit_NativeUI__set_NativeInterface();
        iVar4 = VoxelBusters_EssentialKit_NativeUI__set_NativeInterface();
        if (iVar3 == iVar4) {
          fVar12 = (float)FUN_03eefd8c();
          fVar11 = param_2;
          fVar14 = param_3;
          fVar15 = param_4;
          fVar13 = (float)FUN_03eefd8c();
          fVar11 = param_2 - fVar11;
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar14) * (param_3 - fVar14);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar11 * fVar11 < fVar10)
          goto LAB_03f04260;
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_03f04260:
    iVar3 = FUN_03eefe80();
    iVar4 = FUN_03eefe80();
    if (iVar3 != iVar4) {
      uVar8 = uVar8 | 0x100800;
    }
    iVar3 = FUN_03eefed0();
    iVar4 = FUN_03eefed0();
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 8;
    }
  }
  puVar2 = StringLiteral_12744;
  uVar7 = FUN_030d522c(unaff_x20 + 0x18,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar7 & 1) == 0) {
    auVar16 = FUN_03eef6a8();
    auVar17 = FUN_03eef6a8();
    uVar7 = FUN_03f23790(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar7 & 1) == 0) {
      FUN_03eef640(&stack0x00000080);
      FUN_03eef640(&stack0x000001a0);
      in_stack_00000148 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
      in_stack_00000150 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      in_stack_00000128 = CONCAT44(fStack00000000000001ac,uStack00000000000001a8);
      in_stack_00000130 = CONCAT44(uStack00000000000001b4,uStack00000000000001b0);
      in_stack_00000140 = in_stack_00000080;
      in_stack_00000120 = in_stack_000001a0;
      uVar5 = in_stack_000001a0;
      uVar7 = FUN_03f23440(&stack0x00000140,&stack0x00000120,0);
      param_2 = (float)uVar5;
      if ((uVar7 & 1) == 0) {
        FUN_03eef95c(&stack0x00000080);
        FUN_03eef95c(&stack0x000001a0);
        in_stack_00000108 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
        in_stack_00000110 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
        in_stack_000000e8 = CONCAT44(fStack00000000000001ac,uStack00000000000001a8);
        in_stack_000000f0 = CONCAT44(uStack00000000000001b4,uStack00000000000001b0);
        in_stack_00000100 = in_stack_00000080;
        in_stack_000000e0 = in_stack_000001a0;
        uVar5 = in_stack_000001a0;
        uVar7 = FUN_03f265d4(&stack0x00000100,&stack0x000000e0,0);
        param_2 = (float)uVar5;
        if ((uVar7 & 1) == 0) {
          FUN_03eef7b4(&stack0x00000080);
          FUN_03eef7b4(&stack0x000001a0);
          in_stack_000000c8 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
          in_stack_000000a8 = CONCAT44(fStack00000000000001ac,uStack00000000000001a8);
          in_stack_000000c0 = in_stack_00000080;
          in_stack_000000d0 = uStack0000000000000090;
          in_stack_000000a0 = in_stack_000001a0;
          in_stack_000000b0 = uStack00000000000001b0;
          uVar5 = in_stack_000001a0;
          uVar7 = FUN_03f262c0(&stack0x000000c0,&stack0x000000a0,0);
          param_2 = (float)uVar5;
          uVar8 = uVar9 | 0x200;
          if ((uVar7 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_03f04394;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_03f04394:
  puVar1 = StringLiteral_12742;
  uVar7 = FUN_030d56a4(unaff_x20 + 0x20,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)StringLiteral_10121 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_03f09130();
    if ((uVar7 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = StringLiteral_12746;
  uVar7 = FUN_030d5b24(unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)puVar1);
  if ((uVar7 & 1) != 0) goto LAB_03f04788;
  if ((uVar8 >> 0xd & 1) == 0) {
    fVar12 = (float)FUN_03eef038();
    fVar11 = param_2;
    fVar14 = param_3;
    fVar15 = param_4;
    fVar13 = (float)FUN_03eef038();
    fVar10 = DAT_00b92ff0;
    fVar11 = param_2 - fVar11;
    param_4 = param_4 - fVar15;
    param_3 = (param_3 - fVar14) * (param_3 - fVar14);
    param_2 = param_4 * param_4;
    if (param_2 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar11 * fVar11 < DAT_00b92ff0)
    {
      fVar12 = (float)FUN_03eef254();
      fVar11 = param_2;
      fVar14 = param_3;
      fVar15 = param_4;
      fVar13 = (float)FUN_03eef254();
      fVar11 = param_2 - fVar11;
      param_4 = param_4 - fVar15;
      param_3 = (param_3 - fVar14) * (param_3 - fVar14);
      param_2 = param_4 * param_4;
      if (param_2 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar11 * fVar11 < fVar10) {
        fVar12 = (float)FUN_03eef348();
        fVar11 = param_2;
        fVar14 = param_3;
        fVar15 = param_4;
        fVar13 = (float)FUN_03eef348();
        fVar11 = param_2 - fVar11;
        param_4 = param_4 - fVar15;
        param_3 = (param_3 - fVar14) * (param_3 - fVar14);
        param_2 = param_4 * param_4;
        if (param_2 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar11 * fVar11 < fVar10) {
          fVar12 = (float)FUN_03eef39c();
          fVar11 = param_2;
          fVar14 = param_3;
          fVar15 = param_4;
          fVar13 = (float)FUN_03eef39c();
          fVar11 = param_2 - fVar11;
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar14) * (param_3 - fVar14);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar11 * fVar11 < fVar10)
          {
            fVar12 = (float)FUN_03eef3f0();
            fVar11 = param_2;
            fVar14 = param_3;
            fVar15 = param_4;
            fVar13 = (float)FUN_03eef3f0();
            fVar11 = param_2 - fVar11;
            param_4 = param_4 - fVar15;
            param_3 = (param_3 - fVar14) * (param_3 - fVar14);
            param_2 = param_4 * param_4;
            if (param_2 + param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar11 * fVar11 < fVar10
               ) goto LAB_03f045b0;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x2000;
  }
LAB_03f045b0:
  if ((uVar8 >> 0xb & 1) == 0) {
    FUN_03eef08c(&stack0x00000080);
    FUN_03eef08c(&stack0x00000040);
    in_stack_00000068 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
    in_stack_00000078 = CONCAT44(uStack000000000000009c,uStack0000000000000098);
    uVar5 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_00000060 = in_stack_00000080;
    in_stack_00000070 = uVar5;
    uVar7 = FUN_03f08328(&stack0x00000060,&stack0x00000040,0);
    param_2 = (float)uVar5;
    if ((uVar7 & 1) == 0) {
      auVar16 = FUN_03eef0ec();
      auVar17 = FUN_03eef0ec();
      uVar7 = FUN_03e0ee00(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                           auVar17._8_8_ & 0xffffffff,0);
      if ((uVar7 & 1) == 0) {
        auVar16 = FUN_03eef144();
        auVar17 = FUN_03eef144();
        uVar7 = FUN_03e0ee00(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          uVar5 = FUN_03eef19c();
          uVar6 = FUN_03eef19c();
          uVar7 = FUN_03e0f518(uVar5,uVar6,0);
          if ((uVar7 & 1) == 0) {
            FUN_03eef1ec(&stack0x00000080);
            FUN_03eef1ec(&stack0x00000008);
            in_stack_00000028 = CONCAT44(fStack000000000000008c,uStack0000000000000088);
            in_stack_00000020 = in_stack_00000080;
            in_stack_00000030 = uStack0000000000000090;
            uVar7 = FUN_03e0f7f4(&stack0x00000020,&stack0x00000008,0);
            if ((uVar7 & 1) == 0) goto LAB_03f046c4;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x800;
  }
LAB_03f046c4:
  uVar5 = FUN_03eef2a8();
  uVar6 = FUN_03eef2a8();
  uVar7 = FUN_03f23028(uVar5,uVar6,0);
  if ((uVar7 & 1) == 0) {
    uVar5 = FUN_03eef2f8();
    uVar6 = FUN_03eef2f8();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_03f0473c;
    uVar5 = FUN_03eef444();
    uVar6 = FUN_03eef444();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_03f0473c;
    uVar5 = FUN_03eef494();
    uVar6 = FUN_03eef494();
    uVar7 = FUN_03f23028(uVar5,uVar6,0);
    uVar9 = uVar8 | 0x880;
    if ((uVar7 & 1) == 0) {
      uVar9 = uVar8;
    }
  }
  else {
LAB_03f0473c:
    uVar9 = uVar8 | 0x880;
  }
  fVar10 = (float)FUN_03eef5f0();
  fVar11 = (float)FUN_03eef5f0();
  uVar8 = uVar9 | 0x1000;
  if (fVar10 == fVar11) {
    uVar8 = uVar9;
  }
  iVar3 = FUN_03eec7c4();
  iVar4 = FUN_03eec7c4();
  if (iVar3 != iVar4) {
    uVar8 = uVar8 | 0x48;
  }
LAB_03f04788:
  uVar7 = FUN_030d4dac(unaff_x20 + 0x10,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)puVar2);
  if ((uVar7 & 1) == 0) {
    iVar3 = FUN_03eef6fc();
    iVar4 = FUN_03eef6fc();
    if (iVar3 == iVar4) {
      fVar10 = (float)FUN_03eefc9c();
      fVar11 = (float)FUN_03eefc9c();
      uVar9 = uVar8;
      if (fVar10 != fVar11) {
        uVar9 = uVar8 | 0x808;
      }
    }
    else {
      uVar9 = uVar8 | 0x808;
    }
    fVar15 = (float)FUN_03eef9c4();
    fVar10 = param_2;
    fVar11 = param_3;
    fVar14 = param_4;
    fVar12 = (float)FUN_03eef9c4();
    uVar8 = uVar9 | 0x2000;
    if ((param_4 - fVar14) * (param_4 - fVar14) +
        (param_3 - fVar11) * (param_3 - fVar11) +
        (fVar15 - fVar12) * (fVar15 - fVar12) + (param_2 - fVar10) * (param_2 - fVar10) <
        DAT_00b92ff0) {
      uVar8 = uVar9;
    }
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar3 = FUN_03eefb0c();
      iVar4 = FUN_03eefb0c();
      if (iVar3 == iVar4) {
        iVar3 = FUN_03eefbac();
        iVar4 = FUN_03eefbac();
        if (iVar3 == iVar4) {
          iVar3 = FUN_03eefbfc();
          iVar4 = FUN_03eefbfc();
          if (iVar3 == iVar4) {
            iVar3 = FUN_03eefc4c();
            iVar4 = FUN_03eefc4c();
            if (iVar3 == iVar4) {
              iVar3 = FUN_03eefcec();
              iVar4 = FUN_03eefcec();
              if (iVar3 == iVar4) {
                iVar3 = FUN_03eefe30();
                iVar4 = FUN_03eefe30();
                if (iVar3 == iVar4) {
                  return uVar8;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
  }
  return uVar8;
}


