/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NativeUICore.UnityUIAlertDialogInterface$$SetTitle
ENTRY_POINT: 03f1907c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void VoxelBusters_EssentialKit_NativeUICore_UnityUIAlertDialogInterface__SetTitle(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long unaff_x22;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  int iStack0000000000000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  long in_stack_00000168;
  
  plVar7 = (long *)FUN_03f0d9bc();
  puVar2 = StringLiteral_11207;
  puVar1 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
  if (unaff_x20 != 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_02db76e4(&stack0x00000110,*(long *)(unaff_x20 + 0x10),*(undefined8 *)StringLiteral_11209);
    _iStack0000000000000150 = CONCAT44(uStack0000000000000124,uStack0000000000000120);
    in_stack_00000148 = in_stack_00000118;
    in_stack_00000140 = in_stack_00000110;
    in_stack_00000158 = in_stack_00000128;
    in_stack_00000160 = in_stack_00000130;
switchD_03f19140_caseD_70001:
    uVar8 = FUN_02a022e8(&stack0x00000140,*(undefined8 *)puVar2);
    if ((uVar8 & 1) != 0) {
      uVar8 = in_stack_00000158 & 0xffffffff;
      uVar4 = in_stack_00000158._4_4_;
      uVar14 = in_stack_00000160 & 0xffffffff;
      uVar6 = in_stack_00000160._4_4_;
      if (iStack0000000000000150 < 0x20021) {
        if (iStack0000000000000150 < 0x10001) {
          if (iStack0000000000000150 == 0x10000) {
            FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar14,
                         in_stack_00000160._4_4_,0);
            uVar4 = uStack0000000000000120;
            uVar3 = in_stack_00000118;
            uVar10 = in_stack_00000110;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
                  goto FUN_03f193e0;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0xf);
FUN_03f193e0:
            in_stack_00000110 = uVar10;
            in_stack_00000118 = uVar3;
            uStack0000000000000120 = uVar4;
            (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
          }
        }
        else {
          switch(iStack0000000000000150) {
          case 0x20003:
            uVar10 = FUN_03f24144(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                  goto FUN_03f1a174;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,5);
FUN_03f1a174:
            (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
            break;
          case 0x20004:
            uVar10 = FUN_03f24144(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 7) * 0x10 + 0x138);
                  goto LAB_03f1a198;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,7);
LAB_03f1a198:
            (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
            break;
          case 0x20005:
            uVar10 = FUN_03f24144(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                  goto FUN_03f1a0dc;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,9);
FUN_03f1a0dc:
            (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
            break;
          case 0x20006:
            uVar10 = FUN_03f24144(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
                  goto LAB_03f1a128;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0xd);
LAB_03f1a128:
            (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
            break;
          case 0x20007:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xe) * 0x10 + 0x138);
                  goto LAB_03f1a064;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0xe);
LAB_03f1a064:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20008:
          case 0x20009:
          case 0x2000a:
          case 0x2000d:
          case 0x2000f:
          case 0x20015:
          case 0x20016:
          case 0x20017:
          case 0x20018:
          case 0x2001d:
            break;
          case 0x2000b:
            uVar10 = FUN_03f24144(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x15) * 0x10 + 0x138);
                  goto LAB_03f1a1e4;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x15);
LAB_03f1a1e4:
            (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
            break;
          case 0x2000c:
            uVar10 = FUN_03f24144(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x16) * 0x10 + 0x138);
                  goto LAB_03f1a230;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x16);
LAB_03f1a230:
            (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
            break;
          case 0x2000e:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x18) * 0x10 + 0x138);
                  goto LAB_03f1a14c;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x18);
LAB_03f1a14c:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20010:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x19) * 0x10 + 0x138);
                  goto LAB_03f1a2a4;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x19);
LAB_03f1a2a4:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20011:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1a) * 0x10 + 0x138);
                  goto LAB_03f1a0b4;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x1a);
LAB_03f1a0b4:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20012:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
                  goto LAB_03f1a27c;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x1b);
LAB_03f1a27c:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20013:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1c) * 0x10 + 0x138);
                  goto LAB_03f1a03c;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x1c);
LAB_03f1a03c:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20014:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1d) * 0x10 + 0x138);
                  goto LAB_03f1a08c;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x1d);
LAB_03f1a08c:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20019:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x23) * 0x10 + 0x138);
                  goto LAB_03f1a208;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x23);
LAB_03f1a208:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x2001a:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x24) * 0x10 + 0x138);
                  goto LAB_03f1a014;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x24);
LAB_03f1a014:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x2001b:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x25) * 0x10 + 0x138);
                  goto LAB_03f1a100;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x25);
LAB_03f1a100:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x2001c:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x27) * 0x10 + 0x138);
                  goto LAB_03f19fec;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x27);
LAB_03f19fec:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x2001e:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x29) * 0x10 + 0x138);
                  goto LAB_03f1a1bc;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x29);
LAB_03f1a1bc:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x2001f:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x2d) * 0x10 + 0x138);
                  goto LAB_03f1a254;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x2d);
