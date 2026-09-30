/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 055dd2cc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(long param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  if ((DAT_06e8d625 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2f548);
    FUN_02e3ca1c(PTR_DAT_06a368c0);
    DAT_06e8d625 = 1;
  }
  if (param_1 == 0) goto LAB_055dd720;
  uVar2 = *(uint *)(param_1 + 0x10);
                    /* try { // try from 055dd314 to 056dd42f has its CatchHandler @ 055dd314
                       catch() { ... } // from try @ 055dd314 with catch @ 055dd314
                       catch() { ... } // from try @ 055ddbe4 with catch @ 055dd314
                       catch() { ... } // from try @ 055ddc6c with catch @ 055dd314
                       catch() { ... } // from try @ 055ddd58 with catch @ 055dd314
                       catch() { ... } // from try @ 055ddd80 with catch @ 055dd314
                       catch() { ... } // from try @ 055dde14 with catch @ 055dd314
                       catch() { ... } // from try @ 055ddec4 with catch @ 055dd314 */
  sVar6 = FUN_05487524(param_1,0,0);
  puVar4 = PTR_DAT_06a368c0;
  if (((int)uVar2 < 3) || (sVar6 != 0x5c)) {
    if (uVar2 == 1) {
      lVar7 = *(long *)PTR_DAT_06a368c0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar7 = *(long *)puVar4;
      }
      lVar8 = *(long *)(lVar7 + 0xb8);
      if (*(short *)(lVar8 + 10) == sVar6) {
        return param_1;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      if (*(short *)(lVar8 + 8) == sVar6) {
        return param_1;
      }
    }
    uVar10 = 0;
    bVar13 = true;
  }
  else {
    sVar6 = FUN_05487524(param_1,1,0);
    bVar13 = sVar6 != 0x5c;
    uVar10 = (uint)(sVar6 == 0x5c) << 1;
  }
  puVar4 = PTR_DAT_06a368c0;
  if ((int)uVar10 < (int)uVar2) {
    iVar15 = 0;
    iVar16 = 0;
    uVar12 = uVar10;
    do {
      sVar6 = FUN_05487524(param_1,uVar12,0);
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar7);
        lVar7 = *(long *)puVar4;
      }
      lVar8 = *(long *)(lVar7 + 0xb8);
      if (*(short *)(lVar8 + 10) == sVar6) {
LAB_055dd43c:
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar7);
          lVar7 = *(long *)puVar4;
        }
        sVar3 = *(short *)(*(long *)(lVar7 + 0xb8) + 8);
        if (*(short *)(*(long *)(lVar7 + 0xb8) + 10) != sVar3) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar7);
            sVar3 = *(short *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          }
          if (sVar3 == sVar6) {
            iVar16 = iVar16 + 1;
          }
        }
        if (uVar12 + 1 != uVar2) {
          sVar6 = FUN_05487524(param_1,uVar12 + 1,0);
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar7);
            lVar7 = *(long *)puVar4;
          }
          lVar8 = *(long *)(lVar7 + 0xb8);
          if (*(short *)(lVar8 + 10) != sVar6) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar7);
              lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
            }
            if (*(short *)(lVar8 + 8) != sVar6) goto LAB_055dd500;
          }
        }
        iVar15 = iVar15 + 1;
      }
      else {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar7);
          lVar7 = *(long *)puVar4;
          lVar8 = *(long *)(lVar7 + 0xb8);
        }
        if (*(short *)(lVar8 + 8) == sVar6) goto LAB_055dd43c;
      }
LAB_055dd500:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
    bVar5 = iVar16 == 0;
    if (iVar15 == 0) goto LAB_055dd524;
  }
  else {
    iVar15 = 0;
    bVar5 = true;
LAB_055dd524:
    if (bVar5) {
      return param_1;
    }
  }
  lVar7 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f548,uVar2 - iVar15);
  if (!bVar13) {
    if (lVar7 == 0) goto LAB_055dd720;
    if ((*(int *)(lVar7 + 0x18) == 0) ||
       (*(undefined2 *)(lVar7 + 0x20) = 0x5c, *(int *)(lVar7 + 0x18) == 1)) {
LAB_055dd71c:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(lVar7 + 0x22) = 0x5c;
  }
  puVar4 = PTR_DAT_06a368c0;
  if ((int)uVar10 < (int)uVar2) {
    if (lVar7 == 0) {
LAB_055dd720:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar12 = uVar2 - 1;
    uVar14 = uVar10;
    do {
      if (*(int *)(lVar7 + 0x18) <= (int)uVar14) break;
      sVar6 = FUN_05487524(param_1,uVar10,0);
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(lVar8);
        lVar8 = *(long *)puVar4;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      if (*(short *)(lVar9 + 10) == sVar6) {
LAB_055dd608:
        uVar11 = *(uint *)(lVar7 + 0x18);
        uVar1 = uVar14 + 1;
        if (uVar1 != uVar11) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar8);
            uVar11 = *(uint *)(lVar7 + 0x18);
          }
          if (uVar11 <= uVar14) goto LAB_055dd71c;
          *(undefined2 *)(lVar7 + (long)(int)uVar14 * 2 + 0x20) =
               *(undefined2 *)(*(long *)(*(long *)puVar4 + 0xb8) + 10);
          uVar11 = uVar10;
          uVar14 = uVar1;
          if ((int)uVar10 < (int)uVar12) {
            do {
              uVar1 = uVar11 + 1;
              sVar6 = FUN_05487524(param_1,uVar1,0);
              lVar8 = *(long *)puVar4;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar8);
                lVar8 = *(long *)puVar4;
              }
              lVar9 = *(long *)(lVar8 + 0xb8);
              if (*(short *)(lVar9 + 10) != sVar6) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c(lVar8);
                  lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
                }
                uVar10 = uVar11;
                if (*(short *)(lVar9 + 8) != sVar6) break;
              }
              uVar10 = uVar12;
              uVar11 = uVar1;
            } while (uVar12 != uVar1);
          }
        }
      }
      else {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar8);
          lVar8 = *(long *)puVar4;
          lVar9 = *(long *)(lVar8 + 0xb8);
        }
        if (*(short *)(lVar9 + 8) == sVar6) goto LAB_055dd608;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_055dd71c;
        *(short *)(lVar7 + (long)(int)uVar14 * 2 + 0x20) = sVar6;
        uVar14 = uVar14 + 1;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar2);
  }
  lVar7 = FUN_0548a2b0(0,lVar7,0);
  return lVar7;
}


