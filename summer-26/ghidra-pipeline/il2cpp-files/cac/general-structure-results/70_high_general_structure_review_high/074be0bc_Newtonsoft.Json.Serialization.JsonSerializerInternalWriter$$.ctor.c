/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 074be0bc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  undefined2 *puVar10;
  long unaff_x19;
  long unaff_x20;
  short *psVar11;
  long unaff_x21;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int iVar16;
  int unaff_w27;
  int unaff_w28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  
  FUN_03f13384(PTR_DAT_09129228);
  *(undefined1 *)(unaff_x21 + 0x4c1) = 1;
  uVar9 = *(uint *)(unaff_x19 + 0x10);
  uVar3 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar9 - unaff_w25) < (int)uVar3) {
    FUN_07347190();
    uVar9 = *(uint *)(unaff_x19 + 0x10);
  }
  puVar5 = PTR_DAT_091286b8;
  *(uint *)(unaff_x19 + 0x18) = uVar3 + unaff_w25;
  if ((uVar9 < uVar3) || (uVar9 - uVar3 < unaff_w25)) {
                    /* WARNING: Subroutine does not return */
    FUN_074d6efc(0);
  }
  lVar15 = *(long *)(unaff_x19 + 8);
  if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f4b260();
  }
  lVar7 = FUN_04a8ef94(lVar15 + (long)(int)uVar3 * 2,unaff_w25,*(undefined8 *)PTR_DAT_09129180);
  lVar15 = 0;
  iVar16 = 0;
  puVar10 = (undefined2 *)(lVar7 + (ulong)unaff_w25 * 2 + -2);
  iVar13 = in_stack_00000018;
  do {
    iVar14 = iVar13 + -1;
    if (unaff_w28 < iVar13) {
      uVar6 = 0x30;
    }
    else {
      uVar6 = *(undefined2 *)(unaff_x20 + (ulong)(uint)(iVar14 * 2));
    }
    puVar12 = puVar10 + -1;
    *puVar10 = uVar6;
    puVar10 = puVar12;
    if (((0 < unaff_w27) && (iVar16 = iVar16 + 1, iVar14 != 0)) && (iVar16 == unaff_w27)) {
      if (unaff_x23 == 0) goto LAB_074be3a0;
      iVar16 = *(int *)(unaff_x23 + 0x10) + -1;
      if (-1 < iVar16) {
        do {
          uVar6 = FUN_073213d0();
          iVar16 = iVar16 + -1;
          puVar12 = puVar10 + -1;
          *puVar10 = uVar6;
          puVar10 = puVar12;
        } while (iVar16 != -1);
      }
      if ((int)lVar15 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar15 = (long)(int)lVar15 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar15) goto LAB_074be39c;
        unaff_w27 = *(int *)(unaff_x24 + lVar15 * 4 + 0x20);
      }
      iVar16 = 0;
      puVar10 = puVar12;
    }
    bVar1 = 1 < iVar13;
    iVar13 = iVar14;
  } while (bVar1);
  psVar11 = (short *)(unaff_x20 + (long)unaff_w28 * 2);
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
    uVar9 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar9 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar9) {
LAB_074be39c:
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      lVar15 = *(long *)(unaff_x19 + 8);
      uVar6 = FUN_073213d0(in_stack_00000008,0,0);
      *(undefined2 *)(lVar15 + (long)(int)uVar9 * 2) = uVar6;
      *(uint *)(unaff_x19 + 0x18) = uVar9 + 1;
      goto joined_r0x074be2a8;
    }
  }
  FUN_0734705c();
joined_r0x074be2a8:
  if (in_stack_00000018 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar16 = in_stack_00000010._4_4_;
    if (-in_stack_00000018 < in_stack_00000010._4_4_) {
      iVar16 = -in_stack_00000018;
    }
    FUN_073473f4();
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ - iVar16;
    if (in_stack_00000010._4_4_ < 1) {
      return;
    }
  }
  puVar5 = PTR_DAT_09129228;
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
  cVar8 = DAT_0968d807;
  do {
    sVar2 = *psVar11;
    sVar4 = 0x30;
    if (sVar2 != 0) {
      psVar11 = psVar11 + 1;
      sVar4 = sVar2;
    }
    if (cVar8 == '\0') {
      FUN_03f13384(puVar5);
      cVar8 = '\x01';
      DAT_0968d807 = '\x01';
    }
    uVar9 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar9 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar9) goto LAB_074be39c;
      *(uint *)(unaff_x19 + 0x18) = uVar9 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar9 * 2) = sVar4;
    }
    else {
      FUN_07346f30();
      cVar8 = DAT_0968d807;
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + -1;
    if (in_stack_00000010._4_4_ < 2) {
      return;
    }
  } while( true );
}


