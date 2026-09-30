/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.PreLoginTelemetrySettingsDownloader$$StopSettingsUpdateTimer
ENTRY_POINT: 04fcdb78
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14;frame_or_lifecycle_behavior
*/


void Niantic_Platform_Analytics_Telemetry_PreLoginTelemetrySettingsDownloader__StopSettingsUpdateTimer
               (ulong param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar14;
  long lVar15;
  long unaff_x19;
  ulong unaff_x21;
  undefined4 unaff_w22;
  long unaff_x24;
  double dVar16;
  undefined1 auVar17 [16];
  double in_stack_00000010;
  long in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined *puVar13;
  
  puVar13 = PTR_DAT_065fdf30;
  if ((param_1 & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(unaff_x19 + 0xbc) == 1;
  }
  iVar9 = ((uint)unaff_x21 & 0xffff) - 0x30;
  plVar2 = (long *)(unaff_x19 + 0xb0);
  if ((iVar9 == 0) && (1 < *(int *)(unaff_x19 + 0xbc))) {
    lVar15 = *plVar2;
    if (lVar15 == 0)
    goto 
    Niantic_Platform_Analytics_Telemetry_PreLoginTelemetrySettingsDownloader__UpdateTelemetrySetting
    ;
    uVar1 = *(int *)(unaff_x19 + 0xb8) + 1;
    if (*(uint *)(lVar15 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    sVar4 = *(short *)(lVar15 + (long)(int)uVar1 * 2 + 0x20);
    bVar7 = false;
    if ((sVar4 != 0x2e) && (bVar7 = false, sVar4 != 0x65)) {
      bVar7 = sVar4 != 0x45;
    }
  }
  else {
    bVar7 = false;
  }
  switch(unaff_w22) {
  case 0:
  case 2:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar15 = (unaff_x21 & 0xffff) - 0x30;
    }
    else {
      if (bVar7) {
        lVar15 = FUN_05016e14(plVar2,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar10 = FUN_04db8e94(lVar15,*(undefined8 *)PTR_DAT_065fe9b0,5,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_04eaf3f8(lVar15,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_04eaf3f8(lVar15,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04ffd910(uVar11,0);
        goto LAB_04fce3d8;
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_065fdf30 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iVar9 = FUN_05001408(uVar11,uVar8,uVar3,&stack0x00000018,0);
      lVar15 = in_stack_00000018;
      if (iVar9 == 2) {
        lVar15 = FUN_05016e14(plVar2,0);
        if (lVar15 == 0) {
Niantic_Platform_Analytics_Telemetry_PreLoginTelemetrySettingsDownloader__UpdateTelemetrySetting:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(int *)(lVar15 + 0x10) < 0x17d) {
          if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_04ef45ec(0);
          FUN_04fcea88(lVar15,uVar11);
          goto LAB_04fce3d8;
        }
        thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
        FUN_028be084();
        uVar11 = FUN_04ef45ec(0);
        uVar14 = FUN_05016e14(plVar2,0);
        puVar13 = PTR_DAT_065fe9e8;
        goto LAB_04fce570;
      }
      if (iVar9 != 1) {
        if (*(int *)(unaff_x19 + 0x5c) == 1) {
          uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
          uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
          uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          iVar9 = FUN_05001578(uVar11,uVar8,uVar3,&stack0x00000048,0);
          uVar11 = in_stack_00000048;
          uVar14 = in_stack_00000050;
          goto joined_r0x04fce0b4;
        }
        uVar11 = FUN_05016e14(plVar2,0);
        if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065dc0d8);
        }
        uVar14 = FUN_04ef45ec(0);
        uVar10 = FUN_04f19330(uVar11,0xa7,uVar14,&stack0x00000010,0);
        dVar16 = in_stack_00000010;
        if ((uVar10 & 1) != 0) goto LAB_04fce3b4;
        goto LAB_04fcdf70;
      }
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
    }
    FUN_04ffd910(lVar15,0);
    goto LAB_04fce3d8;
  case 1:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
    }
    else {
      if (bVar7) {
        lVar15 = FUN_05016e14(plVar2,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar10 = FUN_04db8e94(lVar15,*(undefined8 *)PTR_DAT_065fe9b0,5,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04eaf250(lVar15,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_04eaf250(lVar15,0x10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04ffd700(uVar8,0);
        goto LAB_04fce3d8;
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
      uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
      if (*(int *)(*(long *)PTR_DAT_065fdf30 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      iVar9 = FUN_0500128c(uVar11,uVar8,uVar3,(long)&stack0x00000028 + 4,0);
      if (iVar9 != 1) {
        if (iVar9 == 2) {
          thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
          FUN_028be084();
          uVar11 = FUN_04ef45ec(0);
          uVar14 = FUN_05016e14(plVar2,0);
          puVar13 = PTR_DAT_065fe9c8;
        }
        else {
          thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
          FUN_028be084();
          uVar11 = FUN_04ef45ec(0);
          uVar14 = FUN_05016e14(plVar2,0);
          puVar13 = PTR_DAT_065fe9e0;
        }
        goto LAB_04fce570;
      }
      iVar9 = in_stack_00000028._4_4_;
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
    }
    FUN_04ffd700(iVar9,0);
    goto LAB_04fce3d8;
  default:
    thunk_FUN_02c7737c(PTR_DAT_065fe9c0);
    uVar11 = FUN_04fbd0d4();
    goto LAB_04fce594;
  case 4:
    lVar15 = FUN_05016e14(plVar2,0);
    if (bVar7) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar10 = FUN_04db8e94(lVar15,*(undefined8 *)PTR_DAT_065fe9b0,5,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04eaf3f8(lVar15,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04eaf3f8(lVar15,0x10,0);
      }
      goto LAB_04fce3d8;
    }
    if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar11 = FUN_04ef45ec(0);
    uVar10 = FUN_04f19330(lVar15,0xa7,uVar11,&stack0x00000030,0);
    if ((uVar10 & 1) != 0) goto LAB_04fce3d8;
LAB_04fcdf70:
    thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
    FUN_028be084();
    uVar11 = FUN_04ef45ec(0);
    uVar14 = FUN_05016e14(plVar2,0);
    puVar13 = PTR_DAT_065fe9b8;
LAB_04fce570:
    uVar12 = thunk_FUN_02c7737c(puVar13);
    FUN_05017038(uVar12,uVar11,uVar14,0);
    uVar11 = FUN_04fcea0c();
LAB_04fce594:
    uVar14 = thunk_FUN_02c7737c(PTR_DAT_065fe9f0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar11,uVar14);
  case 5:
    break;
  case 8:
    if (bVar6) {
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      dVar16 = (double)((uint)unaff_x21 & 0xffff) + -48.0;
    }
    else {
      lVar15 = FUN_05016e14(plVar2,0);
      if (bVar7) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar10 = FUN_04db8e94(lVar15,*(undefined8 *)PTR_DAT_065fe9b0,5,0);
        puVar13 = PTR_DAT_065cd840;
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_04eaf3f8(lVar15,8,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_04eaf3f8(lVar15,0x10,0);
        }
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar11 = FUN_04eacf54(uVar11,0);
        if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04ffdbb0(uVar11,0);
        goto LAB_04fce3d8;
      }
      if (*(int *)(*(long *)PTR_DAT_065dc0d8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar11 = FUN_04ef45ec(0);
      uVar10 = FUN_04f19330(lVar15,0xa7,uVar11,&stack0x00000020,0);
      dVar16 = in_stack_00000020;
      if ((uVar10 & 1) == 0) {
        thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
        FUN_028be084();
        uVar11 = FUN_04ef45ec(0);
        uVar14 = FUN_05016e14(plVar2,0);
        puVar13 = PTR_DAT_065fe9d8;
        goto LAB_04fce570;
      }
LAB_04fce3b4:
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
    }
    FUN_04ffdbb0(dVar16,0);
    goto LAB_04fce3d8;
  }
  if (bVar6) {
    if (*(int *)(*(long *)PTR_DAT_065dc560 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    auVar17 = FUN_04f90134(unaff_x21 & 0xffffffff,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    FUN_04f8bac8(&stack0x00000038,0x30,0);
    auVar17 = FUN_04f9059c(auVar17._0_8_,auVar17._8_8_,in_stack_00000038,in_stack_00000040,0);
    if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
  }
  else {
    if (bVar7) {
      lVar15 = FUN_05016e14(plVar2,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar10 = FUN_04db8e94(lVar15,*(undefined8 *)PTR_DAT_065fe9b0,5,0);
      puVar13 = PTR_DAT_065cd840;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar11 = FUN_04eaf3f8(lVar15,8,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_065cd840 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar11 = FUN_04eaf3f8(lVar15,0x10,0);
      }
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      auVar17 = FUN_04ead578(uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04ffdb2c(auVar17._0_8_,auVar17._8_8_,0);
      goto LAB_04fce3d8;
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
    uVar8 = *(undefined4 *)(unaff_x19 + 0xb8);
    uVar3 = *(undefined4 *)(unaff_x19 + 0xbc);
    if (*(int *)(*(long *)PTR_DAT_065fdf30 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    iVar9 = FUN_05001578(uVar11,uVar8,uVar3,&stack0x00000058,0);
    uVar11 = in_stack_00000058;
    uVar14 = in_stack_00000060;
joined_r0x04fce0b4:
    if (iVar9 != 1) {
      thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
      FUN_028be084();
      uVar11 = FUN_04ef45ec(0);
      uVar14 = FUN_05016e14(plVar2,0);
      puVar13 = PTR_DAT_065fe9d0;
      goto LAB_04fce570;
    }
    auVar5._8_8_ = uVar14;
    auVar5._0_8_ = uVar11;
    auVar17._8_8_ = uVar14;
    auVar17._0_8_ = uVar11;
    if (*(int *)(*(long *)PTR_DAT_065fe8c8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      auVar17 = auVar5;
    }
  }
  FUN_04ffdb2c(auVar17._0_8_,auVar17._8_8_,0);
LAB_04fce3d8:
  *(undefined4 *)(unaff_x19 + 0xa8) = 0;
  *plVar2 = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  FUN_04fbd6c8();
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000068) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


