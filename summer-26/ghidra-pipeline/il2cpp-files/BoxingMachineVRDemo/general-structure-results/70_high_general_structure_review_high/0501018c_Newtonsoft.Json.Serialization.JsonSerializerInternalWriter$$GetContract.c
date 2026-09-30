/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 0501018c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  int unaff_w19;
  int unaff_w20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x211) = 1;
  if (unaff_w20 == 0) {
    return 0;
  }
  lVar5 = FUN_034850a4();
  iVar6 = 0;
LAB_050101b8:
  iVar7 = iVar6;
  if (unaff_w19 <= iVar6) {
    return 0;
  }
  do {
    uVar3 = *(ushort *)(lVar5 + (long)iVar7 * 2);
    iVar6 = iVar7 + 1;
    if (uVar3 < 0x23) {
      if (uVar3 == 0x22) {
LAB_050101fc:
        lVar9 = (long)iVar6;
        lVar1 = lVar9;
        if ((long)iVar6 <= (long)unaff_w19) {
          lVar1 = (long)unaff_w19;
        }
        puVar8 = (ushort *)(lVar5 + (long)iVar6 * 2);
        do {
          if (lVar1 == lVar9) {
            iVar6 = (int)lVar1;
            goto LAB_05010254;
          }
          uVar2 = *puVar8;
          if (uVar2 == 0) break;
          lVar9 = lVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar2 != uVar3);
        iVar6 = (int)lVar9;
      }
      else if (uVar3 == 0) {
        return 0;
      }
    }
    else {
      if (uVar3 == 0x27) goto LAB_050101fc;
      if (uVar3 == 0x5c) {
        if ((iVar6 < unaff_w19) && (*(short *)(lVar5 + (long)iVar6 * 2) != 0)) {
          iVar6 = iVar7 + 2;
        }
      }
      else if (uVar3 == 0x3b) break;
    }
LAB_05010254:
    iVar7 = iVar6;
    if (unaff_w19 <= iVar6) {
      return 0;
    }
  } while( true );
  unaff_w20 = unaff_w20 + -1;
  if (unaff_w20 == 0) {
    if (unaff_w19 <= iVar6) {
      return 0;
    }
    sVar4 = *(short *)(lVar5 + (long)iVar6 * 2);
    if (sVar4 != 0x3b) {
      if (sVar4 != 0) {
        return iVar6;
      }
      return 0;
    }
    return 0;
  }
  goto LAB_050101b8;
}


