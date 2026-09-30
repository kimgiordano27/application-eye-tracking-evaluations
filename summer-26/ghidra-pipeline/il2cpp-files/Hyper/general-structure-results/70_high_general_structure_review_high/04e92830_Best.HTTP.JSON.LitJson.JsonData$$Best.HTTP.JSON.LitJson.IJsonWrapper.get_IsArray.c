/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$Best.HTTP.JSON.LitJson.IJsonWrapper.get_IsArray
ENTRY_POINT: 04e92830
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3
*/


void Best_HTTP_JSON_LitJson_JsonData__Best_HTTP_JSON_LitJson_IJsonWrapper_get_IsArray
               (long param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  uint in_w8;
  ulong in_x9;
  ulong uVar23;
  ulong in_x10;
  uint in_w11;
  uint in_w12;
  long in_x13;
  ulong in_x14;
  uint *puVar24;
  ulong uVar25;
  long in_x17;
  uint *puVar26;
  ulong uVar27;
  uint *puVar28;
  ulong uVar29;
  
  uVar12 = *(uint *)(in_x13 + 0x20);
  *(uint *)(in_x17 + 0x20) = in_w12 | (int)in_x14 << 1;
  if (param_2 + 2U < in_w11) {
    if ((param_4 + 3U < in_w8) && (param_4 + 4U < in_w8)) {
      lVar1 = param_3 + (long)(int)(param_4 + 3U) * 4;
      uVar10 = *(uint *)(param_1 + (long)(int)(param_2 + 2U) * 4 + 0x20);
      uVar13 = *(uint *)(lVar1 + 0x20);
      uVar25 = (ulong)uVar12 + (in_x14 >> 0x20) + (ulong)uVar10 * (in_x9 & 0xffffffff);
      puVar26 = (uint *)(param_3 + (long)(int)(param_4 + 4U) * 4 + 0x20);
      uVar12 = *puVar26;
      *(int *)(in_x13 + 0x20) = (int)((uVar25 << 0x20 | in_x14 & 0xffffffff) >> 0x1f);
      if (param_2 + 3U < in_w11) {
        if ((param_4 + 5U < in_w8) && (param_4 + 6U < in_w8)) {
          uVar11 = *(uint *)(param_1 + (long)(int)(param_2 + 3U) * 4 + 0x20);
          uVar7 = (uVar25 >> 0x20) + (ulong)uVar10 * (in_x10 & 0xffffffff) + (ulong)uVar13;
          lVar2 = param_3 + (long)(int)(param_4 + 5U) * 4;
          puVar28 = (uint *)(param_3 + (long)(int)(param_4 + 6U) * 4 + 0x20);
          uVar16 = *puVar28;
          uVar20 = (uVar7 & 0xffffffff) + (ulong)uVar11 * (in_x9 & 0xffffffff);
          uVar13 = *(uint *)(lVar2 + 0x20);
          *(int *)(lVar1 + 0x20) = (int)((uVar20 << 0x20 | uVar25 & 0xffffffff) >> 0x1f);
          if ((param_2 + 4U < in_w11) && ((param_4 + 7U < in_w8 && (param_4 + 8U < in_w8)))) {
            uVar25 = (ulong)uVar12 + (uVar7 >> 0x20);
            lVar1 = param_3 + (long)(int)(param_4 + 7U) * 4;
            uVar12 = *(uint *)(param_1 + (long)(int)(param_2 + 4U) * 4 + 0x20);
            uVar7 = (ulong)uVar11 * (in_x10 & 0xffffffff) + (uVar25 & 0xffffffff) + (uVar20 >> 0x20)
            ;
            uVar27 = (uVar7 & 0xffffffff) + (ulong)uVar12 * (in_x9 & 0xffffffff);
            uVar14 = *(uint *)(lVar1 + 0x20);
            puVar24 = (uint *)(param_3 + (long)(int)(param_4 + 8U) * 4 + 0x20);
            uVar17 = *puVar24;
            *puVar26 = (uint)((uVar27 << 0x20 | uVar20 & 0xffffffff) >> 0x1f);
            if ((param_2 + 5U < in_w11) && ((param_4 + 9U < in_w8 && (param_4 + 10U < in_w8)))) {
              uVar20 = (ulong)uVar13 + (uVar25 >> 0x20);
              uVar21 = (ulong)*(uint *)(param_1 + (long)(int)(param_2 + 5U) * 4 + 0x20);
              uVar25 = (uVar7 >> 0x20) + (ulong)uVar11 * (ulong)uVar10 + (uVar20 & 0xffffffff);
              uVar7 = (uVar25 & 0xffffffff) + (ulong)uVar12 * (in_x10 & 0xffffffff) +
                      (uVar27 >> 0x20);
              uVar29 = (uVar7 & 0xffffffff) + uVar21 * (in_x9 & 0xffffffff);
              lVar3 = param_3 + (long)(int)(param_4 + 9U) * 4;
              uVar13 = *(uint *)(lVar3 + 0x20);
              puVar26 = (uint *)(param_3 + (long)(int)(param_4 + 10U) * 4 + 0x20);
              uVar18 = *puVar26;
              *(int *)(lVar2 + 0x20) = (int)((uVar29 << 0x20 | uVar27 & 0xffffffff) >> 0x1f);
              if (param_2 + 6U < in_w11) {
                if (param_4 + 0xbU < in_w8) {
                  if (param_4 + 0xcU < in_w8) {
                    uVar25 = (ulong)uVar16 + (uVar20 >> 0x20) + (uVar25 >> 0x20);
                    uVar16 = *(uint *)(param_1 + (long)(int)(param_2 + 6U) * 4 + 0x20);
                    uVar7 = (ulong)uVar12 * (ulong)uVar10 + (uVar25 & 0xffffffff) + (uVar7 >> 0x20);
                    uVar20 = (uVar7 & 0xffffffff) + uVar21 * (in_x10 & 0xffffffff) +
                             (uVar29 >> 0x20);
                    uVar27 = (uVar20 & 0xffffffff) + (ulong)uVar16 * (in_x9 & 0xffffffff);
                    lVar2 = param_3 + (long)(int)(param_4 + 0xbU) * 4;
                    uVar15 = *(uint *)(lVar2 + 0x20);
                    puVar22 = (uint *)(param_3 + (long)(int)(param_4 + 0xcU) * 4 + 0x20);
                    uVar19 = *puVar22;
                    *puVar28 = (uint)((uVar27 << 0x20 | uVar29 & 0xffffffff) >> 0x1f);
                    if ((param_2 + 7U < in_w11) && (uVar4 = param_4 + 0xd, uVar4 < in_w8)) {
                      uVar5 = param_4 + 0xe;
                      if (uVar5 < in_w8) {
                        uVar29 = (ulong)uVar14 + (uVar25 >> 0x20);
                        uVar14 = *(uint *)(param_1 + (long)(int)(param_2 + 7U) * 4 + 0x20);
                        uVar25 = (uVar7 >> 0x20) + (ulong)uVar12 * (ulong)uVar11 +
                                 (uVar29 & 0xffffffff);
                        uVar7 = (ulong)uVar17 + (uVar29 >> 0x20) + (uVar25 >> 0x20);
                        uVar29 = (ulong)uVar13 + (uVar7 >> 0x20);
                        uVar25 = (uVar25 & 0xffffffff) + uVar21 * uVar10 + (uVar20 >> 0x20);
                        uVar7 = uVar21 * uVar11 + (uVar7 & 0xffffffff) + (uVar25 >> 0x20);
                        uVar20 = (uVar25 & 0xffffffff) + (ulong)uVar16 * (in_x10 & 0xffffffff) +
                                 (uVar27 >> 0x20);
                        uVar25 = (uVar7 >> 0x20) + uVar21 * uVar12 + (uVar29 & 0xffffffff);
                        uVar7 = (uVar7 & 0xffffffff) + (ulong)uVar16 * (ulong)uVar10 +
                                (uVar20 >> 0x20);
                        uVar23 = (uVar20 & 0xffffffff) + (ulong)uVar14 * (in_x9 & 0xffffffff);
                        uVar20 = (ulong)uVar18 + (uVar29 >> 0x20) + (uVar25 >> 0x20);
                        uVar29 = (ulong)uVar15 + (uVar20 >> 0x20);
                        uVar25 = (uVar25 & 0xffffffff) + (ulong)uVar16 * (ulong)uVar11 +
                                 (uVar7 >> 0x20);
                        uVar20 = (ulong)uVar16 * (ulong)uVar12 + (uVar20 & 0xffffffff) +
                                 (uVar25 >> 0x20);
                        uVar7 = (uVar7 & 0xffffffff) + (ulong)uVar14 * (in_x10 & 0xffffffff) +
                                (uVar23 >> 0x20);
                        uVar8 = (uVar25 & 0xffffffff) + (ulong)uVar14 * (ulong)uVar10 +
                                (uVar7 >> 0x20);
                        uVar9 = (uVar20 & 0xffffffff) + (ulong)uVar14 * (ulong)uVar11 +
                                (uVar8 >> 0x20);
                        *puVar24 = (uint)((uVar7 << 0x20 | uVar23 & 0xffffffff) >> 0x1f);
                        uVar25 = (uVar20 >> 0x20) + uVar16 * uVar21 + (uVar29 & 0xffffffff);
                        uVar20 = (ulong)uVar19 + (uVar29 >> 0x20) + (uVar25 >> 0x20);
                        lVar6 = param_3 + 0x20;
                        *(int *)(lVar3 + 0x20) = (int)((uVar8 << 0x20 | uVar7 & 0xffffffff) >> 0x1f)
                        ;
                        uVar10 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
                        *puVar26 = (uint)((uVar9 << 0x20 | uVar8 & 0xffffffff) >> 0x1f);
                        uVar7 = (uVar25 & 0xffffffff) + (ulong)uVar14 * (ulong)uVar12 +
                                (uVar9 >> 0x20);
                        uVar29 = (ulong)uVar10 + (uVar20 >> 0x20);
                        uVar12 = *(uint *)(lVar6 + (long)(int)uVar5 * 4);
                        uVar20 = uVar14 * uVar21 + (uVar20 & 0xffffffff) + (uVar7 >> 0x20);
                        *(int *)(lVar2 + 0x20) = (int)((uVar7 << 0x20 | uVar9 & 0xffffffff) >> 0x1f)
                        ;
                        *(int *)(lVar1 + 0x20) =
                             (int)((uVar23 << 0x20 | uVar27 & 0xffffffff) >> 0x1f);
                        uVar25 = (uVar20 >> 0x20) + (ulong)uVar14 * (ulong)uVar16 +
                                 (uVar29 & 0xffffffff);
                        *puVar22 = (uint)((uVar20 << 0x20 | uVar7 & 0xffffffff) >> 0x1f);
                        uVar7 = (ulong)uVar12 + (uVar29 >> 0x20) + (uVar25 >> 0x20);
                        *(int *)(lVar6 + (long)(int)uVar4 * 4) =
                             (int)((uVar25 << 0x20 | uVar20 & 0xffffffff) >> 0x1f);
                        *(int *)(lVar6 + (long)(int)uVar5 * 4) =
                             (int)((uVar7 << 0x20 | uVar25 & 0xffffffff) >> 0x1f);
                        if (param_4 + 0xfU < in_w8) {
                          param_3 = param_3 + (long)(int)(param_4 + 0xfU) * 4;
                          *(int *)(param_3 + 0x20) =
                               (int)(((ulong)(uint)(*(int *)(param_3 + 0x20) + (int)(uVar7 >> 0x20))
                                      << 0x20 | uVar7 & 0xffffffff) >> 0x1f);
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
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


