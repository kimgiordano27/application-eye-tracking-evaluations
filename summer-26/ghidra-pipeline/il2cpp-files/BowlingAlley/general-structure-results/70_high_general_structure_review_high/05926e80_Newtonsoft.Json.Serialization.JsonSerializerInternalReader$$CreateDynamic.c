/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 05926e80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auVar4 [12];
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int in_w8;
  int in_w9;
  int in_w10;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  int in_w14;
  undefined4 in_w16;
  byte *in_x17;
  uint unaff_w19;
  uint uVar14;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar15;
  short *psVar16;
  long unaff_x22;
  short *psVar17;
  int unaff_w24;
  int iVar18;
  long lVar19;
  uint uVar20;
  short sVar21;
  uint uVar22;
  long unaff_x26;
  int iVar23;
  int unaff_w28;
  int iVar24;
  ushort *puVar25;
  long unaff_x29;
  undefined1 auVar26 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
switchD_05926d1c_caseD_24:
  iVar6 = in_w14;
  uVar14 = (uint)unaff_x20;
  if (iVar6 < (int)uVar14) goto LAB_05926ce8;
LAB_05926ec8:
  if (in_w9 < 0) {
    in_w9 = *(int *)(unaff_x29 + -0x1c);
  }
  *(int *)(unaff_x29 + -0x34) = in_w9;
  if (-1 < in_w10) {
    if (in_w10 == in_w9) {
      in_w8 = *(int *)(unaff_x29 + -0x38) * -3 + in_w8;
    }
    else {
      in_w16 = 1;
    }
  }
  do {
    *(undefined4 *)(unaff_x29 + -0x3c) = in_w16;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      FUN_059321c0();
      *(undefined4 *)(unaff_x26 + 4) = 0;
LAB_05926fac:
      iVar18 = *(int *)(unaff_x29 + -0x34);
      iVar6 = iVar18 - unaff_w24;
      if (iVar6 == 0 || iVar18 < unaff_w24) {
        iVar6 = 0;
      }
      iVar24 = iVar18 - unaff_w28;
      if (unaff_w28 <= iVar18) {
        iVar24 = 0;
      }
      *(int *)(unaff_x29 + -0x74) = iVar24;
      if ((unaff_w19 & 1) == 0) {
        iVar24 = *(int *)(unaff_x26 + 4);
        lVar13 = *(long *)(unaff_x29 + -0x48);
        uVar12 = *(uint *)(unaff_x29 + -0x3c);
        uVar11 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar24 - iVar18;
        if (iVar24 - iVar18 == 0 || iVar24 < iVar18) {
          iVar24 = iVar18;
        }
      }
      else {
        lVar13 = *(long *)(unaff_x29 + -0x48);
        uVar12 = *(uint *)(unaff_x29 + -0x3c);
        uVar11 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar24 = iVar18;
      }
      uVar7 = DAT_0139d8a0;
      puVar8 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar7;
      *(int *)(unaff_x29 + -0x78) = iVar6;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar11;
      if ((uVar12 & 1) != 0) {
        if ((lVar13 == 0) || (*(long *)(lVar13 + 0x40) == 0)) goto LAB_05927ca8;
        if (0 < *(int *)(*(long *)(lVar13 + 0x40) + 0x10)) {
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) goto LAB_05927ca8;
          iVar18 = *(int *)(lVar13 + 0x18);
          if (iVar18 == 0) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(lVar13 + 0x20);
          }
          uVar12 = 0xffffffff;
          iVar10 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar24;
          if (iVar6 <= iVar10) {
            iVar6 = iVar10;
          }
          if ((iVar23 == 0) || (iVar6 <= iVar23)) goto LAB_05927060;
          uVar12 = 0;
          lVar19 = 0;
          uVar9 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar13;
          iVar10 = iVar23;
          break;
        }
      }
      uVar12 = 0xffffffff;
      goto LAB_05927060;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + in_w8;
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0592b640();
    if (**(short **)(unaff_x29 + -0x30) != 0) {
LAB_05926f8c:
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      goto LAB_05926fac;
    }
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue
                      (*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar6 == unaff_w21) goto LAB_05926f8c;
    param_1 = FUN_03aca200(*(undefined8 *)(unaff_x29 + -0x28));
    unaff_w21 = iVar6;
    if (iVar6 < (int)uVar14) goto code_r0x05926cbc;
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    unaff_w19 = 0;
    unaff_w28 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w24 = 0x7fffffff;
  } while( true );
