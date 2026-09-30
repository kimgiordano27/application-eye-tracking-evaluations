/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 0717be80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int in_w8;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar7;
  long unaff_x21;
  long lVar8;
  short *psVar9;
  long unaff_x22;
  short *unaff_x23;
  int unaff_w24;
  int iVar10;
  uint unaff_w25;
  short sVar11;
  uint unaff_w26;
  uint uVar12;
  long lVar13;
  int unaff_w28;
  ushort *puVar14;
  long unaff_x29;
  
code_r0x0717be80:
  if (unaff_w28 != in_w8 + 1) goto LAB_0717bf20;
  if (unaff_x21 == 0) {
LAB_0717c8dc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 0717be94 to 0727bea7 has its CatchHandler @ 0717c1d0 */
  lVar13 = *(long *)(unaff_x21 + 0x40);
  if (DAT_09843015 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091fa408);
    DAT_09843015 = '\x01';
  }
  if (lVar13 == 0) goto LAB_0717c8dc;
                    /* try { // try from 0717bebc to 0727bec3 has its CatchHandler @ 0717c1d8 */
  if (*(int *)(lVar13 + 0x10) == 1) {
                    /* try { // try from 0717bec8 to 0727bed7 has its CatchHandler @ 0717c1e4 */
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_0717bf08;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) {
LAB_0717c8d8:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar8 = *(long *)(unaff_x22 + 8);
                    /* try { // try from 0717bee4 to 0727beeb has its CatchHandler @ 0717c1a4 */
    uVar5 = FUN_06fcd2c8(lVar13,0,0);
                    /* try { // try from 0717bef4 to 0727befb has its CatchHandler @ 0717c19c */
    *(undefined2 *)(lVar8 + (long)(int)uVar12 * 2) = uVar5;
    unaff_x21 = *(long *)(unaff_x29 + -0x48);
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
  }
  else {
LAB_0717bf08:
                    /* try { // try from 0717bf08 to 0727bf0f has its CatchHandler @ 0717c190 */
    FUN_06ff1720();
  }
  unaff_w25 = *(uint *)(unaff_x29 + -0x28);
  unaff_w19 = unaff_w19 - 1;
