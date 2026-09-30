/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<PopulateObject>b__42_0
ENTRY_POINT: 06252d44
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


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  short *psVar9;
  short *psVar10;
  short sVar11;
  uint uVar12;
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
  
  FUN_062535d0();
  uVar3 = *unaff_x19;
  uVar12 = 0x1fffffff;
  if (unaff_w21 != 8) {
    uVar12 = 0x7fffffff;
  }
  uVar15 = 0xfffffff;
  if (unaff_w21 != 0x10) {
    uVar15 = uVar12;
  }
  uVar12 = 0x19999999;
  if (unaff_w21 != 10) {
    uVar12 = uVar15;
  }
  if ((int)uVar3 < (int)unaff_w20) {
    puVar13 = (ushort *)(unaff_x22 + (long)(int)uVar3 * 2);
    lVar14 = (long)(int)unaff_w20 - (long)(int)uVar3;
    uVar15 = 0;
    do {
      if (unaff_w20 <= uVar3) {
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
      if (uVar12 < uVar15) {
        thunk_FUN_037a15ac(PTR_DAT_07d89240);
        uVar6 = thunk_FUN_037788cc();
        uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daaf98);
        FUN_06251dac(uVar6,uVar7);
        uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daeef0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar6,uVar7);
      }
      uVar16 = uVar16 + uVar15 * unaff_w21;
      uVar5 = (ulong)uVar16;
      if (uVar16 < uVar15) {
        uVar3 = FUN_06253618();
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
          uVar6 = thunk_FUN_037788cc();
          uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daaff0);
          uVar8 = thunk_FUN_037a15ac(PTR_DAT_07da4968);
          FUN_061a1bb8(uVar6,uVar7,uVar8,0);
          uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daeef8);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar6,uVar7);
        }
        uVar12 = -uVar3;
        if (extraout_w1 != 10) {
          uVar12 = uVar3;
        }
        uVar15 = uVar3;
        if ((int)uVar3 < 0) {
          uVar15 = uVar12;
        }
        if ((param_5 >> 6 & 1) == 0) {
          if ((param_5 & 0x80) != 0) {
            uVar15 = uVar15 & 0xffff;
          }
        }
        else {
          uVar15 = uVar15 & 0xff;
        }
        if (uVar15 != 0) {
          uVar5 = 0;
          goto LAB_06252f40;
        }
        asStack_f0[0] = 0x30;
        uVar5 = 1;
        goto LAB_06252f90;
      }
      uVar3 = uVar3 + 1;
      lVar14 = lVar14 + -1;
      puVar13 = puVar13 + 1;
      *unaff_x19 = uVar3;
      uVar15 = uVar16;
    } while (lVar14 != 0);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
  while( true ) {
    uVar12 = 0;
    if (extraout_w1 != 0) {
      uVar12 = uVar15 / extraout_w1;
    }
    uVar16 = uVar15 - uVar12 * extraout_w1;
    sVar11 = 0x57;
    if (uVar16 < 10) {
      sVar11 = 0x30;
    }
    bVar2 = uVar15 < extraout_w1;
    asStack_f0[uVar5] = sVar11 + (short)uVar16;
    uVar5 = uVar5 + 1;
    uVar15 = uVar12;
    if (bVar2) break;
LAB_06252f40:
    if (uVar5 == 0x42) {
      uVar5 = 0;
      break;
    }
  }
LAB_06252f90:
  uVar18 = uVar5;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar12 = (uint)uVar5;
    if (extraout_w1 == 8) {
      if (0x41 < uVar12) goto LAB_06253138;
      uVar18 = (ulong)(uVar12 + 1);
      asStack_f0[uVar5 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar12) || (asStack_f0[uVar5 & 0xffffffff] = 0x78, uVar12 == 0x41))
      goto LAB_06253138;
      uVar18 = (ulong)(uVar12 + 2);
      asStack_f0[uVar12 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar12 = (uint)uVar18;
    if ((int)uVar3 < 0) {
      if (0x41 < uVar12) {
LAB_06253138:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      sVar11 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_06253044;
      if (0x41 < uVar12) goto LAB_06253138;
      sVar11 = 0x20;
    }
    else {
      if (0x41 < uVar12) goto LAB_06253138;
      sVar11 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar11;
    uVar18 = (ulong)(uVar12 + 1);
  }
LAB_06253044:
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_06243d64(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar5 = thunk_FUN_037763e4(uVar6,0);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar4 = thunk_FUN_03747a9c(0);
  psVar10 = (short *)(uVar5 + (long)iVar4);
  iVar17 = (int)uVar18;
  iVar4 = *(int *)(uVar5 + 0x10) - iVar17;
  if ((param_5 & 1) == 0) {
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      psVar9 = psVar10;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        psVar10 = psVar9 + 1;
        *psVar9 = asStack_f0[uVar18 & 0xffffffff];
        psVar9 = psVar10;
      } while (uVar18 != 0);
    }
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        *psVar10 = param_4;
        psVar10 = psVar10 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    psVar9 = psVar10;
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        psVar10 = psVar9 + 1;
        *psVar9 = param_4;
        psVar9 = psVar10;
      } while (iVar4 != 0);
    }
    if (0 < iVar17) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar17 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        *psVar10 = asStack_f0[uVar18 & 0xffffffff];
        psVar10 = psVar10 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar14 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


