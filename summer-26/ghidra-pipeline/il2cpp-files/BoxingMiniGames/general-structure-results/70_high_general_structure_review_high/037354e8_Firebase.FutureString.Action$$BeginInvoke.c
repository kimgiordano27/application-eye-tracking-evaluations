/*
FUNCTION_NAME: Firebase.FutureString.Action$$BeginInvoke
ENTRY_POINT: 037354e8
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


ulong Firebase_FutureString_Action__BeginInvoke(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *in_x10;
  byte *pbVar16;
  byte *pbVar17;
  long unaff_x19;
  byte *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar18;
  long unaff_x29;
  undefined1 auVar19 [16];
  
  puVar1 = (ulong *)(unaff_x19 + 0xe8);
  puVar2 = (ulong *)(unaff_x19 + 0x108);
  puVar3 = (ulong *)(unaff_x19 + 0xf8);
  puVar18 = (ulong *)(param_1 + 8);
  puVar4 = (ulong *)(unaff_x19 + 0x100);
  do {
    pbVar16 = in_x10 + 1;
    *(byte **)(unaff_x29 + -8) = pbVar16;
    puVar8 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
    bVar6 = *in_x10;
    uVar9 = (uint)bVar6;
    if (0x91 < uVar9 - 3) {
code_r0x03735d08:
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","evaluateExpression","DWARF opcode not implemented");
      fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar13 = (uint)bVar6;
    puVar12 = puVar3;
    switch(uVar9) {
    case 3:
    case 0xe:
    case 0xf:
      uVar14 = *(ulong *)(in_x10 + 1);
      pbVar16 = in_x10 + 9;
      goto LAB_03735974;
    case 4:
    case 5:
    case 7:
      goto code_r0x03735d08;
    case 6:
      puVar12 = (ulong *)*puVar18;
LAB_03735904:
      *puVar18 = *puVar12;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 8:
      uVar14 = (ulong)in_x10[1];
      goto LAB_037358d8;
    case 9:
      uVar14 = (ulong)(char)in_x10[1];
LAB_037358d8:
      pbVar16 = in_x10 + 2;
      goto LAB_03735974;
    case 10:
      uVar14 = (ulong)*(ushort *)(in_x10 + 1);
      pbVar16 = in_x10 + 3;
      goto LAB_03735974;
    case 0xb:
      uVar14 = (ulong)*(short *)(in_x10 + 1);
      pbVar16 = in_x10 + 3;
      goto LAB_03735974;
    case 0xc:
      uVar14 = (ulong)*(uint *)(in_x10 + 1);
      pbVar16 = in_x10 + 5;
      goto LAB_03735974;
    case 0xd:
      uVar14 = (ulong)*(int *)(in_x10 + 1);
      pbVar16 = in_x10 + 5;
      goto LAB_03735974;
    case 0x10:
      uVar14 = FUN_037352c4(unaff_x29 + -8);
      puVar18 = puVar18 + 1;
      *puVar18 = uVar14;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x11:
      uVar14 = 0;
      uVar11 = 0;
      pbVar17 = pbVar16;
      do {
        if (pbVar17 == unaff_x20) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
          fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar6 = *pbVar17;
        pbVar16 = pbVar16 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar6 & 0x7f) << uVar15 | uVar11;
        pbVar17 = pbVar17 + 1;
      } while ((char)bVar6 < '\0');
      *(byte **)(unaff_x29 + -8) = pbVar16;
      uVar15 = -1L << (uVar14 & 0x3f);
      if (0x38 < (int)uVar14 - 7U || bVar6 < 0x40) {
        uVar15 = 0;
      }
      puVar18 = puVar18 + 1;
      *puVar18 = uVar11 | uVar15;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x12:
      uVar14 = *puVar18;
      goto LAB_0373550c;
    case 0x13:
      puVar18 = puVar18 + -1;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x14:
      uVar14 = puVar18[-1];
      goto LAB_0373550c;
    case 0x15:
      pbVar16 = in_x10 + 2;
      uVar14 = puVar18[-(ulong)in_x10[1]];
LAB_03735974:
      *(byte **)(unaff_x29 + -8) = pbVar16;
LAB_0373550c:
      puVar18[1] = uVar14;
      puVar18 = puVar18 + 1;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x16:
      auVar19 = NEON_ext(*(undefined1 (*) [16])(puVar18 + -1),*(undefined1 (*) [16])(puVar18 + -1),8
                         ,1);
      *puVar18 = auVar19._8_8_;
      puVar18[-1] = auVar19._0_8_;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x17:
      uVar14 = *puVar18;
      *puVar18 = SUB168(*(undefined1 (*) [16])(puVar18 + -2),8);
      puVar18[-1] = SUB168(*(undefined1 (*) [16])(puVar18 + -2),0);
      puVar18[-2] = uVar14;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x18:
      puVar12 = (ulong *)*puVar18;
      puVar18 = puVar18 + -1;
      *puVar18 = *puVar12;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x19:
      uVar14 = *puVar18;
      if ((long)uVar14 < 0) goto LAB_03735aac;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x1a:
      uVar14 = puVar18[-1] & *puVar18;
      break;
    case 0x1b:
      uVar14 = 0;
      if (*puVar18 != 0) {
        uVar14 = (long)puVar18[-1] / (long)*puVar18;
      }
      break;
    case 0x1c:
      uVar14 = puVar18[-1] - *puVar18;
      break;
    case 0x1d:
      uVar14 = *puVar18;
      lVar10 = 0;
      if (uVar14 != 0) {
        lVar10 = (long)puVar18[-1] / (long)uVar14;
      }
      uVar14 = puVar18[-1] - lVar10 * uVar14;
      break;
    case 0x1e:
      uVar14 = puVar18[-1] * *puVar18;
      break;
    case 0x1f:
      uVar14 = *puVar18;
LAB_03735aac:
      *puVar18 = -uVar14;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x20:
      *puVar18 = ~*puVar18;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x21:
      uVar14 = puVar18[-1] | *puVar18;
      break;
    case 0x22:
      uVar14 = puVar18[-1] + *puVar18;
      break;
    case 0x23:
      lVar10 = FUN_037352c4(unaff_x29 + -8);
      *puVar18 = *puVar18 + lVar10;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x24:
      uVar14 = puVar18[-1] << (*puVar18 & 0x3f);
      break;
    case 0x25:
      uVar14 = puVar18[-1] >> (*puVar18 & 0x3f);
      break;
    case 0x26:
      uVar14 = (long)puVar18[-1] >> (*puVar18 & 0x3f);
      break;
    case 0x27:
      uVar14 = puVar18[-1] ^ *puVar18;
      break;
    case 0x28:
      puVar12 = puVar18 + -1;
      uVar14 = *puVar18;
      sVar7 = *(short *)(in_x10 + 1);
      *(byte **)(unaff_x29 + -8) = in_x10 + 3;
      puVar18 = puVar12;
      if (uVar14 != 0) {
        *(byte **)(unaff_x29 + -8) = in_x10 + 3 + sVar7;
      }
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    case 0x29:
      uVar14 = (ulong)(puVar18[-1] == *puVar18);
      break;
    case 0x2a:
      uVar14 = (ulong)(*puVar18 <= puVar18[-1]);
      break;
    case 0x2b:
      uVar14 = (ulong)(*puVar18 < puVar18[-1]);
      break;
    case 0x2c:
      uVar14 = (ulong)(puVar18[-1] <= *puVar18);
      break;
    case 0x2d:
      uVar14 = (ulong)(puVar18[-1] < *puVar18);
      break;
    case 0x2e:
      uVar14 = (ulong)(puVar18[-1] != *puVar18);
      break;
    case 0x2f:
      *(byte **)(unaff_x29 + -8) = in_x10 + (long)*(short *)(in_x10 + 1) + 3;
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    default:
      uVar14 = (ulong)(uVar13 - 0x30);
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
      if (((uVar13 != 0x6f) && (puVar12 = unaff_x21, bVar6 != 0x6e)) &&
         (puVar12 = puVar1, bVar6 != 0x6d)) {
        puVar12 = (ulong *)(unaff_x19 + (ulong)(uVar13 - 0x50) * 8);
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
      uVar14 = 0;
      uVar11 = 0;
      pbVar17 = pbVar16;
      do {
        if (pbVar17 == unaff_x20) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
          fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar5 = *pbVar17;
        pbVar16 = pbVar16 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar5 & 0x7f) << uVar15 | uVar11;
        pbVar17 = pbVar17 + 1;
      } while ((char)bVar5 < '\0');
      *(byte **)(unaff_x29 + -8) = pbVar16;
      puVar8 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
      uVar15 = -1L << (uVar14 & 0x3f);
      if (0x38 < (int)uVar14 - 7U || bVar5 < 0x40) {
        uVar15 = 0;
      }
      if (bVar6 < 0x8e) {
        if (((bVar6 != 0x6e) && (puVar12 = puVar4, bVar6 != 0x6f)) &&
           (puVar12 = puVar1, bVar6 != 0x8d)) goto LAB_03735648;
      }
      else if (bVar6 < 0x90) {
        puVar12 = unaff_x21;
        if ((bVar6 != 0x8e) && (puVar12 = puVar3, uVar13 != 0x8f)) {
LAB_03735648:
          if (0x1c < uVar9 - 0x70) {
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
            fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar12 = (ulong *)(unaff_x19 + (ulong)(uVar9 - 0x70) * 8);
        }
      }
      else {
        puVar12 = puVar4;
        if ((bVar6 != 0x90) && (puVar12 = puVar2, bVar6 != 0x92)) goto LAB_03735648;
      }
      uVar14 = *puVar12 + (uVar11 | uVar15);
      goto LAB_0373550c;
    case 0x90:
      uVar9 = FUN_037352c4(unaff_x29 + -8);
      puVar8 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
      if ((int)uVar9 < 0x1e) {
        if (((uVar9 != 0xfffffffe) && (puVar12 = puVar4, uVar9 != 0xffffffff)) &&
           (puVar12 = puVar1, uVar9 != 0x1d)) goto LAB_03735bac;
      }
      else if ((int)uVar9 < 0x20) {
        puVar12 = unaff_x21;
        if ((uVar9 != 0x1e) && (puVar12 = puVar3, uVar9 != 0x1f)) {
LAB_03735bac:
          if (0x1c < uVar9) {
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
            fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar12 = (ulong *)(unaff_x19 + (ulong)uVar9 * 8);
        }
      }
      else {
        puVar12 = puVar4;
        if ((uVar9 != 0x20) && (puVar12 = puVar2, uVar9 != 0x22)) goto LAB_03735bac;
      }
LAB_03735508:
      uVar14 = *puVar12;
      goto LAB_0373550c;
    case 0x91:
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","evaluateExpression","DW_OP_fbreg not implemented");
      fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    case 0x92:
      uVar9 = FUN_037352c4(unaff_x29 + -8);
      puVar8 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
      pbVar16 = *(byte **)(unaff_x29 + -8);
      uVar14 = 0;
      uVar11 = 0;
      pbVar17 = pbVar16;
      do {
        if (pbVar17 == unaff_x20) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
          fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar6 = *pbVar17;
        pbVar16 = pbVar16 + 1;
        uVar15 = uVar14 & 0x3f;
        uVar14 = uVar14 + 7;
        uVar11 = ((ulong)bVar6 & 0x7f) << uVar15 | uVar11;
        pbVar17 = pbVar17 + 1;
      } while ((char)bVar6 < '\0');
      *(byte **)(unaff_x29 + -8) = pbVar16;
      puVar8 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
      uVar15 = -1L << (uVar14 & 0x3f);
      if (0x38 < (int)uVar14 - 7U || bVar6 < 0x40) {
        uVar15 = 0;
      }
      if ((int)uVar9 < 0x1e) {
        if (((uVar9 != 0xfffffffe) && (puVar12 = puVar4, uVar9 != 0xffffffff)) &&
           (puVar12 = puVar1, uVar9 != 0x1d)) goto LAB_03735bd4;
      }
      else if ((int)uVar9 < 0x20) {
        puVar12 = unaff_x21;
        if ((uVar9 != 0x1e) && (puVar12 = puVar3, uVar9 != 0x1f)) {
LAB_03735bd4:
          if (0x1c < uVar9) {
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
            fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar12 = (ulong *)(unaff_x19 + (ulong)uVar9 * 8);
        }
      }
      else {
        puVar12 = puVar4;
        if ((uVar9 != 0x20) && (puVar12 = puVar2, uVar9 != 0x22)) goto LAB_03735bd4;
      }
      uVar14 = *puVar12 + (uVar11 | uVar15);
      goto LAB_0373550c;
    case 0x93:
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","evaluateExpression","DW_OP_piece not implemented");
      fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    case 0x94:
      *(byte **)(unaff_x29 + -8) = in_x10 + 2;
      puVar8 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
      puVar12 = (ulong *)*puVar18;
      bVar6 = in_x10[1];
      if (bVar6 < 4) {
        if (bVar6 == 1) {
          *puVar18 = (ulong)(byte)*puVar12;
        }
        else {
          if (bVar6 != 2) {
LAB_03735dac:
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","evaluateExpression","DW_OP_deref_size with bad size");
            fflush((FILE *)(puVar8 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *puVar18 = (ulong)(ushort)*puVar12;
        }
      }
      else {
        if (bVar6 != 4) {
          if (bVar6 != 8) goto LAB_03735dac;
          goto LAB_03735904;
        }
        *puVar18 = (ulong)(uint)*puVar12;
      }
      goto Firebase_FutureString_SWIG_CompletionDelegate__Invoke;
    }
    puVar18[-1] = uVar14;
    puVar18 = puVar18 + -1;
Firebase_FutureString_SWIG_CompletionDelegate__Invoke:
    in_x10 = *(byte **)(unaff_x29 + -8);
    if (unaff_x20 <= in_x10) {
      return *puVar18;
    }
  } while( true );
}