LAB_05927bb8:
  auVar26._8_8_ = uVar9;
  auVar26._0_8_ = puVar8;
  auVar4 = auVar26._0_12_;
  if ((int)uVar9 <= (int)uVar12) {
    uVar7 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727aa68,(int)uVar9 << 1);
    auVar26 = FUN_049b37a4(uVar7,*(undefined8 *)PTR_DAT_072970b0);
    FUN_049b3278(unaff_x29 + -0x18,auVar26._0_8_,auVar26._8_8_,*(undefined8 *)PTR_DAT_072970a0);
    auVar26 = FUN_049b37a4(uVar7,*(undefined8 *)PTR_DAT_072970b0);
    auVar4 = auVar26._0_12_;
    lVar13 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar26;
  }
  puVar8 = auVar4._0_8_;
  if (auVar4._8_4_ <= uVar12) goto LAB_05927ca4;
  *(int *)((long)puVar8 + (long)(int)uVar12 * 4) = iVar23;
  if ((int)lVar19 < iVar18 + -1) {
    lVar19 = (long)(int)lVar19 + 1;
    if (*(uint *)(lVar13 + 0x18) <= (uint)lVar19) goto LAB_05927ca4;
    iVar10 = *(int *)(lVar13 + lVar19 * 4 + 0x20);
  }
  if ((iVar10 == 0) || (iVar23 = iVar10 + iVar23, iVar6 <= iVar23)) goto LAB_05927c9c;
  uVar9 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar12 = uVar12 + 1;
  goto LAB_05927bb8;
code_r0x05926cbc:
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  unaff_w28 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w24 = 0x7fffffff;
  in_w9 = -1;
  in_w10 = -1;
  in_x17 = &switchD_05926d1c::switchdataD_014aaaf0;
LAB_05926ce8:
  uVar2 = *(ushort *)(param_1 + (long)iVar6 * 2);
  if ((uVar2 != 0x3b) && (uVar2 != 0)) {
    in_w14 = iVar6 + 1;
    uVar12 = (uint)uVar2;
    if (uVar2 < 0x46) {
      if (uVar12 - 0x22 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x05926d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)in_x17[uVar12 - 0x22] * 4 + 0x5926d20))();
        return;
      }
      if (uVar12 != 0x45) goto switchD_05926d1c_caseD_24;
    }
    else {
      if (uVar2 == 0x5c) {
        if ((in_w14 < (int)uVar14) && (*(short *)(param_1 + (long)in_w14 * 2) != 0)) {
          in_w14 = iVar6 + 2;
        }
        goto switchD_05926d1c_caseD_24;
      }
      if (uVar2 != 0x65) {
        if (uVar12 == 0x2030) {
          in_w8 = in_w8 + 3;
        }
        goto switchD_05926d1c_caseD_24;
      }
    }
    if ((((int)uVar14 <= in_w14) || (*(short *)(param_1 + (long)in_w14 * 2) != 0x30)) &&
       (((int)uVar14 <= iVar6 + 2 ||
        (((sVar21 = *(short *)(param_1 + (long)in_w14 * 2), sVar21 != 0x2d && (sVar21 != 0x2b)) ||
         (*(short *)(param_1 + (long)(iVar6 + 2) * 2) != 0x30)))))) goto switchD_05926d1c_caseD_24;
    while (in_w14 = in_w14 + 1, in_w14 < (int)uVar14) {
      if (*(short *)(param_1 + (long)in_w14 * 2) != 0x30) {
        unaff_w19 = 1;
        goto switchD_05926d1c_caseD_24;
      }
    }
    unaff_w19 = 1;
  }
  goto LAB_05926ec8;
