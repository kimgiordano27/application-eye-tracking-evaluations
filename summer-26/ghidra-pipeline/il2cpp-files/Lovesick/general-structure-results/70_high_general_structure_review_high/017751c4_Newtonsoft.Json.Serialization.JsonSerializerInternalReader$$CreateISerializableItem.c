/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 017751c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem
               (long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  long in_x9;
  uint uVar4;
  int iVar5;
  uint unaff_w19;
  ulong unaff_x20;
  undefined8 uVar6;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint uVar7;
  ulong unaff_x24;
  short *psVar8;
  uint unaff_w25;
  short sVar9;
  long unaff_x26;
  long lVar10;
  ushort *puVar11;
  short unaff_w27;
  long lVar12;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x017751c4:
  *(short *)(in_x9 + param_1 * 2) = unaff_w27;
  *(int *)(unaff_x22 + 0x18) = (int)param_1 + 1;
  iVar5 = unaff_w21;
LAB_017751e4:
  if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (unaff_w25 & 1) == 0)) {
    if (*(uint *)(unaff_x29 + -0x68) <= unaff_w19) goto LAB_01775c08;
    if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x70) + (long)(int)unaff_w19 * 4) + 1) {
      if (unaff_x26 == 0) {
LAB_01775c0c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *(long *)(unaff_x26 + 0x40);
      if (DAT_03778dcf == '\0') {
        thunk_FUN_00d48444(StringLiteral_4591);
        DAT_03778dcf = '\x01';
      }
      if (lVar12 == 0) goto LAB_01775c0c;
      if (*(int *)(lVar12 + 0x10) == 1) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_01775294;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
        lVar10 = *(long *)(unaff_x22 + 8);
        uVar3 = FUN_015fa29c(lVar12,0,0);
        *(undefined2 *)(lVar10 + (long)(int)uVar2 * 2) = uVar3;
        unaff_x26 = *(long *)(unaff_x29 + -0xb0);
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
LAB_01775294:
        FUN_0161abb0();
      }
      unaff_w25 = *(uint *)(unaff_x29 + -0x90);
      unaff_w19 = unaff_w19 - 1;
    }
  }
  unaff_w21 = iVar5 + -1;
  unaff_w23 = unaff_w23 + -1;
  if (unaff_w21 == 0 || iVar5 < 1) {
    do {
      uVar4 = (uint)unaff_x20;
      uVar7 = (uint)unaff_x24;
      uVar2 = uVar7 + 1;
      unaff_x24 = (ulong)uVar2;
      uVar3 = (undefined2)unaff_x20;
      if (uVar4 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar2 < (int)*(undefined8 *)(unaff_x29 + -200)) {
            lVar12 = unaff_x24 << 0x20;
            uVar7 = ~uVar7;
            puVar11 = (ushort *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)uVar2 * 2);
            while( true ) {
              uVar1 = *puVar11;
              if ((uVar1 == 0) || (uVar1 == uVar4)) break;
              if (DAT_037781dd == '\0') {
                thunk_FUN_00d48444(StringLiteral_4591);
                DAT_037781dd = '\x01';
              }
              uVar2 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar1;
                *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
              }
              else {
                FUN_0161aa84();
              }
              lVar12 = lVar12 + 0x100000000;
              uVar7 = uVar7 - 1;
              puVar11 = puVar11 + 1;
              if (*(uint *)(unaff_x29 + -0xb4) == uVar7) goto LAB_01775ac4;
            }
            unaff_x24 = (ulong)((*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0xc0)) != 0) -
                               uVar7);
          }
          break;
        case 0x23:
        case 0x30:
          if (unaff_w21 < 0) {
            unaff_w21 = unaff_w21 + 1;
            if (unaff_w23 <= *(int *)(unaff_x29 + -0xe0)) {
LAB_01775784:
              sVar9 = 0x30;
              goto LAB_01775788;
            }
          }
          else {
            sVar9 = *unaff_x28;
            if (sVar9 == 0) {
              if (*(int *)(unaff_x29 + -0xdc) < unaff_w23) goto LAB_01775784;
            }
            else {
              unaff_x28 = unaff_x28 + 1;
LAB_01775788:
              if (DAT_037781dd == '\0') {
                thunk_FUN_00d48444(StringLiteral_4591);
                DAT_037781dd = '\x01';
              }
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              uVar2 = *(uint *)(unaff_x29 + -0x90);
              if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_01775c08;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar9;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
              }
              else {
                FUN_0161aa84();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar2 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x68) <= unaff_w19) goto LAB_01775c08;
                if (unaff_w23 ==
                    *(int *)(*(long *)(unaff_x29 + -0x70) + (long)(int)unaff_w19 * 4) + 1) {
                  if (*(long *)(unaff_x29 + -0xb0) == 0) goto LAB_01775c0c;
                  lVar12 = *(long *)(*(long *)(unaff_x29 + -0xb0) + 0x40);
                  if (DAT_03778dcf == '\0') {
                    thunk_FUN_00d48444(StringLiteral_4591);
                    DAT_03778dcf = '\x01';
                  }
                  if (lVar12 == 0) goto LAB_01775c0c;
                  if (*(int *)(lVar12 + 0x10) == 1) {
                    uVar2 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_017758a8;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
                    lVar10 = *(long *)(unaff_x22 + 8);
                    uVar3 = FUN_015fa29c(lVar12,0,0);
                    *(undefined2 *)(lVar10 + (long)(int)uVar2 * 2) = uVar3;
                    *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                  }
                  else {
LAB_017758a8:
                    FUN_0161abb0();
                  }
                  unaff_w19 = unaff_w19 - 1;
                }
              }
            }
          }
          unaff_w23 = unaff_w23 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_017752f0_caseD_24:
          if (DAT_037781dd == '\0') {
            thunk_FUN_00d48444(StringLiteral_4591);
            DAT_037781dd = '\x01';
          }
          uVar2 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar2 < *(uint *)(unaff_x22 + 0x10)) {
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar3;
              goto LAB_0177554c;
            }
            goto LAB_01775c08;
          }
