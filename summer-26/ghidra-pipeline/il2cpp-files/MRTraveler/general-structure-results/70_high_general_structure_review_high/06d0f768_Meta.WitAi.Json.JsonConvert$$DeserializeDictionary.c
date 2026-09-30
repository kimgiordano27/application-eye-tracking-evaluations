/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeDictionary
ENTRY_POINT: 06d0f768
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


void Meta_WitAi_Json_JsonConvert__DeserializeDictionary(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int in_w8;
  long lVar13;
  undefined8 *in_x9;
  ulong uVar14;
  long lVar15;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long *plVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  long in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  auVar18._8_8_ = unaff_x23;
  auVar18._0_8_ = unaff_x20;
code_r0x06d0f768:
  lVar13 = auVar18._8_8_;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,in_w8);
  uVar9 = thunk_FUN_03cf4e64(*in_x9,&stack0x00000030);
  uVar9 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e75988,auVar18._0_8_,uVar9,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar13 + 0x10) == 0) {
    uVar10 = *(undefined8 *)PTR_DAT_08e69460;
  }
  else {
    uVar10 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e6fc38,lVar13,0);
  }
  FUN_06f683f8(uVar9,uVar10,0);
  lVar13 = *unaff_x19;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e8cd00) {
        puVar12 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
        goto LAB_06d0f8b4;
      }
      uVar14 = uVar14 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d0f8b4:
  uVar5 = (*(code *)*puVar12)();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar13 = *(long *)(unaff_x25 + 0x10);
  lVar15 = *(long *)PTR_DAT_08e6a9a0;
  *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar2 = *(uint *)(unaff_x25 + 0x18);
  if (*(uint *)(lVar13 + 0x18) <= uVar2) {
    FUN_051c0a14(unaff_x25,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
    ;
    goto LAB_06d0f5c4;
  }
  do {
    *(uint *)(unaff_x25 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar5;
LAB_06d0f5c4:
    while (uVar14 = FUN_04a1bc6c(&stack0x00000070,*(undefined8 *)PTR_DAT_08e8ccd8),
          (uVar14 & 1) == 0) {
      FUN_04a1bc68(&stack0x00000070,*(undefined8 *)PTR_DAT_08e8ccd0);
      if (*in_stack_00000018 == 0) {
LAB_06d0fc04:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0695a22c(*in_stack_00000018,unaff_w24,unaff_x25,*(undefined8 *)PTR_DAT_08e85df0);
      do {
        unaff_w24 = unaff_w24 + 1;
        lVar13 = *unaff_x19;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e8ccf8) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_06d0f470;
            }
            uVar14 = uVar14 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d0f470:
        iVar4 = (*(code *)*puVar12)();
        if (iVar4 <= unaff_w24) {
          if ((*in_stack_00000028 == 0) || (*in_stack_00000018 == 0)) goto LAB_06d0fc04;
          iVar6 = *(int *)(*in_stack_00000028 + 0x18);
          iVar1 = *(int *)(in_stack_00000010 + 0x28);
          iVar4 = FUN_06959edc(*in_stack_00000018,*(undefined8 *)PTR_DAT_08e8ccb0);
          lVar13 = *unaff_x19;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          iVar4 = iVar6 + iVar1 + iVar4;
          if (uVar14 == 0) goto LAB_06d0fad8;
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_06d0fac0;
        }
        unaff_x26 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cdb0);
        FUN_07145224(unaff_x26,0);
        lVar13 = *unaff_x19;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e8cd00) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_06d0f4f4;
            }
            uVar14 = uVar14 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d0f4f4:
        uVar9 = (*(code *)*puVar12)();
        if (*(int *)(*(long *)PTR_DAT_08e8cc50 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e8cc50);
        }
        FUN_06d164e8(&stack0x00000058,uVar9);
        in_stack_00000030 = CONCAT44(uStack000000000000005c,iStack0000000000000058);
        in_stack_00000038 = in_stack_00000060;
        in_stack_00000040 = in_stack_00000068;
        if (unaff_x26 == 0) goto LAB_06d0fc04;
        *(undefined8 *)(unaff_x26 + 0x20) = in_stack_00000068;
        *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000060;
        *(undefined8 *)(unaff_x26 + 0x10) = in_stack_00000030;
        thunk_FUN_03d233cc(unaff_x26 + 0x18,0);
      } while (*(char *)(unaff_x26 + 0x10) == '\0');
      unaff_x25 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a938);
      FUN_051c01c0(unaff_x25,*(undefined8 *)PTR_DAT_08e6a940);
      lVar13 = FUN_056c7700(unaff_x26 + 0x10,*(undefined8 *)PTR_DAT_08e8cd80);
      if (lVar13 == 0) goto LAB_06d0fc04;
      FUN_05429294(&stack0x00000030,lVar13,*(undefined8 *)PTR_DAT_08e8cd30);
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
    }
    lVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cdc0);
    FUN_07145224(lVar13,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar16 = (long *)(lVar13 + 0x20);
    *plVar16 = unaff_x26;
    thunk_FUN_03d233cc(plVar16,unaff_x26);
    piVar17 = (int *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x18) = in_stack_00000088;
    *(undefined8 *)piVar17 = in_stack_00000080;
    thunk_FUN_03d233cc((long *)(lVar13 + 0x18),0);
    lVar15 = *unaff_x21;
    uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8cd90);
    FUN_0582bb78(uVar9,lVar13,*(undefined8 *)PTR_DAT_08e8cdb8,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar4 = FUN_05426770(lVar15,uVar9,*(undefined8 *)PTR_DAT_08e8cd28);
    if (iVar4 < 0) {
      plVar7 = *(long **)(lVar13 + 0x18);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar10 = *(undefined8 *)PTR_DAT_08e8cde0;
      if (*piVar17 < 100) {
        uVar8 = FUN_070fde54(piVar17,0);
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_08e69460;
      }
      lVar13 = *plVar16;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      in_stack_00000040 = *(undefined8 *)(lVar13 + 0x20);
      in_stack_00000038 = *(undefined8 *)(lVar13 + 0x18);
      in_stack_00000030 = *(undefined8 *)(lVar13 + 0x10);
      uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8cd88,&stack0x00000030);
      uVar9 = FUN_06f75284(uVar10,uVar9,uVar8,uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085a48e4(uVar9,0);
      goto LAB_06d0f5c4;
    }
    if (*piVar17 != 100) {
      if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      auVar18 = FUN_05425bb4(*unaff_x21,iVar4,*(undefined8 *)PTR_DAT_08e8cd48);
      in_w8 = *piVar17;
      in_x9 = (undefined8 *)PTR_DAT_08e699d0;
      goto code_r0x06d0f768;
    }
    if (*in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar5 = FUN_051c0724(*in_stack_00000028,iVar4,*(undefined8 *)PTR_DAT_08e6ad58);
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar13 = *(long *)(unaff_x25 + 0x10);
    lVar15 = *(long *)PTR_DAT_08e6a9a0;
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(unaff_x25 + 0x18);
    if (*(uint *)(lVar13 + 0x18) <= uVar2) {
      FUN_051c0a14(unaff_x25,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      goto LAB_06d0f5c4;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar17 = piVar17 + 4;
    if (uVar14 == 0) break;
LAB_06d0fac0:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e8ccf8) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06d0faf4;
    }
  }
LAB_06d0fad8:
  puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d0faf4:
  iVar6 = (*(code *)*puVar12)();
  if (iVar4 != iVar6) {
    lVar13 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e8ccf8) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06d0fb5c;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d0fb5c:
    uVar5 = (*(code *)*puVar12)();
    puVar3 = PTR_DAT_08e699d0;
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,uVar5);
    uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000030);
    iStack0000000000000058 = iVar4;
    uVar10 = thunk_FUN_03cf4e64(*(undefined8 *)puVar3,&stack0x00000058);
    uVar9 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8cdd8,uVar9,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar9,0);
  }
  return;
}


