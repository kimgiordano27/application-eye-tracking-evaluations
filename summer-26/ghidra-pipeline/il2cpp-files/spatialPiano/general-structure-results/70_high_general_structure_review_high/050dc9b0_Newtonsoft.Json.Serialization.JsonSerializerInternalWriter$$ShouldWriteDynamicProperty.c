/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 050dc9b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
               (long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  short *psVar5;
  short sVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int unaff_w19;
  long unaff_x20;
  int iVar11;
  int *unaff_x21;
  short *psVar12;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar13;
  int unaff_w26;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar1 = unaff_w23;
  if (unaff_w23 <= unaff_w19 + 6) {
    iVar1 = unaff_w19 + 6;
  }
  iVar1 = *(int *)(unaff_x20 + 0x10) + iVar1;
  if (unaff_w26 < iVar1) {
    *unaff_x21 = 0;
  }
  else {
    *unaff_x21 = iVar1;
    lVar7 = FUN_034702c8();
    puVar4 = PTR_DAT_067dbd90;
    psVar12 = (short *)(lVar7 + (long)iVar1 * 2);
    iVar11 = unaff_w23 + -2;
    lVar7 = *(long *)PTR_DAT_067dbd90;
    while( true ) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar7 = *(long *)puVar4;
      iVar9 = (int)unaff_x24;
      if (unaff_x24 >> 0x20 == 0) break;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar4;
      }
      unaff_x24 = unaff_x24 / 1000000000;
      psVar5 = psVar12 + -1;
      uVar13 = (ulong)(uint)(iVar9 + (int)unaff_x24 * -1000000000);
      iVar9 = 7;
      do {
        do {
          psVar12 = psVar5;
          uVar8 = uVar13 / 10;
          uVar10 = (uint)uVar13;
          *psVar12 = (short)uVar13 + (short)(uVar13 / 10) * -10 + 0x30;
          iVar3 = iVar9 + -1;
          bVar2 = -1 < iVar9;
          psVar5 = psVar12 + -1;
          uVar13 = uVar8;
          iVar9 = iVar3;
        } while (bVar2);
      } while (9 < uVar10);
      unaff_w23 = unaff_w23 + -9;
      iVar11 = iVar11 + -9;
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((iVar9 != 0) || (-1 < unaff_w23 + -1)) {
      psVar5 = psVar12 + -1;
      do {
        do {
          psVar12 = psVar5;
          uVar10 = (uint)unaff_x24;
          iVar9 = iVar11 + -1;
          uVar13 = (unaff_x24 & 0xffffffff) / 10;
          *psVar12 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
          bVar2 = -1 < iVar11;
          psVar5 = psVar12 + -1;
          unaff_x24 = uVar13;
          iVar11 = iVar9;
        } while (bVar2);
      } while (9 < uVar10);
    }
    iVar11 = *(int *)(unaff_x20 + 0x10) + -1;
    if (-1 < iVar11) {
      do {
        psVar12 = psVar12 + -1;
        sVar6 = FUN_04f69818();
        iVar11 = iVar11 + -1;
        *psVar12 = sVar6;
      } while (iVar11 != -1);
    }
  }
  return iVar1 <= unaff_w26;
}


