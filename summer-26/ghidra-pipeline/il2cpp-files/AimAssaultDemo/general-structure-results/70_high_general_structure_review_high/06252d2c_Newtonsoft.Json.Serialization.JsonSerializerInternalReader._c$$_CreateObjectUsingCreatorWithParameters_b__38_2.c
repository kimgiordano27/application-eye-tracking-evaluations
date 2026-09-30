/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_2
ENTRY_POINT: 06252d2c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_2
                (ulong param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  undefined1 in_ZR;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint extraout_w1;
  uint in_w8;
  short *psVar8;
  short *psVar9;
  short sVar10;
  uint uVar11;
  ushort *in_x9;
  long in_x10;
  ushort *puVar12;
  uint in_w11;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  short asStack_f0 [76];
  long lStack_58;
  
  while( true ) {
    in_x9 = in_x9 + 1;
    *unaff_x19 = in_w8;
    uVar3 = (uint)param_1;
    if ((bool)in_ZR) break;
    if (unaff_w20 <= in_w8) goto LAB_06252e2c;
    uVar1 = *in_x9;
    uVar11 = uVar1 - 0x30;
    if (9 < uVar11) {
      uVar11 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar11 = uVar11 - 0x37;
      }
      else {
        if (0x19 < uVar11 - 0x61) break;
        uVar11 = uVar11 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar11) break;
    if (in_w11 <= uVar3)
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0;
    param_1 = (ulong)(uVar11 + uVar3 * unaff_w21);
    in_w8 = in_w8 + 1;
    in_x10 = in_x10 + -1;
    in_ZR = in_x10 == 0;
  }
  if (0x80000000 < uVar3) {
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0:
    FUN_062535d0();
    uVar3 = *unaff_x19;
    uVar11 = 0x1fffffff;
    if (unaff_w21 != 8) {
      uVar11 = 0x7fffffff;
    }
    uVar14 = 0xfffffff;
    if (unaff_w21 != 0x10) {
      uVar14 = uVar11;
    }
    uVar11 = 0x19999999;
    if (unaff_w21 != 10) {
      uVar11 = uVar14;
    }
    if ((int)uVar3 < (int)unaff_w20) {
      puVar12 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
      lVar13 = (long)(int)unaff_w20 - (long)(int)uVar3;
      uVar14 = 0;
      do {
        if (unaff_w20 <= uVar3) {
LAB_06252e2c:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        uVar1 = *puVar12;
        uVar15 = uVar1 - 0x30;
        if (9 < uVar15) {
          uVar15 = (uint)uVar1;
          if (uVar1 - 0x41 < 0x1a) {
            uVar15 = uVar15 - 0x37;
          }
          else {
            if (0x19 < uVar15 - 0x61) goto LAB_06252e14;
            uVar15 = uVar15 - 0x57;
          }
        }
        if (unaff_w21 <= (int)uVar15) {
LAB_06252e14:
          return (ulong)uVar14;
        }
        if (uVar11 < uVar14) {
          thunk_FUN_037a15ac(PTR_DAT_07d89240);
          uVar5 = thunk_FUN_037788cc();
          uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daaf98);
          FUN_06251dac(uVar5,uVar6);
          uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daeef0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar5,uVar6);
        }
        uVar15 = uVar15 + uVar14 * unaff_w21;
        param_1 = (ulong)uVar15;
        if (uVar15 < uVar14) {
          uVar3 = FUN_06253618();
          lVar13 = tpidr_el0;
          lStack_58 = *(long *)(lVar13 + 0x28);
          if ((DAT_0825ba24 & 1) == 0) {
            FUN_0373b518(PTR_DAT_07d863e8);
            FUN_0373b518(PTR_DAT_07da57a8);
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba24 = 1;
          }
          memset(asStack_f0,0,0x84);
          if (0x22 < extraout_w1 - 2) {
            thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
            uVar5 = thunk_FUN_037788cc();
            uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daaff0);
            uVar7 = thunk_FUN_037a15ac(PTR_DAT_07da4968);
            FUN_061a1bb8(uVar5,uVar6,uVar7,0);
            uVar6 = thunk_FUN_037a15ac(PTR_DAT_07daeef8);
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,uVar6);
          }
          uVar11 = -uVar3;
          if (extraout_w1 != 10) {
            uVar11 = uVar3;
          }
          uVar14 = uVar3;
          if ((int)uVar3 < 0) {
            uVar14 = uVar11;
          }
          if ((param_5 >> 6 & 1) == 0) {
            if ((param_5 & 0x80) != 0) {
              uVar14 = uVar14 & 0xffff;
            }
          }
          else {
            uVar14 = uVar14 & 0xff;
          }
          if (uVar14 != 0) {
            uVar17 = 0;
            goto LAB_06252f40;
          }
          asStack_f0[0] = 0x30;
          uVar17 = 1;
          goto LAB_06252f90;
        }
        uVar3 = uVar3 + 1;
        lVar13 = lVar13 + -1;
        puVar12 = puVar12 + 1;
        *unaff_x19 = uVar3;
        uVar14 = uVar15;
      } while (lVar13 != 0);
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
  while( true ) {
    uVar11 = 0;
    if (extraout_w1 != 0) {
      uVar11 = uVar14 / extraout_w1;
    }
    uVar15 = uVar14 - uVar11 * extraout_w1;
    sVar10 = 0x57;
    if (uVar15 < 10) {
      sVar10 = 0x30;
    }
    bVar2 = uVar14 < extraout_w1;
    asStack_f0[uVar17] = sVar10 + (short)uVar15;
    uVar17 = uVar17 + 1;
    uVar14 = uVar11;
    if (bVar2) break;
LAB_06252f40:
    if (uVar17 == 0x42) {
      uVar17 = 0;
      break;
    }
  }