LAB_05927c9c:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_05927060:
  uVar9 = FUN_059321b0(unaff_x26,0);
                    /* try { // try from 05927074 to 05a2715f has its CatchHandler @ 05927074
                       catch() { ... } // from try @ 05927074 with catch @ 05927074
                       catch() { ... } // from try @ 059271d8 with catch @ 05927074
                       catch() { ... } // from try @ 05927230 with catch @ 05927074
                       catch() { ... } // from try @ 05927268 with catch @ 05927074
                       catch() { ... } // from try @ 05927298 with catch @ 05927074 */
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar9 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar13 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_076d53fa == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07291038);
        DAT_076d53fa = '\x01';
      }
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x10) == 1) {
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) {
LAB_05927ca4:
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar19 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_057a62b4(lVar13,0,0);
            *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            goto LAB_05927100;
          }
        }
        FUN_057c5e60(unaff_x22,lVar13,0);
        goto LAB_05927100;
      }
    }
LAB_05927ca8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
LAB_05927100:
  uVar7 = FUN_03aca200(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_07290a68)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar7;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar14) {
    psVar17 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar14 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar14;
    do {
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
                    /* try { // try from 05927160 to 05a27167 has its CatchHandler @ 0592724c */
      if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
      iVar6 = *(int *)(unaff_x29 + -0x4c);
      uVar22 = (uint)uVar2;
                    /* try { // try from 05927180 to 05a27183 has its CatchHandler @ 05927230 */
                    /* try { // try from 05927184 to 05a27193 has its CatchHandler @ 0592723c */
      if ((iVar6 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar22 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar13 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar13 = *(long *)(unaff_x29 + -0x48);
        uVar20 = *(uint *)(unaff_x29 + -0x28);
                    /* try { // try from 059271a4 to 05a271af has its CatchHandler @ 05927244 */
        iVar18 = iVar6 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar24 - iVar6;
        do {
          sVar21 = *psVar17;
          sVar3 = 0x30;
          if (sVar21 != 0) {
            psVar17 = psVar17 + 1;
            sVar3 = sVar21;
          }
                    /* try { // try from 059271c8 to 05a271d7 has its CatchHandler @ 05927248 */
          if (DAT_076d47fe == '\0') {
                    /* try { // try from 059271d8 to 05a2721f has its CatchHandler @ 05927074 */
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_05927ca4;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          }
          else {
                    /* try { // try from 05927220 to 05a27223 has its CatchHandler @ 05927240 */
            FUN_057c5d34(unaff_x22,sVar3,0);
          }
                    /* try { // try from 05927224 to 05a2722b has its CatchHandler @ 05927238 */
                    /* try { // try from 0592722c to 05a2722f has its CatchHandler @ 05927234 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05927180 with catch @ 05927230
                       try { // try from 05927230 to 05a27263 has its CatchHandler @ 05927074 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 0592722c with catch @ 05927234
                        */
          if ((-1 < (int)uVar12) && (1 < iVar24 && (uVar20 & 1) == 0)) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05927224 with catch @ 05927238
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05927184 with catch @ 0592723c
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05927220 with catch @ 05927240
                        */
            if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_05927ca4;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 059271a4 with catch @ 05927244
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 059271c8 with catch @ 05927248
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05927160 with catch @ 0592724c
                        */
            if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
              if (lVar13 == 0) goto LAB_05927ca8;
                    /* try { // try from 05927264 to 05a27267 has its CatchHandler @ 05927288 */
              lVar19 = *(long *)(lVar13 + 0x40);
                    /* try { // try from 05927268 to 05a2728f has its CatchHandler @ 05927074 */
              if (DAT_076d53fa == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d53fa = '\x01';
              }
              if (lVar19 == 0) goto LAB_05927ca8;
                    /* catch() { ... } // from try @ 05927264 with catch @ 05927288 */
                    /* try { // try from 05927290 to 05a27297 has its CatchHandler @ 059272ac */
              if (*(int *)(lVar19 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 05927298 to 05a272a3 has its CatchHandler @ 05927074 */
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_059272d4;
                    /* try { // try from 059272a4 to 05a272ab has its CatchHandler @ 059272ac */
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_05927ca4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05927290 with catch @ 059272ac
                       catch(type#2 @ 00000000) { ... } // from try @ 059272a4 with catch @ 059272ac
                        */
                lVar13 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_057a62b4(lVar19,0,0);
                *(undefined2 *)(lVar13 + (long)(int)uVar20 * 2) = uVar5;
                lVar13 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_059272d4:
                FUN_057c5e60(unaff_x22,lVar19,0);
              }
              uVar20 = *(uint *)(unaff_x29 + -0x28);
              uVar12 = uVar12 - 1;
            }
          }
          iVar18 = iVar18 + -1;
          iVar24 = iVar24 + -1;
        } while (1 < iVar18);
        iVar24 = *(int *)(unaff_x29 + -0x3c);
        iVar6 = 0;
      }
      uVar20 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar22 < 0x46) {
        switch(uVar2) {
        case 0x22:
        case 0x27:
          if ((int)uVar20 < (int)uVar14) {
            *(int *)(unaff_x29 + -0x3c) = iVar24;
            *(int *)(unaff_x29 + -0x4c) = iVar6;
            lVar13 = (ulong)uVar20 << 0x20;
            uVar15 = ~*(uint *)(unaff_x29 + -0x38);
            puVar25 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            lVar19 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
            while( true ) {
              uVar2 = *puVar25;
              if ((uVar2 == 0) || (uVar2 == uVar22)) break;
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar20 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_05927ca4;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,uVar2,0);
              }
              lVar13 = lVar13 + 0x100000000;
              uVar15 = uVar15 - 1;
              lVar19 = lVar19 + -1;
              puVar25 = puVar25 + 1;
              if (lVar19 == 0) goto LAB_05927b44;
            }
            iVar6 = *(int *)(unaff_x29 + -0x4c);
            iVar24 = *(int *)(unaff_x29 + -0x3c);
            uVar20 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar15;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
            if (iVar24 <= *(int *)(unaff_x29 + -0x78)) {
LAB_059277dc:
              sVar21 = 0x30;
              goto LAB_059277e0;
            }
          }
          else {
            sVar21 = *psVar17;
            if (sVar21 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar24) goto LAB_059277dc;
            }
            else {
              psVar17 = psVar17 + 1;
LAB_059277e0:
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              uVar22 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_05927ca4;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar21;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,sVar21,0);
              }
              if ((-1 < (int)uVar12) && (1 < iVar24 && (uVar22 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_05927ca4;
                if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
                  if (lVar13 == 0) goto LAB_05927ca8;
                  lVar13 = *(long *)(lVar13 + 0x40);
                  if (DAT_076d53fa == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07291038);
                    DAT_076d53fa = '\x01';
                  }
                  if (lVar13 == 0) goto LAB_05927ca8;
                  if (*(int *)(lVar13 + 0x10) == 1) {
                    uVar22 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar22) goto LAB_059278f8;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_05927ca4;
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_057a62b4(lVar13,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
LAB_059278f8:
                    FUN_057c5e60(unaff_x22,lVar13,0);
                  }
                  uVar12 = uVar12 - 1;
                }
              }
            }
          }
          iVar24 = iVar24 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_0592733c_caseD_24:
          if (DAT_076d47fe == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d47fe = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          uVar22 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar22 <= (int)uVar15) goto LAB_059274f8;
