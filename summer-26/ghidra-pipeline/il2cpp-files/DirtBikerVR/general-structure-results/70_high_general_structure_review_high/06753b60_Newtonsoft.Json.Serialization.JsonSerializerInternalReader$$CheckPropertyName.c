/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 06753b60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  uint uVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_084a5b08;
  if (in_ZR) {
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_06759014();
      FUN_06759124();
      return;
    }
  }
  else if (in_w8 == 0x65) {
    if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_06759014();
    uVar4 = FUN_0675fca8();
    if ((uVar4 & 1) == 0) {
LAB_06753ef0:
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_06759b3c();
      return;
    }
    if (unaff_x19 != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (DAT_0897bb55 == '\0') {
        FUN_03a8a718(PTR_DAT_0849fcb0);
        DAT_0897bb55 = '\x01';
      }
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == 1) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
            if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
LAB_0675409c:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            lVar8 = *(long *)(unaff_x21 + 8);
            uVar3 = FUN_065c7d98(lVar7,0,0);
            *(undefined2 *)(lVar8 + (long)(int)uVar1 * 2) = uVar3;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_06753ef0;
          }
        }
        FUN_065e5d60();
        goto LAB_06753ef0;
      }
    }
  }
  else {
    if (in_w8 != 0x66) {
      thunk_FUN_03af1434(PTR_DAT_0849e2e8);
      uVar5 = thunk_FUN_03ac74bc();
      uVar6 = thunk_FUN_03af1434(PTR_DAT_084a5490);
      FUN_06739308(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03af1434(PTR_DAT_084a9b60);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar5,uVar6);
    }
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_06759014();
      uVar4 = FUN_0675fca8();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 != 0) {
LAB_06753f40:
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_067593a8();
          return;
        }
      }
      else if (unaff_x19 != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x30);
        if (DAT_0897bb55 == '\0') {
          FUN_03a8a718(PTR_DAT_0849fcb0);
          DAT_0897bb55 = '\x01';
        }
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x10) == 1) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
              if (*(uint *)(unaff_x21 + 0x10) <= uVar1) goto LAB_0675409c;
              lVar8 = *(long *)(unaff_x21 + 8);
              uVar3 = FUN_065c7d98(lVar7,0,0);
              *(undefined2 *)(lVar8 + (long)(int)uVar1 * 2) = uVar3;
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              goto LAB_06753f40;
            }
          }
          FUN_065e5d60();
          goto LAB_06753f40;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


