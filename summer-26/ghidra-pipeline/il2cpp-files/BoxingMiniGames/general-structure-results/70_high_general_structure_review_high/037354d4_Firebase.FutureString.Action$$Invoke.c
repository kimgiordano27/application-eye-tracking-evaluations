/*
FUNCTION_NAME: Firebase.FutureString.Action$$Invoke
ENTRY_POINT: 037354d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_18;strong_file_logging_hits_10;telemetry_or_network_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Firebase_FutureString_Action__Invoke(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *in_x10;
  byte *pbVar18;
  byte *pbVar19;
  long unaff_x19;
  ulong unaff_x21;
  ulong *puVar20;
  long unaff_x29;
  undefined1 auVar21 [16];
  
  pbVar6 = in_x10 + param_1;
  if (in_x10 < pbVar6) {
    puVar1 = (ulong *)(unaff_x19 + 0xf0);
    puVar2 = (ulong *)(unaff_x19 + 0xe8);
    puVar3 = (ulong *)(unaff_x19 + 0x108);
    puVar4 = (ulong *)(unaff_x19 + 0xf8);
    puVar20 = (ulong *)&stack0x00000010;
    puVar5 = (ulong *)(unaff_x19 + 0x100);
    do {
      pbVar18 = in_x10 + 1;
      *(byte **)(unaff_x29 + -8) = pbVar18;
      puVar10 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
      bVar8 = *in_x10;
      uVar11 = (uint)bVar8;
      if (0x91 < uVar11 - 3) {
code_r0x03735d08:
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","evaluateExpression","DWARF opcode not implemented");
        fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar15 = (uint)bVar8;
      puVar14 = puVar4;
      switch(uVar11) {
      case 3:
      case 0xe:
      case 0xf:
        uVar16 = *(ulong *)(in_x10 + 1);
        pbVar18 = in_x10 + 9;
        goto LAB_03735974;
      case 4:
      case 5:
      case 7:
        goto code_r0x03735d08;
      case 6:
        puVar14 = (ulong *)*puVar20;
LAB_03735904:
        *puVar20 = *puVar14;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 8:
        uVar16 = (ulong)in_x10[1];
        goto LAB_037358d8;
      case 9:
        uVar16 = (ulong)(char)in_x10[1];
LAB_037358d8:
        pbVar18 = in_x10 + 2;
        goto LAB_03735974;
      case 10:
        uVar16 = (ulong)*(ushort *)(in_x10 + 1);
        pbVar18 = in_x10 + 3;
        goto LAB_03735974;
      case 0xb:
        uVar16 = (ulong)*(short *)(in_x10 + 1);
        pbVar18 = in_x10 + 3;
        goto LAB_03735974;
      case 0xc:
        uVar16 = (ulong)*(uint *)(in_x10 + 1);
        pbVar18 = in_x10 + 5;
        goto LAB_03735974;
      case 0xd:
        uVar16 = (ulong)*(int *)(in_x10 + 1);
        pbVar18 = in_x10 + 5;
        goto LAB_03735974;
      case 0x10:
        uVar16 = FUN_037352c4(unaff_x29 + -8,pbVar6);
        puVar20 = puVar20 + 1;
        *puVar20 = uVar16;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x11:
        uVar16 = 0;
        uVar13 = 0;
        pbVar19 = pbVar18;
        do {
          if (pbVar19 == pbVar6) {
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
            fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar19;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar13 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar13;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar8 < '\0');
        *(byte **)(unaff_x29 + -8) = pbVar18;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar20 = puVar20 + 1;
        *puVar20 = uVar13 | uVar17;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x12:
        uVar16 = *puVar20;
        goto LAB_0373550c;
      case 0x13:
        puVar20 = puVar20 + -1;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x14:
        uVar16 = puVar20[-1];
        goto LAB_0373550c;
      case 0x15:
        pbVar18 = in_x10 + 2;
        uVar16 = puVar20[-(ulong)in_x10[1]];
LAB_03735974:
        *(byte **)(unaff_x29 + -8) = pbVar18;
LAB_0373550c:
        puVar20[1] = uVar16;
        puVar20 = puVar20 + 1;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x16:
        auVar21 = NEON_ext(*(undefined1 (*) [16])(puVar20 + -1),*(undefined1 (*) [16])(puVar20 + -1)
                           ,8,1);
        *puVar20 = auVar21._8_8_;
        puVar20[-1] = auVar21._0_8_;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x17:
        uVar16 = *puVar20;
        *puVar20 = SUB168(*(undefined1 (*) [16])(puVar20 + -2),8);
        puVar20[-1] = SUB168(*(undefined1 (*) [16])(puVar20 + -2),0);
        puVar20[-2] = uVar16;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x18:
        puVar14 = (ulong *)*puVar20;
        puVar20 = puVar20 + -1;
        *puVar20 = *puVar14;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x19:
        uVar16 = *puVar20;
        if ((long)uVar16 < 0) goto LAB_03735aac;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x1a:
        uVar16 = puVar20[-1] & *puVar20;
        break;
      case 0x1b:
        uVar16 = 0;
        if (*puVar20 != 0) {
          uVar16 = (long)puVar20[-1] / (long)*puVar20;
        }
        break;
      case 0x1c:
        uVar16 = puVar20[-1] - *puVar20;
        break;
      case 0x1d:
        uVar16 = *puVar20;
        lVar12 = 0;
        if (uVar16 != 0) {
          lVar12 = (long)puVar20[-1] / (long)uVar16;
        }
        uVar16 = puVar20[-1] - lVar12 * uVar16;
        break;
      case 0x1e:
        uVar16 = puVar20[-1] * *puVar20;
        break;
      case 0x1f:
        uVar16 = *puVar20;
LAB_03735aac:
        *puVar20 = -uVar16;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x20:
        *puVar20 = ~*puVar20;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x21:
        uVar16 = puVar20[-1] | *puVar20;
        break;
      case 0x22:
        uVar16 = puVar20[-1] + *puVar20;
        break;
      case 0x23:
        lVar12 = FUN_037352c4(unaff_x29 + -8,pbVar6);
        *puVar20 = *puVar20 + lVar12;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x24:
        uVar16 = puVar20[-1] << (*puVar20 & 0x3f);
        break;
      case 0x25:
        uVar16 = puVar20[-1] >> (*puVar20 & 0x3f);
        break;
      case 0x26:
        uVar16 = (long)puVar20[-1] >> (*puVar20 & 0x3f);
        break;
      case 0x27:
        uVar16 = puVar20[-1] ^ *puVar20;
        break;
      case 0x28:
        puVar14 = puVar20 + -1;
        uVar16 = *puVar20;
        sVar9 = *(short *)(in_x10 + 1);
        *(byte **)(unaff_x29 + -8) = in_x10 + 3;
        puVar20 = puVar14;
        if (uVar16 != 0) {
          *(byte **)(unaff_x29 + -8) = in_x10 + 3 + sVar9;
        }
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      case 0x29:
        uVar16 = (ulong)(puVar20[-1] == *puVar20);
        break;
      case 0x2a:
        uVar16 = (ulong)(*puVar20 <= puVar20[-1]);
        break;
      case 0x2b:
        uVar16 = (ulong)(*puVar20 < puVar20[-1]);
        break;
      case 0x2c:
        uVar16 = (ulong)(puVar20[-1] <= *puVar20);
        break;
      case 0x2d:
        uVar16 = (ulong)(puVar20[-1] < *puVar20);
        break;
      case 0x2e:
        uVar16 = (ulong)(puVar20[-1] != *puVar20);
        break;
      case 0x2f:
        *(byte **)(unaff_x29 + -8) = in_x10 + (long)*(short *)(in_x10 + 1) + 3;
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0373550c;
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
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, bVar8 != 0x6e)) &&
           (puVar14 = puVar2, bVar8 != 0x6d)) {
          puVar14 = (ulong *)(unaff_x19 + (ulong)(uVar15 - 0x50) * 8);
        }
        goto LAB_03735508;
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
        uVar13 = 0;
        pbVar19 = pbVar18;
        do {
          if (pbVar19 == pbVar6) {
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
            fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar19;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar13 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar13;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar7 < '\0');
        *(byte **)(unaff_x29 + -8) = pbVar18;
        puVar10 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar7 < 0x40) {
          uVar17 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar14 = puVar5, bVar8 != 0x6f)) &&
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_03735648;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_03735648:
            if (0x1c < uVar11 - 0x70) {
              fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
              fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(unaff_x19 + (ulong)(uVar11 - 0x70) * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_03735648;
        }
        uVar16 = *puVar14 + (uVar13 | uVar17);
        goto LAB_0373550c;
      case 0x90:
        uVar11 = FUN_037352c4(unaff_x29 + -8,pbVar6);
        puVar10 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        if ((int)uVar11 < 0x1e) {
          if (((uVar11 != 0xfffffffe) && (puVar14 = puVar5, uVar11 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar11 != 0x1d)) goto LAB_03735bac;
        }
        else if ((int)uVar11 < 0x20) {
          puVar14 = puVar1;
          if ((uVar11 != 0x1e) && (puVar14 = puVar4, uVar11 != 0x1f)) {
LAB_03735bac:
            if (0x1c < uVar11) {
              fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
              fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(unaff_x19 + (ulong)uVar11 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar11 != 0x20) && (puVar14 = puVar3, uVar11 != 0x22)) goto LAB_03735bac;
        }
LAB_03735508:
        uVar16 = *puVar14;
        goto LAB_0373550c;
      case 0x91:
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","evaluateExpression","DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar11 = FUN_037352c4(unaff_x29 + -8,pbVar6);
        puVar10 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        pbVar18 = *(byte **)(unaff_x29 + -8);
        uVar16 = 0;
        uVar13 = 0;
        pbVar19 = pbVar18;
        do {
          if (pbVar19 == pbVar6) {
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
            fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar19;
          pbVar18 = pbVar18 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar13 = ((ulong)bVar8 & 0x7f) << uVar17 | uVar13;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar8 < '\0');
        *(byte **)(unaff_x29 + -8) = pbVar18;
        puVar10 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        uVar17 = -1L << (uVar16 & 0x3f);
        if (0x38 < (int)uVar16 - 7U || bVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int)uVar11 < 0x1e) {
          if (((uVar11 != 0xfffffffe) && (puVar14 = puVar5, uVar11 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar11 != 0x1d)) goto LAB_03735bd4;
        }
        else if ((int)uVar11 < 0x20) {
          puVar14 = puVar1;
          if ((uVar11 != 0x1e) && (puVar14 = puVar4, uVar11 != 0x1f)) {
LAB_03735bd4:
            if (0x1c < uVar11) {
              fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
              fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar14 = (ulong *)(unaff_x19 + (ulong)uVar11 * 8);
          }
        }
        else {
          puVar14 = puVar5;
          if ((uVar11 != 0x20) && (puVar14 = puVar3, uVar11 != 0x22)) goto LAB_03735bd4;
        }
        uVar16 = *puVar14 + (uVar13 | uVar17);
        goto LAB_0373550c;
      case 0x93:
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","evaluateExpression","DW_OP_piece not implemented");
        fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        *(byte **)(unaff_x29 + -8) = in_x10 + 2;
        puVar10 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        puVar14 = (ulong *)*puVar20;
        bVar8 = in_x10[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar20 = (ulong)(byte)*puVar14;
          }
          else {
            if (bVar8 != 2) {
LAB_03735dac:
              fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                      "libunwind: %s - %s\n","evaluateExpression","DW_OP_deref_size with bad size");
              fflush((FILE *)(puVar10 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar20 = (ulong)(ushort)*puVar14;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto LAB_03735dac;
            goto LAB_03735904;
          }
          *puVar20 = (ulong)(uint)*puVar14;
        }
        goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
      }
      puVar20[-1] = uVar16;
      puVar20 = puVar20 + -1;
Firebase_FutureString_SWIG_CompletionDelegate__Invoke:
      in_x10 = *(byte **)(unaff_x29 + -8);
    } while (in_x10 < pbVar6);
    unaff_x21 = *puVar20;
  }
  return unaff_x21;
}


