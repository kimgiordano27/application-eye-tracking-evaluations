/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 0560b14c
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(long param_1)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int in_w8;
  ushort *puVar5;
  long in_x9;
  uint in_w10;
  long lVar6;
  int unaff_w19;
  int unaff_w20;
  
code_r0x0560b14c:
  do {
    lVar6 = (long)in_w8;
    lVar1 = lVar6;
    if (in_w8 <= in_x9) {
      lVar1 = in_x9;
    }
    puVar5 = (ushort *)(param_1 + (long)in_w8 * 2);
    do {
      if (lVar1 == lVar6) {
        in_w8 = (int)lVar1;
        goto joined_r0x0560b1ac;
      }
      uVar2 = *puVar5;
      if (uVar2 == 0) break;
      lVar6 = lVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 != in_w10);
    in_w8 = (int)lVar6;
joined_r0x0560b1ac:
    iVar4 = in_w8;
    if (unaff_w19 <= iVar4) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + (long)iVar4 * 2);
    in_w10 = (uint)uVar2;
    in_w8 = iVar4 + 1;
    if (uVar2 < 0x23) {
      if (uVar2 == 0x22) goto code_r0x0560b14c;
      if (uVar2 == 0) {
        return 0;
      }
      goto joined_r0x0560b1ac;
    }
  } while (uVar2 == 0x27);
  if (uVar2 == 0x5c) {
    if ((in_w8 < unaff_w19) && (*(short *)(param_1 + (long)in_w8 * 2) != 0)) {
      in_w8 = iVar4 + 2;
    }
  }
  else if ((uVar2 == 0x3b) && (unaff_w20 = unaff_w20 + -1, unaff_w20 == 0)) {
    if (unaff_w19 <= in_w8) {
      return 0;
    }
    sVar3 = *(short *)(param_1 + (long)in_w8 * 2);
    if (sVar3 == 0x3b) {
      return 0;
    }
    if (sVar3 == 0) {
      return 0;
    }
    return in_w8;
  }
  goto joined_r0x0560b1ac;
}


