/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 050bfb30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(void)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  uint unaff_w27;
  long *unaff_x29;
  double dVar14;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  int iStack0000000000000010;
  int iStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  
code_r0x050bfb30:
  lVar11 = FUN_05030300();
joined_r0x050bfb38:
  if ((lVar11 == 0) || (FUN_04f69818(lVar11,0,0), unaff_x24 == 0)) {
thunk_FUN_02f089c8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_04f7a548();
LAB_050bfc8c:
  uVar12 = in_stack_00000038;
  unaff_w27 = uStack0000000000000034 + unaff_w27;
  if ((int)unaff_w22 <= (int)unaff_w27) {
    return;
  }
  if (unaff_w22 <= unaff_w27) goto LAB_050bfd50;
  uVar1 = *(ushort *)(unaff_x23 + (long)(int)unaff_w27 * 2);
  if (uVar1 < 0x4c) {
    if (0x2f < uVar1) {
      if (0x46 < uVar1) {
        if (uVar1 == 0x48) {
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uStack0000000000000034 = FUN_050be7bc();
          if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9980);
          }
          FUN_050b7118(&stack0x00000038);
          goto LAB_050bf630;
        }
        if (uVar1 != 0x4b) goto LAB_050bf418;
        uStack0000000000000034 = 1;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050c0180(uVar12,in_stack_00000018);
        goto LAB_050bfc8c;
      }
      if (uVar1 != 0x3a) {
        if (uVar1 == 0x46) goto LAB_050bf288;
        goto LAB_050bf418;
      }
      FUN_05030d08();
      if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
LAB_050bf56c:
      FUN_04f79730();
      goto LAB_050bf57c;
    }
    if (uVar1 < 0x26) {
      if (uVar1 == 0x22) {
LAB_050bf25c:
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000034 = FUN_050be980();
        goto LAB_050bfc8c;
      }
      if (uVar1 == 0x25) {
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar6 = FUN_050beb28();
        uVar12 = in_stack_00000038;
        if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_050bfd58;
        uStack0000000000000028 = (undefined2)iVar6;
        if (*(long *)(*(long *)System_Decimal_var + 0x38) == 0) {
          FUN_02f41ef8(*(long *)System_Decimal_var);
        }
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050becfc(uVar12,&stack0x00000028,1);
        goto LAB_050bf02c;
      }
    }
    else {
      if (uVar1 == 0x27) goto LAB_050bf25c;
      if (uVar1 == 0x2f) {
        FUN_050306d0();
        if (unaff_x24 != 0) goto LAB_050bf56c;
        goto thunk_FUN_02f089c8;
      }
    }
  }
  else {
    if (0x6d < uVar1) {
      if (0x74 < uVar1) {
        if (uVar1 == 0x79) {
          if (unaff_x26 == (long *)0x0) goto thunk_FUN_02f089c8;
          iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*unaff_x20);
          }
          uStack0000000000000034 = FUN_050be7bc();
          if ((((iStack0000000000000010 != 0) &&
               (*(char *)(*(long *)(*(long *)PTR_DAT_067d7710 + 0xb8) + 2) == '\0')) &&
              (iStack0000000000000030 == 1)) &&
             (uVar7 = uStack0000000000000034 + unaff_w27, (int)uVar7 < in_stack_00000008._4_4_)) {
            if (unaff_w22 <= uVar7) goto LAB_050bfd50;
            if (*(short *)(unaff_x23 + (long)(int)uVar7 * 2) == 0x27) {
              if (unaff_w22 <= uVar7 + 1) goto LAB_050bfd50;
              if (*(long *)PTR_DAT_067daff0 == 0) goto thunk_FUN_02f089c8;
              sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar7 + 1) * 2);
              sVar4 = FUN_04f69818(*(long *)PTR_DAT_067daff0,0,0);
              if (sVar5 == sVar4) {
                if ((*(long *)PTR_DAT_067dafe8 == 0) ||
                   (FUN_04f69818(*(long *)PTR_DAT_067dafe8,0,0), unaff_x24 == 0))
                goto thunk_FUN_02f089c8;
                FUN_04f7a548();
                goto LAB_050bfc8c;
              }
            }
          }
          uVar9 = FUN_050323c4();
          if ((uVar9 & 1) == 0) {
            if (iStack0000000000000014 != 0) {
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if (DAT_06bb9597 == '\0') {
                FUN_02f08768(unaff_x29);
                DAT_06bb9597 = '\x01';
              }
              lVar11 = *unaff_x29;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar11 = *unaff_x29;
              }
              if (**(char **)(lVar11 + 0xb8) == '\0') {
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                goto LAB_050bfd24;
              }
            }
            if (2 < (int)uStack0000000000000034) {
              uVar12 = FUN_050d2c48((long)&stack0x00000030 + 4,0);
              uVar12 = FUN_04f65260(*(undefined8 *)PTR_DAT_067d6e60,uVar12,0);
              if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
              }
              uVar13 = FUN_050656a0(0);
              FUN_050d2e24(&stack0x00000030,uVar12,uVar13,0);
              if (unaff_x24 != 0) goto LAB_050bfa98;
              goto thunk_FUN_02f089c8;
            }
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
          }
          else if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
