/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 05dde8a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(uint param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint in_w9;
  uint uVar14;
  uint in_w11;
  uint in_w12;
  uint in_w13;
  undefined8 in_x14;
  uint uVar15;
  undefined8 unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  uint uVar16;
  long lVar17;
  long unaff_x24;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
code_r0x05dde8a8:
                    /* try { // try from 05dde8ac to 05ede8af has its CatchHandler @ 05dde954 */
  uVar13 = 0;
  uVar15 = param_1;
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar15 = (uint)unaff_x19;
  }
  uVar11 = (ulong)(int)unaff_w22;
  unaff_w22 = (uint)in_x14;
  *(uint *)(unaff_x29 + -0x78) = in_w13;
  *(uint *)(unaff_x29 + -100) = in_w12 | in_w11;
  *(uint *)(unaff_x29 + -0x60) = (uint)(in_NG == in_OV) | in_w9 ^ 1;
  *(undefined8 *)(unaff_x29 + -0x90) = in_x14;
  *(ulong *)(unaff_x29 + -0x88) = uVar11;
  *(uint *)(unaff_x29 + -0x68) = param_1;
  do {
                    /* try { // try from 05dde8d8 to 05ede8df has its CatchHandler @ 05dde968 */
    uVar13 = (ulong)(int)uVar13;
                    /* try { // try from 05dde8e0 to 05ede91b has its CatchHandler @ 05dde4e0 */
    uVar2 = uVar13;
    if ((long)uVar13 <= (long)uVar11) {
      uVar2 = uVar11;
    }
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    uVar16 = param_1;
    do {
      if (uVar13 == *(ulong *)(unaff_x29 + -0x80)) {
        if (unaff_w22 == 0) {
          lVar17 = *(long *)(unaff_x29 + -0xa0);
          bVar7 = false;
          goto LAB_05ddece8;
        }
        uVar18 = *(undefined8 *)(unaff_x29 + -0x10);
        uVar10 = *(undefined8 *)(unaff_x29 + -0x18);
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x28);
        uVar15 = (uint)unaff_x19;
        *(undefined8 *)(unaff_x29 + -0x28) = uVar18;
        *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
        if ((int)uVar15 <= *(int *)(unaff_x29 + -0x74)) {
          uVar12 = *(uint *)(unaff_x29 + -0x28);
LAB_05ddecbc:
          lVar17 = *(long *)(unaff_x29 + -0xa0);
          if (unaff_w22 - 1 < uVar12) {
            bVar7 = *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
                    *(int *)(unaff_x29 + -0x5c);
LAB_05ddece8:
            if (*(long *)(lVar17 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return bVar7;
          }
LAB_05dded50:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if ((int)uVar16 < (int)uVar15) {
          if (uVar15 <= uVar16) goto LAB_05dded50;
          uVar14 = (uint)*(ushort *)(unaff_x28 + (long)(int)uVar16 * 2);
          param_1 = uVar16 + 1;
        }
        else {
          uVar12 = *(uint *)(unaff_x29 + -0x28);
          if (uVar12 <= unaff_w22 - 1) goto LAB_05dded50;
          uVar14 = *(uint *)(unaff_x29 + -0x94);
          param_1 = uVar16;
          if (*(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)(unaff_w22 - 1) * 4) ==
              *(int *)(unaff_x29 + -0x5c)) goto LAB_05ddecbc;
        }
        *(uint *)(unaff_x29 + -0x94) = uVar14;
        in_w11 = (uint)((int)uVar15 <= (int)uVar16);
        bVar7 = (uVar14 & 0xffff) == 0x2e;
        *(uint *)(unaff_x29 + -0x74) = uVar16;
        in_w12 = (uint)!bVar7;
        in_CY = uVar15 <= param_1;
        in_OV = SBORROW4(param_1,uVar15);
        in_NG = (int)(param_1 - uVar15) < 0;
        in_ZR = param_1 == uVar15;
        in_w13 = (uint)(bVar7 || (int)uVar15 <= (int)uVar16);
        in_w9 = (uint)((int)uVar16 < (int)uVar15 && bVar7);
        in_x14 = 0;
        goto code_r0x05dde8a8;
      }
      if (*(uint *)(unaff_x29 + -0x28) <= (uint)uVar13) goto LAB_05dded50;
      *(ulong *)(unaff_x29 + -0x70) = uVar13;
      iVar3 = *(int *)(*(long *)(unaff_x29 + -0x30) + uVar13 * 4);
      iVar1 = iVar3 + 2;
      if (-1 < iVar3 + 1) {
        iVar1 = iVar3 + 1;
      }
                    /* try { // try from 05dde91c to 05ede91f has its CatchHandler @ 05dde9ac */
                    /* try { // try from 05dde920 to 05ede927 has its CatchHandler @ 05dde9a8 */
      if (iVar1 >> 1 < (int)unaff_x27) {
                    /* try { // try from 05dde928 to 05ede92b has its CatchHandler @ 05dde9a0 */
        lVar17 = (long)(iVar1 >> 1);
        do {
          puVar5 = PTR_DAT_0759b6a8;
          uVar16 = (uint)lVar17;
                    /* try { // try from 05dde92c to 05ede92f has its CatchHandler @ 05dde984 */
                    /* try { // try from 05dde930 to 05ede933 has its CatchHandler @ 05dde97c */
          if ((uint)unaff_x27 <= uVar16) goto LAB_05dded50;
                    /* try { // try from 05dde934 to 05ede937 has its CatchHandler @ 05dde974 */
                    /* try { // try from 05dde938 to 05ede93b has its CatchHandler @ 05dde970 */
          uVar4 = *(ushort *)(unaff_x21 + lVar17 * 2);
                    /* try { // try from 05dde93c to 05ede947 has its CatchHandler @ 05dde4e0 */
          if (*(int *)(unaff_x29 + -0x10) + -2 <= (int)unaff_w22) {
                    /* try { // try from 05dde948 to 05ede94b has its CatchHandler @ 05dde960 */
                    /* try { // try from 05dde94c to 05ede94f has its CatchHandler @ 05dde958 */
                    /* try { // try from 05dde950 to 05ede953 has its CatchHandler @ 05dde968 */
            iVar1 = *(int *)(unaff_x29 + -0x10) << 1;
                    /* catch() { ... } // from try @ 05dde8ac with catch @ 05dde954
                       try { // try from 05dde954 to 05ede9c3 has its CatchHandler @ 05dde4e0 */
                    /* catch() { ... } // from try @ 05dde94c with catch @ 05dde958 */
                    /* catch() { ... } // from try @ 05dde6ec with catch @ 05dde95c */
            uVar10 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b6a8,iVar1);
            puVar6 = PTR_DAT_075a5e78;
                    /* catch() { ... } // from try @ 05dde948 with catch @ 05dde960 */
                    /* catch() { ... } // from try @ 05dde6b8 with catch @ 05dde964 */
                    /* catch() { ... } // from try @ 05dde8d8 with catch @ 05dde968
                       catch() { ... } // from try @ 05dde950 with catch @ 05dde968 */
                    /* catch() { ... } // from try @ 05dde6cc with catch @ 05dde96c */
            auVar19 = FUN_05048b80(uVar10,*(undefined8 *)PTR_DAT_075a5e78);
                    /* catch() { ... } // from try @ 05dde938 with catch @ 05dde970 */
                    /* catch() { ... } // from try @ 05dde934 with catch @ 05dde974 */
                    /* catch() { ... } // from try @ 05dde874 with catch @ 05dde978 */
                    /* catch() { ... } // from try @ 05dde930 with catch @ 05dde97c */
                    /* catch() { ... } // from try @ 05dde818 with catch @ 05dde980 */
                    /* catch() { ... } // from try @ 05dde92c with catch @ 05dde984 */
                    /* catch() { ... } // from try @ 05dde840 with catch @ 05dde988 */
                    /* catch() { ... } // from try @ 05dde7e4 with catch @ 05dde98c */
                    /* catch() { ... } // from try @ 05dde74c with catch @ 05dde990 */
                    /* catch() { ... } // from try @ 05dde7a8 with catch @ 05dde994 */
            FUN_05048684(unaff_x29 + -0x18,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)PTR_DAT_075a5e50);
                    /* catch() { ... } // from try @ 05dde7c0 with catch @ 05dde998 */
            uVar10 = *(undefined8 *)puVar5;
                    /* catch() { ... } // from try @ 05dde784 with catch @ 05dde99c */
                    /* catch() { ... } // from try @ 05dde928 with catch @ 05dde9a0 */
            *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar19;
                    /* catch() { ... } // from try @ 05dde750 with catch @ 05dde9a4 */
                    /* catch() { ... } // from try @ 05dde920 with catch @ 05dde9a8 */
            uVar10 = FUN_031f21dc(uVar10,iVar1);
                    /* catch() { ... } // from try @ 05dde91c with catch @ 05dde9ac */
            auVar19 = FUN_05048b80(uVar10,*(undefined8 *)puVar6);
                    /* try { // try from 05dde9c4 to 05ede9c7 has its CatchHandler @ 05dde9d4 */
                    /* catch() { ... } // from try @ 05dde9c4 with catch @ 05dde9d4 */
            FUN_05048684(unaff_x29 + -0x30,auVar19._0_8_,auVar19._8_8_,
                         *(undefined8 *)PTR_DAT_075a5e50);
            *(undefined1 (*) [16])(unaff_x29 + -0x30) = auVar19;
            unaff_x21 = *(long *)(unaff_x29 + -0x50);
            unaff_x27 = *(undefined8 *)(unaff_x29 + -0x48);
                    /* try { // try from 05dde9e0 to 05ede9eb has its CatchHandler @ 05ddea00 */
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            unaff_x19 = *(undefined8 *)(unaff_x29 + -0x58);
          }
                    /* try { // try from 05dde9ec to 05ede9f7 has its CatchHandler @ 05dde4e0 */
          uVar12 = uVar16 * 2;
          if (uVar4 == 0x2a) {
LAB_05ddea84:
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
            uVar16 = unaff_w22 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12;
LAB_05ddeaa0:
            if (*(uint *)(unaff_x29 + -0x10) <= uVar16) goto LAB_05dded50;
            unaff_w22 = uVar16 + 1;
            *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)uVar16 * 4) = uVar12 | 1;
          }
          else {
            uVar14 = (uint)unaff_x19;
                    /* try { // try from 05dde9f8 to 05ede9ff has its CatchHandler @ 05ddea00 */
                    /* catch() { ... } // from try @ 05dde9e0 with catch @ 05ddea00
                       catch() { ... } // from try @ 05dde9f8 with catch @ 05ddea00 */
            if ((uVar4 == 0x3c) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x60) & 1) == 0) {
                uVar16 = *(uint *)(unaff_x29 + -0x68);
                do {
                  if (uVar15 == uVar16) goto LAB_05dded50;
                  if (*(short *)(unaff_x28 + (long)(int)uVar16 * 2) == 0x2e) {
                    bVar7 = true;
                    goto LAB_05ddea78;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar14 != uVar16);
              }
              bVar7 = false;
LAB_05ddea78:
              uVar16 = unaff_w22;
              if (bVar7 || *(int *)(unaff_x29 + -100) != 0) goto LAB_05ddea84;
              goto LAB_05ddeaa0;
            }
            if ((uVar4 == 0x3e) && ((*(uint *)(unaff_x29 + -0x34) & 1) != 0)) {
              if ((*(uint *)(unaff_x29 + -0x78) & 1) == 0) {
LAB_05ddeb60:
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
                *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
                unaff_w22 = unaff_w22 + 1;
                break;
              }
            }
            else {
              if ((uVar4 != 0x22) || ((*(uint *)(unaff_x29 + -0x34) & 1) == 0)) {
                if (uVar4 == 0x5c) {
                  uVar16 = uVar16 + 1;
                  if (uVar16 != (uint)unaff_x27) {
                    if (uVar16 < (uint)unaff_x27) {
                      uVar4 = *(ushort *)(unaff_x21 + (long)(int)uVar16 * 2);
                      uVar12 = uVar16 * 2;
                      goto LAB_05ddeb90;
                    }
                    goto LAB_05dded50;
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
                  *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                       *(undefined4 *)(unaff_x29 + -0x5c);
                }
                else {
LAB_05ddeb90:
                  if ((int)uVar14 <= *(int *)(unaff_x29 + -0x74)) break;
                  if (uVar4 != 0x3f) {
                    if ((*(uint *)(unaff_x29 + -0x98) & 1) == 0) {
                      if ((uint)uVar4 != (*(uint *)(unaff_x29 + -0x94) & 0xffff)) break;
                    }
                    else {
                      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      sVar8 = FUN_05d7c024(uVar4,0);
                      sVar9 = FUN_05d7c024(*(undefined4 *)(unaff_x29 + -0x94),0);
                      if (sVar8 != sVar9) break;
                    }
                  }
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
                  *(uint *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) = uVar12 + 2;
                }
                unaff_w22 = unaff_w22 + 1;
                break;
              }
              if (*(int *)(unaff_x29 + -0x74) < (int)uVar14) {
                if ((*(uint *)(unaff_x29 + -0x94) & 0xffff) == 0x2e) goto LAB_05ddeb60;
                break;
              }
            }
          }
          lVar17 = lVar17 + 1;
          if (lVar17 == unaff_x24) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_05dded50;
            *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + (long)(int)unaff_w22 * 4) =
                 *(undefined4 *)(unaff_x29 + -0x5c);
            unaff_w22 = unaff_w22 + 1;
          }
        } while (lVar17 != unaff_x24);
      }
      uVar11 = *(ulong *)(unaff_x29 + -0x88);
      param_1 = *(uint *)(unaff_x29 + -0x68);
      uVar13 = *(long *)(unaff_x29 + -0x70) + 1;
      uVar16 = param_1;
    } while (((long)uVar11 <= (long)uVar13) ||
            ((int)unaff_w22 <= (int)*(undefined8 *)(unaff_x29 + -0x90)));
    uVar16 = *(uint *)(unaff_x29 + -0x28);
    lVar17 = (long)(int)*(undefined8 *)(unaff_x29 + -0x90);
    uVar13 = uVar13 & 0xffffffff;
    do {
      uVar12 = (uint)uVar13;
      if ((int)uVar12 < (int)uVar16) {
        if (uVar12 <= uVar16) {
          uVar12 = uVar16;
        }
        do {
          uVar14 = (uint)uVar13;
          if ((uVar12 == uVar14) || (*(uint *)(unaff_x29 + -0x10) <= (uint)lVar17))
          goto LAB_05dded50;
          if (*(int *)(*(long *)(unaff_x29 + -0x18) + lVar17 * 4) <=
              *(int *)(*(long *)(unaff_x29 + -0x30) + (long)(int)uVar14 * 4)) goto LAB_05ddec78;
          uVar13 = (ulong)(uVar14 + 1);
        } while (uVar16 != uVar14 + 1);
        uVar13 = (ulong)uVar16;
      }
LAB_05ddec78:
      lVar17 = lVar17 + 1;
    } while (lVar17 != (int)unaff_w22);
    *(ulong *)(unaff_x29 + -0x90) = (ulong)unaff_w22;
  } while( true );
}