LAB_0717bf20:
                    /* try { // try from 0717bf20 to 0727bf37 has its CatchHandler @ 0717c1c8 */
  unaff_w24 = unaff_w24 + -1;
  unaff_w28 = unaff_w28 + -1;
  if (unaff_w24 < 2) {
    unaff_w28 = *(int *)(unaff_x29 + -0x3c);
    iVar10 = 0;
    do {
      uVar12 = *(int *)(unaff_x29 + -0x38) + 1;
                    /* try { // try from 0717bf4c to 0727bf53 has its CatchHandler @ 0717c198 */
      if (unaff_w26 < 0x46) {
                    /* try { // try from 0717bf60 to 0727bf67 has its CatchHandler @ 0717c194 */
        switch(unaff_w26) {
        case 0x22:
        case 0x27:
                    /* try { // try from 0717bf78 to 0727bf8f has its CatchHandler @ 0717c1cc */
          if ((int)uVar12 < (int)unaff_w20) {
            *(int *)(unaff_x29 + -0x3c) = unaff_w28;
            *(int *)(unaff_x29 + -0x4c) = iVar10;
            lVar13 = (ulong)uVar12 << 0x20;
            uVar7 = ~*(uint *)(unaff_x29 + -0x38);
            puVar14 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
                    /* try { // try from 0717bf98 to 0727bf9b has its CatchHandler @ 0717c1bc */
                    /* try { // try from 0717bf9c to 0727bfa7 has its CatchHandler @ 0717c1b8 */
            lVar8 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar12;
            while( true ) {
              uVar2 = *puVar14;
              if ((uVar2 == 0) || (uVar2 == unaff_w26)) break;
                    /* try { // try from 0717bfb8 to 0727bfc3 has its CatchHandler @ 0717c17c */
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    /* try { // try from 0717bfe8 to 0727bfeb has its CatchHandler @ 0717c1e0 */
                if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0717c8d8;
                    /* try { // try from 0717bfec to 0727bff3 has its CatchHandler @ 0717c1d4 */
                    /* try { // try from 0717bff4 to 0727bff7 has its CatchHandler @ 0717c1c4 */
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
                    /* try { // try from 0717bff8 to 0727bffb has its CatchHandler @ 0717c1c0 */
                *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                    /* try { // try from 0717bffc to 0727bfff has its CatchHandler @ 0717c1b4 */
              }
              else {
                    /* try { // try from 0717c000 to 0727c003 has its CatchHandler @ 0717c1b0 */
                    /* try { // try from 0717c004 to 0727c007 has its CatchHandler @ 0717c1ac */
                    /* try { // try from 0717c008 to 0727c00b has its CatchHandler @ 0717c1a8 */
                    /* try { // try from 0717c00c to 0727c00f has its CatchHandler @ 0717c18c */
                FUN_06ff15f4();
              }
                    /* try { // try from 0717c010 to 0727c013 has its CatchHandler @ 0717c188 */
                    /* try { // try from 0717c014 to 0727c017 has its CatchHandler @ 0717c184 */
              lVar13 = lVar13 + 0x100000000;
                    /* try { // try from 0717c018 to 0727c01b has its CatchHandler @ 0717c180 */
              uVar7 = uVar7 - 1;
                    /* try { // try from 0717c01c to 0727c02f has its CatchHandler @ 0717c170 */
              lVar8 = lVar8 + -1;
              puVar14 = puVar14 + 1;
              if (lVar8 == 0) goto LAB_0717c778;
            }
            iVar10 = *(int *)(unaff_x29 + -0x4c);
            unaff_w28 = *(int *)(unaff_x29 + -0x3c);
            uVar12 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar7;
          }
          break;
        case 0x23:
        case 0x30:
                    /* catch() { ... } // from try @ 0717c108 with catch @ 0717c140
                       try { // try from 0717c140 to 0727c1fb has its CatchHandler @ 0717bd18 */
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
            if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0717c410:
              sVar11 = 0x30;
              goto LAB_0717c414;
            }
          }
          else {
                    /* catch() { ... } // from try @ 0717c0ec with catch @ 0717c144 */
            sVar11 = *unaff_x23;
                    /* catch() { ... } // from try @ 0717c08c with catch @ 0717c148 */
            if (sVar11 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_0717c410;
            }
            else {
                    /* catch() { ... } // from try @ 0717c070 with catch @ 0717c14c */
              unaff_x23 = unaff_x23 + 1;
                    /* catch() { ... } // from try @ 0717bd58 with catch @ 0717c150 */
LAB_0717c414:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar3 = *(uint *)(unaff_x22 + 0x18);
              uVar7 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
              }
              else {
                FUN_06ff15f4();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar7 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_0717c8d8;
                if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
                {
                  if (unaff_x21 == 0) goto LAB_0717c8dc;
                  lVar13 = *(long *)(unaff_x21 + 0x40);
                  if (DAT_09843015 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09843015 = '\x01';
                  }
                  if (lVar13 == 0) goto LAB_0717c8dc;
                  if (*(int *)(lVar13 + 0x10) == 1) {
                    uVar7 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_0717c52c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0717c8d8;
                    lVar8 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_06fcd2c8(lVar13,0,0);
                    *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                  }
                  else {
LAB_0717c52c:
                    FUN_06ff1720();
                  }
                  unaff_w19 = unaff_w19 - 1;
                }
              }
            }
          }
          unaff_w28 = unaff_w28 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_0717bf70_caseD_24:
                    /* catch() { ... } // from try @ 0717bf08 with catch @ 0717c190 */
                    /* catch() { ... } // from try @ 0717bf60 with catch @ 0717c194 */
                    /* catch() { ... } // from try @ 0717bf4c with catch @ 0717c198 */
          if (DAT_09842200 == '\0') {
                    /* catch() { ... } // from try @ 0717bef4 with catch @ 0717c19c */
                    /* catch() { ... } // from try @ 0717bf3c with catch @ 0717c1a0 */
                    /* catch() { ... } // from try @ 0717bee4 with catch @ 0717c1a4 */
            FUN_03d2d2b0(PTR_DAT_091fa408);
                    /* catch() { ... } // from try @ 0717c008 with catch @ 0717c1a8 */
                    /* catch() { ... } // from try @ 0717c004 with catch @ 0717c1ac */
                    /* catch() { ... } // from try @ 0717c000 with catch @ 0717c1b0 */
            DAT_09842200 = '\x01';
          }
                    /* catch() { ... } // from try @ 0717bffc with catch @ 0717c1b4 */
          uVar3 = *(uint *)(unaff_x22 + 0x18);
                    /* catch() { ... } // from try @ 0717bf9c with catch @ 0717c1b8 */
          uVar7 = *(uint *)(unaff_x22 + 0x10);
                    /* catch() { ... } // from try @ 0717bf98 with catch @ 0717c1bc */
                    /* catch() { ... } // from try @ 0717bff8 with catch @ 0717c1c0 */
          if ((int)uVar3 < (int)uVar7) goto LAB_0717c1c4;
LAB_0717c12c:
          FUN_06ff15f4();
          break;
        case 0x25:
          if (unaff_x21 == 0) goto LAB_0717c8dc;
                    /* try { // try from 0717c27c to 0727c28b has its CatchHandler @ 0717c28c */
          lVar13 = *(long *)(unaff_x21 + 0x90);
