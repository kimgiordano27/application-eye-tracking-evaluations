/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 074ed47c
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined2 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  uint in_w8;
  int in_w9;
  undefined2 *puVar12;
  uint in_w10;
  int in_w11;
  uint in_w12;
  int in_w13;
  long unaff_x19;
  long unaff_x20;
  short *psVar13;
  undefined2 *puVar14;
  uint uVar15;
  long lVar16;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int iVar17;
  int iVar18;
  uint unaff_w28;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while ((!(bool)in_ZR && in_NG == in_OV && (in_w13 != 0))) {
    if (unaff_x23 == 0) goto LAB_074ed908;
    if ((int)in_w10 < in_w11) {
      in_w10 = in_w10 + 1;
    }
    if (in_w8 <= in_w10) goto LAB_074ed904;
    in_w13 = *(int *)(unaff_x24 + (long)(int)in_w10 * 4 + 0x20);
    unaff_w25 = *(int *)(unaff_x23 + 0x10) + unaff_w25;
    in_w12 = in_w13 + in_w12;
    if ((int)(in_w12 | unaff_w25) < 0) {
      thunk_FUN_04097b88(PTR_DAT_08f66268);
      uVar8 = thunk_FUN_0406deb8();
      FUN_0744bbdc(uVar8,0);
      uVar9 = thunk_FUN_04097b88(PTR_DAT_08fa3438);
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar8,uVar9);
    }
    in_OV = SBORROW4(unaff_w28,in_w12);
    in_NG = (int)(unaff_w28 - in_w12) < 0;
    in_ZR = unaff_w28 == in_w12;
  }
  iVar18 = 0;
  if (in_w12 != 0) {
    iVar18 = in_w9;
  }
  uVar7 = FUN_07368dd4();
  uVar3 = unaff_w28;
  if ((int)uVar7 <= (int)unaff_w28) {
    uVar3 = uVar7;
  }
  if (DAT_09546f43 == '\0') {
    FUN_0403162c(PTR_DAT_08f94d18);
    FUN_0403162c(PTR_DAT_08f8ca68);
    DAT_09546f43 = '\x01';
  }
  uVar7 = *(uint *)(unaff_x19 + 0x10);
  uVar15 = *(uint *)(unaff_x19 + 0x18);
  if ((int)(uVar7 - unaff_w25) < (int)uVar15) {
    FUN_07386c24();
    uVar7 = *(uint *)(unaff_x19 + 0x10);
  }
  puVar5 = PTR_DAT_08f94d18;
  *(uint *)(unaff_x19 + 0x18) = uVar15 + unaff_w25;
  if ((uVar7 < uVar15) || (uVar7 - uVar15 < unaff_w25)) {
                    /* WARNING: Subroutine does not return */
    FUN_07505afc(0);
  }
  lVar16 = *(long *)(unaff_x19 + 8);
  if ((*(ushort *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  lVar10 = FUN_04bf98a0(lVar16 + (long)(int)uVar15 * 2,unaff_w25,*(undefined8 *)PTR_DAT_08f99650);
  lVar16 = 0;
  iVar17 = 0;
  puVar12 = (undefined2 *)(lVar10 + (ulong)unaff_w25 * 2 + -2);
  uVar7 = unaff_w28;
  do {
    uVar15 = uVar7 - 1;
    if ((int)uVar3 < (int)uVar7) {
      uVar6 = 0x30;
    }
    else {
      uVar6 = *(undefined2 *)(unaff_x20 + (ulong)(uVar15 * 2));
    }
    puVar14 = puVar12 + -1;
    *puVar12 = uVar6;
    puVar12 = puVar14;
    if (((0 < iVar18) && (iVar17 = iVar17 + 1, uVar15 != 0)) && (iVar17 == iVar18)) {
      if (unaff_x23 == 0) goto LAB_074ed908;
      iVar17 = *(int *)(unaff_x23 + 0x10) + -1;
                    /* try { // try from 074ed71c to 075ed84f has its CatchHandler @ 074ed71c
                       catch() { ... } // from try @ 074ed71c with catch @ 074ed71c
                       catch() { ... } // from try @ 074ed96c with catch @ 074ed71c
                       catch() { ... } // from try @ 074eda14 with catch @ 074ed71c
                       catch() { ... } // from try @ 074eda64 with catch @ 074ed71c */
      if (-1 < iVar17) {
        do {
          uVar6 = FUN_07363804();
          iVar17 = iVar17 + -1;
          puVar14 = puVar12 + -1;
          *puVar12 = uVar6;
          puVar12 = puVar14;
        } while (iVar17 != -1);
      }
      if ((int)lVar16 < (int)(*(uint *)(unaff_x24 + 0x18) - 1)) {
        lVar16 = (long)(int)lVar16 + 1;
        if (*(uint *)(unaff_x24 + 0x18) <= (uint)lVar16) goto LAB_074ed904;
        iVar18 = *(int *)(unaff_x24 + lVar16 * 4 + 0x20);
      }
      iVar17 = 0;
      puVar12 = puVar14;
    }
    bVar1 = 1 < (int)uVar7;
    uVar7 = uVar15;
  } while (bVar1);
  psVar13 = (short *)(unaff_x20 + (long)(int)uVar3 * 2);
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
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar3 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar3) {
LAB_074ed904:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar16 = *(long *)(unaff_x19 + 8);
      uVar6 = FUN_07363804(in_stack_00000008,0,0);
      *(undefined2 *)(lVar16 + (long)(int)uVar3 * 2) = uVar6;
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      goto joined_r0x074ed810;
    }
  }
  FUN_07386af0();
joined_r0x074ed810:
  if ((int)unaff_w28 < 0) {
    if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    iVar18 = in_stack_00000010._4_4_;
    if ((int)-unaff_w28 < in_stack_00000010._4_4_) {
      iVar18 = -unaff_w28;
    }
    FUN_07386e88();
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ - iVar18;
                    /* try { // try from 074ed850 to 075ed877 has its CatchHandler @ 074eda28 */
    if (in_stack_00000010._4_4_ < 1) {
      return;
    }
  }
  puVar5 = PTR_DAT_08f8ca68;
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
  cVar11 = DAT_095462cd;
  do {
    sVar2 = *psVar13;
    sVar4 = 0x30;
    if (sVar2 != 0) {
      psVar13 = psVar13 + 1;
      sVar4 = sVar2;
    }
    if (cVar11 == '\0') {
      FUN_0403162c(puVar5);
      cVar11 = '\x01';
      DAT_095462cd = '\x01';
    }
    uVar3 = *(uint *)(unaff_x19 + 0x18);
    if ((int)uVar3 < (int)*(uint *)(unaff_x19 + 0x10)) {
      if (*(uint *)(unaff_x19 + 0x10) <= uVar3) goto LAB_074ed904;
                    /* try { // try from 074ed8b4 to 075ed8db has its CatchHandler @ 074eda24 */
      *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar3 * 2) = sVar4;
    }
    else {
      FUN_073869c4();
      cVar11 = DAT_095462cd;
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + -1;
    if (in_stack_00000010._4_4_ < 2) {
      return;
    }
  } while( true );
}