LAB_05927590:
          if (uVar22 <= uVar15) goto LAB_05927ca4;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          break;
        case 0x25:
          if (lVar13 == 0) goto LAB_05927ca8;
          lVar13 = *(long *)(lVar13 + 0x90);
joined_r0x05927424:
          if (DAT_076d53fa == '\0') {
            thunk_FUN_032e1da0(PTR_DAT_07291038);
            DAT_076d53fa = '\x01';
          }
          if (lVar13 == 0) goto LAB_05927ca8;
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_057a62b4(lVar13,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                break;
              }
              goto LAB_05927ca4;
            }
          }
          FUN_057c5e60(unaff_x22,lVar13,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar24 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar17 != 0)))) {
              if (lVar13 == 0) goto LAB_05927ca8;
              lVar13 = *(long *)(lVar13 + 0x38);
              if (DAT_076d53fa == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d53fa = '\x01';
              }
              if (lVar13 == 0) goto LAB_05927ca8;
              if (*(int *)(lVar13 + 0x10) == 1) {
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_057a62b4(lVar13,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                    iVar24 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_05927ca4;
                }
              }
              FUN_057c5e60(unaff_x22,lVar13,0);
              iVar24 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar24 = 0;
            }
          }
          break;
        default:
          if (uVar2 != 0x45) goto switchD_0592733c_caseD_24;
