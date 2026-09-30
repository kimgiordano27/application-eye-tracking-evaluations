/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 0768a13c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting
               (ulong param_1,uint param_2,undefined4 param_3,ushort param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  uint uVar14;
  ushort local_f0 [76];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_09892282 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092d0730);
    FUN_04077588(PTR_DAT_092d03e8);
    DAT_09892282 = 1;
  }
  memset(local_f0,0,0x86);
  if (0x22 < param_2 - 2) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d6808);
    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092cf6c0);
    FUN_075ce148(uVar4,uVar5,uVar6,0);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092da750);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,uVar5);
    }
    goto LAB_0768a4f4;
  }
  uVar11 = -param_1;
  if (param_2 != 10 || -1 < (long)param_1) {
    uVar11 = param_1;
  }
  uVar13 = uVar11;
  if ((param_5 & 0x100) != 0) {
    uVar13 = uVar11 & 0xffffffff;
  }
  if ((param_5 & 0x80) != 0) {
    uVar13 = uVar11 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar13 = uVar11 & 0xff;
  }
  if (uVar13 == 0) {
    uVar14 = 1;
    local_f0[0] = 0x30;
  }
  else {
    lVar7 = 0;
    uVar11 = (ulong)param_2;
    do {
      uVar1 = 0;
      if (uVar11 != 0) {
        uVar1 = uVar13 / uVar11;
      }
      iVar3 = (int)uVar13 - (int)uVar1 * param_2;
      sVar12 = 0x30;
      if (9 < iVar3) {
        sVar12 = 0x57;
      }
      local_f0[lVar7] = sVar12 + (short)iVar3;
      if (uVar13 < uVar11) {
        uVar14 = (int)lVar7 + 1;
        goto FUN_0768a264;
      }
      lVar7 = lVar7 + 1;
      uVar13 = uVar1;
    } while (lVar7 != 0x43);
    uVar14 = 0;
  }
FUN_0768a264:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
FUN_0768a36c:
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0767a564(param_3,uVar14,0);
      lVar7 = thunk_FUN_040b28f8(uVar4,0);
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      else {
        iVar3 = thunk_FUN_04083428(0);
        puVar9 = (ushort *)(lVar7 + iVar3);
        iVar3 = *(int *)(lVar7 + 0x10) - uVar14;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar14) {
            uVar11 = (ulong)uVar14;
            puVar8 = puVar9;
            do {
              if (0x43 < uVar14) goto LAB_0768a460;
              uVar11 = uVar11 - 1;
              puVar9 = puVar8 + 1;
              *puVar8 = local_f0[uVar11 & 0xffffffff];
              puVar8 = puVar9;
            } while (uVar11 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *puVar9 = param_4;
              puVar9 = puVar9 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          puVar8 = puVar9;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              puVar9 = puVar8 + 1;
              *puVar8 = param_4;
              puVar8 = puVar9;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar14) {
            uVar11 = (ulong)uVar14;
            do {
              if (0x43 < uVar14) goto LAB_0768a460;
              uVar11 = uVar11 - 1;
              *puVar9 = local_f0[uVar11 & 0xffffffff];
              puVar9 = puVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return lVar7;
        }
      }
      goto LAB_0768a4f4;
    }
    if ((long)param_1 < 0) {
      if (uVar14 < 0x43) {
        uVar10 = 0x2d;
LAB_0768a364:
        local_f0[uVar14] = uVar10;
        uVar14 = uVar14 + 1;
        goto FUN_0768a36c;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto FUN_0768a36c;
      if (uVar14 < 0x43) {
        uVar10 = 0x20;
        goto LAB_0768a364;
      }
    }
    else if (uVar14 < 0x43) {
      uVar10 = 0x2b;
      goto LAB_0768a364;
    }
  }
  else if (param_2 == 8) {
    if (uVar14 < 0x43) {
      uVar10 = 0x30;
      goto LAB_0768a364;
    }
  }
  else if (param_2 == 0x10) {
    if (uVar14 < 0x43) {
      local_f0[uVar14] = 0x78;
      if (uVar14 != 0x42) {
        local_f0[(ulong)uVar14 + 1] = 0x30;
        uVar14 = uVar14 + 2;
        goto FUN_0768a36c;
      }
    }
  }
  else {
    if ((param_5 >> 0xe & 1) == 0) goto FUN_0768a36c;
    if (uVar14 < 0x43) {
      local_f0[uVar14] = 0x23;
      if (uVar14 != 0x42) {
        uVar10 = (ushort)(param_2 / 10);
        local_f0[(ulong)uVar14 + 1] = (short)param_2 + uVar10 * -10 | 0x30;
        if (uVar14 < 0x41) {
          local_f0[(ulong)uVar14 + 2] = uVar10 | 0x30;
          uVar14 = uVar14 + 3;
          goto FUN_0768a36c;
        }
      }
    }
  }
LAB_0768a460:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_0768a4f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


