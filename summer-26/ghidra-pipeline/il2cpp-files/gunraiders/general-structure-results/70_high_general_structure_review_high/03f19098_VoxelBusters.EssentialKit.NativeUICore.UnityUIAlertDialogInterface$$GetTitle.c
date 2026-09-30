/*
FUNCTION_NAME: VoxelBusters.EssentialKit.NativeUICore.UnityUIAlertDialogInterface$$GetTitle
ENTRY_POINT: 03f19098
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


void VoxelBusters_EssentialKit_NativeUICore_UnityUIAlertDialogInterface__GetTitle
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  ulong uVar13;
  long in_stack_00000008;
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
  
  puVar2 = StringLiteral_11207;
  puVar1 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                    /* try { // try from 03f19098 to 040190bf has its CatchHandler @ 03f1936c */
  FUN_02db76e4(&stack0x00000110,param_2,**(undefined8 **)(param_1 + 0x990));
  _iStack0000000000000150 = CONCAT44(uStack0000000000000124,uStack0000000000000120);
  in_stack_00000148 = in_stack_00000118;
  in_stack_00000140 = in_stack_00000110;
  in_stack_00000158 = in_stack_00000128;
  in_stack_00000160 = in_stack_00000130;
switchD_03f19140_caseD_70001:
  do {
    uVar8 = FUN_02a022e8(&stack0x00000140,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      FUN_02a022e4(&stack0x00000140,*(undefined8 *)StringLiteral_11206);
      if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000168) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar8 = in_stack_00000158 & 0xffffffff;
    uVar5 = in_stack_00000158._4_4_;
    uVar13 = in_stack_00000160 & 0xffffffff;
    uVar7 = in_stack_00000160._4_4_;
    if (0x20020 < iStack0000000000000150) {
      if (iStack0000000000000150 < 0x40003) {
        if (iStack0000000000000150 == 0x30002) {
          FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar13,in_stack_00000160._4_4_
                       ,0);
          uVar5 = uStack0000000000000120;
          uVar4 = in_stack_00000118;
          uVar3 = in_stack_00000110;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x31) * 0x10 + 0x138);
                goto LAB_03f1966c;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1966c:
          in_stack_00000110 = uVar3;
          in_stack_00000118 = uVar4;
          uStack0000000000000120 = uVar5;
          (*(code *)*puVar9)();
        }
        else if (iStack0000000000000150 == 0x40002) {
          FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar13,in_stack_00000160._4_4_
                       ,0);
          uVar6 = uStack0000000000000120;
          uVar4 = in_stack_00000118;
          uVar3 = in_stack_00000110;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138);
                goto LAB_03f195cc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f195cc:
          in_stack_00000110 = uVar3;
          in_stack_00000118 = uVar4;
          uStack0000000000000120 = uVar6;
          (*(code *)*puVar9)();
          FUN_03f23c40(&stack0x00000110,uVar8,uVar5,uVar13,uVar7,0);
          uVar6 = uStack0000000000000120;
          uVar4 = in_stack_00000118;
          uVar3 = in_stack_00000110;
          lVar10 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                goto VoxelBusters_EssentialKit_NativeUICore_UnityUIDatePickerInterface__SetKind;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