LAB_03f1a254:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          case 0x20020:
            auVar15 = FUN_03f24884(uVar8,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar11 = *plVar7;
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x36) * 0x10 + 0x138);
                  goto LAB_03f1a2cc;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x36);
LAB_03f1a2cc:
            (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            break;
          default:
            if (iStack0000000000000150 == 0x10001) {
              auVar15 = FUN_03f24884(uVar8,0);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              lVar11 = *plVar7;
              uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x17) * 0x10 + 0x138);
                    goto LAB_03f1a2f4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x17);
LAB_03f1a2f4:
              (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
            }
          }
        }
      }
      else if (iStack0000000000000150 < 0x40003) {
        if (iStack0000000000000150 == 0x30002) {
          FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar14,in_stack_00000160._4_4_
                       ,0);
          uVar4 = uStack0000000000000120;
          uVar3 = in_stack_00000118;
          uVar10 = in_stack_00000110;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x31) * 0x10 + 0x138);
                goto LAB_03f1966c;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x31);
LAB_03f1966c:
          in_stack_00000110 = uVar10;
          in_stack_00000118 = uVar3;
          uStack0000000000000120 = uVar4;
          (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
        }
        else if (iStack0000000000000150 == 0x40002) {
          FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar14,in_stack_00000160._4_4_
                       ,0);
          uVar5 = uStack0000000000000120;
          uVar3 = in_stack_00000118;
          uVar10 = in_stack_00000110;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                goto LAB_03f195cc;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,6);
LAB_03f195cc:
          in_stack_00000110 = uVar10;
          in_stack_00000118 = uVar3;
          uStack0000000000000120 = uVar5;
          (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
          FUN_03f23c40(&stack0x00000110,uVar8,uVar4,uVar14,uVar6,0);
          uVar5 = uStack0000000000000120;
          uVar3 = in_stack_00000118;
          uVar10 = in_stack_00000110;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                goto VoxelBusters_EssentialKit_NativeUICore_UnityUIDatePickerInterface__SetKind;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,10);
VoxelBusters_EssentialKit_NativeUICore_UnityUIDatePickerInterface__SetKind:
          in_stack_00000110 = uVar10;
          in_stack_00000118 = uVar3;
          uStack0000000000000120 = uVar5;
          (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
          FUN_03f23c40(&stack0x00000110,uVar8,uVar4,uVar14,uVar6,0);
          uVar5 = uStack0000000000000120;
          uVar3 = in_stack_00000118;
          uVar10 = in_stack_00000110;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                goto LAB_03f19744;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,8);
LAB_03f19744:
          in_stack_00000110 = uVar10;
          in_stack_00000118 = uVar3;
          uStack0000000000000120 = uVar5;
          (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
          FUN_03f23c40(&stack0x00000110,uVar8,uVar4,uVar14,uVar6,0);
          uVar4 = uStack0000000000000120;
          uVar3 = in_stack_00000118;
          uVar10 = in_stack_00000110;
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_03f197e4;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,2);
LAB_03f197e4:
          in_stack_00000110 = uVar10;
          in_stack_00000118 = uVar3;
          uStack0000000000000120 = uVar4;
          (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
        }
      }
      else {
        switch(iStack0000000000000150) {
        case 0x70000:
          FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar14,in_stack_00000160._4_4_
                       ,0);
          uVar4 = uStack0000000000000120;
          uVar3 = in_stack_00000118;
          uVar10 = in_stack_00000110;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03f19f68;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0);
LAB_03f19f68:
          in_stack_00000110 = uVar10;
          in_stack_00000118 = uVar3;
          uStack0000000000000120 = uVar4;
          (*(code *)*puVar9)(plVar7,&stack0x00000110,puVar9[1]);
          break;
        case 0x70007:
          auVar15 = FUN_03f24884(uVar8,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto 
                VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback__EndInvoke
                ;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,3);
VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback__EndInvoke:
          (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
          break;
        case 0x70008:
          auVar15 = FUN_03f24884(uVar8,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_03f19f1c;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,4);
LAB_03f19f1c:
          (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
          break;
        case 0x7000c:
          auVar15 = FUN_03f24884(uVar8,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
                goto LAB_03f19f44;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0xb);
LAB_03f19f44:
          (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
          break;
        case 0x7000d:
          auVar15 = FUN_03f24884(uVar8,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                goto LAB_03f19ef4;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0xc);
LAB_03f19ef4:
          (*(code *)*puVar9)(plVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar9[1]);
          break;
        case 0x7000e:
          uVar10 = FUN_03f24144(uVar8,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x21) * 0x10 + 0x138);
                goto LAB_03f19fc8;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0x21);
LAB_03f19fc8:
          (*(code *)*puVar9)(plVar7,uVar10,puVar9[1]);
        }
      }
      goto switchD_03f19140_caseD_70001;
    }
    FUN_02a022e4(&stack0x00000140,*(undefined8 *)StringLiteral_11206);
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000168) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


