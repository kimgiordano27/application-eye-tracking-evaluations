/*
FUNCTION_NAME: Best.HTTP.JSON.LitJson.JsonData$$ToJsonData
ENTRY_POINT: 034acad8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Best_HTTP_JSON_LitJson_JsonData__ToJsonData
               (long param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6,
               undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  bool in_ZR;
  bool in_CY;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint in_w8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long in_x9;
  int iVar14;
  int iVar15;
  int iVar16;
  long in_x10;
  long in_x11;
  uint in_w12;
  long in_x13;
  long in_x14;
  long in_x15;
  ulong uVar17;
  ulong in_x17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (((in_CY && !in_ZR) && (9 < in_w8)) && (in_w8 != 10)) {
    uVar2 = in_x15 + (in_x17 >> 0x20);
    uVar1 = in_x13 * in_x11 + (param_4 >> 0x20) + (uVar2 & 0xffffffff);
    uVar17 = (ulong)*(uint *)(param_1 + 0x34);
    uVar3 = (uVar1 & 0xffffffff) + in_x14 * in_x10 + (param_3 >> 0x20);
    uVar18 = (uVar3 & 0xffffffff) + uVar17 * in_x9;
    *(int *)(param_2 + 0x34) = (int)((uVar18 << 0x20 | param_3 & 0xffffffff) >> 0x1f);
    if (((6 < in_w12) && (0xb < in_w8)) && (in_w8 != 0xc)) {
      uVar1 = (uVar1 >> 0x20) + (uVar2 >> 0x20) + param_5;
      uVar2 = in_x14 * in_x11 + (uVar1 & 0xffffffff) + (uVar3 >> 0x20);
      uVar7 = (ulong)*(uint *)(param_1 + 0x38);
      uVar3 = (uVar2 & 0xffffffff) + uVar17 * in_x10 + (uVar18 >> 0x20);
      uVar8 = (uVar3 & 0xffffffff) + uVar7 * in_x9;
      *(int *)(param_2 + 0x38) = (int)((uVar8 << 0x20 | uVar18 & 0xffffffff) >> 0x1f);
      if (((7 < in_w12) && (0xd < in_w8)) && (in_w8 != 0xe)) {
        uVar18 = param_8 + (uVar1 >> 0x20);
        uVar1 = in_x14 * in_x13 + (uVar2 >> 0x20) + (uVar18 & 0xffffffff);
        uVar2 = (uVar1 >> 0x20) + (uVar18 >> 0x20) + param_6;
        uVar1 = (uVar1 & 0xffffffff) + uVar17 * in_x11 + (uVar3 >> 0x20);
        uVar3 = uVar17 * in_x13 + (uVar2 & 0xffffffff) + (uVar1 >> 0x20);
        uVar2 = (ulong)*(uint *)(param_2 + 0x44) + (uVar2 >> 0x20);
        uVar6 = (ulong)*(uint *)(param_1 + 0x3c);
        auVar19._0_8_ = uVar8 & 0xffffffff;
        auVar19._8_8_ = 0;
        uVar18 = (uVar1 & 0xffffffff) + uVar7 * in_x10 + (uVar8 >> 0x20);
        uVar1 = uVar17 * in_x14 + (uVar3 >> 0x20) + (uVar2 & 0xffffffff);
        uVar3 = (uVar3 & 0xffffffff) + uVar7 * in_x11 + (uVar18 >> 0x20);
        uVar2 = (uVar1 >> 0x20) + (uVar2 >> 0x20) + (ulong)*(uint *)(param_2 + 0x48);
        uVar8 = (uVar18 & 0xffffffff) + uVar6 * in_x9;
        uVar1 = (uVar1 & 0xffffffff) + uVar7 * in_x13 + (uVar3 >> 0x20);
        uVar18 = (ulong)*(uint *)(param_2 + 0x4c) + (uVar2 >> 0x20);
        uVar3 = (uVar3 & 0xffffffff) + uVar6 * in_x10 + (uVar8 >> 0x20);
        iVar9 = (int)uVar8;
        uVar2 = uVar7 * in_x14 + (uVar2 & 0xffffffff) + (uVar1 >> 0x20);
        iVar14 = (int)uVar3;
        auVar20._4_4_ = iVar14;
        auVar20._0_4_ = iVar9;
        uVar3 = (uVar1 & 0xffffffff) + uVar6 * in_x11 + (uVar3 >> 0x20);
        uVar1 = uVar7 * uVar17 + (uVar2 >> 0x20) + (uVar18 & 0xffffffff);
        iVar15 = (int)uVar3;
        auVar20._8_4_ = iVar15;
        uVar2 = (uVar2 & 0xffffffff) + uVar6 * in_x13 + (uVar3 >> 0x20);
        auVar19 = NEON_ext(auVar19,auVar19,4,1);
        iVar10 = (int)uVar2;
        auVar20._12_4_ = iVar10;
        uVar3 = (uVar1 >> 0x20) + (uVar18 >> 0x20) + (ulong)*(uint *)(param_2 + 0x50);
        uVar1 = (uVar1 & 0xffffffff) + uVar6 * in_x14 + (uVar2 >> 0x20);
        auVar19 = NEON_ext(auVar19,auVar20,0xc,1);
        uVar2 = (ulong)*(uint *)(param_2 + 0x54) + (uVar3 >> 0x20);
        iVar9 = iVar9 << 1;
        iVar14 = iVar14 << 1;
        iVar15 = iVar15 << 1;
        iVar10 = iVar10 << 1;
        uVar3 = uVar6 * uVar17 + (uVar3 & 0xffffffff) + (uVar1 >> 0x20);
        iVar11 = (int)uVar1;
        uVar1 = uVar6 * uVar7 + (uVar3 >> 0x20) + (uVar2 & 0xffffffff);
        iVar16 = (int)uVar3;
        auVar21._4_4_ = iVar16;
        auVar21._0_4_ = iVar11;
        iVar12 = (int)uVar1;
        auVar21._8_4_ = iVar12;
        lVar4 = (uVar1 >> 0x20) + (uVar2 >> 0x20) + (ulong)*(uint *)(param_2 + 0x58);
        iVar13 = (int)lVar4;
        auVar21._12_4_ = iVar13;
        auVar21 = NEON_ext(auVar20,auVar21,0xc,1);
        *(ulong *)(param_2 + 0x44) =
             CONCAT17((char)((uint)iVar10 >> 0x18),
                      CONCAT16((char)((uint)iVar10 >> 0x10),
                               CONCAT15((char)((uint)iVar10 >> 8),
                                        CONCAT14((byte)iVar10 | auVar19[0xf] >> 7,
                                                 CONCAT13((char)((uint)iVar15 >> 0x18),
                                                          CONCAT12((char)((uint)iVar15 >> 0x10),
                                                                   CONCAT11((char)((uint)iVar15 >> 8
                                                                                  ),(byte)iVar15 |
                                                                                    auVar19[0xb] >>
                                                                                    7)))))));
        *(ulong *)(param_2 + 0x3c) =
             CONCAT17((char)((uint)iVar14 >> 0x18),
                      CONCAT16((char)((uint)iVar14 >> 0x10),
                               CONCAT15((char)((uint)iVar14 >> 8),
                                        CONCAT14((byte)iVar14 | auVar19[7] >> 7,
                                                 CONCAT13((char)((uint)iVar9 >> 0x18),
                                                          CONCAT12((char)((uint)iVar9 >> 0x10),
                                                                   CONCAT11((char)((uint)iVar9 >> 8)
                                                                            ,(byte)iVar9 |
                                                                             auVar19[3] >> 7)))))));
        iVar11 = iVar11 << 1;
        iVar16 = iVar16 << 1;
        iVar12 = iVar12 << 1;
        iVar9 = iVar13 << 1;
        uVar5 = CONCAT17((char)((uint)iVar16 >> 0x18),
                         CONCAT16((char)((uint)iVar16 >> 0x10),
                                  CONCAT15((char)((uint)iVar16 >> 8),
                                           CONCAT14((byte)iVar16 | auVar21[7] >> 7,
                                                    CONCAT13((char)((uint)iVar11 >> 0x18),
                                                             CONCAT12((char)((uint)iVar11 >> 0x10),
                                                                      CONCAT11((char)((uint)iVar11
                                                                                     >> 8),
                                                                               (byte)iVar11 |
                                                                               auVar21[3] >> 7))))))
                        );
        auVar22[8] = (byte)iVar12 | auVar21[0xb] >> 7;
        auVar22._0_8_ = uVar5;
        auVar22[9] = (char)((uint)iVar12 >> 8);
        auVar22[10] = (char)((uint)iVar12 >> 0x10);
        auVar22[0xb] = (char)((uint)iVar12 >> 0x18);
        auVar22[0xc] = (byte)iVar9 | auVar21[0xf] >> 7;
        auVar22[0xd] = (char)((uint)iVar9 >> 8);
        auVar22[0xe] = (char)((uint)iVar9 >> 0x10);
        auVar22[0xf] = (char)((uint)iVar9 >> 0x18);
        *(long *)(param_2 + 0x54) = auVar22._8_8_;
        *(undefined8 *)(param_2 + 0x4c) = uVar5;
        if (0xf < in_w8) {
          *(int *)(param_2 + 0x5c) =
               (int)(CONCAT44(*(int *)(param_2 + 0x5c) + (int)((ulong)lVar4 >> 0x20),iVar13) >> 0x1f
                    );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


