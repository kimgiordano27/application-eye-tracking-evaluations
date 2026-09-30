/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 05933d18
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling
               (undefined8 param_1,ulong param_2,uint param_3,undefined4 param_4,short param_5)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psVar9;
  short sVar10;
  ulong uVar11;
  long unaff_x20;
  uint unaff_w21;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x26;
  long unaff_x29;
  short asStack_90 [72];
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((*(byte *)(unaff_x20 + 0x40d) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    thunk_FUN_032e1da0(PTR_DAT_07290f98);
    thunk_FUN_032e1da0(PTR_DAT_07291038);
    *(undefined1 *)(unaff_x20 + 0x40d) = 1;
  }
  memset(asStack_90,0,0x86);
  if (0x22 < param_3 - 2) {
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar4 = thunk_FUN_032a56a0();
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_07296bb0);
    uVar7 = thunk_FUN_032e1da0(PTR_DAT_072901e8);
    FUN_05897d8c(uVar4,uVar6,uVar7,0);
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_0729a230);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar6);
  }
  uVar14 = -param_2;
  if (param_3 != 10) {
    uVar14 = param_2;
  }
  uVar15 = param_2;
  if ((long)param_2 < 0) {
    uVar15 = uVar14;
  }
  if ((unaff_w21 >> 6 & 1) == 0) {
    if ((unaff_w21 >> 7 & 1) != 0) {
      uVar15 = uVar15 & 0xffff;
      goto joined_r0x05933db4;
    }
    if ((unaff_w21 & 0x100) != 0) {
      uVar15 = uVar15 & 0xffffffff;
    }
    if (uVar15 == 0) goto LAB_05933e0c;
LAB_05933db8:
    uVar14 = 0;
    uVar11 = (ulong)param_3;
    do {
      if (uVar14 == 0x43) {
        uVar14 = 0;
        break;
      }
      uVar1 = 0;
      if (uVar11 != 0) {
        uVar1 = uVar15 / uVar11;
      }
      iVar3 = (int)uVar15 - (int)uVar1 * param_3;
      sVar10 = 0x30;
      if (9 < iVar3) {
        sVar10 = 0x57;
      }
      bVar2 = uVar11 <= uVar15;
      asStack_90[uVar14] = sVar10 + (short)iVar3;
      uVar14 = uVar14 + 1;
      uVar15 = uVar1;
    } while (bVar2);
  }
  else {
    uVar15 = uVar15 & 0xff;
joined_r0x05933db4:
    if (uVar15 != 0) goto LAB_05933db8;
LAB_05933e0c:
    asStack_90[0] = 0x30;
    uVar14 = 1;
  }
  uVar15 = uVar14;
  if ((param_3 != 10) && ((unaff_w21 >> 5 & 1) != 0)) {
    uVar12 = (uint)uVar14;
    if (param_3 == 8) {
      if (0x42 < uVar12) goto LAB_05934024;
      uVar15 = (ulong)(uVar12 + 1);
      asStack_90[uVar14 & 0xffffffff] = 0x30;
    }
    else if (param_3 == 0x10) {
      if ((0x42 < uVar12) || (asStack_90[uVar14 & 0xffffffff] = 0x78, uVar12 == 0x42))
      goto LAB_05934024;
      asStack_90[uVar12 + 1] = 0x30;
      uVar15 = (ulong)(uVar12 + 2);
    }
    else if ((unaff_w21 >> 0xe & 1) != 0) {
      if ((0x42 < uVar12) || (asStack_90[uVar14 & 0xffffffff] = 0x23, uVar12 == 0x42))
      goto LAB_05934024;
      sVar10 = (short)((int)param_3 / 10);
      asStack_90[uVar12 + 1] = (short)param_3 + sVar10 * -10 + 0x30;
      if (0x40 < uVar12) goto LAB_05934024;
      uVar15 = (ulong)(uVar12 + 3);
      asStack_90[uVar12 + 2] = sVar10 + 0x30;
    }
  }
  if (param_3 == 10) {
    uVar12 = (uint)uVar15;
    if ((long)param_2 < 0) {
      if (0x42 < uVar12) {
LAB_05934024:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      sVar10 = 0x2d;
    }
    else if ((unaff_w21 >> 4 & 1) == 0) {
      if ((unaff_w21 >> 3 & 1) == 0) goto LAB_05933f30;
      if (0x42 < uVar12) goto LAB_05934024;
      sVar10 = 0x20;
    }
    else {
      if (0x42 < uVar12) goto LAB_05934024;
      sVar10 = 0x2b;
    }
    asStack_90[uVar15 & 0xffffffff] = sVar10;
    uVar15 = (ulong)(uVar12 + 1);
  }
LAB_05933f30:
  if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_059246fc(param_4,uVar15 & 0xffffffff,0);
  lVar5 = thunk_FUN_0329422c(uVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  iVar3 = thunk_FUN_032f8ab8(0);
  psVar9 = (short *)(lVar5 + iVar3);
  iVar13 = (int)uVar15;
  iVar3 = *(int *)(lVar5 + 0x10) - iVar13;
  if ((unaff_w21 & 1) == 0) {
    if (0 < iVar13) {
      uVar15 = uVar15 & 0xffffffff;
      psVar8 = psVar9;
      do {
        if (0x42 < iVar13 - 1U) goto LAB_05934024;
        uVar15 = uVar15 - 1;
        psVar9 = psVar8 + 1;
        *psVar8 = asStack_90[uVar15 & 0xffffffff];
        psVar8 = psVar9;
      } while (uVar15 != 0);
    }
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        *psVar9 = param_5;
        psVar9 = psVar9 + 1;
      } while (iVar3 != 0);
    }
  }
  else {
    psVar8 = psVar9;
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        psVar9 = psVar8 + 1;
        *psVar8 = param_5;
        psVar8 = psVar9;
      } while (iVar3 != 0);
    }
    if (0 < iVar13) {
      uVar15 = uVar15 & 0xffffffff;
      do {
        if (0x42 < iVar13 - 1U) goto LAB_05934024;
        uVar15 = uVar15 - 1;
        *psVar9 = asStack_90[uVar15 & 0xffffffff];
        psVar9 = psVar9 + 1;
      } while (uVar15 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