LAB_05927528:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar18 = *(int *)(unaff_x29 + -0x38);
            if (DAT_076d47fe == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07291038);
              DAT_076d47fe = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_05927ca4;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            }
            else {
              FUN_057c5d34(unaff_x22,uVar22,0);
            }
            if ((int)uVar20 < (int)uVar14) {
              sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
              if ((sVar21 == 0x2d) || (sVar21 == 0x2b)) {
                if (DAT_076d47fe == '\0') {
                  thunk_FUN_032e1da0(PTR_DAT_07291038);
                  DAT_076d47fe = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                uVar20 = iVar18 + 2;
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_05927ca4;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar21;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                }
                else {
                  FUN_057c5d34(unaff_x22,sVar21,0);
                }
              }
              if ((int)uVar20 < (int)uVar14) {
                psVar16 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
                lVar13 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
                while (*psVar16 == 0x30) {
                  if (DAT_076d47fe == '\0') {
                    thunk_FUN_032e1da0(PTR_DAT_07291038);
                    DAT_076d47fe = '\x01';
                  }
                  uVar22 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_05927ca4;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
                    FUN_057c5d34(unaff_x22,0x30,0);
                  }
                  uVar20 = uVar20 + 1;
                  lVar13 = lVar13 + -1;
                  psVar16 = psVar16 + 1;
                  if (lVar13 == 0) goto LAB_05927b44;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar18 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar20 < (int)uVar14) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2) == 0x30)) {
              uVar11 = 0;
              iVar23 = 1;
              goto LAB_05927a10;
            }
            iVar23 = iVar18 + 2;
            if ((int)uVar14 <= iVar23) {
LAB_05927a50:
              if (DAT_076d47fe == '\0') {
                thunk_FUN_032e1da0(PTR_DAT_07291038);
                DAT_076d47fe = '\x01';
              }
              uVar22 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_05927ca4;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
                FUN_057c5d34(unaff_x22,uVar2,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            if (sVar21 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30)
              goto LAB_05927a50;
              iVar23 = 0;
              uVar11 = 0;
            }
            else {
              if ((sVar21 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30))
              goto LAB_05927a50;
              iVar23 = 0;
              uVar11 = 1;
            }
LAB_05927a10:
            uVar22 = iVar18 + 2;
            iVar10 = iVar23;
            uVar20 = uVar22;
            if ((int)uVar22 < (int)uVar14) {
              iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar23;
              do {
                iVar10 = iVar23;
                uVar20 = uVar22;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2) != 0x30) break;
                uVar22 = uVar22 + 1;
                iVar23 = iVar23 + 1;
                iVar10 = iVar1 - iVar18;
                uVar20 = uVar14;
              } while (uVar14 != uVar22);
            }
            if (9 < iVar10) {
              iVar10 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar11;
              thunk_FUN_032cd7c0();
              uVar11 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0592caec(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar18,uVar2,iVar10,uVar11);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x65) goto LAB_05927528;
          if (uVar2 != 0x2030) goto switchD_0592733c_caseD_24;
          if (lVar13 != 0) {
            lVar13 = *(long *)(lVar13 + 0x98);
            goto joined_r0x05927424;
          }
          goto LAB_05927ca8;
        }
        if (((int)uVar14 <= (int)uVar20) ||
           (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2), uVar2 == 0))
        goto switchD_0592733c_caseD_2c;
        if (DAT_076d47fe == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07291038);
          DAT_076d47fe = '\x01';
        }
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        uVar22 = *(uint *)(unaff_x22 + 0x10);
        uVar20 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar15 < (int)uVar22) goto LAB_05927590;
LAB_059274f8:
        FUN_057c5d34(unaff_x22,uVar2,0);
      }
switchD_0592733c_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar6;
      *(uint *)(unaff_x29 + -0x38) = uVar20;
    } while ((int)uVar20 < (int)uVar14);
  }
LAB_05927b44:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


