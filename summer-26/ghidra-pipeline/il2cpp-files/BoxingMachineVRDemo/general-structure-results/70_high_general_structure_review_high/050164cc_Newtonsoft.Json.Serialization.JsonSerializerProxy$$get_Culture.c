/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Culture
ENTRY_POINT: 050164cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Culture(ulong param_1)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  uint unaff_w19;
  uint *unaff_x20;
  uint unaff_w21;
  int iVar9;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long lVar10;
  uint uStack000000000000000c;
  undefined *puVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06770f78);
    *(undefined1 *)(unaff_x22 + 0x243) = 1;
  }
  uStack000000000000000c = *unaff_x20;
  iVar9 = 10;
  if (unaff_w24 != -1) {
    iVar9 = unaff_w24;
  }
  uVar2 = iVar9 - 2U >> 1;
  if ((7 < (uVar2 | iVar9 << 0x1f)) || ((1 << (ulong)(uVar2 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06777230);
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067706e8);
    FUN_04f77088(uVar5,uVar6,uVar8,0);
    goto LAB_050167a0;
  }
  if (((int)uStack000000000000000c < 0) || ((int)unaff_w21 <= (int)uStack000000000000000c)) {
    thunk_FUN_02dc61f4(PTR_DAT_06764080);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06767908);
    FUN_04f7ef3c(uVar5,uVar6,0);
    goto LAB_050167a0;
  }
  if (((unaff_w19 & 0x3000) == 0) && (FUN_05016800(), uStack000000000000000c == unaff_w21)) {
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar5 = thunk_FUN_02d9d534();
    puVar7 = PTR_DAT_0677aae0;
    goto LAB_05016728;
  }
  if (unaff_w21 <= uStack000000000000000c) goto LAB_05016674;
  sVar1 = *(short *)(unaff_x23 + (long)(int)uStack000000000000000c * 2);
  if (sVar1 == 0x2b) {
    uStack000000000000000c = uStack000000000000000c + 1;
LAB_050165a0:
    bVar3 = false;
    lVar10 = 1;
LAB_050165a4:
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar2 = uStack000000000000000c + 1, (int)uVar2 < (int)unaff_w21)) {
      if (unaff_w21 <= uStack000000000000000c) {
LAB_05016674:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(unaff_x23 + (long)(int)uStack000000000000000c * 2) == 0x30) {
        if (unaff_w21 <= uVar2) goto LAB_05016674;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar2 * 2) | 0x20) == 0x78) {
          uStack000000000000000c = uStack000000000000000c + 2;
          iVar9 = 0x10;
        }
      }
    }
    uVar2 = uStack000000000000000c;
    lVar4 = FUN_050168c0(iVar9);
    if (uStack000000000000000c == uVar2) {
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar5 = thunk_FUN_02d9d534();
      puVar7 = PTR_DAT_0677aad8;
    }
    else {
      if (((unaff_w19 >> 0xc & 1) == 0) || ((int)unaff_w21 <= (int)uStack000000000000000c)) {
        *unaff_x20 = uStack000000000000000c;
        if (((unaff_w19 >> 9 & 1) != 0) ||
           ((iVar9 != 10 || (bVar3 || lVar4 != -0x8000000000000000)))) {
          if (iVar9 != 10) {
            lVar10 = 1;
          }
          return lVar4 * lVar10;
        }
        thunk_FUN_02dc61f4(PTR_DAT_06764c60);
        uVar5 = thunk_FUN_02d9d534();
        puVar7 = PTR_DAT_067771e8;
        goto LAB_05016790;
      }
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar5 = thunk_FUN_02d9d534();
      puVar7 = PTR_DAT_0677a6f8;
    }
LAB_05016728:
    uVar6 = thunk_FUN_02dc61f4(puVar7);
    FUN_04fefd84(uVar5,uVar6,0);
  }
  else {
    if (sVar1 != 0x2d) goto LAB_050165a0;
    if (iVar9 != 10) {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar5 = thunk_FUN_02d9d534();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677aae8);
      FUN_04f7d8e0(uVar5,uVar6,0);
      goto LAB_050167a0;
    }
    if ((unaff_w19 >> 9 & 1) == 0) {
      uStack000000000000000c = uStack000000000000000c + 1;
      lVar10 = -1;
      bVar3 = true;
      goto LAB_050165a4;
    }
    thunk_FUN_02dc61f4(PTR_DAT_06764c60);
    uVar5 = thunk_FUN_02d9d534();
    puVar7 = PTR_DAT_0677aaf0;
LAB_05016790:
    uVar6 = thunk_FUN_02dc61f4(puVar7);
    FUN_05015fe0(uVar5,uVar6);
  }
LAB_050167a0:
  uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677aaf8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar5,uVar6);
}


