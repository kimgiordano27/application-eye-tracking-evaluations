/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 074be14c
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  long lVar7;
  char cVar8;
  undefined2 *puVar9;
  long unaff_x19;
  long unaff_x20;
  short *psVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  long unaff_x23;
  long unaff_x24;
  int iVar14;
  ulong unaff_x25;
  int unaff_w27;
  int unaff_w28;
  long lVar15;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  
  lVar7 = FUN_04a8ef94(param_2,param_3,*param_1);
  lVar15 = 0;
  iVar14 = 0;
  puVar9 = (undefined2 *)(lVar7 + (unaff_x25 & 0xffffffff) * 2 + -2);
  iVar12 = in_stack_00000018;
  do {
    iVar13 = iVar12 + -1;
    if (unaff_w28 < iVar12) {
      uVar6 = 0x30;
    }
    else {
      uVar6 = *(undefined2 *)(unaff_x20 + (ulong)(uint)(iVar13 * 2));
    }
    puVar11 = puVar9 + -1;
    *puVar9 = uVar6;
    puVar9 = puVar11;
    if (((0 < unaff_w27) && (iVar14 = iVar14 + 1, iVar13 != 0)) && (iVar14 == unaff_w27)) {
      if (unaff_x23 == 0) goto LAB_074be3a0;
      iVar14 = *(int *)(unaff_x23 + 0x10) + -1;
      if (-1 < iVar14) {
        do {
          uVar6 = FUN_073213d0();
          iVar14 = iVar14 + -1;
          puVar11 = puVar9 + -1;
          *puVar9 = uVar6;
          puVar9 = puVar11;
        } while (iVar14 != -1);
      }
      if ((int)lVar15 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar15 = (long)(int)lVar15 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar15) goto LAB_074be39c;
        unaff_w27 = *(int *)(unaff_x24 + lVar15 * 4 + 0x20);
      }
      iVar14 = 0;
      puVar9 = puVar11;
    }
    bVar1 = 1 < iVar12;
    iVar12 = iVar13;
  } while (bVar1);
  psVar10 = (short *)(unaff_x20 + (long)unaff_w28 * 2);
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
      lVar15 = *(long *)(unaff_x19 + 8);
      uVar6 = FUN_073213d0(in_stack_00000008,0,0);
      *(undefined2 *)(lVar15 + (long)(int)uVar3 * 2) = uVar6;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      goto joined_r0x074be2a8;
    }
  }
  FUN_0734705c();
joined_r0x074be2a8:
  if (in_stack_00000018 < 0) {
    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    iVar14 = in_stack_00000010._4_4_;
    if (-in_stack_00000018 < in_stack_00000010._4_4_) {
      iVar14 = -in_stack_00000018;
    }
    FUN_073473f4();
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ - iVar14;
    if (in_stack_00000010._4_4_ < 1) {
      return;
    }
  }
  puVar5 = PTR_DAT_09129228;
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
  cVar8 = DAT_0968d807;
  do {
    sVar2 = *psVar10;
    sVar4 = 0x30;
    if (sVar2 != 0) {
      psVar10 = psVar10 + 1;
      sVar4 = sVar2;
    }
    if (cVar8 == '\0') {
      FUN_03f13384(puVar5);
      cVar8 = '\x01';
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
      cVar8 = DAT_0968d807;
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + -1;
    if (in_stack_00000010._4_4_ < 2) {
      return;
    }
  } while( true );
}


