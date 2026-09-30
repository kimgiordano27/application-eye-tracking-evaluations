/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 06252d80
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


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  uint in_w8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  uint in_w9;
  ushort *puVar12;
  long lVar13;
  uint uVar14;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  short asStack_f0 [76];
  long lStack_58;
  
  puVar12 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
  lVar13 = (long)(int)unaff_w20 - (long)(int)in_w8;
  uVar4 = 0;
  do {
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar1 = *puVar12;
    uVar14 = uVar1 - 0x30;
    uVar15 = uVar4;
    if (9 < uVar14) {
      uVar14 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar14 = uVar14 - 0x37;
      }
      else {
        if (0x19 < uVar14 - 0x61) break;
        uVar14 = uVar14 - 0x57;
      }
    }
    if (unaff_w21 <= (int)uVar14) break;
    if (in_w9 < uVar4) {
      thunk_FUN_037a15ac(PTR_DAT_07d89240);
      uVar6 = thunk_FUN_037788cc();
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daaf98);
      FUN_06251dac(uVar6,uVar7);
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daeef0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,uVar7);
    }
    uVar15 = uVar14 + uVar4 * unaff_w21;
    if (uVar15 < uVar4) {
      uVar4 = FUN_06253618();
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
        uVar6 = thunk_FUN_037788cc();
        uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daaff0);
        uVar8 = thunk_FUN_037a15ac(PTR_DAT_07da4968);
        FUN_061a1bb8(uVar6,uVar7,uVar8,0);
        uVar7 = thunk_FUN_037a15ac(PTR_DAT_07daeef8);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar6,uVar7);
      }
      uVar15 = -uVar4;
      if (extraout_w1 != 10) {
        uVar15 = uVar4;
      }
      uVar14 = uVar4;
      if ((int)uVar4 < 0) {
        uVar14 = uVar15;
      }
      if ((param_5 >> 6 & 1) == 0) {
        if ((param_5 & 0x80) != 0) {
          uVar14 = uVar14 & 0xffff;
        }
      }
      else {
        uVar14 = uVar14 & 0xff;
      }
      if (uVar14 == 0) {
        asStack_f0[0] = 0x30;
        uVar17 = 1;
        goto LAB_06252f90;
      }
      uVar17 = 0;
      goto LAB_06252f40;
    }
    in_w8 = in_w8 + 1;
    lVar13 = lVar13 + -1;
    puVar12 = puVar12 + 1;
    *unaff_x19 = in_w8;
    uVar4 = uVar15;
  } while (lVar13 != 0);
  return (ulong)uVar15;
  while( true ) {
    uVar15 = 0;
    if (extraout_w1 != 0) {
      uVar15 = uVar14 / extraout_w1;
    }
    uVar2 = uVar14 - uVar15 * extraout_w1;
    sVar11 = 0x57;
    if (uVar2 < 10) {
      sVar11 = 0x30;
    }
    bVar3 = uVar14 < extraout_w1;
    asStack_f0[uVar17] = sVar11 + (short)uVar2;
    uVar17 = uVar17 + 1;
    uVar14 = uVar15;
    if (bVar3) break;
LAB_06252f40:
    if (uVar17 == 0x42) {
      uVar17 = 0;
      break;
    }
  }
LAB_06252f90:
  uVar18 = uVar17;
  if ((extraout_w1 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar15 = (uint)uVar17;
    if (extraout_w1 == 8) {
      if (0x41 < uVar15) goto LAB_06253138;
      uVar18 = (ulong)(uVar15 + 1);
      asStack_f0[uVar17 & 0xffffffff] = 0x30;
    }
    else if (extraout_w1 == 0x10) {
      if ((0x41 < uVar15) || (asStack_f0[uVar17 & 0xffffffff] = 0x78, uVar15 == 0x41))
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
      sVar11 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_06253044;
      if (0x41 < uVar15) goto LAB_06253138;
      sVar11 = 0x20;
    }
    else {
      if (0x41 < uVar15) goto LAB_06253138;
      sVar11 = 0x2b;
    }
    asStack_f0[uVar18 & 0xffffffff] = sVar11;
    uVar18 = (ulong)(uVar15 + 1);
  }
LAB_06253044:
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_06243d64(param_3 & 0xffffffff,uVar18 & 0xffffffff,0);
  uVar17 = thunk_FUN_037763e4(uVar6,0);
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar5 = thunk_FUN_03747a9c(0);
  psVar10 = (short *)(uVar17 + (long)iVar5);
  iVar16 = (int)uVar18;
  iVar5 = *(int *)(uVar17 + 0x10) - iVar16;
  if ((param_5 & 1) == 0) {
    if (0 < iVar16) {
      uVar18 = uVar18 & 0xffffffff;
      psVar9 = psVar10;
      do {
        if (0x41 < iVar16 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        psVar10 = psVar9 + 1;
        *psVar9 = asStack_f0[uVar18 & 0xffffffff];
        psVar9 = psVar10;
      } while (uVar18 != 0);
    }
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        *psVar10 = param_4;
        psVar10 = psVar10 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    psVar9 = psVar10;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        psVar10 = psVar9 + 1;
        *psVar9 = param_4;
        psVar9 = psVar10;
      } while (iVar5 != 0);
    }
    if (0 < iVar16) {
      uVar18 = uVar18 & 0xffffffff;
      do {
        if (0x41 < iVar16 - 1U) goto LAB_06253138;
        uVar18 = uVar18 - 1;
        *psVar10 = asStack_f0[uVar18 & 0xffffffff];
        psVar10 = psVar10 + 1;
      } while (uVar18 != 0);
    }
  }
  if (*(long *)(lVar13 + 0x28) == lStack_58) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


