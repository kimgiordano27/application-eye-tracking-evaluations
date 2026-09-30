/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 074beed0
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


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError(long param_1)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  int in_w8;
  ushort *puVar6;
  long in_x9;
  long lVar7;
  int unaff_w19;
  int unaff_w20;
  
  do {
    uVar4 = *(ushort *)(param_1 + (long)in_w8 * 2);
    iVar1 = in_w8 + 1;
    if (uVar4 < 0x23) {
      if (uVar4 == 0x22) goto LAB_074bef0c;
      if (uVar4 == 0) {
        return 0;
      }
    }
    else if (uVar4 == 0x27) {
LAB_074bef0c:
      lVar7 = (long)iVar1;
      puVar6 = (ushort *)(param_1 + (long)iVar1 * 2);
      lVar2 = lVar7;
      if (lVar7 <= in_x9) {
        lVar2 = in_x9;
      }
      do {
        if (lVar2 == lVar7) {
          return 0;
        }
        uVar3 = *puVar6;
        if (uVar3 == 0) break;
        lVar7 = lVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != uVar4);
      iVar1 = (int)lVar7;
    }
    else if (uVar4 == 0x5c) {
      if ((iVar1 < unaff_w19) && (*(short *)(param_1 + (long)iVar1 * 2) != 0)) {
        iVar1 = in_w8 + 2;
      }
    }
    else if ((uVar4 == 0x3b) && (unaff_w20 = unaff_w20 + -1, unaff_w20 == 0)) {
      if (unaff_w19 <= iVar1) {
        return 0;
      }
      sVar5 = *(short *)(param_1 + (long)iVar1 * 2);
      if (sVar5 == 0x3b) {
        return 0;
      }
      if (sVar5 == 0) {
        return 0;
      }
      return iVar1;
    }
    in_w8 = iVar1;
    if (unaff_w19 <= in_w8) {
      return 0;
    }
  } while( true );
}


