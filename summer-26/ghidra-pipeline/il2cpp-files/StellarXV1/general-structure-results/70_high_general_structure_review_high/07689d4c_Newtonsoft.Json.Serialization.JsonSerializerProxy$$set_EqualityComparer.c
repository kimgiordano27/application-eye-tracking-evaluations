/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 07689d4c
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


ulong Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer
                (undefined8 param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  uint in_w8;
  long lVar10;
  short *psVar11;
  short *psVar12;
  short sVar13;
  uint in_w9;
  ushort *in_x10;
  ulong uVar14;
  uint uVar15;
  long in_x11;
  uint in_w12;
  uint in_w13;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  short asStack_f0 [76];
  long lStack_58;
  
  do {
    if (in_w9 < in_w12) {
      thunk_FUN_040dedf8(PTR_DAT_092b9858);
      uVar6 = thunk_FUN_040b4efc();
      uVar8 = thunk_FUN_040dedf8(PTR_DAT_092d67b0);
      FUN_07688d98(uVar6,uVar8);
      uVar8 = thunk_FUN_040dedf8(PTR_DAT_092da740);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar6,uVar8);
    }
    uVar4 = in_w13 + in_w12 * unaff_w21;
    if (uVar4 < in_w12) {
      uVar4 = FUN_0768a5d0();
      lVar3 = tpidr_el0;
      lStack_58 = *(long *)(lVar3 + 0x28);
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
        uVar8 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
        uVar9 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
        FUN_075ce148(uVar6,uVar8,uVar9,0);
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
          uVar8 = thunk_FUN_040dedf8(PTR_DAT_092da748);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar6,uVar8);
        }
        goto LAB_0768a138;
      }
      uVar16 = -uVar4;
      if (extraout_w1 != 10 || -1 < (int)uVar4) {
        uVar16 = uVar4;
      }
      uVar15 = uVar16;
      if ((param_5 & 0x80) != 0) {
        uVar15 = uVar16 & 0xffff;
      }
      if ((param_5 & 0x40) != 0) {
        uVar15 = uVar16 & 0xff;
      }
      if (uVar15 != 0) {
        lVar10 = 0;
        goto LAB_07689eb4;
      }
      uVar16 = 1;
      asStack_f0[0] = 0x30;
      goto LAB_07689f00;
    }
    in_w8 = in_w8 + 1;
    in_x11 = in_x11 + -1;
    in_x10 = in_x10 + 1;
    *unaff_x19 = in_w8;
    if (in_x11 == 0) break;
    if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar1 = *in_x10;
    in_w13 = uVar1 - 0x30;
    if (9 < in_w13) {
      uVar16 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        in_w13 = uVar16 - 0x37;
      }
      else {
        if (0x19 < uVar16 - 0x61) break;
        in_w13 = uVar16 - 0x57;
      }
    }
    in_w12 = uVar4;
  } while ((int)in_w13 < unaff_w21);
  return (ulong)uVar4;
  while (lVar10 = lVar10 + 1, uVar15 = uVar16, lVar10 != 0x42) {
LAB_07689eb4:
    uVar16 = 0;
    if (extraout_w1 != 0) {
      uVar16 = uVar15 / extraout_w1;
    }
    uVar2 = uVar15 - uVar16 * extraout_w1;
    sVar13 = 0x57;
    if (uVar2 < 10) {
      sVar13 = 0x30;
    }
    asStack_f0[lVar10] = sVar13 + (short)uVar2;
    if (uVar15 < extraout_w1) {
      uVar16 = (int)lVar10 + 1;
      goto LAB_07689f00;
    }
  }
  uVar16 = 0;
LAB_07689f00:
  if ((extraout_w1 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar6 = FUN_0767a564(param_3 & 0xffffffff,uVar16,0);
      uVar7 = thunk_FUN_040b28f8(uVar6,0);
      if (uVar7 == 0) {
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar5 = thunk_FUN_04083428(0);
        psVar12 = (short *)(uVar7 + (long)iVar5);
        iVar5 = *(int *)(uVar7 + 0x10) - uVar16;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar16) {
            uVar14 = (ulong)uVar16;
            psVar11 = psVar12;
            do {
              if (0x42 < uVar16) goto LAB_0768a0a4;
              uVar14 = uVar14 - 1;
              psVar12 = psVar11 + 1;
              *psVar11 = asStack_f0[uVar14 & 0xffffffff];
              psVar11 = psVar12;
            } while (uVar14 != 0);
          }
          if (0 < iVar5) {
            do {
              iVar5 = iVar5 + -1;
              *psVar12 = param_4;
              psVar12 = psVar12 + 1;
            } while (iVar5 != 0);
          }
        }
        else {
          psVar11 = psVar12;
          if (0 < iVar5) {
            do {
              iVar5 = iVar5 + -1;
              psVar12 = psVar11 + 1;
              *psVar11 = param_4;
              psVar11 = psVar12;
            } while (iVar5 != 0);
          }
          if (0 < (int)uVar16) {
            uVar14 = (ulong)uVar16;
            do {
              if (0x42 < uVar16) goto LAB_0768a0a4;
              uVar14 = uVar14 - 1;
              *psVar12 = asStack_f0[uVar14 & 0xffffffff];
              psVar12 = psVar12 + 1;
            } while (uVar14 != 0);
          }
        }
        if (*(long *)(lVar3 + 0x28) == lStack_58) {
          return uVar7;
        }
      }
      goto LAB_0768a138;
    }
    if ((int)uVar4 < 0) {
      if (uVar16 < 0x42) {
        sVar13 = 0x2d;
FUN_07689fa8:
        asStack_f0[uVar16] = sVar13;
        uVar16 = uVar16 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar16 < 0x42) {
        sVar13 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar16 < 0x42) {
      sVar13 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar16 < 0x42) {
      sVar13 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_07689fb0;
    if (uVar16 < 0x42) {
      asStack_f0[uVar16] = 0x78;
      if (uVar16 != 0x41) {
        asStack_f0[(ulong)uVar16 + 1] = 0x30;
        uVar16 = uVar16 + 2;
        goto LAB_07689fb0;
      }
    }
  }
LAB_0768a0a4:
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


