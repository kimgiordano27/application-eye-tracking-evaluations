/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeEnum
ENTRY_POINT: 06d0f31c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeEnum(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x27;
  long lVar20;
  undefined8 *unaff_x28;
  int *piVar21;
  undefined8 *unaff_x29;
  undefined1 auVar22 [16];
  long in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  do {
    FUN_085a48e4(param_1,param_2);
LAB_06d0ee1c:
    unaff_w25 = unaff_w25 + 1;
    lVar15 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e8ccf8) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_06d0ee70;
        }
        uVar18 = uVar18 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar18 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06d0ee70:
    iVar5 = (*(code *)*puVar8)();
    if (iVar5 <= unaff_w25) {
      if (*in_stack_00000020 == 0) goto LAB_06d0fc04;
      FUN_0695a664(&stack0x00000030,*in_stack_00000020,*(undefined8 *)PTR_DAT_08e8cca8);
      puVar4 = PTR_DAT_08e8cdc8;
      puVar3 = PTR_DAT_08e8cce0;
      in_stack_00000098 = in_stack_00000038;
      in_stack_00000090 = in_stack_00000030;
      in_stack_000000a8 = in_stack_00000048;
      in_stack_000000a0 = in_stack_00000040;
      in_stack_000000b0 = in_stack_00000050;
      while (uVar18 = FUN_04a5bfc8(&stack0x00000090,*(undefined8 *)puVar3),
            lVar15 = in_stack_000000a8, (uVar18 & 1) != 0) {
        lVar16 = *(long *)puVar4;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar16);
          lVar16 = *(long *)puVar4;
        }
        lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
        if (lVar20 == 0) {
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar16);
            lVar16 = *(long *)puVar4;
          }
          uVar9 = **(undefined8 **)(lVar16 + 0xb8);
          lVar20 = thunk_FUN_03cf5234(*unaff_x28);
          FUN_0672cf18(lVar20,uVar9,*unaff_x29,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          *plVar10 = lVar20;
          thunk_FUN_03d233cc(plVar10,lVar20);
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_050b58d0(lVar15,lVar20,*unaff_x27);
      }
      FUN_04a5c0ec(&stack0x00000090,*(undefined8 *)PTR_DAT_08e8ccc8);
      iVar5 = 0;
      do {
        lVar15 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 == 0) {
LAB_06d0f454:
          puVar8 = (undefined8 *)FUN_03cf1348();
        }
        else {
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_08e8ccf8) {
            uVar18 = uVar18 - 1;
            piVar21 = piVar21 + 4;
            if (uVar18 == 0) goto LAB_06d0f454;
          }
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
        }
        iVar7 = (*(code *)*puVar8)();
        if (iVar7 <= iVar5) {
          if ((*in_stack_00000028 == 0) || (*in_stack_00000018 == 0)) goto LAB_06d0fc04;
          iVar7 = *(int *)(*in_stack_00000028 + 0x18);
          iVar1 = *(int *)(in_stack_00000010 + 0x28);
          iVar5 = FUN_06959edc(*in_stack_00000018,*(undefined8 *)PTR_DAT_08e8ccb0);
          lVar15 = *unaff_x19;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          iVar5 = iVar7 + iVar1 + iVar5;
          if (uVar18 == 0) {
LAB_06d0fad8:
            puVar8 = (undefined8 *)FUN_03cf1348();
          }
          else {
            piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_08e8ccf8) {
              uVar18 = uVar18 - 1;
              piVar21 = piVar21 + 4;
              if (uVar18 == 0) goto LAB_06d0fad8;
            }
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          }
          iVar7 = (*(code *)*puVar8)();
          if (iVar5 == iVar7) {
            return;
          }
          lVar15 = *unaff_x19;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 != 0) {
            piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e8ccf8) {
                puVar8 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_06d0fb5c;
              }
              uVar18 = uVar18 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar18 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06d0fb5c:
          uVar6 = (*(code *)*puVar8)();
          puVar3 = PTR_DAT_08e699d0;
          in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,uVar6);
          uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000030);
          in_stack_00000058 = CONCAT44(in_stack_00000058._4_4_,iVar5);
          uVar13 = thunk_FUN_03cf4e64(*(undefined8 *)puVar3,&stack0x00000058);
          uVar9 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8cdd8,uVar9,uVar13,0);
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
          }
          FUN_085a48e4(uVar9,0);
          return;
        }
        lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cdb0);
        FUN_07145224(lVar15,0);
        lVar16 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) {
LAB_06d0f4d8:
          puVar8 = (undefined8 *)FUN_03cf1348();
        }
        else {
          piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_08e8cd00) {
            uVar18 = uVar18 - 1;
            piVar21 = piVar21 + 4;
            if (uVar18 == 0) goto LAB_06d0f4d8;
          }
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
        }
        uVar9 = (*(code *)*puVar8)();
        if (*(int *)(*(long *)PTR_DAT_08e8cc50 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e8cc50);
        }
        FUN_06d164e8(&stack0x00000058,uVar9);
        in_stack_00000038 = in_stack_00000060;
        in_stack_00000030 = in_stack_00000058;
        in_stack_00000040 = in_stack_00000068;
        if (lVar15 == 0) {
LAB_06d0fc04:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        *(undefined8 *)(lVar15 + 0x20) = in_stack_00000068;
        *(undefined8 *)(lVar15 + 0x18) = in_stack_00000060;
        *(undefined8 *)(lVar15 + 0x10) = in_stack_00000058;
        thunk_FUN_03d233cc(lVar15 + 0x18,0);
        if (*(char *)(lVar15 + 0x10) != '\0') {
          lVar16 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a938);
          FUN_051c01c0(lVar16,*(undefined8 *)PTR_DAT_08e6a940);
          lVar20 = FUN_056c7700(lVar15 + 0x10,*(undefined8 *)PTR_DAT_08e8cd80);
          if (lVar20 == 0) goto LAB_06d0fc04;
          FUN_05429294(&stack0x00000030,lVar20,*(undefined8 *)PTR_DAT_08e8cd30);
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          while (uVar18 = FUN_04a1bc6c(&stack0x00000070,*(undefined8 *)PTR_DAT_08e8ccd8),
                (uVar18 & 1) != 0) {
            lVar20 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cdc0);
            FUN_07145224(lVar20,0);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            plVar10 = (long *)(lVar20 + 0x20);
            *plVar10 = lVar15;
            thunk_FUN_03d233cc(plVar10,lVar15);
            piVar21 = (int *)(lVar20 + 0x10);
            *(long *)(lVar20 + 0x18) = in_stack_00000088;
            *(undefined8 *)piVar21 = in_stack_00000080;
            thunk_FUN_03d233cc((long *)(lVar20 + 0x18),0);
            lVar17 = *unaff_x21;
            uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cd90);
            FUN_0582bb78(uVar9,lVar20,*(undefined8 *)PTR_DAT_08e8cdb8,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            iVar7 = FUN_05426770(lVar17,uVar9,*(undefined8 *)PTR_DAT_08e8cd28);
            if (iVar7 < 0) {
              plVar11 = *(long **)(lVar20 + 0x18);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar9 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              uVar13 = *(undefined8 *)PTR_DAT_08e8cde0;
              if (*piVar21 < 100) {
                uVar12 = FUN_070fde54(piVar21,0);
              }
              else {
                uVar12 = *(undefined8 *)PTR_DAT_08e69460;
              }
              lVar20 = *plVar10;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              in_stack_00000040 = *(undefined8 *)(lVar20 + 0x20);
              in_stack_00000038 = *(undefined8 *)(lVar20 + 0x18);
              in_stack_00000030 = *(undefined8 *)(lVar20 + 0x10);
              uVar14 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8cd88,&stack0x00000030);
              uVar9 = FUN_06f75284(uVar13,uVar9,uVar12,uVar14,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              FUN_085a48e4(uVar9,0);
            }
            else if (*piVar21 == 100) {
              if (*in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar6 = FUN_051c0724(*in_stack_00000028,iVar7,*(undefined8 *)PTR_DAT_08e6ad58);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar20 = *(long *)(lVar16 + 0x10);
              lVar17 = *(long *)PTR_DAT_08e6a9a0;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar2 = *(uint *)(lVar16 + 0x18);
              if (uVar2 < *(uint *)(lVar20 + 0x18)) {
LAB_06d0f8fc:
                *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar20 + (long)(int)uVar2 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_051c0a14(lVar16,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              auVar22 = FUN_05425bb4(*unaff_x21,iVar7,*(undefined8 *)PTR_DAT_08e8cd48);
              lVar20 = auVar22._8_8_;
              in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*piVar21);
              uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000030);
              uVar9 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e75988,auVar22._0_8_,uVar9,0);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if (*(int *)(lVar20 + 0x10) == 0) {
                uVar13 = *(undefined8 *)PTR_DAT_08e69460;
              }
              else {
                uVar13 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e6fc38,lVar20,0);
              }
              FUN_06f683f8(uVar9,uVar13,0);
              lVar20 = *unaff_x19;
              uVar18 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar18 != 0) {
                piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e8cd00) {
                    puVar8 = (undefined8 *)(lVar20 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                    goto LAB_06d0f8b4;
                  }
                  uVar18 = uVar18 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar18 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06d0f8b4:
              uVar6 = (*(code *)*puVar8)();
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              lVar20 = *(long *)(lVar16 + 0x10);
              lVar17 = *(long *)PTR_DAT_08e6a9a0;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar2 = *(uint *)(lVar16 + 0x18);
              if (uVar2 < *(uint *)(lVar20 + 0x18)) goto LAB_06d0f8fc;
              FUN_051c0a14(lVar16,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_04a1bc68(&stack0x00000070,*(undefined8 *)PTR_DAT_08e8ccd0);
          if (*in_stack_00000018 == 0) goto LAB_06d0fc04;
          FUN_0695a22c(*in_stack_00000018,iVar5,lVar16,*(undefined8 *)PTR_DAT_08e85df0);
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    lVar15 = thunk_FUN_03cf5234(*unaff_x24);
    FUN_07145224(lVar15,0);
    lVar16 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e8cd00) {
          puVar8 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_06d0eeec;
        }
        uVar18 = uVar18 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar18 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06d0eeec:
    uVar9 = (*(code *)*puVar8)();
    if (*(int *)(*(long *)PTR_DAT_08e8cc50 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e8cc50);
    }
    FUN_06d162ec(&stack0x00000058,uVar9,0);
    in_stack_00000038 = in_stack_00000060;
    in_stack_00000030 = in_stack_00000058;
    in_stack_00000040 = in_stack_00000068;
    if (lVar15 == 0) goto LAB_06d0fc04;
    *(undefined8 *)(lVar15 + 0x20) = in_stack_00000068;
    *(undefined8 *)(lVar15 + 0x18) = in_stack_00000060;
    *(undefined8 *)(lVar15 + 0x10) = in_stack_00000058;
    thunk_FUN_03d233cc((undefined8 *)(lVar15 + 0x20),0);
    if (*(char *)(lVar15 + 0x10) == '\0') goto LAB_06d0ee1c;
    lVar16 = *unaff_x21;
    uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cd90);
    FUN_0582bb78(uVar9,lVar15,*(undefined8 *)PTR_DAT_08e8cda0,0);
    if (lVar16 == 0) goto LAB_06d0fc04;
    iVar5 = FUN_05426770(lVar16,uVar9,*(undefined8 *)PTR_DAT_08e8cd28);
    if (-1 < iVar5) {
      if (*in_stack_00000028 == 0) goto LAB_06d0fc04;
      uVar6 = FUN_051c0724(*in_stack_00000028,iVar5,*(undefined8 *)PTR_DAT_08e6ad58);
      if (*in_stack_00000020 == 0) goto LAB_06d0fc04;
      uVar18 = FUN_0695a420(*in_stack_00000020,uVar6,*(undefined8 *)PTR_DAT_08e8cca0);
      if ((uVar18 & 1) == 0) {
        lVar20 = *in_stack_00000020;
        lVar16 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cd50);
        FUN_050b3730(lVar16,*(undefined8 *)PTR_DAT_08e8cd40);
        in_stack_00000030 = 0;
        FUN_0505b978(0,&stack0x00000030,0xffffffff,*(undefined8 *)PTR_DAT_08e8cd08);
        if (lVar16 == 0) goto LAB_06d0fc04;
        lVar17 = *(long *)(lVar16 + 0x10);
        lVar19 = *(long *)PTR_DAT_08e8cd18;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_06d0fc04;
        uVar2 = *(uint *)(lVar16 + 0x18);
        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000030;
        }
        else {
          FUN_050b3f84(lVar16,in_stack_00000030,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        in_stack_00000058 = 0;
        FUN_0505b978(0x3f800000,&stack0x00000058,0xffffffff,*(undefined8 *)PTR_DAT_08e8cd08);
        lVar17 = *(long *)(lVar16 + 0x10);
        lVar19 = *(long *)PTR_DAT_08e8cd18;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_06d0fc04;
        uVar2 = *(uint *)(lVar16 + 0x18);
        if (uVar2 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000058;
        }
        else {
          FUN_050b3f84(lVar16,in_stack_00000058,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar20 == 0) goto LAB_06d0fc04;
        FUN_0695a218(lVar20,uVar6,lVar16,*(undefined8 *)PTR_DAT_08e8ccc0);
      }
      if (*in_stack_00000020 == 0) goto LAB_06d0fc04;
      lVar16 = FUN_0695a18c(*in_stack_00000020,uVar6,*(undefined8 *)PTR_DAT_08e8ccb8);
      iVar5 = FUN_056c7fe8(lVar15 + 0x10,*(undefined8 *)PTR_DAT_08e8cd70);
      in_stack_00000030 = 0;
      FUN_0505b978((float)iVar5 / 100.0,&stack0x00000030,unaff_w25,*(undefined8 *)PTR_DAT_08e8cd08);
      if (lVar16 == 0) goto LAB_06d0fc04;
      lVar15 = *(long *)(lVar16 + 0x10);
      lVar20 = *(long *)PTR_DAT_08e8cd18;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_06d0fc04;
      uVar2 = *(uint *)(lVar16 + 0x18);
      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000030;
      }
      else {
        FUN_050b3f84(lVar16,in_stack_00000030,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      *(int *)(in_stack_00000010 + 0x28) = *(int *)(in_stack_00000010 + 0x28) + 1;
      goto LAB_06d0ee1c;
    }
    FUN_056c7fe8(lVar15 + 0x10,*(undefined8 *)PTR_DAT_08e8cd70);
    lVar15 = *unaff_x19;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar18 != 0) {
      piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_08e8cd00) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_06d0f2b8;
        }
        uVar18 = uVar18 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar18 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348();
LAB_06d0f2b8:
    uVar9 = (*(code *)*puVar8)();
    param_1 = FUN_06f74e30(*(undefined8 *)PTR_DAT_08e8cdd0,extraout_x1,
                           *(undefined8 *)PTR_DAT_08e8cde8,uVar9,0);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    param_2 = 0;
  } while( true );
}