VoxelBusters_EssentialKit_NativeUICore_UnityUIDatePickerInterface__SetKind:
          in_stack_00000110 = uVar3;
          in_stack_00000118 = uVar4;
          uStack0000000000000120 = uVar6;
          (*(code *)*puVar9)();
          FUN_03f23c40(&stack0x00000110,uVar8,uVar5,uVar13,uVar7,0);
          uVar6 = uStack0000000000000120;
          uVar4 = in_stack_00000118;
          uVar3 = in_stack_00000110;
          lVar10 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                goto LAB_03f19744;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19744:
          in_stack_00000110 = uVar3;
          in_stack_00000118 = uVar4;
          uStack0000000000000120 = uVar6;
          (*(code *)*puVar9)();
          FUN_03f23c40(&stack0x00000110,uVar8,uVar5,uVar13,uVar7,0);
          uVar5 = uStack0000000000000120;
          uVar4 = in_stack_00000118;
          uVar3 = in_stack_00000110;
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_03f197e4;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f197e4:
          in_stack_00000110 = uVar3;
          in_stack_00000118 = uVar4;
          uStack0000000000000120 = uVar5;
          (*(code *)*puVar9)();
        }
      }
      else {
        switch(iStack0000000000000150) {
        case 0x70000:
          FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar13,in_stack_00000160._4_4_
                       ,0);
          uVar5 = uStack0000000000000120;
          uVar4 = in_stack_00000118;
          uVar3 = in_stack_00000110;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03f19f68;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19f68:
          in_stack_00000110 = uVar3;
          in_stack_00000118 = uVar4;
          uStack0000000000000120 = uVar5;
          (*(code *)*puVar9)();
          break;
        case 0x70007:
          FUN_03f24884(uVar8,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto 
                VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback__EndInvoke
                ;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback__EndInvoke:
          (*(code *)*puVar9)();
          break;
        case 0x70008:
          FUN_03f24884(uVar8,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                goto LAB_03f19f1c;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19f1c:
          (*(code *)*puVar9)();
          break;
        case 0x7000c:
          FUN_03f24884(uVar8,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                goto LAB_03f19f44;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19f44:
          (*(code *)*puVar9)();
          break;
        case 0x7000d:
          FUN_03f24884(uVar8,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                goto LAB_03f19ef4;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19ef4:
          (*(code *)*puVar9)();
          break;
        case 0x7000e:
          FUN_03f24144(uVar8,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x21) * 0x10 + 0x138);
                goto LAB_03f19fc8;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19fc8:
          (*(code *)*puVar9)();
        }
      }
      goto switchD_03f19140_caseD_70001;
    }
    if (iStack0000000000000150 < 0x10001) {
      if (iStack0000000000000150 == 0x10000) {
        FUN_03f23c40(&stack0x00000110,uVar8,in_stack_00000158._4_4_,uVar13,in_stack_00000160._4_4_,0
                    );
        uVar5 = uStack0000000000000120;
        uVar4 = in_stack_00000118;
        uVar3 = in_stack_00000110;
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
              goto FUN_03f193e0;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
FUN_03f193e0:
        in_stack_00000110 = uVar3;
        in_stack_00000118 = uVar4;
        uStack0000000000000120 = uVar5;
        (*(code *)*puVar9)();
      }
    }
    else {
      switch(iStack0000000000000150) {
      case 0x20003:
        FUN_03f24144(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto FUN_03f1a174;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
FUN_03f1a174:
        (*(code *)*puVar9)();
        break;
      case 0x20004:
        FUN_03f24144(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
              goto LAB_03f1a198;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a198:
        (*(code *)*puVar9)();
        break;
      case 0x20005:
        FUN_03f24144(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
              goto FUN_03f1a0dc;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
FUN_03f1a0dc:
        (*(code *)*puVar9)();
        break;
      case 0x20006:
        FUN_03f24144(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
              goto LAB_03f1a128;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a128:
        (*(code *)*puVar9)();
        break;
      case 0x20007:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
              goto LAB_03f1a064;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a064:
        (*(code *)*puVar9)();
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
        FUN_03f24144(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
              goto LAB_03f1a1e4;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a1e4:
        (*(code *)*puVar9)();
        break;
      case 0x2000c:
        FUN_03f24144(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x16) * 0x10 + 0x138);
              goto LAB_03f1a230;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a230:
        (*(code *)*puVar9)();
        break;
      case 0x2000e:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x18) * 0x10 + 0x138);
              goto LAB_03f1a14c;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a14c:
        (*(code *)*puVar9)();
        break;
      case 0x20010:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x19) * 0x10 + 0x138);
              goto LAB_03f1a2a4;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a2a4:
        (*(code *)*puVar9)();
        break;
      case 0x20011:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1a) * 0x10 + 0x138);
              goto LAB_03f1a0b4;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a0b4:
        (*(code *)*puVar9)();
        break;
      case 0x20012:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1b) * 0x10 + 0x138);
              goto LAB_03f1a27c;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a27c:
        (*(code *)*puVar9)();
        break;
      case 0x20013:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1c) * 0x10 + 0x138);
              goto LAB_03f1a03c;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a03c:
        (*(code *)*puVar9)();
        break;
      case 0x20014:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1d) * 0x10 + 0x138);
              goto LAB_03f1a08c;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a08c:
        (*(code *)*puVar9)();
        break;
      case 0x20019:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
              goto LAB_03f1a208;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a208:
        (*(code *)*puVar9)();
        break;
      case 0x2001a:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x24) * 0x10 + 0x138);
              goto LAB_03f1a014;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a014:
        (*(code *)*puVar9)();
        break;
      case 0x2001b:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
              goto LAB_03f1a100;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a100:
        (*(code *)*puVar9)();
        break;
      case 0x2001c:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
              goto LAB_03f19fec;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f19fec:
        (*(code *)*puVar9)();
        break;
      case 0x2001e:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x29) * 0x10 + 0x138);
              goto LAB_03f1a1bc;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a1bc:
        (*(code *)*puVar9)();
        break;
      case 0x2001f:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x2d) * 0x10 + 0x138);
              goto LAB_03f1a254;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a254:
        (*(code *)*puVar9)();
        break;
      case 0x20020:
        FUN_03f24884(uVar8,0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar10 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x36) * 0x10 + 0x138);
              goto LAB_03f1a2cc;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a2cc:
        (*(code *)*puVar9)();
        break;
      default:
        if (iStack0000000000000150 == 0x10001) {
          FUN_03f24884(uVar8,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
                goto LAB_03f1a2f4;
              }
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498();
LAB_03f1a2f4:
          (*(code *)*puVar9)();
        }
      }
    }
  } while( true );
}


