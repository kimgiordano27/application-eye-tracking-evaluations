/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Formatting
ENTRY_POINT: 0768a15c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Formatting
               (ulong param_1,uint param_2,undefined4 param_3,ushort param_4,uint param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort uVar9;
  ulong uVar10;
  short sVar11;
  ulong uVar12;
  uint uVar13;
  long unaff_x26;
  long unaff_x29;
  ushort auStack_90 [72];
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x26 + 0x28);
  if ((DAT_09892282 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092d0730);
    FUN_04077588(PTR_DAT_092d03e8);
    DAT_09892282 = 1;
  }
  memset(auStack_90,0,0x86);
  if (0x22 < param_2 - 2) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar3 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
    FUN_075ce148(uVar3,uVar4,uVar5,0);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092da750);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,uVar4);
    }
    goto LAB_0768a4f4;
  }
  uVar10 = -param_1;
  if (param_2 != 10 || -1 < (long)param_1) {
    uVar10 = param_1;
  }
  uVar12 = uVar10;
  if ((param_5 & 0x100) != 0) {
    uVar12 = uVar10 & 0xffffffff;
  }
  if ((param_5 & 0x80) != 0) {
    uVar12 = uVar10 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar12 = uVar10 & 0xff;
  }
  if (uVar12 == 0) {
    uVar13 = 1;
    auStack_90[0] = 0x30;
  }
  else {
    lVar6 = 0;
    uVar10 = (ulong)param_2;
    do {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar12 / uVar10;
      }
      iVar2 = (int)uVar12 - (int)uVar1 * param_2;
      sVar11 = 0x30;
      if (9 < iVar2) {
        sVar11 = 0x57;
      }
      auStack_90[lVar6] = sVar11 + (short)iVar2;
      if (uVar12 < uVar10) {
        uVar13 = (int)lVar6 + 1;
        goto FUN_0768a264;
      }
      lVar6 = lVar6 + 1;
      uVar12 = uVar1;
    } while (lVar6 != 0x43);
    uVar13 = 0;
  }
FUN_0768a264:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
FUN_0768a36c:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = FUN_0767a564(param_3,uVar13,0);
      lVar6 = thunk_FUN_040b28f8(uVar3,0);
      if (lVar6 == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar2 = thunk_FUN_04083428(0);
        puVar8 = (ushort *)(lVar6 + iVar2);
        iVar2 = *(int *)(lVar6 + 0x10) - uVar13;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar10 = (ulong)uVar13;
            puVar7 = puVar8;
            do {
              if (0x43 < uVar13) goto LAB_0768a460;
              uVar10 = uVar10 - 1;
              puVar8 = puVar7 + 1;
              *puVar7 = auStack_90[uVar10 & 0xffffffff];
              puVar7 = puVar8;
            } while (uVar10 != 0);
          }
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              *puVar8 = param_4;
              puVar8 = puVar8 + 1;
            } while (iVar2 != 0);
          }
        }
        else {
          puVar7 = puVar8;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 + -1;
              puVar8 = puVar7 + 1;
              *puVar7 = param_4;
              puVar7 = puVar8;
            } while (iVar2 != 0);
          }
          if (0 < (int)uVar13) {
            uVar10 = (ulong)uVar13;
            do {
              if (0x43 < uVar13) goto LAB_0768a460;
              uVar10 = uVar10 - 1;
              *puVar8 = auStack_90[uVar10 & 0xffffffff];
              puVar8 = puVar8 + 1;
            } while (uVar10 != 0);
          }
        }
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return lVar6;
        }
      }
      goto LAB_0768a4f4;
    }
    if ((long)param_1 < 0) {
      if (uVar13 < 0x43) {
        uVar9 = 0x2d;
LAB_0768a364:
        auStack_90[uVar13] = uVar9;
        uVar13 = uVar13 + 1;
        goto FUN_0768a36c;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto FUN_0768a36c;
      if (uVar13 < 0x43) {
        uVar9 = 0x20;
        goto LAB_0768a364;
      }
    }
    else if (uVar13 < 0x43) {
      uVar9 = 0x2b;
      goto LAB_0768a364;
    }
  }
  else if (param_2 == 8) {
    if (uVar13 < 0x43) {
      uVar9 = 0x30;
      goto LAB_0768a364;
    }
  }
  else if (param_2 == 0x10) {
    if (uVar13 < 0x43) {
      auStack_90[uVar13] = 0x78;
      if (uVar13 != 0x42) {
        auStack_90[(ulong)uVar13 + 1] = 0x30;
        uVar13 = uVar13 + 2;
        goto FUN_0768a36c;
      }
    }
  }
  else {
    if ((param_5 >> 0xe & 1) == 0) goto FUN_0768a36c;
    if (uVar13 < 0x43) {
      auStack_90[uVar13] = 0x23;
      if (uVar13 != 0x42) {
        uVar9 = (ushort)(param_2 / 10);
        auStack_90[(ulong)uVar13 + 1] = (short)param_2 + uVar9 * -10 | 0x30;
        if (uVar13 < 0x41) {
          auStack_90[(ulong)uVar13 + 2] = uVar9 | 0x30;
          uVar13 = uVar13 + 3;
          goto FUN_0768a36c;
        }
      }
    }
  }
LAB_0768a460:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a4f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


