/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 074be08c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1(void)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  undefined2 *puVar12;
  long unaff_x19;
  long unaff_x20;
  short *psVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w27;
  int unaff_w28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  iVar8 = FUN_07326b0c();
  iVar2 = unaff_w28;
  if (iVar8 <= unaff_w28) {
    iVar2 = iVar8;
  }
  if (DAT_0968e4c1 == '\0') {
    FUN_03f13384(PTR_DAT_091286b8);
    FUN_03f13384(PTR_DAT_09129228);
    DAT_0968e4c1 = '\x01';
  }
  uVar11 = *(uint *)(unaff_x19 + 0x10);
  uVar4 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar11 - unaff_w25) < (int)uVar4) {
    FUN_07347190();
    uVar11 = *(uint *)(unaff_x19 + 0x10);
  }
  puVar6 = PTR_DAT_091286b8;
  *(uint *)(unaff_x19 + 0x18) = uVar4 + unaff_w25;
  if ((uVar11 < uVar4) || (uVar11 - uVar4 < unaff_w25)) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  lVar17 = *(long *)(unaff_x19 + 8);
  if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar9 = FUN_04a8ef94(lVar17 + (long)(int)uVar4 * 2,unaff_w25,*(undefined8 *)PTR_DAT_09129180);
  lVar17 = 0;
  iVar8 = 0;
  puVar12 = (undefined2 *)(lVar9 + (ulong)unaff_w25 * 2 + -2);
  iVar15 = unaff_w28;
  do {
    iVar16 = iVar15 + -1;
    if (iVar2 < iVar15) {
      uVar7 = 0x30;
    }
    else {
      uVar7 = *(undefined2 *)(unaff_x20 + (ulong)(uint)(iVar16 * 2));
    }
    puVar14 = puVar12 + -1;
    *puVar12 = uVar7;
    puVar12 = puVar14;
    if (((0 < unaff_w27) && (iVar8 = iVar8 + 1, iVar16 != 0)) && (iVar8 == unaff_w27)) {
      if (unaff_x23 == 0) goto LAB_074be3a0;
      iVar8 = *(int *)(unaff_x23 + 0x10) + -1;
      if (-1 < iVar8) {
        do {
          uVar7 = FUN_073213d0();
          iVar8 = iVar8 + -1;
          puVar14 = puVar12 + -1;
          *puVar12 = uVar7;
          puVar12 = puVar14;
        } while (iVar8 != -1);
      }
      if ((int)lVar17 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar17 = (long)(int)lVar17 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar17) goto LAB_074be39c;
        unaff_w27 = *(int *)(unaff_x24 + lVar17 * 4 + 0x20);
      }
      iVar8 = 0;
      puVar12 = puVar14;
    }
    bVar1 = 1 < iVar15;
    iVar15 = iVar16;
  } while (bVar1);
  psVar13 = (short *)(unaff_x20 + (long)iVar2 * 2);
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
    uVar11 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar11 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar11) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar17 = *(long *)(unaff_x19 + 8);
      uVar7 = FUN_073213d0(in_stack_00000008,0,0);
      *(undefined2 *)(lVar17 + (long)(int)uVar11 * 2) = uVar7;
      *(uint *)(unaff_x19 + 0x18) = uVar11 + 1;
      goto joined_r0x074be2a8;
    }
  }
  FUN_0734705c();
joined_r0x074be2a8:
  if (unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar2 = in_stack_00000010._4_4_;
    if (-unaff_w28 < in_stack_00000010._4_4_) {
      iVar2 = -unaff_w28;
    }
    FUN_073473f4();
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ - iVar2;
    if (in_stack_00000010._4_4_ < 1) {
      return;
    }
  }
  puVar6 = PTR_DAT_09129228;
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
  cVar10 = DAT_0968d807;
  do {
    sVar3 = *psVar13;
    sVar5 = 0x30;
    if (sVar3 != 0) {
      psVar13 = psVar13 + 1;
      sVar5 = sVar3;
    }
    if (cVar10 == '\0') {
      FUN_03f13384(puVar6);
      cVar10 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar11 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar11 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar11) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar11 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar11 * 2) = sVar5;
    }
    else {
      FUN_07346f30();
      cVar10 = DAT_0968d807;
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + -1;
    if (in_stack_00000010._4_4_ < 2) {
      return;
    }
  } while( true );
}