LAB_0177555c:
          FUN_0161aa84();
          break;
        case 0x25:
          if (unaff_x26 == 0) goto LAB_01775c0c;
          lVar12 = *(long *)(unaff_x26 + 0x90);
joined_r0x017753cc:
          if (DAT_03778dcf == '\0') {
            thunk_FUN_00d48444(StringLiteral_4591);
            DAT_03778dcf = '\x01';
          }
          if (lVar12 == 0) goto LAB_01775c0c;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar2 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar2 < *(uint *)(unaff_x22 + 0x10)) {
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_015fa29c(lVar12,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar2 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                break;
              }
              goto LAB_01775c08;
            }
          }
          FUN_0161abb0();
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0xd0) & 1) == 0 && unaff_w23 == 0) {
            if ((*(int *)(unaff_x29 + -0xdc) < 0) ||
               ((*(int *)(unaff_x29 + -0x94) < *(int *)(unaff_x29 + -0x84) && (*unaff_x28 != 0)))) {
              if (unaff_x26 == 0) goto LAB_01775c0c;
              lVar12 = *(long *)(unaff_x26 + 0x38);
              if (DAT_03778dcf == '\0') {
                thunk_FUN_00d48444(StringLiteral_4591);
                DAT_03778dcf = '\x01';
              }
              if (lVar12 == 0) goto LAB_01775c0c;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar2 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_01775974;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_015fa29c(lVar12,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar2 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
              }
              else {
LAB_01775974:
                FUN_0161abb0();
              }
              unaff_w23 = 0;
              *(undefined4 *)(unaff_x29 + -0xd0) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xd0) = 0;
              unaff_w23 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_017752f0_caseD_24;
LAB_017754cc:
          if ((*(uint *)(unaff_x29 + -0xcc) & 1) == 0) {
            uVar6 = *(undefined8 *)(unaff_x29 + -200);
            if (DAT_037781dd == '\0') {
              thunk_FUN_00d48444(StringLiteral_4591);
              DAT_037781dd = '\x01';
            }
            uVar4 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar4 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_01775c08;
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
            }
            else {
              FUN_0161aa84();
            }
            uVar4 = (uint)uVar6;
            if ((int)uVar2 < (int)uVar4) {
              sVar9 = *(short *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)uVar2 * 2);
              if ((sVar9 == 0x2d) || (sVar9 == 0x2b)) {
                unaff_x24 = (ulong)(uVar7 + 2);
                if (DAT_037781dd == '\0') {
                  thunk_FUN_00d48444(StringLiteral_4591);
                  DAT_037781dd = '\x01';
                }
                uVar2 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar9;
                  *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                }
                else {
                  FUN_0161aa84();
                }
              }
              if ((int)unaff_x24 < (int)uVar4) {
                psVar8 = (short *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)unaff_x24 * 2);
                do {
                  if (*psVar8 != 0x30) break;
                  if (DAT_037781dd == '\0') {
                    thunk_FUN_00d48444(StringLiteral_4591);
                    DAT_037781dd = '\x01';
                  }
                  uVar2 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                  }
                  else {
                    FUN_0161aa84();
                  }
                  uVar2 = (int)unaff_x24 + 1;
                  unaff_x24 = (ulong)uVar2;
                  psVar8 = psVar8 + 1;
                } while (uVar4 != uVar2);
              }
            }
          }
          else {
            uVar4 = (uint)*(ulong *)(unaff_x29 + -200);
            if (((int)uVar2 < (int)uVar4) &&
               (*(short *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)uVar2 * 2) == 0x30)) {
              iVar5 = 1;
              goto LAB_017759ac;
            }
            iVar5 = uVar7 + 2;
            if ((int)uVar4 <= iVar5) {
Newtonsoft_Json_Serialization_JsonObjectContract__get_MemberSerialization:
              if (DAT_037781dd == '\0') {
                thunk_FUN_00d48444(StringLiteral_4591);
                DAT_037781dd = '\x01';
              }
              uVar2 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
              }
              else {
                FUN_0161aa84();
              }
              *(undefined4 *)(unaff_x29 + -0xcc) = 1;
              break;
            }
            sVar9 = *(short *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)uVar2 * 2);
            if (sVar9 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xc0) + (long)iVar5 * 2) != 0x30)
              goto Newtonsoft_Json_Serialization_JsonObjectContract__get_MemberSerialization;
              iVar5 = 0;
            }
            else {
              if ((sVar9 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xc0) + (long)iVar5 * 2) != 0x30))
              goto Newtonsoft_Json_Serialization_JsonObjectContract__get_MemberSerialization;
              iVar5 = 0;
            }
