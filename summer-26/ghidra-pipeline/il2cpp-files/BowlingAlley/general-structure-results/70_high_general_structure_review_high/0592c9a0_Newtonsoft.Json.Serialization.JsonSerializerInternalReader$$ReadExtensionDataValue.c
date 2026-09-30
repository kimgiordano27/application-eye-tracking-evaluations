/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 0592c9a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
              (undefined8 param_1,undefined8 param_2,int param_3)

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
  int iVar10;
  
  if ((DAT_076d53d7 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a68);
    thunk_FUN_032e1da0(PTR_DAT_07290a70);
    DAT_076d53d7 = 1;
  }
  if (param_3 == 0) {
    return 0;
  }
  lVar5 = FUN_03aca200(param_1,param_2,*(undefined8 *)PTR_DAT_07290a68);
  iVar6 = 0;
  iVar10 = (int)param_2;
LAB_0592ca08:
  iVar7 = iVar6;
  if (iVar10 <= iVar6) {
    return 0;
  }
  do {
    uVar3 = *(ushort *)(lVar5 + (long)iVar7 * 2);
    iVar6 = iVar7 + 1;
    if (uVar3 < 0x23) {
      if (uVar3 == 0x22) {
LAB_0592ca4c:
        lVar9 = (long)iVar6;
        lVar1 = lVar9;
        if ((long)iVar6 <= (long)iVar10) {
          lVar1 = (long)iVar10;
        }
        puVar8 = (ushort *)(lVar5 + (long)iVar6 * 2);
        do {
          if (lVar1 == lVar9) {
            iVar6 = (int)lVar1;
            goto LAB_0592caa4;
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
      if (uVar3 == 0x27) goto LAB_0592ca4c;
      if (uVar3 == 0x5c) {
        if ((iVar6 < iVar10) && (*(short *)(lVar5 + (long)iVar6 * 2) != 0)) {
          iVar6 = iVar7 + 2;
        }
      }
      else if (uVar3 == 0x3b) break;
    }
LAB_0592caa4:
    iVar7 = iVar6;
    if (iVar10 <= iVar6) {
      return 0;
    }
  } while( true );
  param_3 = param_3 + -1;
  if (param_3 == 0) {
    if (iVar10 <= iVar6) {
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
  goto LAB_0592ca08;
}


