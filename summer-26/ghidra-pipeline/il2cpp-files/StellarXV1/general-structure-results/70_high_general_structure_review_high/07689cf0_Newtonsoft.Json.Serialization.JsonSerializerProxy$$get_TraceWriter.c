/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TraceWriter
ENTRY_POINT: 07689cf0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TraceWriter
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint extraout_w1;
  uint in_w8;
  long lVar9;
  short *psVar10;
  short *psVar11;
  short sVar12;
  uint in_w9;
  ushort *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  short asStack_f0 [76];
  long lStack_58;
  
  if (in_NG == in_OV) {
    uVar5 = 0;
  }
  else {
    puVar13 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
    lVar16 = (long)(int)unaff_w20 - (long)(int)in_w8;
    uVar3 = 0;
    do {
      if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar1 = *puVar13;
      uVar17 = uVar1 - 0x30;
      if (9 < uVar17) {
        uVar17 = (uint)uVar1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar17 = uVar17 - 0x37;
        }
        else {
          if (0x19 < uVar17 - 0x61) goto LAB_07689d84;
          uVar17 = uVar17 - 0x57;
        }
      }
      if (unaff_w21 <= (int)uVar17) {
LAB_07689d84:
        return (ulong)uVar3;
      }
      if (in_w9 < uVar3) {
        thunk_FUN_040dedf8(PTR_DAT_092b9858);
        uVar6 = thunk_FUN_040b4efc();
        uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d67b0);
        FUN_07688d98(uVar6,uVar7);
        uVar7 = thunk_FUN_040dedf8(PTR_DAT_092da740);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar6,uVar7);
      }
      uVar17 = uVar17 + uVar3 * unaff_w21;
      uVar5 = (ulong)uVar17;
      if (uVar17 < uVar3) {
        uVar3 = FUN_0768a5d0();
        lVar16 = tpidr_el0;
        lStack_58 = *(long *)(lVar16 + 0x28);
        if ((DAT_09892281 & 1) == 0) {
          FUN_04077588(PTR_DAT_09285ae0);
          FUN_04077588(PTR_DAT_092d0730);
          FUN_04077588(PTR_DAT_092d03e8);
          DAT_09892281 = 1;
        }
        memset(asStack_f0,0,0x84);
        if (0x22 < extraout_w1 - 2) {
          thunk_FUN_040dedf8(PTR_DAT_09287028);
          uVar6 = thunk_FUN_040b4efc();
          uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
          uVar8 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
          FUN_075ce148(uVar6,uVar7,uVar8,0);
          if (*(long *)(lVar16 + 0x28) == lStack_58) {
            uVar7 = thunk_FUN_040dedf8(PTR_DAT_092da748);
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar6,uVar7);
          }
          goto LAB_0768a138;
        }
        uVar17 = -uVar3;
        if (extraout_w1 != 10 || -1 < (int)uVar3) {
          uVar17 = uVar3;
        }
        uVar15 = uVar17;
        if ((param_5 & 0x80) != 0) {
          uVar15 = uVar17 & 0xffff;
        }
        if ((param_5 & 0x40) != 0) {
          uVar15 = uVar17 & 0xff;
        }
        if (uVar15 == 0) {
          uVar17 = 1;
          asStack_f0[0] = 0x30;
          goto LAB_07689f00;
        }
        lVar9 = 0;
        goto LAB_07689eb4;
      }
      in_w8 = in_w8 + 1;
      lVar16 = lVar16 + -1;
      puVar13 = puVar13 + 1;
      *unaff_x19 = in_w8;
      uVar3 = uVar17;
    } while (lVar16 != 0);
  }
  return uVar5;
  while (lVar9 = lVar9 + 1, uVar15 = uVar17, lVar9 != 0x42) {
LAB_07689eb4:
    uVar17 = 0;
    if (extraout_w1 != 0) {
      uVar17 = uVar15 / extraout_w1;
    }
    uVar2 = uVar15 - uVar17 * extraout_w1;
    sVar12 = 0x57;
    if (uVar2 < 10) {
      sVar12 = 0x30;
    }
    asStack_f0[lVar9] = sVar12 + (short)uVar2;
    if (uVar15 < extraout_w1) {
      uVar17 = (int)lVar9 + 1;
      goto LAB_07689f00;
    }
  }
  uVar17 = 0;
LAB_07689f00:
  if ((extraout_w1 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar6 = FUN_0767a564(param_3 & 0xffffffff,uVar17,0);
      uVar5 = thunk_FUN_040b28f8(uVar6,0);
      if (uVar5 == 0) {
        if (*(long *)(lVar16 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar4 = thunk_FUN_04083428(0);
        psVar11 = (short *)(uVar5 + (long)iVar4);
        iVar4 = *(int *)(uVar5 + 0x10) - uVar17;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar17) {
            uVar14 = (ulong)uVar17;
            psVar10 = psVar11;
            do {
              if (0x42 < uVar17) goto LAB_0768a0a4;
              uVar14 = uVar14 - 1;
              psVar11 = psVar10 + 1;
              *psVar10 = asStack_f0[uVar14 & 0xffffffff];
              psVar10 = psVar11;
            } while (uVar14 != 0);
          }
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              *psVar11 = param_4;
              psVar11 = psVar11 + 1;
            } while (iVar4 != 0);
          }
        }
        else {
          psVar10 = psVar11;
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              psVar11 = psVar10 + 1;
              *psVar10 = param_4;
              psVar10 = psVar11;
            } while (iVar4 != 0);
          }
          if (0 < (int)uVar17) {
            uVar14 = (ulong)uVar17;
            do {
              if (0x42 < uVar17) goto LAB_0768a0a4;
              uVar14 = uVar14 - 1;
              *psVar11 = asStack_f0[uVar14 & 0xffffffff];
              psVar11 = psVar11 + 1;
            } while (uVar14 != 0);
          }
        }
        if (*(long *)(lVar16 + 0x28) == lStack_58) {
          return uVar5;
        }
      }
      goto LAB_0768a138;
    }
    if ((int)uVar3 < 0) {
      if (uVar17 < 0x42) {
        sVar12 = 0x2d;
FUN_07689fa8:
        asStack_f0[uVar17] = sVar12;
        uVar17 = uVar17 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar17 < 0x42) {
        sVar12 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar17 < 0x42) {
      sVar12 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar17 < 0x42) {
      sVar12 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_07689fb0;
    if (uVar17 < 0x42) {
      asStack_f0[uVar17] = 0x78;
      if (uVar17 != 0x41) {
        asStack_f0[(ulong)uVar17 + 1] = 0x30;
        uVar17 = uVar17 + 2;
        goto LAB_07689fb0;
      }
    }
  }
LAB_0768a0a4:
  if (*(long *)(lVar16 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


