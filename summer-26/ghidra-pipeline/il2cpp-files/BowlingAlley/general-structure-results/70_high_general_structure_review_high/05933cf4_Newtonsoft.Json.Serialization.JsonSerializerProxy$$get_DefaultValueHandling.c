/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DefaultValueHandling
ENTRY_POINT: 05933cf4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DefaultValueHandling
               (ulong param_1,uint param_2,undefined4 param_3,short param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  short asStack_a0 [76];
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  if ((DAT_076d540d & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    thunk_FUN_032e1da0(PTR_DAT_07290f98);
    thunk_FUN_032e1da0(PTR_DAT_07291038);
    DAT_076d540d = 1;
  }
  memset(asStack_a0,0,0x86);
  if (0x22 < param_2 - 2) {
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar5 = thunk_FUN_032a56a0();
    uVar7 = thunk_FUN_032e1da0(PTR_DAT_07296bb0);
    uVar8 = thunk_FUN_032e1da0(PTR_DAT_072901e8);
    FUN_05897d8c(uVar5,uVar7,uVar8,0);
    uVar7 = thunk_FUN_032e1da0(PTR_DAT_0729a230);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,uVar7);
  }
  uVar15 = -param_1;
  if (param_2 != 10) {
    uVar15 = param_1;
  }
  uVar16 = param_1;
  if ((long)param_1 < 0) {
    uVar16 = uVar15;
  }
  if ((param_5 >> 6 & 1) == 0) {
    if ((param_5 >> 7 & 1) != 0) {
      uVar16 = uVar16 & 0xffff;
      goto joined_r0x05933db4;
    }
    if ((param_5 & 0x100) != 0) {
      uVar16 = uVar16 & 0xffffffff;
    }
    if (uVar16 == 0) goto LAB_05933e0c;
LAB_05933db8:
    uVar15 = 0;
    uVar12 = (ulong)param_2;
    do {
      if (uVar15 == 0x43) {
        uVar15 = 0;
        break;
      }
      uVar1 = 0;
      if (uVar12 != 0) {
        uVar1 = uVar16 / uVar12;
      }
      iVar4 = (int)uVar16 - (int)uVar1 * param_2;
      sVar11 = 0x30;
      if (9 < iVar4) {
        sVar11 = 0x57;
      }
      bVar3 = uVar12 <= uVar16;
      asStack_a0[uVar15] = sVar11 + (short)iVar4;
      uVar15 = uVar15 + 1;
      uVar16 = uVar1;
    } while (bVar3);
  }
  else {
    uVar16 = uVar16 & 0xff;
joined_r0x05933db4:
    if (uVar16 != 0) goto LAB_05933db8;
LAB_05933e0c:
    asStack_a0[0] = 0x30;
    uVar15 = 1;
  }
  uVar16 = uVar15;
  if ((param_2 != 10) && ((param_5 >> 5 & 1) != 0)) {
    uVar13 = (uint)uVar15;
    if (param_2 == 8) {
      if (0x42 < uVar13) goto LAB_05934024;
      uVar16 = (ulong)(uVar13 + 1);
      asStack_a0[uVar15 & 0xffffffff] = 0x30;
    }
    else if (param_2 == 0x10) {
      if ((0x42 < uVar13) || (asStack_a0[uVar15 & 0xffffffff] = 0x78, uVar13 == 0x42))
      goto LAB_05934024;
      asStack_a0[uVar13 + 1] = 0x30;
      uVar16 = (ulong)(uVar13 + 2);
    }
    else if ((param_5 >> 0xe & 1) != 0) {
      if ((0x42 < uVar13) || (asStack_a0[uVar15 & 0xffffffff] = 0x23, uVar13 == 0x42))
      goto LAB_05934024;
      sVar11 = (short)((int)param_2 / 10);
      asStack_a0[uVar13 + 1] = (short)param_2 + sVar11 * -10 + 0x30;
      if (0x40 < uVar13) goto LAB_05934024;
      uVar16 = (ulong)(uVar13 + 3);
      asStack_a0[uVar13 + 2] = sVar11 + 0x30;
    }
  }
  if (param_2 == 10) {
    uVar13 = (uint)uVar16;
    if ((long)param_1 < 0) {
      if (0x42 < uVar13) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      sVar11 = 0x2d;
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_05933f30;
      if (0x42 < uVar13) goto LAB_05934024;
      sVar11 = 0x20;
    }
    else {
      if (0x42 < uVar13) goto LAB_05934024;
      sVar11 = 0x2b;
    }
    asStack_a0[uVar16 & 0xffffffff] = sVar11;
    uVar16 = (ulong)(uVar13 + 1);
  }
LAB_05933f30:
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar5 = FUN_059246fc(param_3,uVar16 & 0xffffffff,0);
  lVar6 = thunk_FUN_0329422c(uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar4 = thunk_FUN_032f8ab8(0);
  psVar10 = (short *)(lVar6 + iVar4);
  iVar14 = (int)uVar16;
  iVar4 = *(int *)(lVar6 + 0x10) - iVar14;
  if ((param_5 & 1) == 0) {
    if (0 < iVar14) {
      uVar16 = uVar16 & 0xffffffff;
      psVar9 = psVar10;
      do {
        if (0x42 < iVar14 - 1U) goto LAB_05934024;
        uVar16 = uVar16 - 1;
        psVar10 = psVar9 + 1;
        *psVar9 = asStack_a0[uVar16 & 0xffffffff];
        psVar9 = psVar10;
      } while (uVar16 != 0);
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
    if (0 < iVar14) {
      uVar16 = uVar16 & 0xffffffff;
      do {
        if (0x42 < iVar14 - 1U) goto LAB_05934024;
        uVar16 = uVar16 - 1;
        *psVar10 = asStack_a0[uVar16 & 0xffffffff];
        psVar10 = psVar10 + 1;
      } while (uVar16 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


