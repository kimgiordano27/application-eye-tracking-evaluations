/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeNumber
ENTRY_POINT: 04e91824
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Best_HTTP_JSON_Json__SerializeNumber
                (long param_1,uint param_2,long param_3,uint param_4,long param_5,int param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0x18);
    if (((((param_4 < uVar2) && (param_4 + 1 < uVar2)) && (param_4 + 2 < uVar2)) &&
        ((param_4 + 3 < uVar2 && (param_4 + 4 < uVar2)))) &&
       ((param_4 + 5 < uVar2 && ((param_4 + 6 < uVar2 && (param_4 + 7 < uVar2)))))) {
      if (param_1 == 0) goto Best_HTTP_JSON_LitJson_JsonData__get_IsInt;
      uVar16 = 0;
      uVar3 = *(uint *)(param_3 + (long)(int)param_4 * 4 + 0x20);
      uVar4 = *(uint *)(param_3 + (long)(int)(param_4 + 1) * 4 + 0x20);
      uVar5 = *(uint *)(param_3 + (long)(int)(param_4 + 2) * 4 + 0x20);
      uVar6 = *(uint *)(param_3 + (long)(int)(param_4 + 3) * 4 + 0x20);
      uVar15 = 0;
      uVar7 = *(uint *)(param_3 + (long)(int)(param_4 + 4) * 4 + 0x20);
      uVar8 = *(uint *)(param_3 + (long)(int)(param_4 + 5) * 4 + 0x20);
      uVar9 = *(uint *)(param_3 + (long)(int)(param_4 + 6) * 4 + 0x20);
      uVar10 = *(uint *)(param_3 + (long)(int)(param_4 + 7) * 4 + 0x20);
      uVar2 = 0;
      if (param_2 <= *(uint *)(param_1 + 0x18)) {
        uVar2 = *(uint *)(param_1 + 0x18) - param_2;
      }
      while (uVar2 != uVar16) {
        if (param_5 == 0) goto Best_HTTP_JSON_LitJson_JsonData__get_IsInt;
        uVar11 = *(uint *)(param_5 + 0x18);
        iVar12 = (int)uVar16;
        uVar14 = param_6 + iVar12;
        if (uVar11 <= uVar14) break;
        lVar1 = param_5 + (long)(int)uVar14 * 4;
        uVar13 = (ulong)*(uint *)(param_1 + (long)(int)(param_2 + iVar12) * 4 + 0x20);
        uVar17 = (ulong)*(uint *)(lVar1 + 0x20) + uVar13 * uVar3;
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 1) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 1) * 4;
        uVar17 = (uVar17 >> 0x20) + uVar13 * uVar4 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 2) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 2) * 4;
        uVar17 = (uVar17 >> 0x20) + uVar13 * uVar5 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 3) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 3) * 4;
        uVar17 = (uVar17 >> 0x20) + uVar13 * uVar6 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 4) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 4) * 4;
        uVar17 = (uVar17 >> 0x20) + uVar13 * uVar7 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 5) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 5) * 4;
        uVar17 = (uVar17 >> 0x20) + uVar13 * uVar8 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 6) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 6) * 4;
        uVar17 = (uVar17 >> 0x20) + uVar13 * uVar9 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar17;
        if (uVar11 <= uVar14 + 7) break;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 7) * 4;
        uVar13 = (uVar17 >> 0x20) + uVar13 * uVar10 + (ulong)*(uint *)(lVar1 + 0x20);
        *(int *)(lVar1 + 0x20) = (int)uVar13;
        if (uVar11 <= uVar14 + 8) break;
        uVar16 = uVar16 + 1;
        lVar1 = param_5 + (long)(param_6 + iVar12 + 8) * 4;
        uVar13 = uVar15 + (uVar13 >> 0x20) + (ulong)*(uint *)(lVar1 + 0x20);
        uVar15 = uVar13 >> 0x20;
        *(int *)(lVar1 + 0x20) = (int)uVar13;
        if (uVar16 == 8) {
          return uVar15;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
Best_HTTP_JSON_LitJson_JsonData__get_IsInt:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


