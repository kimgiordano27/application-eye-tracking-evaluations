/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c__DisplayClass38_0$$<CreateObjectUsingCreatorWithParameters>b__1
ENTRY_POINT: 074be09c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__DisplayClass38_0__<CreateObjectUsingCreatorWithParameters>b__1
               (int param_1)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined2 uVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  undefined2 *puVar11;
  long unaff_x19;
  long unaff_x20;
  short *psVar12;
  long unaff_x21;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int iVar17;
  int unaff_w27;
  int unaff_w28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  iVar2 = unaff_w28;
  if (param_1 <= unaff_w28) {
    iVar2 = param_1;
  }
  if (*(char *)(unaff_x21 + 0x4c1) == '\0') {
    FUN_03f13384(PTR_DAT_091286b8);
    FUN_03f13384(PTR_DAT_09129228);
    *(undefined1 *)(unaff_x21 + 0x4c1) = 1;
  }
  uVar10 = *(uint *)(unaff_x19 + 0x10);
  uVar4 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar10 - unaff_w25) < (int)uVar4) {
    FUN_07347190();
    uVar10 = *(uint *)(unaff_x19 + 0x10);
  }
  puVar6 = PTR_DAT_091286b8;
  *(uint *)(unaff_x19 + 0x18) = uVar4 + unaff_w25;
  if ((uVar10 < uVar4) || (uVar10 - uVar4 < unaff_w25)) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  lVar16 = *(long *)(unaff_x19 + 8);
  if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar8 = FUN_04a8ef94(lVar16 + (long)(int)uVar4 * 2,unaff_w25,*(undefined8 *)PTR_DAT_09129180);
  lVar16 = 0;
  iVar17 = 0;
  puVar11 = (undefined2 *)(lVar8 + (ulong)unaff_w25 * 2 + -2);
  iVar14 = unaff_w28;
  do {
    iVar15 = iVar14 + -1;
    if (iVar2 < iVar14) {
      uVar7 = 0x30;
    }
    else {
      uVar7 = *(undefined2 *)(unaff_x20 + (ulong)(uint)(iVar15 * 2));
    }
    puVar13 = puVar11 + -1;
    *puVar11 = uVar7;
    puVar11 = puVar13;
    if (((0 < unaff_w27) && (iVar17 = iVar17 + 1, iVar15 != 0)) && (iVar17 == unaff_w27)) {
      if (unaff_x23 == 0) goto LAB_074be3a0;
      iVar17 = *(int *)(unaff_x23 + 0x10) + -1;
      if (-1 < iVar17) {
        do {
          uVar7 = FUN_073213d0();
          iVar17 = iVar17 + -1;
          puVar13 = puVar11 + -1;
          *puVar11 = uVar7;
          puVar11 = puVar13;
        } while (iVar17 != -1);
      }
      if ((int)lVar16 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar16 = (long)(int)lVar16 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar16) goto LAB_074be39c;
        unaff_w27 = *(int *)(unaff_x24 + lVar16 * 4 + 0x20);
      }
      iVar17 = 0;
      puVar11 = puVar13;
    }
    bVar1 = 1 < iVar14;
    iVar14 = iVar15;
  } while (bVar1);
  psVar12 = (short *)(unaff_x20 + (long)iVar2 * 2);
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
    uVar10 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar10 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar10) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar16 = *(long *)(unaff_x19 + 8);
      uVar7 = FUN_073213d0(in_stack_00000008,0,0);
      *(undefined2 *)(lVar16 + (long)(int)uVar10 * 2) = uVar7;
      *(uint *)(unaff_x19 + 0x18) = uVar10 + 1;
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
  cVar9 = DAT_0968d807;
  do {
    sVar3 = *psVar12;
    sVar5 = 0x30;
    if (sVar3 != 0) {
      psVar12 = psVar12 + 1;
      sVar5 = sVar3;
    }
    if (cVar9 == '\0') {
      FUN_03f13384(puVar6);
      cVar9 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar10 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar10 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar10) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar10 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar10 * 2) = sVar5;
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


