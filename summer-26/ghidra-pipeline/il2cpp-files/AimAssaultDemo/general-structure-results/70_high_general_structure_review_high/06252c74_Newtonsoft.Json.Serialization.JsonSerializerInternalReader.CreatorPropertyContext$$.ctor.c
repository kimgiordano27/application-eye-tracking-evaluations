/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 06252c74
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


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
                (ulong param_1,int param_2,long param_3,ulong param_4,uint *param_5,uint param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  short sVar10;
  uint *puVar11;
  short *psVar12;
  short *psVar13;
  short sVar14;
  uint uVar15;
  ushort *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong unaff_x23;
  ulong uVar22;
  long unaff_x24;
  short asStack_f0 [76];
  long lStack_58;
  
  uVar7 = param_4;
  puVar11 = param_5;
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07da5230);
    *(undefined1 *)(unaff_x24 + 0xa28) = 1;
  }
  sVar10 = (short)puVar11;
  uVar3 = (uint)param_4;
  if ((param_2 == 10) && ((unaff_x23 & 1) == 0)) {
    uVar20 = *param_5;
    if ((int)uVar3 <= (int)uVar20) {
      return 0;
    }
    puVar16 = (ushort *)(param_3 + (long)(int)uVar20 * 2);
    lVar17 = (long)(int)uVar3 - (long)(int)uVar20;
    uVar5 = 0;
    do {
      if (uVar3 <= uVar20) goto LAB_06252e2c;
      uVar1 = *puVar16;
      uVar15 = uVar1 - 0x30;
      if (9 < uVar15) {
        uVar15 = (uint)uVar1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar15 = uVar15 - 0x37;
        }
        else {
          if (0x19 < uVar15 - 0x61) break;
          uVar15 = uVar15 - 0x57;
        }
      }
      if (9 < (int)uVar15) break;
      if (0xccccccc < (uint)uVar5)
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0;
      uVar5 = (ulong)(uVar15 + (uint)uVar5 * 10);
      uVar20 = uVar20 + 1;
      lVar17 = lVar17 + -1;
      puVar16 = puVar16 + 1;
      *param_5 = uVar20;
    } while (lVar17 != 0);
    if ((uint)uVar5 < 0x80000001) {
      return uVar5;
    }
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<PopulateObject>b__42_0:
    FUN_062535d0();
  }
  uVar20 = *param_5;
  uVar15 = 0x1fffffff;
  if (param_2 != 8) {
    uVar15 = 0x7fffffff;
  }
  uVar18 = 0xfffffff;
  if (param_2 != 0x10) {
    uVar18 = uVar15;
  }
  uVar15 = 0x19999999;
  if (param_2 != 10) {
    uVar15 = uVar18;
  }
  if ((int)uVar3 <= (int)uVar20) {
    return 0;
  }
  puVar16 = (ushort *)(param_3 + (long)(int)uVar20 * 2);
  lVar17 = (long)(int)uVar3 - (long)(int)uVar20;
  uVar18 = 0;
  do {
    if (uVar3 <= uVar20) {
LAB_06252e2c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar1 = *puVar16;
    uVar19 = uVar1 - 0x30;
    if (9 < uVar19) {
      uVar19 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar19 = uVar19 - 0x37;
      }
      else {
        if (0x19 < uVar19 - 0x61) goto LAB_06252e14;
        uVar19 = uVar19 - 0x57;
      }
    }
    if (param_2 <= (int)uVar19) {
LAB_06252e14:
      return (ulong)uVar18;
    }
    if (uVar15 < uVar18) {
      thunk_FUN_037a15ac(PTR_DAT_07d89240);
      uVar6 = thunk_FUN_037788cc();
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daaf98);
      FUN_06251dac(uVar6,uVar8);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daeef0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,uVar8);
    }
    uVar19 = uVar19 + uVar18 * param_2;
    if (uVar19 < uVar18) {
      uVar3 = FUN_06253618();
      lVar17 = tpidr_el0;
      lStack_58 = *(long *)(lVar17 + 0x28);
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
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daaff0);
        uVar9 = thunk_FUN_037a15ac(PTR_DAT_07da4968);
        FUN_061a1bb8(uVar6,uVar8,uVar9,0);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07daeef8);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar6,uVar8);
      }
      uVar20 = -uVar3;
      if (extraout_w1 != 10) {
        uVar20 = uVar3;
      }
      uVar15 = uVar3;
      if ((int)uVar3 < 0) {
        uVar15 = uVar20;
      }
      if ((param_6 >> 6 & 1) == 0) {
        if ((param_6 & 0x80) != 0) {
          uVar15 = uVar15 & 0xffff;
        }
      }
      else {
        uVar15 = uVar15 & 0xff;
      }
      if (uVar15 == 0) {
        asStack_f0[0] = 0x30;
        uVar5 = 1;
        goto LAB_06252f90;
      }
      uVar5 = 0;
      break;
    }
    uVar20 = uVar20 + 1;
    lVar17 = lVar17 + -1;
    puVar16 = puVar16 + 1;
    *param_5 = uVar20;
    uVar18 = uVar19;
    if (lVar17 == 0) {
      return (ulong)uVar19;
    }
  } while( true );
  while( true ) {
    uVar20 = 0;
    if (extraout_w1 != 0) {
      uVar20 = uVar15 / extraout_w1;
    }
    uVar18 = uVar15 - uVar20 * extraout_w1;
    sVar14 = 0x57;
    if (uVar18 < 10) {
      sVar14 = 0x30;
    }
    bVar2 = uVar15 < extraout_w1;
    asStack_f0[uVar5] = sVar14 + (short)uVar18;
    uVar5 = uVar5 + 1;
    uVar15 = uVar20;
    if (bVar2) break;
    if (uVar5 == 0x42) {
      uVar5 = 0;
      break;
    }
  }
