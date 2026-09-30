/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatString
ENTRY_POINT: 050164a8
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatString
               (long param_1,undefined8 param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uStack000000000000000c;
  undefined *puVar7;
  
  if ((DAT_06b79243 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06770f78);
    DAT_06b79243 = 1;
  }
  uStack000000000000000c = *param_5;
  iVar10 = 10;
  if (param_3 != -1) {
    iVar10 = param_3;
  }
  uVar9 = iVar10 - 2U >> 1;
  if ((7 < (uVar9 | iVar10 << 0x1f)) || ((1 << (ulong)(uVar9 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06777230);
    uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067706e8);
    FUN_04f77088(uVar5,uVar6,uVar8,0);
    goto LAB_050167a0;
  }
  if (((int)uStack000000000000000c < 0) ||
     (uVar9 = (uint)param_2, (int)uVar9 <= (int)uStack000000000000000c)) {
    thunk_FUN_02dc61f4(PTR_DAT_06764080);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06767908);
    FUN_04f7ef3c(uVar5,uVar6,0);
    goto LAB_050167a0;
  }
  if (((param_4 & 0x3000) == 0) &&
     (FUN_05016800(param_1,param_2,&stack0x0000000c), uStack000000000000000c == uVar9)) {
    thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
    uVar5 = thunk_FUN_02d9d534();
    puVar7 = PTR_DAT_0677aae0;
    goto LAB_05016728;
  }
  if (uVar9 <= uStack000000000000000c) goto LAB_05016674;
  sVar2 = *(short *)(param_1 + (long)(int)uStack000000000000000c * 2);
  if (sVar2 == 0x2b) {
    uStack000000000000000c = uStack000000000000000c + 1;
LAB_050165a0:
    bVar3 = false;
    lVar11 = 1;
LAB_050165a4:
    if (((param_3 == 0x10) || (param_3 == -1)) &&
       (uVar1 = uStack000000000000000c + 1, (int)uVar1 < (int)uVar9)) {
      if (uVar9 <= uStack000000000000000c) {
LAB_05016674:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(short *)(param_1 + (long)(int)uStack000000000000000c * 2) == 0x30) {
        if (uVar9 <= uVar1) goto LAB_05016674;
        if ((*(ushort *)(param_1 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          uStack000000000000000c = uStack000000000000000c + 2;
          iVar10 = 0x10;
        }
      }
    }
    uVar1 = uStack000000000000000c;
    lVar4 = FUN_050168c0(iVar10,param_1,param_2,&stack0x0000000c,param_4 >> 9 & 1);
    if (uStack000000000000000c == uVar1) {
      thunk_FUN_02dc61f4(PTR_DAT_0676fbb0);
      uVar5 = thunk_FUN_02d9d534();
      puVar7 = PTR_DAT_0677aad8;
    }
    else {
      if (((param_4 >> 0xc & 1) == 0) || ((int)uVar9 <= (int)uStack000000000000000c)) {
        *param_5 = uStack000000000000000c;
        if (((param_4 >> 9 & 1) != 0) || ((iVar10 != 10 || (bVar3 || lVar4 != -0x8000000000000000)))
           ) {
          if (iVar10 != 10) {
            lVar11 = 1;
          }
          return lVar4 * lVar11;
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
    if (sVar2 != 0x2d) goto LAB_050165a0;
    if (iVar10 != 10) {
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar5 = thunk_FUN_02d9d534();
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677aae8);
      FUN_04f7d8e0(uVar5,uVar6,0);
      goto LAB_050167a0;
    }
    if ((param_4 >> 9 & 1) == 0) {
      uStack000000000000000c = uStack000000000000000c + 1;
      lVar11 = -1;
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