joined_r0x0717c058:
          if (DAT_09843015 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
                    /* try { // try from 0717c06c to 0727c06f has its CatchHandler @ 0717c174 */
                    /* try { // try from 0717c070 to 0727c083 has its CatchHandler @ 0717c14c */
            DAT_09843015 = '\x01';
          }
          if (lVar13 == 0) goto LAB_0717c8dc;
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar7 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0717c08c to 0727c0eb has its CatchHandler @ 0717c148 */
            if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar7 < *(uint *)(unaff_x22 + 0x10)) {
                lVar8 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_06fcd2c8(lVar13,0,0);
                *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                break;
              }
              goto LAB_0717c8d8;
            }
          }
          FUN_06ff1720();
          break;
        case 0x2c:
          break;
        case 0x2e:
                    /* catch() { ... } // from try @ 0717c1fc with catch @ 0717c28c
                       catch() { ... } // from try @ 0717c27c with catch @ 0717c28c */
                    /* try { // try from 0717c290 to 0727c293 has its CatchHandler @ 0717c29c */
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*unaff_x23 != 0)))) {
              if (unaff_x21 == 0) goto LAB_0717c8dc;
              lVar13 = *(long *)(unaff_x21 + 0x38);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar13 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar13 + 0x10) == 1) {
                uVar7 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar7 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar8 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_06fcd2c8(lVar13,0,0);
                    *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                    unaff_w28 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0717c8d8;
                }
              }
              FUN_06ff1720();
              unaff_w28 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              unaff_w28 = 0;
            }
          }
          break;
        default:
                    /* catch() { ... } // from try @ 0717bdf8 with catch @ 0717c154 */
                    /* catch() { ... } // from try @ 0717be1c with catch @ 0717c158 */
          if (unaff_w26 != 0x45) goto switchD_0717bf70_caseD_24;
LAB_0717c15c:
                    /* catch() { ... } // from try @ 0717be04 with catch @ 0717c15c */
                    /* catch() { ... } // from try @ 0717bdec with catch @ 0717c160 */
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
                    /* catch() { ... } // from try @ 0717bfe8 with catch @ 0717c1e0 */
                    /* catch() { ... } // from try @ 0717bec8 with catch @ 0717c1e4 */
            iVar1 = *(int *)(unaff_x29 + -0x38);
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
                    /* try { // try from 0717c1fc to 0727c213 has its CatchHandler @ 0717c28c */
              DAT_09842200 = '\x01';
            }
            uVar7 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0717c214 to 0727c27b has its CatchHandler @ 0717bd18 */
            if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0717c8d8;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = (short)unaff_w26;
              *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
            }
            else {
              FUN_06ff15f4();
            }
            if ((int)uVar12 < (int)unaff_w20) {
              sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
              if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
                if (DAT_09842200 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09842200 = '\x01';
                }
                uVar7 = *(uint *)(unaff_x22 + 0x18);
                uVar12 = iVar1 + 2;
                if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0717c8d8;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar11;
                  *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                }
                else {
                  FUN_06ff15f4();
                }
              }
              if ((int)uVar12 < (int)unaff_w20) {
                psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
                lVar13 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar12;
                while (*psVar9 == 0x30) {
                  if (DAT_09842200 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09842200 = '\x01';
                  }
                  uVar7 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0717c8d8;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                  }
                  else {
                    FUN_06ff15f4();
                  }
                  uVar12 = uVar12 + 1;
                  lVar13 = lVar13 + -1;
                  psVar9 = psVar9 + 1;
                  if (lVar13 == 0) goto LAB_0717c778;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
                    /* catch() { ... } // from try @ 0717bde0 with catch @ 0717c164 */
                    /* catch() { ... } // from try @ 0717bdc8 with catch @ 0717c168 */
                    /* catch() { ... } // from try @ 0717c034 with catch @ 0717c16c */
                    /* catch() { ... } // from try @ 0717c01c with catch @ 0717c170 */
                    /* catch() { ... } // from try @ 0717c06c with catch @ 0717c174 */
                    /* catch() { ... } // from try @ 0717bda0 with catch @ 0717c178 */
                    /* catch() { ... } // from try @ 0717bdd4 with catch @ 0717c17c
                       catch() { ... } // from try @ 0717be28 with catch @ 0717c17c
                       catch() { ... } // from try @ 0717bfb8 with catch @ 0717c17c */
            if (((int)uVar12 < (int)unaff_w20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30)) {
                    /* catch() { ... } // from try @ 0717c018 with catch @ 0717c180 */
              uVar6 = 0;
                    /* catch() { ... } // from try @ 0717c014 with catch @ 0717c184 */
                    /* catch() { ... } // from try @ 0717c010 with catch @ 0717c188 */
                    /* catch() { ... } // from try @ 0717c00c with catch @ 0717c18c */
              goto LAB_0717c644;
            }
            iVar1 = *(int *)(unaff_x29 + -0x38) + 2;
            if ((int)unaff_w20 <= iVar1) {
LAB_0717c684:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = (short)unaff_w26;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
              }
              else {
                FUN_06ff15f4();
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
            if (sVar11 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar1 * 2) != 0x30)
              goto LAB_0717c684;
              uVar6 = 0;
            }
            else {
              if ((sVar11 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar1 * 2) != 0x30))
              goto LAB_0717c684;
              uVar6 = 1;
            }
