/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 074ed470
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  char cVar12;
  uint in_w8;
  uint uVar13;
  uint in_w9;
  undefined2 *puVar14;
  uint in_w10;
  int in_w11;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  short *psVar16;
  undefined2 *puVar17;
  int iVar18;
  long lVar19;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int iVar20;
  int unaff_w28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  uVar15 = in_w9;
  uVar13 = in_w9;
  while (((int)uVar13 < unaff_w28 && (uVar15 != 0))) {
    if (unaff_x23 == 0) goto LAB_074ed908;
    if ((int)in_w10 < in_w11) {
      in_w10 = in_w10 + 1;
    }
    if (in_w8 <= in_w10) goto LAB_074ed904;
    uVar15 = *(uint *)(unaff_x24 + (long)(int)in_w10 * 4 + 0x20);
    unaff_w25 = *(int *)(unaff_x23 + 0x10) + unaff_w25;
    uVar13 = uVar15 + uVar13;
    if ((int)(uVar13 | unaff_w25) < 0) {
      thunk_FUN_04097b88(PTR_DAT_08f66268);
      uVar9 = thunk_FUN_0406deb8();
      FUN_0744bbdc(uVar9,0);
      uVar10 = thunk_FUN_04097b88(PTR_DAT_08fa3438);
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar9,uVar10);
    }
  }
  uVar15 = 0;
  if (uVar13 != 0) {
    uVar15 = in_w9;
  }
  iVar8 = FUN_07368dd4();
  iVar2 = unaff_w28;
  if (iVar8 <= unaff_w28) {
    iVar2 = iVar8;
  }
  if (DAT_09546f43 == '\0') {
    FUN_0403162c(PTR_DAT_08f94d18);
    FUN_0403162c(PTR_DAT_08f8ca68);
    DAT_09546f43 = '\x01';
  }
  uVar13 = *(uint *)(unaff_x19 + 0x10);
  uVar4 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar13 - unaff_w25) < (int)uVar4) {
    FUN_07386c24();
    uVar13 = *(uint *)(unaff_x19 + 0x10);
  }
  puVar6 = PTR_DAT_08f94d18;
  *(uint *)(unaff_x19 + 0x18) = uVar4 + unaff_w25;
  if ((uVar13 < uVar4) || (uVar13 - uVar4 < unaff_w25)) {
                    /* WARNING: Subroutine does not return */
    FUN_07505afc(0);
  }
  lVar19 = *(long *)(unaff_x19 + 8);
  if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  lVar11 = FUN_04bf98a0(lVar19 + (long)(int)uVar4 * 2,unaff_w25,*(undefined8 *)PTR_DAT_08f99650);
  lVar19 = 0;
  uVar13 = 0;
  puVar14 = (undefined2 *)(lVar11 + (ulong)unaff_w25 * 2 + -2);
  iVar8 = unaff_w28;
  do {
    iVar18 = iVar8 + -1;
    if (iVar2 < iVar8) {
      uVar7 = 0x30;
    }
    else {
      uVar7 = *(undefined2 *)(unaff_x20 + (ulong)(uint)(iVar18 * 2));
    }
    puVar17 = puVar14 + -1;
    *puVar14 = uVar7;
    puVar14 = puVar17;
    if (((0 < (int)uVar15) && (uVar13 = uVar13 + 1, iVar18 != 0)) && (uVar13 == uVar15)) {
      if (unaff_x23 == 0) goto LAB_074ed908;
      iVar20 = *(int *)(unaff_x23 + 0x10) + -1;
      if (-1 < iVar20) {
        do {
          uVar7 = FUN_07363804();
          iVar20 = iVar20 + -1;
          puVar17 = puVar14 + -1;
          *puVar14 = uVar7;
          puVar14 = puVar17;
        } while (iVar20 != -1);
      }
      if ((int)lVar19 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar19 = (long)(int)lVar19 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar19) goto LAB_074ed904;
        uVar15 = *(uint *)(unaff_x24 + lVar19 * 4 + 0x20);
      }
      uVar13 = 0;
      puVar14 = puVar17;
    }
    bVar1 = 1 < iVar8;
    iVar8 = iVar18;
  } while (bVar1);
  psVar16 = (short *)(unaff_x20 + (long)iVar2 * 2);
  if (in_stack_00000010._4_4_ < 1) {
    return;
  }
  if (DAT_09546f42 == '\0') {
    FUN_0403162c(PTR_DAT_08f8ca68);
    DAT_09546f42 = '\x01';
  }
  if (in_stack_00000008 == 0) {
LAB_074ed908:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(int *)(in_stack_00000008 + 0x10) == 1) {
    uVar13 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar13 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar13) {
LAB_074ed904:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar19 = *(long *)(unaff_x19 + 8);
      uVar7 = FUN_07363804(in_stack_00000008,0,0);
      *(undefined2 *)(lVar19 + (long)(int)uVar13 * 2) = uVar7;
      *(uint *)(unaff_x19 + 0x18) = uVar13 + 1;
      goto joined_r0x074ed810;
    }
  }
  FUN_07386af0();
joined_r0x074ed810:
  if (unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    iVar2 = in_stack_00000010._4_4_;
    if (-unaff_w28 < in_stack_00000010._4_4_) {
      iVar2 = -unaff_w28;
    }
    FUN_07386e88();
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ - iVar2;
    if (in_stack_00000010._4_4_ < 1) {
      return;
    }
  }
  puVar6 = PTR_DAT_08f8ca68;
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
  cVar12 = DAT_095462cd;
  do {
    sVar3 = *psVar16;
    sVar5 = 0x30;
    if (sVar3 != 0) {
      psVar16 = psVar16 + 1;
      sVar5 = sVar3;
    }
    if (cVar12 == '\0') {
      FUN_0403162c(puVar6);
      cVar12 = '\x01';
      DAT_095462cd = '\x01';
    }
    uVar13 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar13 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar13) goto LAB_074ed904;
      *(uint *)(unaff_x19 + 0x18) = uVar13 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar13 * 2) = sVar5;
    }
    else {
      FUN_073869c4();
      cVar12 = DAT_095462cd;
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + -1;
    if (in_stack_00000010._4_4_ < 2) {
      return;
    }
  } while( true );
}


