/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 074be084
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  char cVar9;
  undefined2 *puVar10;
  long unaff_x19;
  long unaff_x20;
  short *psVar11;
  undefined2 *puVar12;
  uint uVar13;
  long lVar14;
  long unaff_x23;
  long unaff_x24;
  int iVar15;
  int iVar16;
  uint unaff_w28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  iVar16 = 0;
  uVar7 = FUN_07326b0c();
  uVar3 = unaff_w28;
  if ((int)uVar7 <= (int)unaff_w28) {
    uVar3 = uVar7;
  }
  if (DAT_0968e4c1 == '\0') {
    FUN_03f13384(PTR_DAT_091286b8);
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968e4c1 = '\x01';
  }
  uVar7 = *(uint *)(unaff_x19 + 0x10);
  uVar13 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar7 - unaff_w28) < (int)uVar13) {
    FUN_07347190();
    uVar7 = *(uint *)(unaff_x19 + 0x10);
  }
  puVar5 = PTR_DAT_091286b8;
  *(uint *)(unaff_x19 + 0x18) = uVar13 + unaff_w28;
  if ((uVar7 < uVar13) || (uVar7 - uVar13 < unaff_w28)) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  lVar14 = *(long *)(unaff_x19 + 8);
  if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar8 = FUN_04a8ef94(lVar14 + (long)(int)uVar13 * 2,unaff_w28,*(undefined8 *)PTR_DAT_09129180);
  lVar14 = 0;
  iVar15 = 0;
  puVar10 = (undefined2 *)(lVar8 + (ulong)unaff_w28 * 2 + -2);
  uVar7 = unaff_w28;
  do {
    uVar13 = uVar7 - 1;
    if ((int)uVar3 < (int)uVar7) {
      uVar6 = 0x30;
    }
    else {
      uVar6 = *(undefined2 *)(unaff_x20 + (ulong)(uVar13 * 2));
    }
    puVar12 = puVar10 + -1;
    *puVar10 = uVar6;
    puVar10 = puVar12;
    if (((0 < iVar16) && (iVar15 = iVar15 + 1, uVar13 != 0)) && (iVar15 == iVar16)) {
      if (unaff_x23 == 0) goto LAB_074be3a0;
      iVar15 = *(int *)(unaff_x23 + 0x10) + -1;
      if (-1 < iVar15) {
        do {
          uVar6 = FUN_073213d0();
          iVar15 = iVar15 + -1;
          puVar12 = puVar10 + -1;
          *puVar10 = uVar6;
          puVar10 = puVar12;
        } while (iVar15 != -1);
      }
      if ((int)lVar14 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar14 = (long)(int)lVar14 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar14) goto LAB_074be39c;
        iVar16 = *(int *)(unaff_x24 + lVar14 * 4 + 0x20);
      }
      iVar15 = 0;
      puVar10 = puVar12;
    }
    bVar1 = 1 < (int)uVar7;
    uVar7 = uVar13;
  } while (bVar1);
  psVar11 = (short *)(unaff_x20 + (long)(int)uVar3 * 2);
  if (in_stack_00000010._4_4_ < 1) {
    return;
  }
  if (DAT_0968e4c0 == '\0') {
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968e4c0 = '\x01';
  }
  if (in_stack_00000008 == 0) {
LAB_074be3a0:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(in_stack_00000008 + 0x10) == 1) {
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar3 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar3) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar14 = *(long *)(unaff_x19 + 8);
      uVar6 = FUN_073213d0(in_stack_00000008,0,0);
      *(undefined2 *)(lVar14 + (long)(int)uVar3 * 2) = uVar6;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      goto joined_r0x074be2a8;
    }
  }
  FUN_0734705c();
joined_r0x074be2a8:
  if ((int)unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar16 = in_stack_00000010._4_4_;
    if ((int)-unaff_w28 < in_stack_00000010._4_4_) {
      iVar16 = -unaff_w28;
    }
    FUN_073473f4();
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ - iVar16;
    if (in_stack_00000010._4_4_ < 1) {
      return;
    }
  }
  puVar5 = PTR_DAT_09129228;
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
  cVar9 = DAT_0968d807;
  do {
    sVar2 = *psVar11;
    sVar4 = 0x30;
    if (sVar2 != 0) {
      psVar11 = psVar11 + 1;
      sVar4 = sVar2;
    }
    if (cVar9 == '\0') {
      FUN_03f13384(puVar5);
      cVar9 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar3 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar3) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar3 * 2) = sVar4;
    }
    else {
      FUN_07346f30();
      cVar9 = DAT_0968d807;
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + -1;
    if (in_stack_00000010._4_4_ < 2) {
      return;
    }
  } while( true );
}


