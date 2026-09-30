/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 074bef48
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  char in_NG;
  char in_OV;
  int in_w8;
  ushort *puVar5;
  long in_x9;
  int in_w11;
  long lVar6;
  int unaff_w19;
  int unaff_w20;
  
  do {
    if ((in_NG != in_OV) && (*(short *)(param_1 + (long)in_w8 * 2) != 0)) {
      in_w8 = in_w11 + 2;
    }
joined_r0x074bef64:
    while( true ) {
      in_w11 = in_w8;
      if (unaff_w19 <= in_w11) {
        return 0;
      }
      uVar3 = *(ushort *)(param_1 + (long)in_w11 * 2);
      in_w8 = in_w11 + 1;
      if (0x22 < uVar3) break;
      if (uVar3 == 0x22) {
LAB_074bef0c:
        lVar6 = (long)in_w8;
        puVar5 = (ushort *)(param_1 + (long)in_w8 * 2);
        lVar1 = lVar6;
        if (lVar6 <= in_x9) {
          lVar1 = in_x9;
        }
        do {
          if (lVar1 == lVar6) {
            return 0;
          }
          uVar2 = *puVar5;
          if (uVar2 == 0) break;
          lVar6 = lVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar2 != uVar3);
        in_w8 = (int)lVar6;
      }
      else if (uVar3 == 0) {
        return 0;
      }
    }
    if (uVar3 == 0x27) goto LAB_074bef0c;
    if (uVar3 != 0x5c) {
      if ((uVar3 == 0x3b) && (unaff_w20 = unaff_w20 + -1, unaff_w20 == 0)) {
        if ((in_w8 < unaff_w19) &&
           ((sVar4 = *(short *)(param_1 + (long)in_w8 * 2), sVar4 != 0x3b && (sVar4 != 0)))) {
          return in_w8;
        }
        return 0;
      }
      goto joined_r0x074bef64;
    }
    in_OV = SBORROW4(in_w8,unaff_w19);
    in_NG = in_w8 - unaff_w19 < 0;
  } while( true );
}