LAB_06252f90:
  uVar22 = uVar5;
  if ((extraout_w1 != 10) && ((param_6 >> 5 & 1) != 0)) {
    uVar20 = (uint)uVar5;
    if (extraout_w1 == 8) {
      if (0x41 < uVar20) goto LAB_06253138;
      uVar22 = (ulong)(uVar20 + 1);
      asStack_f0[uVar5 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar20) || (asStack_f0[uVar5 & 0xffffffff] = 0x78, uVar20 == 0x41))
      goto LAB_06253138;
      uVar22 = (ulong)(uVar20 + 2);
      asStack_f0[uVar20 + 1] = 0x30;
    }
  }
  if (extraout_w1 == 10) {
    uVar20 = (uint)uVar22;
    if ((int)uVar3 < 0) {
      if (0x41 < uVar20) {
LAB_06253138:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      sVar14 = 0x2d;
    }
    else if ((param_6 >> 4 & 1) == 0) {
      if ((param_6 >> 3 & 1) == 0) goto LAB_06253044;
      if (0x41 < uVar20) goto LAB_06253138;
      sVar14 = 0x20;
    }
    else {
      if (0x41 < uVar20) goto LAB_06253138;
      sVar14 = 0x2b;
    }
    asStack_f0[uVar22 & 0xffffffff] = sVar14;
    uVar22 = (ulong)(uVar20 + 1);
  }
LAB_06253044:
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_06243d64(uVar7 & 0xffffffff,uVar22 & 0xffffffff,0);
  uVar7 = thunk_FUN_037763e4(uVar6,0);
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar4 = thunk_FUN_03747a9c(0);
  psVar13 = (short *)(uVar7 + (long)iVar4);
  iVar21 = (int)uVar22;
  iVar4 = *(int *)(uVar7 + 0x10) - iVar21;
  if ((param_6 & 1) == 0) {
    if (0 < iVar21) {
      uVar22 = uVar22 & 0xffffffff;
      psVar12 = psVar13;
      do {
        if (0x41 < iVar21 - 1U) goto LAB_06253138;
        uVar22 = uVar22 - 1;
        psVar13 = psVar12 + 1;
        *psVar12 = asStack_f0[uVar22 & 0xffffffff];
        psVar12 = psVar13;
      } while (uVar22 != 0);
    }
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        *psVar13 = sVar10;
        psVar13 = psVar13 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    psVar12 = psVar13;
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        psVar13 = psVar12 + 1;
        *psVar12 = sVar10;
        psVar12 = psVar13;
      } while (iVar4 != 0);
    }
    if (0 < iVar21) {
      uVar22 = uVar22 & 0xffffffff;
      do {
        if (0x41 < iVar21 - 1U) goto LAB_06253138;
        uVar22 = uVar22 - 1;
        *psVar13 = asStack_f0[uVar22 & 0xffffffff];
        psVar13 = psVar13 + 1;
      } while (uVar22 != 0);
    }
  }
  if (*(long *)(lVar17 + 0x28) == lStack_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