LAB_0717c644:
            uVar7 = *(int *)(unaff_x29 + -0x38) + 2;
            uVar12 = uVar7;
            if ((int)uVar7 < (int)unaff_w20) {
              do {
                uVar12 = uVar7;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2) != 0x30) break;
                uVar7 = uVar7 + 1;
                uVar12 = unaff_w20;
              } while (unaff_w20 != uVar7);
            }
            if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar6;
              thunk_FUN_03db619c();
            }
            FUN_07181720();
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (unaff_w26 != 0x5c) {
                    /* try { // try from 0717c034 to 0727c06b has its CatchHandler @ 0717c16c */
          if (unaff_w26 == 0x65) goto LAB_0717c15c;
          if (unaff_w26 != 0x2030) goto switchD_0717bf70_caseD_24;
          if (unaff_x21 != 0) {
            lVar13 = *(long *)(unaff_x21 + 0x98);
            goto joined_r0x0717c058;
          }
          goto LAB_0717c8dc;
        }
                    /* try { // try from 0717c0ec to 0727c103 has its CatchHandler @ 0717c144 */
        if (((int)unaff_w20 <= (int)uVar12) ||
           (unaff_w26 = (uint)*(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2),
           unaff_w26 == 0)) goto switchD_0717bf70_caseD_2c;
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
                    /* try { // try from 0717c108 to 0727c13f has its CatchHandler @ 0717c140 */
          DAT_09842200 = '\x01';
        }
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        uVar7 = *(uint *)(unaff_x22 + 0x10);
        uVar12 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar7 <= (int)uVar3) goto LAB_0717c12c;
LAB_0717c1c4:
                    /* catch() { ... } // from try @ 0717bff4 with catch @ 0717c1c4 */
                    /* catch() { ... } // from try @ 0717bf20 with catch @ 0717c1c8 */
        if (uVar7 <= uVar3) goto LAB_0717c8d8;
                    /* catch() { ... } // from try @ 0717bf78 with catch @ 0717c1cc */
                    /* catch() { ... } // from try @ 0717be94 with catch @ 0717c1d0 */
                    /* catch() { ... } // from try @ 0717bfec with catch @ 0717c1d4 */
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = (short)unaff_w26;
                    /* catch() { ... } // from try @ 0717bebc with catch @ 0717c1d8 */
        *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
                    /* catch() { ... } // from try @ 0717be70 with catch @ 0717c1dc */
      }
switchD_0717bf70_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar10;
      *(uint *)(unaff_x29 + -0x38) = uVar12;
      if ((int)unaff_w20 <= (int)uVar12) {
LAB_0717c778:
        if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      unaff_w26 = (uint)uVar2;
      if ((uVar2 == 0x3b) || (uVar2 == 0)) goto LAB_0717c778;
      iVar10 = *(int *)(unaff_x29 + -0x4c);
      if (((0 < iVar10) && (uVar2 < 0x31)) &&
         ((1L << ((ulong)(uint)uVar2 & 0x3f) & 0x1400800000000U) != 0)) goto code_r0x0717bdcc;
                    /* try { // try from 0717bf3c to 0727bf43 has its CatchHandler @ 0717c1a0 */
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    } while( true );
  }
  goto LAB_0717bde0;
code_r0x0717bdcc:
  unaff_x21 = *(long *)(unaff_x29 + -0x48);
  unaff_w25 = *(uint *)(unaff_x29 + -0x28);
  unaff_w24 = iVar10 + 1;
  *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar10;
LAB_0717bde0:
  sVar11 = *unaff_x23;
  sVar4 = 0x30;
  if (sVar11 != 0) {
    unaff_x23 = unaff_x23 + 1;
    sVar4 = sVar11;
  }
  if (DAT_09842200 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091fa408);
    DAT_09842200 = '\x01';
  }
  uVar12 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0717c8d8;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar4;
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
  }
  else {
    FUN_06ff15f4();
  }
  if (((int)unaff_w19 < 0) || (unaff_w28 < 2 || (unaff_w25 & 1) != 0)) goto LAB_0717bf20;
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_0717c8d8;
  in_w8 = *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4);
  goto code_r0x0717be80;
}


