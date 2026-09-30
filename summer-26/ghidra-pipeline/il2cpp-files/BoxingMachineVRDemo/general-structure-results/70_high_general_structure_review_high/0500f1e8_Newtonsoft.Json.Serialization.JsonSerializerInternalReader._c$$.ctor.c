/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 0500f1e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(void)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_w8;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x19;
  long unaff_x20;
  short *psVar12;
  undefined2 *puVar13;
  long lVar14;
  long lVar15;
  long unaff_x23;
  long unaff_x24;
  uint uVar16;
  int iVar17;
  uint unaff_w26;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar5 = *(uint *)(unaff_x24 + 0x20);
  uVar9 = 0;
  uVar16 = unaff_w26;
  uVar11 = uVar5;
  uVar10 = uVar5;
  while ((int)uVar10 < (int)unaff_w26) {
    if (in_w8 <= uVar9) goto LAB_0500f67c;
    if (uVar11 == 0) break;
    if (unaff_x23 == 0) goto LAB_0500f680;
    if ((int)uVar9 < (int)(in_w8 - 1)) {
      uVar9 = uVar9 + 1;
    }
    if (in_w8 <= uVar9) goto LAB_0500f67c;
    uVar11 = *(uint *)(unaff_x24 + (long)(int)uVar9 * 4 + 0x20);
    uVar16 = *(int *)(unaff_x23 + 0x10) + uVar16;
    uVar10 = uVar11 + uVar10;
    if ((int)(uVar10 | uVar16) < 0) {
      thunk_FUN_02dc61f4(PTR_DAT_06764080);
      uVar6 = thunk_FUN_02d9d534();
      FUN_04f7eee0(uVar6,0);
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677a8d0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,uVar7);
    }
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = uVar5;
  }
  uVar5 = FUN_04e8d1a8();
  uVar10 = unaff_w26;
  if ((int)uVar5 <= (int)unaff_w26) {
    uVar10 = uVar5;
  }
  if (DAT_06b79234 == '\0') {
    FUN_02d6084c(PTR_DAT_067707f8);
    FUN_02d6084c(PTR_DAT_067714a8);
    DAT_06b79234 = '\x01';
  }
  uVar5 = *(uint *)(unaff_x19 + 0x10);
  uVar11 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar5 - uVar16) < (int)uVar11) {
    FUN_04ea5aa4();
    uVar5 = *(uint *)(unaff_x19 + 0x10);
  }
  *(uint *)(unaff_x19 + 0x18) = uVar11 + uVar16;
  lVar14 = *(long *)PTR_DAT_067707f8;
  if ((uVar5 < uVar11) || (uVar5 - uVar11 < uVar16)) {
    FUN_05027268(0);
  }
  lVar15 = *(long *)(unaff_x19 + 8);
  if ((*(byte *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar14 = FUN_034850a8(lVar15 + (long)(int)uVar11 * 2,(ulong)uVar16,*(undefined8 *)PTR_DAT_067712e0
                       );
  uVar5 = unaff_w26 - 1;
  if (-1 < (int)uVar5) {
    lVar15 = 0;
    uVar11 = 0;
    puVar8 = (undefined2 *)(lVar14 + (ulong)uVar16 * 2 + -2);
    do {
      puVar13 = puVar8 + -1;
      if ((int)uVar5 < (int)uVar10) {
        uVar4 = *(undefined2 *)(unaff_x20 + (ulong)uVar5 * 2);
      }
      else {
        uVar4 = 0x30;
      }
      *puVar8 = uVar4;
      puVar8 = puVar13;
      if (((0 < (int)uVar9) && (uVar11 = uVar11 + 1, uVar5 != 0)) && (uVar11 == uVar9)) {
        if (unaff_x23 == 0) goto LAB_0500f680;
        iVar17 = *(int *)(unaff_x23 + 0x10);
        if (-1 < iVar17 + -1) {
          do {
            iVar17 = iVar17 + -1;
            uVar4 = FUN_04e87a5c();
            puVar13 = puVar8 + -1;
            *puVar8 = uVar4;
            puVar8 = puVar13;
          } while (0 < iVar17);
        }
        if ((int)lVar15 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
          lVar15 = (long)(int)lVar15 + 1;
          if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar15) goto LAB_0500f67c;
          uVar9 = *(uint *)(unaff_x24 + lVar15 * 4 + 0x20);
        }
        uVar11 = 0;
        puVar8 = puVar13;
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  psVar12 = (short *)(unaff_x20 + (long)(int)uVar10 * 2);
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
    uVar16 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar16 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar16) {
LAB_0500f67c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar14 = *(long *)(unaff_x19 + 8);
      uVar4 = FUN_04e87a5c(in_stack_00000000,0,0);
      *(undefined2 *)(lVar14 + (long)(int)uVar16 * 2) = uVar4;
      *(uint *)(unaff_x19 + 0x18) = uVar16 + 1;
      goto joined_r0x0500f58c;
    }
  }
  FUN_04ea5974();
joined_r0x0500f58c:
  if ((int)unaff_w26 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar17 = in_stack_00000008._4_4_;
    if ((int)-unaff_w26 <= in_stack_00000008._4_4_) {
      iVar17 = -unaff_w26;
    }
    FUN_04ea5ce8();
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - iVar17;
    if (in_stack_00000008._4_4_ < 1) {
      return;
    }
  }
  puVar3 = PTR_DAT_067714a8;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
  do {
    sVar1 = *psVar12;
    sVar2 = 0x30;
    if (sVar1 != 0) {
      psVar12 = psVar12 + 1;
      sVar2 = sVar1;
    }
    if (DAT_06b78666 == '\0') {
      FUN_02d6084c(puVar3);
      DAT_06b78666 = '\x01';
    }
    uVar16 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar16 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar16) goto LAB_0500f67c;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar16 * 2) = sVar2;
      *(uint *)(unaff_x19 + 0x18) = uVar16 + 1;
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


