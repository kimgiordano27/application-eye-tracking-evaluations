/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_1
ENTRY_POINT: 06252d4c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_1
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  uint in_w8;
  short *psVar10;
  short *psVar11;
  short sVar12;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  int iVar17;
  ulong uVar18;
  short asStack_f0 [76];
  long lStack_58;
  
  uVar4 = 0x1fffffff;
  if (unaff_w21 != 8) {
    uVar4 = 0x7fffffff;
  }
  uVar15 = 0xfffffff;
  if (unaff_w21 != 0x10) {
    uVar15 = uVar4;
  }
  uVar4 = 0x19999999;
  if (unaff_w21 != 10) {
    uVar4 = uVar15;
  }
  if ((int)in_w8 < (int)unaff_w20) {
    puVar13 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
    lVar14 = (long)(int)unaff_w20 - (long)(int)in_w8;
    uVar15 = 0;
    do {
      if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      uVar1 = *puVar13;
      uVar16 = uVar1 - 0x30;
      if (9 < uVar16) {
        uVar16 = (uint)uVar1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar16 = uVar16 - 0x37;
        }
        else {
          if (0x19 < uVar16 - 0x61) goto LAB_06252e14;
          uVar16 = uVar16 - 0x57;
        }
      }
      if (unaff_w21 <= (int)uVar16) {
LAB_06252e14:
        return (ulong)uVar15;
      }
      if (uVar4 < uVar15) {
        thunk_FUN_037a15ac(PTR_DAT_07d89240);
        uVar7 = thunk_FUN_037788cc();
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daaf98);
        FUN_06251dac(uVar7,uVar8);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daeef0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar7,uVar8);
      }
      uVar16 = uVar16 + uVar15 * unaff_w21;
      uVar6 = (ulong)uVar16;
      if (uVar16 < uVar15) {
        uVar4 = FUN_06253618();
        lVar14 = tpidr_el0;
        lStack_58 = *(long *)(lVar14 + 0x28);
        if ((DAT_0825ba24 & 1) == 0) {
          FUN_0373b518(PTR_DAT_07d863e8);
          FUN_0373b518(PTR_DAT_07da57a8);
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825ba24 = 1;
        }
        memset(asStack_f0,0,0x84);
        if (0x22 < extraout_w1 - 2) {
          thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
          uVar7 = thunk_FUN_037788cc();
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daaff0);
          uVar9 = thunk_FUN_037a15ac(PTR_DAT_07da4968);
          FUN_061a1bb8(uVar7,uVar8,uVar9,0);
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daeef8);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar7,uVar8);
        }
        uVar15 = -uVar4;
        if (extraout_w1 != 10) {
          uVar15 = uVar4;
        }
        uVar16 = uVar4;
        if ((int)uVar4 < 0) {
          uVar16 = uVar15;
        }
        if ((param_5 >> 6 & 1) == 0) {
          if ((param_5 & 0x80) != 0) {
            uVar16 = uVar16 & 0xffff;
          }
        }
        else {
          uVar16 = uVar16 & 0xff;
        }
        if (uVar16 != 0) {
          uVar6 = 0;
          goto LAB_06252f40;
        }
        asStack_f0[0] = 0x30;
        uVar6 = 1;
        goto LAB_06252f90;
      }
      in_w8 = in_w8 + 1;
      lVar14 = lVar14 + -1;
      puVar13 = puVar13 + 1;
      *unaff_x19 = in_w8;
      uVar15 = uVar16;
    } while (lVar14 != 0);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
  while( true ) {
    uVar15 = 0;
    if (extraout_w1 != 0) {
      uVar15 = uVar16 / extraout_w1;
    }
    uVar2 = uVar16 - uVar15 * extraout_w1;
    sVar12 = 0x57;
    if (uVar2 < 10) {
      sVar12 = 0x30;
    }
    bVar3 = uVar16 < extraout_w1;
    asStack_f0[uVar6] = sVar12 + (short)uVar2;
    uVar6 = uVar6 + 1;
    uVar16 = uVar15;
    if (bVar3) break;
LAB_06252f40:
    if (uVar6 == 0x42) {
      uVar6 = 0;
      break;
    }
  }
LAB_06252f90:
  uVar18 = uVar6;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar15 = (uint)uVar6;
    if (extraout_w1 == 8) {
      if (0x41 < uVar15) goto LAB_06253138;
      uVar18 = (ulong)(uVar15 + 1);
      asStack_f0[uVar6 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar15) || (asStack_f0[uVar6 & 0xffffffff] = 0x78, uVar15 == 0x41))
      goto LAB_06253138;
      uVar18 = (ulong)(uVar15 + 2);
      asStack_f0[uVar15 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar15 = (uint)uVar18;
    if ((int)uVar4 < 0) {
      if (0x41 < uVar15) {
LAB_06253138:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      sVar12 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_06253044;
      if (0x41 < uVar15) goto LAB_06253138;
      sVar12 = 0x20;
    }
    else {
      if (0x41 < uVar15) goto LAB_06253138;
      sVar12 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar12;
    uVar18 = (ulong)(uVar15 + 1);
  }
LAB_06253044:
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar7 = FUN_06243d64(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar6 = thunk_FUN_037763e4(uVar7,0);
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar5 = thunk_FUN_03747a9c(0);
  psVar11 = (short *)(uVar6 + (long)iVar5);
  iVar17 = (int)uVar18;
  iVar5 = *(int *)(uVar6 + 0x10) - iVar17;
  if ((param_5 & 1) == 0) {
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      psVar10 = psVar11;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        psVar11 = psVar10 + 1;
        *psVar10 = asStack_f0[uVar18 & 0xffffffff];
        psVar10 = psVar11;
      } while (uVar18 != 0);
    }
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        *psVar11 = param_4;
        psVar11 = psVar11 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    psVar10 = psVar11;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        psVar11 = psVar10 + 1;
        *psVar10 = param_4;
        psVar10 = psVar11;
      } while (iVar5 != 0);
    }
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        *psVar11 = asStack_f0[uVar18 & 0xffffffff];
        psVar11 = psVar11 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar14 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


