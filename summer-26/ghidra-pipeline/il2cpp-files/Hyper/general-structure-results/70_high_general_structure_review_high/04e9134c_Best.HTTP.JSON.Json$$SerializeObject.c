/*
FUNCTION_NAME: Best.HTTP.JSON.Json$$SerializeObject
ENTRY_POINT: 04e9134c
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_Json__SerializeObject
               (long param_1,uint param_2,long param_3,int param_4,long param_5,uint param_6)

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
  uint uVar12;
  bool in_CY;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int in_w8;
  ulong uVar17;
  int in_w9;
  int in_w10;
  int in_w11;
  uint in_w12;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  
  if (!in_CY) {
    if (((param_4 + 5U < in_w12) && (param_4 + 6U < in_w12)) && (param_4 + 7U < in_w12)) {
      if (param_1 == 0) {
LAB_04e9164c:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar11 = *(uint *)(param_1 + 0x18) - param_2;
      if (param_2 <= *(uint *)(param_1 + 0x18) && uVar11 != 0) {
        if (param_5 == 0) goto LAB_04e9164c;
        uVar2 = *(uint *)(param_5 + 0x18);
        uVar12 = uVar2 - param_6;
        if (param_6 <= uVar2 && uVar12 != 0) {
          uVar17 = (ulong)*(uint *)(param_3 + (long)param_4 * 4 + 0x20);
          uVar3 = *(uint *)(param_1 + (long)(int)param_2 * 4 + 0x20);
          uVar4 = *(uint *)(param_3 + (long)in_w10 * 4 + 0x20);
          uVar18 = uVar3 * uVar17;
          uVar5 = *(uint *)(param_3 + (long)in_w11 * 4 + 0x20);
          uVar6 = *(uint *)(param_3 + (long)in_w8 * 4 + 0x20);
          uVar7 = *(uint *)(param_3 + (long)in_w9 * 4 + 0x20);
          uVar8 = *(uint *)(param_3 + (long)(int)(param_4 + 5U) * 4 + 0x20);
          uVar9 = *(uint *)(param_3 + (long)(int)(param_4 + 6U) * 4 + 0x20);
          uVar10 = *(uint *)(param_3 + (long)(int)(param_4 + 7U) * 4 + 0x20);
          *(int *)(param_5 + (long)(int)param_6 * 4 + 0x20) = (int)uVar18;
          if (param_6 + 1 < uVar2) {
            uVar18 = (uVar18 >> 0x20) + (ulong)uVar3 * (ulong)uVar4;
            *(int *)(param_5 + (long)(int)(param_6 + 1) * 4 + 0x20) = (int)uVar18;
            if (param_6 + 2 < uVar2) {
              uVar19 = (uVar18 >> 0x20) + (ulong)uVar3 * (ulong)uVar5;
              *(int *)(param_5 + (long)(int)(param_6 + 2) * 4 + 0x20) = (int)uVar19;
              if (param_6 + 3 < uVar2) {
                uVar13 = (uVar19 >> 0x20) + (ulong)uVar3 * (ulong)uVar6;
                *(int *)(param_5 + (long)(int)(param_6 + 3) * 4 + 0x20) = (int)uVar13;
                if (param_6 + 4 < uVar2) {
                  uVar14 = (uVar13 >> 0x20) + (ulong)uVar3 * (ulong)uVar7;
                  *(int *)(param_5 + (long)(int)(param_6 + 4) * 4 + 0x20) = (int)uVar14;
                  if (param_6 + 5 < uVar2) {
                    uVar15 = (uVar14 >> 0x20) + (ulong)uVar3 * (ulong)uVar8;
                    *(int *)(param_5 + (long)(int)(param_6 + 5) * 4 + 0x20) = (int)uVar15;
                    if (param_6 + 6 < uVar2) {
                      uVar16 = (uVar15 >> 0x20) + (ulong)uVar3 * (ulong)uVar9;
                      *(int *)(param_5 + (long)(int)(param_6 + 6) * 4 + 0x20) = (int)uVar16;
                      if (param_6 + 7 < uVar2) {
                        uVar22 = (uVar16 >> 0x20) + (ulong)uVar3 * (ulong)uVar10;
                        *(int *)(param_5 + (long)(int)(param_6 + 7) * 4 + 0x20) = (int)uVar22;
                        if (param_6 + 8 < uVar2) {
                          lVar21 = 0;
                          *(int *)(param_5 + (long)(int)(param_6 + 8) * 4 + 0x20) =
                               (int)(uVar22 >> 0x20);
                          while (((ulong)uVar11 - 1 != lVar21 && ((ulong)uVar12 - 1 != lVar21))) {
                            iVar20 = (int)lVar21;
                            uVar2 = *(uint *)(param_1 + (long)(int)(param_2 + 1 + iVar20) * 4 + 0x20
                                             );
                            uVar18 = uVar2 * uVar17 + (uVar18 & 0xffffffff);
                            lVar1 = param_5 + 0x20;
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 1) * 4) = (int)uVar18;
                            uVar18 = (uVar18 >> 0x20) + (ulong)uVar2 * (ulong)uVar4 +
                                     (uVar19 & 0xffffffff);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 2) * 4) = (int)uVar18;
                            if ((ulong)(uVar12 - 2) - 1 == lVar21) break;
                            uVar19 = (uVar18 >> 0x20) + (ulong)uVar2 * (ulong)uVar5 +
                                     (uVar13 & 0xffffffff);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 3) * 4) = (int)uVar19;
                            uVar13 = (uVar19 >> 0x20) + (ulong)uVar2 * (ulong)uVar6 +
                                     (uVar14 & 0xffffffff);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 4) * 4) = (int)uVar13;
                            if ((ulong)(uVar12 - 4) - 1 == lVar21) break;
                            lVar1 = param_5 + 0x20;
                            uVar14 = (uVar13 >> 0x20) + (ulong)uVar2 * (ulong)uVar7 +
                                     (uVar15 & 0xffffffff);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 5) * 4) = (int)uVar14;
                            uVar15 = (uVar14 >> 0x20) + (ulong)uVar2 * (ulong)uVar8 +
                                     (uVar16 & 0xffffffff);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 6) * 4) = (int)uVar15;
                            if ((ulong)(uVar12 - 6) - 1 == lVar21) break;
                            uVar16 = (uVar15 >> 0x20) + (ulong)uVar2 * (ulong)uVar9 +
                                     (uVar22 & 0xffffffff);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 7) * 4) = (int)uVar16;
                            uVar22 = (uVar16 >> 0x20) + (ulong)uVar2 * (ulong)uVar10 +
                                     (uVar22 >> 0x20);
                            *(int *)(lVar1 + (long)(int)(param_6 + iVar20 + 8) * 4) = (int)uVar22;
                            if ((ulong)(uVar12 - 8) - 1 == lVar21) break;
                            lVar21 = lVar21 + 1;
                            *(int *)(param_5 + (long)(int)(param_6 + iVar20 + 9) * 4 + 0x20) =
                                 (int)(uVar22 >> 0x20);
                            if (lVar21 == 7) {
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


