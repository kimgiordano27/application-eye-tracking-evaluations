/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 02743b78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  
  FUN_01ab69ac(PTR_DAT_03cbeeb0);
  FUN_01ab69ac(PTR_DAT_03cfa2b0);
  FUN_01ab69ac(PTR_DAT_03cfa0c0);
  *(undefined1 *)(unaff_x21 + 0x9b1) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar9 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cd9db0);
    FUN_026a44fc(uVar9,uVar8,0);
  }
  else {
    lVar6 = FUN_02646180();
    puVar5 = PTR_DAT_03cfa2b0;
    puVar4 = PTR_DAT_03cfa0c0;
    puVar3 = PTR_DAT_03cc41f8;
    puVar10 = PTR_DAT_03cc03b8;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar12 = 0;
    uVar13 = 0;
    bVar1 = false;
    bVar2 = false;
    while (uVar7 = FUN_026462c0(lVar6,0), (uVar7 & 1) != 0) {
      uVar8 = FUN_0264cfbc(lVar6,0);
      uVar7 = thunk_FUN_025bd1c0(uVar8,*(undefined8 *)puVar4,0);
      if ((uVar7 & 1) == 0) {
        uVar7 = thunk_FUN_025bd1c0(uVar8,*(undefined8 *)puVar5,0);
        if ((uVar7 & 1) != 0) {
          uVar8 = FUN_0264d040(lVar6,0);
          lVar11 = *(long *)puVar3;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
          }
          uVar9 = FUN_0271c480(0);
          lVar11 = *(long *)puVar10;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar11);
          }
          uVar12 = FUN_0273e40c(uVar8,uVar9);
          bVar1 = true;
        }
      }
      else {
        uVar8 = FUN_0264d040(lVar6,0);
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
        }
        uVar9 = FUN_0271c480(0);
        lVar11 = *(long *)puVar10;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
        }
        uVar13 = FUN_0273df10(uVar8,uVar9);
        bVar2 = true;
      }
    }
    if (!bVar1) {
      uVar12 = uVar13;
    }
    if (bVar1 || bVar2) {
      *unaff_x19 = uVar12;
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar12 = *unaff_x19;
      }
      if ((uVar12 & 0x3fffffffffffc000) < 0x2bca2875f4374000) {
        return;
      }
      thunk_FUN_01a6ca08(PTR_DAT_03cd9db8);
      uVar9 = thunk_FUN_01a89e68();
      puVar10 = PTR_DAT_03cfa2c0;
    }
    else {
      thunk_FUN_01a6ca08(PTR_DAT_03cd9db8);
      uVar9 = thunk_FUN_01a89e68();
      puVar10 = PTR_DAT_03cfa2b8;
    }
    uVar8 = thunk_FUN_01a6ca08(puVar10);
    FUN_0264cdac(uVar9,uVar8,0);
  }
  uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfa2c8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar9,uVar8);
}


