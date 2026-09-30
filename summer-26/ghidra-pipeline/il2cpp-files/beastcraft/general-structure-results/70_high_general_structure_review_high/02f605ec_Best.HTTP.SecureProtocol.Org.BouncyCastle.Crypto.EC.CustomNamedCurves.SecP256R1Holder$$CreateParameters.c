/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP256R1Holder$$CreateParameters
ENTRY_POINT: 02f605ec
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_10;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP256R1Holder__CreateParameters
                (byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  undefined1 auVar20 [16];
  ulong auStack_320 [99];
  byte *pbStack_8;
  
  pbStack_8 = param_1;
  lVar11 = FUN_02f60414(&pbStack_8,param_1 + 0x14);
  auStack_320[0] = param_4;
  pbVar6 = pbStack_8 + lVar11;
  if (pbStack_8 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar19 = auStack_320;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar18 = pbStack_8;
    do {
      puVar9 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
      pbVar13 = pbVar18 + 1;
      pbStack_8 = pbVar13;
                    /* try { // try from 02f60674 to 030606bb has its CatchHandler @ 02f608f4 */
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x02f60e58:
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","evaluateExpression","DWARF opcode not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar10) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(pbVar18 + 1);
        pbStack_8 = pbVar18 + 9;
        goto LAB_02f60ac4;
      case 4:
      case 5:
      case 7:
        goto code_r0x02f60e58;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_02f60a54:
        *puVar19 = *puVar14;
        goto LAB_02f60660;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_02f60a28;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_02f60a28:
        pbStack_8 = pbVar18 + 2;
        goto LAB_02f60ac4;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        pbStack_8 = pbVar18 + 3;
        goto LAB_02f60ac4;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        pbStack_8 = pbVar18 + 3;
        goto LAB_02f60ac4;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        pbStack_8 = pbVar18 + 5;
        goto LAB_02f60ac4;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        pbStack_8 = pbVar18 + 5;
        goto LAB_02f60ac4;
      case 0x10:
        uVar16 = FUN_02f60414(&pbStack_8,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_02f60660;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar8 < '\0');
        pbStack_8 = pbVar13;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12 | uVar17;
        goto LAB_02f60660;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_02f6065c;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_02f60660;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_02f6065c;
      case 0x15:
        pbStack_8 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_02f60ac4:
LAB_02f6065c:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_02f60660;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_02f60660;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_02f60660;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_02f60660;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_02f60bfc;
        goto LAB_02f60660;
      case 0x1a:
        uVar16 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar19 != 0) {
          uVar16 = (long)puVar19[-1] / (long)*puVar19;
        }
        break;
      case 0x1c:
        uVar16 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar16 = *puVar19;
        lVar11 = 0;
        if (uVar16 != 0) {
          lVar11 = (long)puVar19[-1] / (long)uVar16;
        }
        uVar16 = puVar19[-1] - lVar11 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar16 = *puVar19;
LAB_02f60bfc:
        *puVar19 = -uVar16;
        goto LAB_02f60660;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_02f60660;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_02f60414(&pbStack_8,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_02f60660;
      case 0x24:
        uVar16 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar14 = puVar19 + -1;
        uVar16 = *puVar19;
        pbStack_8 = pbVar18 + 3;
        puVar19 = puVar14;
        if (uVar16 != 0) {
          pbStack_8 = pbVar18 + 3 + *(short *)(pbVar18 + 1);
        }
        goto LAB_02f60660;
      case 0x29:
        uVar16 = (ulong)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        pbStack_8 = pbVar18 + (long)*(short *)(pbVar18 + 1) + 3;
        goto LAB_02f60660;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_02f6065c;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
                    /* try { // try from 02f6072c to 0306073b has its CatchHandler @ 02f60570 */
                    /* try { // try from 02f6073c to 030607fb has its CatchHandler @ 02f60920 */
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(param_3 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_02f60658;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar18;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar18 = pbVar18 + 1;
        } while ((char)bVar7 < '\0');
                    /* try { // try from 02f606dc to 030606e7 has its CatchHandler @ 02f60914 */
        pbStack_8 = pbVar13;
                    /* try { // try from 02f606e8 to 030606ef has its CatchHandler @ 02f60920 */
        uVar17 = -1L << (uVar16 & 0x3f);
                    /* try { // try from 02f606f0 to 0306071b has its CatchHandler @ 02f60570 */
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_02f60798;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
                    /* try { // try from 02f6071c to 0306072b has its CatchHandler @ 02f60924 */
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_02f60798:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)(uVar10 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_02f60798;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_02f6065c;
      case 0x90:
        uVar10 = FUN_02f60414(&pbStack_8,pbVar6);
        puVar9 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_02f60cfc;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_02f60cfc:
            if (0x1c < uVar10) {
              fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_02f60cfc;
        }
LAB_02f60658:
        uVar16 = *puVar14;
        goto LAB_02f6065c;
      case 0x91:
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","evaluateExpression","DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_02f60414(&pbStack_8,pbVar6);
        puVar9 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbStack_8;
        pbVar13 = pbStack_8;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
            fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar13;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar8 < '\0');
        pbStack_8 = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_02f60d24;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_02f60d24:
            if (0x1c < uVar10) {
              fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(param_3 + (ulong)uVar10 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_02f60d24;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_02f6065c;
      case 0x93:
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","evaluateExpression","DW_OP_piece not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        pbStack_8 = pbVar18 + 2;
        puVar14 = (ulong *)*puVar19;
        bVar8 = pbVar18[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar19 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {

              Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecT113R2Holder__CreateParameters
              :
              fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar19 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8)
            goto 
            Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecT113R2Holder__CreateParameters
            ;
            goto LAB_02f60a54;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_02f60660;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_02f60660:
                    /* try { // try from 02f60664 to 0306066f has its CatchHandler @ 02f608e8 */
      pbVar18 = pbStack_8;
    } while (pbStack_8 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