LAB_050bfc84:
          FUN_050be5c4();
          goto LAB_050bfc8c;
        }
        if (uVar1 != 0x7a) goto LAB_050bf418;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000034 = FUN_050be7bc();
        FUN_050bfdb0(in_stack_00000038,in_stack_00000018);
        goto LAB_050bfc8c;
      }
      if (uVar1 == 0x73) {
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000034 = FUN_050be7bc();
        if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9980);
        }
        FUN_050b74f8(&stack0x00000038);
LAB_050bf630:
        FUN_050be5c4();
        goto LAB_050bfc8c;
      }
      if (uVar1 != 0x74) goto LAB_050bf418;
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack0000000000000034 = FUN_050be7bc();
      if (uStack0000000000000034 != 1) {
        if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050b7118(&stack0x00000038);
        if (uVar7 < 0xc) {
          FUN_05030300();
        }
        else {
          FUN_050308e8();
        }
        goto joined_r0x050bf858;
      }
      if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050b7118(&stack0x00000038);
      if (uVar7 < 0xc) {
        lVar11 = FUN_05030300();
        if (lVar11 == 0) goto thunk_FUN_02f089c8;
        if (0 < *(int *)(lVar11 + 0x10)) goto code_r0x050bfb30;
        goto LAB_050bfc8c;
      }
      lVar11 = FUN_050308e8();
      if (lVar11 == 0) goto thunk_FUN_02f089c8;
      if (0 < *(int *)(lVar11 + 0x10)) goto code_r0x050bf0e4;
      goto LAB_050bfc8c;
    }
    if (0x5c < uVar1) {
      if (uVar1 < 0x66) {
        if (uVar1 != 100) {
          if (uVar1 != 0x65) {
LAB_050bf3c0:
            if (uVar1 == 0x6d) {
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uStack0000000000000034 = FUN_050be7bc();
              if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9980);
              }
              FUN_050b728c(&stack0x00000038);
              goto LAB_050bf630;
            }
          }
          goto LAB_050bf418;
        }
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000034 = FUN_050be7bc();
        if ((int)uStack0000000000000034 < 3) {
          if (unaff_x26 != (long *)0x0) {
            (**(code **)(*unaff_x26 + 0x1e8))();
            if (iStack0000000000000014 != 0) {
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if (DAT_06bb9597 == '\0') {
                FUN_02f08768(unaff_x29);
                DAT_06bb9597 = '\x01';
              }
              lVar11 = *unaff_x29;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar11 = *unaff_x29;
              }
              if (**(char **)(lVar11 + 0xb8) == '\0') goto LAB_050bfca0;
            }
            lVar11 = *unaff_x20;
LAB_050bfc30:
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            goto LAB_050bfc84;
          }
          goto thunk_FUN_02f089c8;
        }
        if (unaff_x26 == (long *)0x0) goto thunk_FUN_02f089c8;
        uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
        uVar7 = uStack0000000000000034;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*unaff_x20);
        }
        FUN_050be848(uVar8,uVar7);
        if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
