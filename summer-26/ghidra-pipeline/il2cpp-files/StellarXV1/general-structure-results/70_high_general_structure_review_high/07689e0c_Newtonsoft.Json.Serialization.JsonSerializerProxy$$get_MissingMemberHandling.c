/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MissingMemberHandling
ENTRY_POINT: 07689e0c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MissingMemberHandling
               (uint param_1,uint param_2,undefined4 param_3,short param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x20;
  uint uVar12;
  long unaff_x26;
  long unaff_x29;
  short asStack_90 [72];
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x26 + 0x28);
  if ((*(byte *)(unaff_x20 + 0x281) & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092d0730);
    FUN_04077588(PTR_DAT_092d03e8);
    *(undefined1 *)(unaff_x20 + 0x281) = 1;
  }
  memset(asStack_90,0,0x84);
  if (0x22 < param_2 - 2) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar3 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
    FUN_075ce148(uVar3,uVar4,uVar5,0);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092da748);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,uVar4);
    }
    goto LAB_0768a138;
  }
  uVar12 = -param_1;
  if (param_2 != 10 || -1 < (int)param_1) {
    uVar12 = param_1;
  }
  uVar11 = uVar12;
  if ((param_5 & 0x80) != 0) {
    uVar11 = uVar12 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar11 = uVar12 & 0xff;
  }
  if (uVar11 == 0) {
    uVar12 = 1;
    asStack_90[0] = 0x30;
  }
  else {
    lVar6 = 0;
    do {
      uVar12 = 0;
      if (param_2 != 0) {
        uVar12 = uVar11 / param_2;
      }
      uVar1 = uVar11 - uVar12 * param_2;
      sVar9 = 0x57;
      if (uVar1 < 10) {
        sVar9 = 0x30;
      }
      asStack_90[lVar6] = sVar9 + (short)uVar1;
      if (uVar11 < param_2) {
        uVar12 = (int)lVar6 + 1;
        goto LAB_07689f00;
      }
      lVar6 = lVar6 + 1;
      uVar11 = uVar12;
    } while (lVar6 != 0x42);
    uVar12 = 0;
  }
LAB_07689f00:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
LAB_07689fb0:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_0767a564(param_3,uVar12,0);
      lVar6 = thunk_FUN_040b28f8(uVar3,0);
      if (lVar6 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar2 = thunk_FUN_04083428(0);
        psVar8 = (short *)(lVar6 + iVar2);
        iVar2 = *(int *)(lVar6 + 0x10) - uVar12;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar12) {
            uVar10 = (ulong)uVar12;
            psVar7 = psVar8;
            do {
              if (0x42 < uVar12) goto LAB_0768a0a4;
              uVar10 = uVar10 - 1;
              psVar8 = psVar7 + 1;
              *psVar7 = asStack_90[uVar10 & 0xffffffff];
              psVar7 = psVar8;
            } while (uVar10 != 0);
          }
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              *psVar8 = param_4;
              psVar8 = psVar8 + 1;
            } while (iVar2 != 0);
          }
        }
        else {
          psVar7 = psVar8;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              psVar8 = psVar7 + 1;
              *psVar7 = param_4;
              psVar7 = psVar8;
            } while (iVar2 != 0);
          }
          if (0 < (int)uVar12) {
            uVar10 = (ulong)uVar12;
            do {
              if (0x42 < uVar12) goto LAB_0768a0a4;
              uVar10 = uVar10 - 1;
              *psVar8 = asStack_90[uVar10 & 0xffffffff];
              psVar8 = psVar8 + 1;
            } while (uVar10 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar6;
        }
      }
      goto LAB_0768a138;
    }
    if ((int)param_1 < 0) {
      if (uVar12 < 0x42) {
        sVar9 = 0x2d;
FUN_07689fa8:
        asStack_90[uVar12] = sVar9;
        uVar12 = uVar12 + 1;
        goto LAB_07689fb0;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_07689fb0;
      if (uVar12 < 0x42) {
        sVar9 = 0x20;
        goto FUN_07689fa8;
      }
    }
    else if (uVar12 < 0x42) {
      sVar9 = 0x2b;
      goto FUN_07689fa8;
    }
  }
  else if (param_2 == 8) {
    if (uVar12 < 0x42) {
      sVar9 = 0x30;
      goto FUN_07689fa8;
    }
  }
  else {
    if (param_2 != 0x10) goto LAB_07689fb0;
    if (uVar12 < 0x42) {
      asStack_90[uVar12] = 0x78;
      if (uVar12 != 0x41) {
        asStack_90[(ulong)uVar12 + 1] = 0x30;
        uVar12 = uVar12 + 2;
        goto LAB_07689fb0;
      }
    }
  }
LAB_0768a0a4:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