LAB_017759ac:
            unaff_x24 = (ulong)(uVar7 + 2);
            if ((int)(uVar7 + 2) < (int)uVar4) {
              do {
                if (*(short *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)unaff_x24 * 2) != 0x30)
                goto LAB_017759dc;
                uVar2 = (int)unaff_x24 + 1;
                unaff_x24 = (ulong)uVar2;
                iVar5 = iVar5 + 1;
              } while (uVar4 != uVar2);
              unaff_x24 = *(ulong *)(unaff_x29 + -200) & 0xffffffff;
            }
LAB_017759dc:
            if (9 < iVar5) {
              iVar5 = 10;
            }
            if (*(int *)(*(long *)
                          Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__ +
                        0xe0) == 0) {
              *(int *)(unaff_x29 + -0xcc) = iVar5;
              thunk_FUN_00d32864();
            }
            FUN_0177acb0();
          }
          *(undefined4 *)(unaff_x29 + -0xcc) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_017754cc;
          if (uVar4 != 0x2030) goto switchD_017752f0_caseD_24;
          if (unaff_x26 != 0) {
            lVar12 = *(long *)(unaff_x26 + 0x98);
            goto joined_r0x017753cc;
          }
          goto LAB_01775c0c;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -200) <= (int)uVar2) ||
           (sVar9 = *(short *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)uVar2 * 2), sVar9 == 0))
        goto switchD_017752f0_caseD_2c;
        unaff_x24 = (ulong)(uVar7 + 2);
        if (DAT_037781dd == '\0') {
          thunk_FUN_00d48444(StringLiteral_4591);
          DAT_037781dd = '\x01';
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar2) goto LAB_0177555c;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_01775c08;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar9;
LAB_0177554c:
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
switchD_017752f0_caseD_2c:
      if ((int)*(undefined8 *)(unaff_x29 + -200) <= (int)unaff_x24) {
LAB_01775ac4:
        if (*(long *)(*(long *)(unaff_x29 + -0xd8) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0xc0) + (long)(int)unaff_x24 * 2);
      unaff_x20 = (ulong)uVar1;
      if ((uVar1 == 0x3b) || (uVar1 == 0)) goto LAB_01775ac4;
      if (((0 < unaff_w21) && (uVar1 < 0x31)) &&
         ((1L << (unaff_x20 & 0x3f) & 0x1400800000000U) != 0)) goto code_r0x01775164;
      unaff_x26 = *(long *)(unaff_x29 + -0xb0);
    } while( true );
  }
  goto LAB_0177516c;
code_r0x01775164:
  unaff_x26 = *(long *)(unaff_x29 + -0xb0);
  unaff_w25 = *(uint *)(unaff_x29 + -0x90);
LAB_0177516c:
  sVar9 = *unaff_x28;
  unaff_w27 = 0x30;
  if (sVar9 != 0) {
    unaff_x28 = unaff_x28 + 1;
    unaff_w27 = sVar9;
  }
  if (DAT_037781dd == '\0') {
    thunk_FUN_00d48444(StringLiteral_4591);
    DAT_037781dd = '\x01';
  }
  uVar2 = *(uint *)(unaff_x22 + 0x18);
  param_1 = (long)(int)uVar2;
  if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) goto code_r0x017751b8;
  FUN_0161aa84();
  iVar5 = unaff_w21;
  goto LAB_017751e4;
code_r0x017751b8:
  if (*(uint *)(unaff_x22 + 0x10) <= uVar2) {
LAB_01775c08:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  in_x9 = *(long *)(unaff_x22 + 8);
  goto code_r0x017751c4;
}