LAB_050bfa98:
        FUN_04f79730();
        goto LAB_050bfc8c;
      }
      if (uVar1 == 0x66) {
LAB_050bf288:
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000034 = FUN_050be7bc();
        if (7 < (int)uStack0000000000000034) {
LAB_050bfd58:
          if (in_stack_00000000 == 0) {
            FUN_04f7beac();
          }
          thunk_FUN_02f6ef30(PTR_DAT_067d4798);
          uVar12 = thunk_FUN_02f45270();
          uVar13 = thunk_FUN_02f6ef30(PTR_DAT_067d6160);
          FUN_050be224(uVar12,uVar13);
          uVar13 = thunk_FUN_02f6ef30(System_Runtime_CompilerServices_DecimalConstantAttribute_var);
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar12,uVar13);
        }
        if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050b3fb8(&stack0x00000038);
        uVar7 = uStack0000000000000034;
        if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f80);
        }
        dVar14 = (double)thunk_FUN_02f41b6c(0x4024000000000000,(double)(int)(7 - uVar7),0);
        unaff_x29 = (long *)PTR_DAT_067dacb8;
        lVar11 = -0x8000000000000000;
        if (dVar14 != INFINITY) {
          lVar11 = (long)dVar14;
        }
        lVar10 = 0;
        if (lVar11 != 0) {
          lVar10 = (long)(uVar9 % 10000000) / lVar11;
        }
        iVar6 = (int)lVar10;
        if (uVar1 == 0x66) {
          lVar11 = *unaff_x20;
          iStack000000000000002c = iVar6;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar11 = *unaff_x20;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
          if (lVar11 == 0) goto thunk_FUN_02f089c8;
          if (*(uint *)(lVar11 + 0x18) <= uStack0000000000000034 - 1) {
LAB_050bfd50:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          lVar11 = lVar11 + (long)(int)(uStack0000000000000034 - 1) * 8;
          lVar10 = *(long *)PTR_DAT_067c9fd8;
        }
        else {
          uVar7 = uStack0000000000000034;
          if ((0 < (int)uStack0000000000000034) && (iVar6 % 10 == 0)) {
            do {
              lVar11 = SUB168(SEXT816(lVar10) * SEXT816(unaff_x25),8);
              bVar3 = uVar7 < 2;
              uVar7 = uVar7 - 1;
              lVar10 = (lVar11 >> 2) - (lVar11 >> 0x3f);
              if (bVar3) break;
              lVar11 = SUB168(SEXT816(lVar10) * SEXT816(unaff_x25),8);
            } while (lVar10 == ((lVar11 >> 2) - (lVar11 >> 0x3f)) * 10);
          }
          if ((int)uVar7 < 1) {
            if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
            iVar6 = FUN_04f789ac();
            if (0 < iVar6) {
              FUN_04f789ac();
              sVar5 = FUN_04f791d8();
              if (sVar5 == 0x2e) {
                FUN_04f789ac();
                FUN_04f7a2c8();
              }
            }
            goto LAB_050bfc8c;
          }
          lVar11 = *unaff_x20;
          iStack000000000000002c = (int)lVar10;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar11 = *unaff_x20;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
          if (lVar11 == 0) goto thunk_FUN_02f089c8;
          if (*(uint *)(lVar11 + 0x18) <= uVar7 - 1) goto LAB_050bfd50;
          lVar11 = lVar11 + (ulong)(uVar7 - 1) * 8;
          lVar10 = *(long *)PTR_DAT_067c9fd8;
        }
        uVar12 = *(undefined8 *)(lVar11 + 0x20);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar13 = FUN_050656a0(0);
        FUN_050d2e24((long)&stack0x00000028 + 4,uVar12,uVar13,0);
      }
      else {
        if (uVar1 != 0x67) {
          if (uVar1 == 0x68) {
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uStack0000000000000034 = FUN_050be7bc();
            if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9980);
            }
            FUN_050b7118(&stack0x00000038);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            goto LAB_050bf630;
          }
          goto LAB_050bf3c0;
        }
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack0000000000000034 = FUN_050be7bc();
        if (unaff_x26 == (long *)0x0) goto thunk_FUN_02f089c8;
        (**(code **)(*unaff_x26 + 0x228))();
        FUN_05030468();
      }
joined_r0x050bf858:
      if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
      FUN_04f79730();
      goto LAB_050bfc8c;
    }
    if (uVar1 == 0x4d) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack0000000000000034 = FUN_050be7bc();
      uVar12 = in_stack_00000038;
      if (unaff_x26 == (long *)0x0) goto thunk_FUN_02f089c8;
      uVar8 = (**(code **)(*unaff_x26 + 0x248))();
      unaff_x29 = (long *)PTR_DAT_067dacb8;
      if ((int)uStack0000000000000034 < 3) {
        if (iStack0000000000000014 != 0) {
          if (*(int *)(*(long *)PTR_DAT_067dacb8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bb9597 == '\0') {
            FUN_02f08768(unaff_x29);
            DAT_06bb9597 = '\x01';
          }
          lVar11 = *unaff_x29;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar11 = *unaff_x29;
          }
          if (**(char **)(lVar11 + 0xb8) == '\0') {
LAB_050bfca0:
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
LAB_050bfd24:
            FUN_050be740();
            goto LAB_050bfc8c;
          }
        }
        lVar11 = *unaff_x20;
        goto LAB_050bfc30;
      }
      if (iStack0000000000000014 == 0) {
LAB_050bf4f4:
        uVar9 = FUN_05031038();
        uVar7 = uStack0000000000000034;
        if (((uVar9 & 1) == 0) || ((int)uStack0000000000000034 < 4)) {
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050be884(uVar8,uVar7);
        }
        else {
          if (*(int *)(*unaff_x20 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050beb98();
          FUN_05031078();
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_067dacb8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bb9597 == '\0') {
          FUN_02f08768(PTR_DAT_067dacb8);
          DAT_06bb9597 = '\x01';
        }
        puVar2 = PTR_DAT_067dacb8;
        lVar11 = *(long *)PTR_DAT_067dacb8;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar11 = *(long *)puVar2;
        }
        uVar7 = uStack0000000000000034;
        if (**(char **)(lVar11 + 0xb8) != '\0') goto LAB_050bf4f4;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050be8c0(uVar12,uVar8,uVar7);
      }
      if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
      FUN_04f79730();
      unaff_x29 = (long *)PTR_DAT_067dacb8;
      goto LAB_050bfc8c;
    }
    if (uVar1 == 0x5c) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar6 = FUN_050beb28();
      if (iVar6 < 0) goto LAB_050bfd58;
      if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
      FUN_04f7a548();
LAB_050bf02c:
      uStack0000000000000034 = 2;
      goto LAB_050bfc8c;
    }
  }
LAB_050bf418:
  if (unaff_x24 == 0) goto thunk_FUN_02f089c8;
  FUN_04f7a548();
LAB_050bf57c:
  uStack0000000000000034 = 1;
  goto LAB_050bfc8c;
code_r0x050bf0e4:
  lVar11 = FUN_050308e8();
  goto joined_r0x050bfb38;
}


