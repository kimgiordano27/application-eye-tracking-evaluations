/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 07689c80
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error
                (ulong param_1,undefined8 param_2,ulong param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint extraout_w1;
  uint in_w8;
  long lVar8;
  short *psVar9;
  short *psVar10;
  short sVar11;
  ushort *in_x9;
  long in_x10;
  ushort *puVar12;
  ulong uVar13;
  uint in_w11;
  uint uVar14;
  long lVar15;
  int in_w12;
  uint in_w13;
  uint uVar16;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  uint uVar17;
  long unaff_x22;
  short asStack_f0 [76];
  long lStack_58;
  
  while (in_w13 - 0x30 < 10) {
    if (in_w11 <= (uint)param_1)
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceResolver;
    param_1 = (ulong)((in_w13 - 0x30) + (uint)param_1 * in_w12);
    in_w8 = in_w8 + 1;
    in_x10 = in_x10 + -1;
    in_x9 = in_x9 + 1;
    *unaff_x19 = in_w8;
    if (in_x10 == 0) break;
    if (unaff_w20 <= in_w8) goto LAB_07689d9c;
    in_w13 = (uint)*in_x9;
  }
  if (0x80000000 < (uint)param_1) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceResolver:
    FUN_0768a588();
    uVar2 = 0x1fffffff;
    if (unaff_w21 != 8) {
      uVar2 = 0x7fffffff;
    }
    uVar17 = *unaff_x19;
    uVar14 = 0xfffffff;
    if (unaff_w21 != 0x10) {
      uVar14 = uVar2;
    }
    if (unaff_w21 == 10) {
      uVar14 = 0x19999999;
    }
    if ((int)uVar17 < (int)unaff_w20) {
      puVar12 = (ushort *)(unaff_x22 + (long)(int)uVar17 * 2);
      lVar15 = (long)(int)unaff_w20 - (long)(int)uVar17;
      uVar2 = 0;
      do {
        if (unaff_w20 <= uVar17) {
LAB_07689d9c:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar1 = *puVar12;
        uVar16 = uVar1 - 0x30;
        if (9 < uVar16) {
          uVar16 = (uint)uVar1;
          if (uVar1 - 0x41 < 0x1a) {
            uVar16 = uVar16 - 0x37;
          }
          else {
            if (0x19 < uVar16 - 0x61) goto LAB_07689d84;
            uVar16 = uVar16 - 0x57;
          }
        }
        if (unaff_w21 <= (int)uVar16) {
LAB_07689d84:
          return (ulong)uVar2;
        }
        if (uVar14 < uVar2) {
          thunk_FUN_040dedf8(PTR_DAT_092b9858);
          uVar4 = thunk_FUN_040b4efc();
          uVar6 = thunk_FUN_040dedf8(PTR_DAT_092d67b0);
          FUN_07688d98(uVar4,uVar6);
          uVar6 = thunk_FUN_040dedf8(PTR_DAT_092da740);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar4,uVar6);
        }
        uVar16 = uVar16 + uVar2 * unaff_w21;
        param_1 = (ulong)uVar16;
        if (uVar16 < uVar2) {
          uVar2 = FUN_0768a5d0();
          lVar15 = tpidr_el0;
          lStack_58 = *(long *)(lVar15 + 0x28);
          if ((DAT_09892281 & 1) == 0) {
            FUN_04077588(PTR_DAT_09285ae0);
            FUN_04077588(PTR_DAT_092d0730);
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_09892281 = 1;
          }
          memset(asStack_f0,0,0x84);
          if (0x22 < extraout_w1 - 2) {
            thunk_FUN_040dedf8(PTR_DAT_09287028);
            uVar4 = thunk_FUN_040b4efc();
            uVar6 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
            uVar7 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
            FUN_075ce148(uVar4,uVar6,uVar7,0);
            if (*(long *)(lVar15 + 0x28) == lStack_58) {
              uVar6 = thunk_FUN_040dedf8(PTR_DAT_092da748);
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar4,uVar6);
            }
            goto LAB_0768a138;
          }
          uVar17 = -uVar2;
          if (extraout_w1 != 10 || -1 < (int)uVar2) {
            uVar17 = uVar2;
          }
          uVar14 = uVar17;
          if ((param_5 & 0x80) != 0) {
            uVar14 = uVar17 & 0xffff;
          }
          if ((param_5 & 0x40) != 0) {
            uVar14 = uVar17 & 0xff;
          }
          if (uVar14 == 0) {
            uVar17 = 1;
            asStack_f0[0] = 0x30;
            goto LAB_07689f00;
          }
          lVar8 = 0;
          goto LAB_07689eb4;
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + -1;
        puVar12 = puVar12 + 1;
        *unaff_x19 = uVar17;
        uVar2 = uVar16;
      } while (lVar15 != 0);
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
  while (lVar8 = lVar8 + 1, uVar14 = uVar17, lVar8 != 0x42) {
LAB_07689eb4:
    uVar17 = 0;
    if (extraout_w1 != 0) {
      uVar17 = uVar14 / extraout_w1;
    }
    uVar16 = uVar14 - uVar17 * extraout_w1;
    sVar11 = 0x57;
    if (uVar16 < 10) {
      sVar11 = 0x30;
    }
    asStack_f0[lVar8] = sVar11 + (short)uVar16;
    if (uVar14 < extraout_w1) {
      uVar17 = (int)lVar8 + 1;
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
      uVar4 = FUN_0767a564(param_3 & 0xffffffff,uVar17,0);
      uVar5 = thunk_FUN_040b28f8(uVar4,0);
      if (uVar5 == 0) {
        if (*(long *)(lVar15 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar3 = thunk_FUN_04083428(0);
        psVar10 = (short *)(uVar5 + (long)iVar3);
        iVar3 = *(int *)(uVar5 + 0x10) - uVar17;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar17) {
            uVar13 = (ulong)uVar17;
            psVar9 = psVar10;
            do {
              if (0x42 < uVar17) goto LAB_0768a0a4;
              uVar13 = uVar13 - 1;
              psVar10 = psVar9 + 1;
              *psVar9 = asStack_f0[uVar13 & 0xffffffff];
              psVar9 = psVar10;
            } while (uVar13 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *psVar10 = param_4;
              psVar10 = psVar10 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          psVar9 = psVar10;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              psVar10 = psVar9 + 1;
              *psVar9 = param_4;
              psVar9 = psVar10;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar17) {
            uVar13 = (ulong)uVar17;
            do {
              if (0x42 < uVar17) goto LAB_0768a0a4;
              uVar13 = uVar13 - 1;
              *psVar10 = asStack_f0[uVar13 & 0xffffffff];
              psVar10 = psVar10 + 1;
            } while (uVar13 != 0);
          }
        }
        if (*(long *)(lVar15 + 0x28) == lStack_58) {
          return uVar5;
        }
      }
      goto LAB_0768a138;
    }
    if ((int)uVar2 < 0) {
      if (uVar17 < 0x42) {
        sVar11 = 0x2d;
FUN_07689fa8:
        asStack_f0[uVar17] = sVar11;
        uVar17 = uVar17 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar17 < 0x42) {
        sVar11 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar17 < 0x42) {
      sVar11 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar17 < 0x42) {
      sVar11 = 0x30;
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
  if (*(long *)(lVar15 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


