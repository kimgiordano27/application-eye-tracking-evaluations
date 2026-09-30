/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 055dd37c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x055dd560) */
/* WARNING: Removing unreachable block (ram,0x055dd564) */
/* WARNING: Removing unreachable block (ram,0x055dd56c) */
/* WARNING: Removing unreachable block (ram,0x055dd57c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  short sVar5;
  int in_w8;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  short unaff_w20;
  int iVar10;
  int iVar11;
  int iVar12;
  long *unaff_x21;
  uint uVar13;
  int unaff_w24;
  int iVar14;
  
  if (in_w8 == 0) {
    thunk_FUN_02e9a04c();
    param_1 = *unaff_x21;
  }
  lVar6 = *(long *)(param_1 + 0xb8);
  if (*(short *)(lVar6 + 10) != unaff_w20) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar6 = *(long *)(*unaff_x21 + 0xb8);
    }
    puVar3 = PTR_DAT_06a368c0;
    if (*(short *)(lVar6 + 8) == unaff_w20) {
      return;
    }
    iVar10 = 0;
    if (unaff_w24 < 1) {
      iVar14 = 0;
      bVar4 = true;
    }
    else {
      iVar14 = 0;
      iVar11 = 0;
      iVar12 = 0;
      do {
        sVar5 = FUN_05487524();
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(lVar6);
          lVar6 = *(long *)puVar3;
        }
        lVar8 = *(long *)(lVar6 + 0xb8);
        if (*(short *)(lVar8 + 10) == sVar5) {
LAB_055dd43c:
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar6);
            lVar6 = *(long *)puVar3;
          }
          sVar2 = *(short *)(*(long *)(lVar6 + 0xb8) + 8);
          if (*(short *)(*(long *)(lVar6 + 0xb8) + 10) != sVar2) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar6);
              sVar2 = *(short *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            }
            if (sVar2 == sVar5) {
              iVar11 = iVar11 + 1;
            }
          }
          if (iVar12 + 1 != unaff_w24) {
            sVar5 = FUN_05487524();
            lVar6 = *(long *)puVar3;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar6);
              lVar6 = *(long *)puVar3;
            }
            lVar8 = *(long *)(lVar6 + 0xb8);
            if (*(short *)(lVar8 + 10) != sVar5) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar6);
                lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
              }
              if (*(short *)(lVar8 + 8) != sVar5) goto LAB_055dd500;
            }
          }
          iVar14 = iVar14 + 1;
        }
        else {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar6);
            lVar6 = *(long *)puVar3;
            lVar8 = *(long *)(lVar6 + 0xb8);
          }
          if (*(short *)(lVar8 + 8) == sVar5) goto LAB_055dd43c;
        }
LAB_055dd500:
        iVar12 = iVar12 + 1;
      } while (iVar12 != unaff_w24);
      bVar4 = iVar11 == 0;
      if (iVar14 != 0) goto LAB_055dd544;
    }
    if (!bVar4) {
LAB_055dd544:
      lVar6 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f548,unaff_w24 - iVar14);
      puVar3 = PTR_DAT_06a368c0;
      if (0 < unaff_w24) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        iVar14 = unaff_w24 + -1;
        uVar13 = 0;
        do {
          if (*(int *)(lVar6 + 0x18) <= (int)uVar13) break;
          sVar5 = FUN_05487524();
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02e9a04c(lVar8);
            lVar8 = *(long *)puVar3;
          }
          lVar9 = *(long *)(lVar8 + 0xb8);
          if (*(short *)(lVar9 + 10) == sVar5) {
LAB_055dd608:
            uVar7 = *(uint *)(lVar6 + 0x18);
            uVar1 = uVar13 + 1;
            if (uVar1 != uVar7) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02e9a04c(lVar8);
                uVar7 = *(uint *)(lVar6 + 0x18);
              }
              if (uVar7 <= uVar13) {
LAB_055dd71c:
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              *(undefined2 *)(lVar6 + (long)(int)uVar13 * 2 + 0x20) =
                   *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 10);
              iVar11 = iVar10;
              uVar13 = uVar1;
              if (iVar10 < iVar14) {
                do {
                  iVar12 = iVar11 + 1;
                  sVar5 = FUN_05487524();
                  lVar8 = *(long *)puVar3;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c(lVar8);
                    lVar8 = *(long *)puVar3;
                  }
                  lVar9 = *(long *)(lVar8 + 0xb8);
                  if (*(short *)(lVar9 + 10) != sVar5) {
                    if (*(int *)(lVar8 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c(lVar8);
                      lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
                    }
                    iVar10 = iVar11;
                    if (*(short *)(lVar9 + 8) != sVar5) break;
                  }
                  iVar10 = iVar14;
                  iVar11 = iVar12;
                } while (iVar14 != iVar12);
              }
            }
          }
          else {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_02e9a04c(lVar8);
              lVar8 = *(long *)puVar3;
              lVar9 = *(long *)(lVar8 + 0xb8);
            }
            if (*(short *)(lVar9 + 8) == sVar5) goto LAB_055dd608;
            if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_055dd71c;
            *(short *)(lVar6 + (long)(int)uVar13 * 2 + 0x20) = sVar5;
            uVar13 = uVar13 + 1;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < unaff_w24);
      }
      FUN_0548a2b0(0,lVar6,0);
      return;
    }
  }
  return;
}


