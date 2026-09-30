/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializePrimitive
ENTRY_POINT: 05010250
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializePrimitive(long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  long in_x9;
  long lVar7;
  long in_x12;
  int unaff_w19;
  int unaff_w20;
  
code_r0x05010250:
  iVar1 = (int)in_x12;
  do {
    while( true ) {
      iVar5 = iVar1;
      if (unaff_w19 <= iVar5) {
        return 0;
      }
      uVar3 = *(ushort *)(param_1 + (long)iVar5 * 2);
      iVar1 = iVar5 + 1;
      if (uVar3 < 0x23) break;
      if (uVar3 == 0x27) {
LAB_050101fc:
        lVar7 = (long)iVar1;
        in_x12 = lVar7;
        if (iVar1 <= in_x9) {
          in_x12 = in_x9;
        }
        puVar6 = (ushort *)(param_1 + (long)iVar1 * 2);
        do {
          if (in_x12 == lVar7) goto code_r0x05010250;
          uVar2 = *puVar6;
          if (uVar2 == 0) break;
          lVar7 = lVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar2 != uVar3);
        iVar1 = (int)lVar7;
      }
      else if (uVar3 == 0x5c) {
        if ((iVar1 < unaff_w19) && (*(short *)(param_1 + (long)iVar1 * 2) != 0)) {
          iVar1 = iVar5 + 2;
        }
      }
      else if ((uVar3 == 0x3b) && (unaff_w20 = unaff_w20 + -1, unaff_w20 == 0)) {
        if (unaff_w19 <= iVar1) {
          return 0;
        }
        sVar4 = *(short *)(param_1 + (long)iVar1 * 2);
        if (sVar4 == 0x3b) {
          return 0;
        }
        if (sVar4 == 0) {
          return 0;
        }
        return iVar1;
      }
    }
    if (uVar3 == 0x22) goto LAB_050101fc;
    if (uVar3 == 0) {
      return 0;
    }
  } while( true );
}