LAB_06252f90:
  uVar18 = uVar17;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar11 = (uint)uVar17;
    if (extraout_w1 == 8) {
      if (0x41 < uVar11) goto LAB_06253138;
      uVar18 = (ulong)(uVar11 + 1);
      asStack_f0[uVar17 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar11) || (asStack_f0[uVar17 & 0xffffffff] = 0x78, uVar11 == 0x41))
      goto LAB_06253138;
      uVar18 = (ulong)(uVar11 + 2);
      asStack_f0[uVar11 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar11 = (uint)uVar18;
    if ((int)uVar3 < 0) {
      if (0x41 < uVar11) {
LAB_06253138:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      sVar10 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_06253044;
      if (0x41 < uVar11) goto LAB_06253138;
      sVar10 = 0x20;
    }
    else {
      if (0x41 < uVar11) goto LAB_06253138;
      sVar10 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar10;
    uVar18 = (ulong)(uVar11 + 1);
  }
LAB_06253044:
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar5 = FUN_06243d64(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar17 = thunk_FUN_037763e4(uVar5,0);
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar4 = thunk_FUN_03747a9c(0);
  psVar9 = (short *)(uVar17 + (long)iVar4);
  iVar16 = (int)uVar18;
  iVar4 = *(int *)(uVar17 + 0x10) - iVar16;
  if ((param_5 & 1) == 0) {
    if (0 < iVar16) {
      uVar18 = uVar18 & 0xffffffff;
      psVar8 = psVar9;
      do {
        if (0x41 < iVar16 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        psVar9 = psVar8 + 1;
        *psVar8 = asStack_f0[uVar18 & 0xffffffff];
        psVar8 = psVar9;
      } while (uVar18 != 0);
    }
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        *psVar9 = param_4;
        psVar9 = psVar9 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    psVar8 = psVar9;
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        psVar9 = psVar8 + 1;
        *psVar8 = param_4;
        psVar8 = psVar9;
      } while (iVar4 != 0);
    }
    if (0 < iVar16) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar16 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        *psVar9 = asStack_f0[uVar18 & 0xffffffff];
        psVar9 = psVar9 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar13 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}


