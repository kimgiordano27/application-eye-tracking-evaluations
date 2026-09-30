/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ContractResolver
ENTRY_POINT: 07689dec
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ContractResolver
               (uint param_1,uint param_2,undefined4 param_3,short param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  short asStack_a0 [76];
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  if ((DAT_09892281 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092d0730);
    FUN_04077588(PTR_DAT_092d03e8);
    DAT_09892281 = 1;
  }
  memset(asStack_a0,0,0x84);
  if (0x22 < param_2 - 2) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
    FUN_075ce148(uVar4,uVar5,uVar6,0);
    if (*(long *)(lVar2 + 0x28) == lStack_8) {
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092da748);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,uVar5);
    }
    goto LAB_0768a138;
  }
  uVar13 = -param_1;
  if (param_2 != 10 || -1 < (int)param_1) {
    uVar13 = param_1;
  }
  uVar12 = uVar13;
  if ((param_5 & 0x80) != 0) {
    uVar12 = uVar13 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar12 = uVar13 & 0xff;
  }
  if (uVar12 == 0) {
    uVar13 = 1;
    asStack_a0[0] = 0x30;
  }
  else {
    lVar7 = 0;
    do {
      uVar13 = 0;
      if (param_2 != 0) {
        uVar13 = uVar12 / param_2;
      }
      uVar1 = uVar12 - uVar13 * param_2;
      sVar10 = 0x57;
      if (uVar1 < 10) {
        sVar10 = 0x30;
      }
      asStack_a0[lVar7] = sVar10 + (short)uVar1;
      if (uVar12 < param_2) {
        uVar13 = (int)lVar7 + 1;
        goto LAB_07689f00;
      }
      lVar7 = lVar7 + 1;
      uVar12 = uVar13;
    } while (lVar7 != 0x42);
    uVar13 = 0;
  }
LAB_07689f00:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0767a564(param_3,uVar13,0);
      lVar7 = thunk_FUN_040b28f8(uVar4,0);
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar3 = thunk_FUN_04083428(0);
        psVar9 = (short *)(lVar7 + iVar3);
        iVar3 = *(int *)(lVar7 + 0x10) - uVar13;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            psVar8 = psVar9;
            do {
              if (0x42 < uVar13) goto LAB_0768a0a4;
              uVar11 = uVar11 - 1;
              psVar9 = psVar8 + 1;
              *psVar8 = asStack_a0[uVar11 & 0xffffffff];
              psVar8 = psVar9;
            } while (uVar11 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *psVar9 = param_4;
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
              *psVar8 = param_4;
              psVar8 = psVar9;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            do {
              if (0x42 < uVar13) goto LAB_0768a0a4;
              uVar11 = uVar11 - 1;
              *psVar9 = asStack_a0[uVar11 & 0xffffffff];
              psVar9 = psVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        if (*(long *)(lVar2 + 0x28) == lStack_8) {
          return lVar7;
        }
      }
      goto LAB_0768a138;
    }
    if ((int)param_1 < 0) {
      if (uVar13 < 0x42) {
        sVar10 = 0x2d;
FUN_07689fa8:
        asStack_a0[uVar13] = sVar10;
        uVar13 = uVar13 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar13 < 0x42) {
        sVar10 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar13 < 0x42) {
      sVar10 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (param_2 == 8) {
    if (uVar13 < 0x42) {
      sVar10 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (param_2 != 0x10) goto LAB_07689fb0;
    if (uVar13 < 0x42) {
      asStack_a0[uVar13] = 0x78;
      if (uVar13 != 0x41) {
        asStack_a0[(ulong)uVar13 + 1] = 0x30;
        uVar13 = uVar13 + 2;
        goto LAB_07689fb0;
      }
    }
  }
LAB_0768a0a4:
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


