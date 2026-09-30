/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 0500f220
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_w8;
  uint uVar10;
  int in_w9;
  undefined2 *puVar11;
  uint in_w10;
  int in_w11;
  uint in_w12;
  long unaff_x19;
  long unaff_x20;
  short *psVar12;
  undefined2 *puVar13;
  long lVar14;
  long lVar15;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  int iVar16;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while (in_w10 < in_w8) {
    iVar16 = *(int *)(unaff_x24 + (long)(int)in_w10 * 4 + 0x20);
    unaff_w25 = *(int *)(unaff_x23 + 0x10) + unaff_w25;
    in_w12 = iVar16 + in_w12;
    if ((int)(in_w12 | unaff_w25) < 0) {
      thunk_FUN_02dc61f4(PTR_DAT_06764080);
      uVar8 = thunk_FUN_02d9d534();
      FUN_04f7eee0(uVar8,0);
      uVar9 = thunk_FUN_02dc61f4(PTR_DAT_0677a8d0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar8,uVar9);
    }
    if (unaff_w26 <= (int)in_w12) {
LAB_0500f2c8:
      iVar16 = 0;
      if (in_w12 != 0) {
        iVar16 = in_w9;
      }
      iVar7 = FUN_04e8d1a8();
      iVar1 = unaff_w26;
      if (iVar7 <= unaff_w26) {
        iVar1 = iVar7;
      }
      if (DAT_06b79234 == '\0') {
        FUN_02d6084c(PTR_DAT_067707f8);
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79234 = '\x01';
      }
      uVar10 = *(uint *)(unaff_x19 + 0x10);
      uVar3 = *(uint *)(unaff_x19 + 0x18);
      if ((int)(uVar10 - unaff_w25) < (int)uVar3) {
        FUN_04ea5aa4();
        uVar10 = *(uint *)(unaff_x19 + 0x10);
      }
      *(uint *)(unaff_x19 + 0x18) = uVar3 + unaff_w25;
      lVar14 = *(long *)PTR_DAT_067707f8;
      if ((uVar10 < uVar3) || (uVar10 - uVar3 < unaff_w25)) {
        FUN_05027268(0);
      }
      lVar15 = *(long *)(unaff_x19 + 8);
      if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      lVar14 = FUN_034850a8(lVar15 + (long)(int)uVar3 * 2,(ulong)unaff_w25,
                            *(undefined8 *)PTR_DAT_067712e0);
      uVar10 = unaff_w26 - 1;
      if ((int)uVar10 < 0) goto LAB_0500f4f8;
      lVar15 = 0;
      iVar7 = 0;
      puVar11 = (undefined2 *)(lVar14 + (ulong)unaff_w25 * 2 + -2);
      goto LAB_0500f45c;
    }
    if (in_w8 <= in_w10) break;
    if (iVar16 == 0) goto LAB_0500f2c8;
    if (unaff_x23 == 0) goto LAB_0500f680;
    if ((int)in_w10 < in_w11) {
      in_w10 = in_w10 + 1;
    }
  }
LAB_0500f67c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
LAB_0500f45c:
  do {
    puVar13 = puVar11 + -1;
    if ((int)uVar10 < iVar1) {
      uVar6 = *(undefined2 *)(unaff_x20 + (ulong)uVar10 * 2);
    }
    else {
      uVar6 = 0x30;
    }
    *puVar11 = uVar6;
    puVar11 = puVar13;
    if (((0 < iVar16) && (iVar7 = iVar7 + 1, uVar10 != 0)) && (iVar7 == iVar16)) {
      if (unaff_x23 == 0) goto LAB_0500f680;
      iVar7 = *(int *)(unaff_x23 + 0x10);
      if (-1 < iVar7 + -1) {
        do {
          iVar7 = iVar7 + -1;
          uVar6 = FUN_04e87a5c();
          puVar13 = puVar11 + -1;
          *puVar11 = uVar6;
          puVar11 = puVar13;
        } while (0 < iVar7);
      }
      if ((int)lVar15 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar15 = (long)(int)lVar15 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar15) goto LAB_0500f67c;
        iVar16 = *(int *)(unaff_x24 + lVar15 * 4 + 0x20);
      }
      iVar7 = 0;
      puVar11 = puVar13;
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (int)uVar10);
LAB_0500f4f8:
  psVar12 = (short *)(unaff_x20 + (long)iVar1 * 2);
  if (in_stack_00000008._4_4_ < 1) {
    return;
  }
  if (DAT_06b79233 == '\0') {
    FUN_02d6084c(PTR_DAT_067714a8);
    DAT_06b79233 = '\x01';
  }
  if (in_stack_00000000 == 0) {
LAB_0500f680:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(in_stack_00000000 + 0x10) == 1) {
    uVar10 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar10 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar10) goto LAB_0500f67c;
      lVar14 = *(long *)(unaff_x19 + 8);
      uVar6 = FUN_04e87a5c(in_stack_00000000,0,0);
      *(undefined2 *)(lVar14 + (long)(int)uVar10 * 2) = uVar6;
      *(uint *)(unaff_x19 + 0x18) = uVar10 + 1;
      goto joined_r0x0500f58c;
    }
  }
  FUN_04ea5974();
joined_r0x0500f58c:
  if (unaff_w26 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar16 = in_stack_00000008._4_4_;
    if (-unaff_w26 <= in_stack_00000008._4_4_) {
      iVar16 = -unaff_w26;
    }
    FUN_04ea5ce8();
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - iVar16;
    if (in_stack_00000008._4_4_ < 1) {
      return;
    }
  }
  puVar5 = PTR_DAT_067714a8;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
  do {
    sVar2 = *psVar12;
    sVar4 = 0x30;
    if (sVar2 != 0) {
      psVar12 = psVar12 + 1;
      sVar4 = sVar2;
    }
    if (DAT_06b78666 == '\0') {
      FUN_02d6084c(puVar5);
      DAT_06b78666 = '\x01';
    }
    uVar10 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar10 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar10) goto LAB_0500f67c;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar10 * 2) = sVar4;
      *(uint *)(unaff_x19 + 0x18) = uVar10 + 1;
    }
    else {
      FUN_04ea5848();
    }
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + -1;
    if (in_stack_00000008._4_4_ < 2) {
      return;
    }
  } while( true );
}


