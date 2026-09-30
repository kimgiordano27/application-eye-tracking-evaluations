/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0708d4cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0708d664) */
/* WARNING: Removing unreachable block (ram,0x0708d668) */
/* WARNING: Removing unreachable block (ram,0x0708d670) */
/* WARNING: Removing unreachable block (ram,0x0708d680) */

void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  short unaff_w20;
  int iVar9;
  int iVar10;
  int iVar11;
  long *unaff_x21;
  uint uVar12;
  int unaff_w24;
  int iVar13;
  
  thunk_FUN_03cd7500();
  puVar3 = PTR_DAT_08e69920;
  if (*(short *)(*(long *)(*unaff_x21 + 0xb8) + 8) != unaff_w20) {
    iVar9 = 0;
    if (unaff_w24 < 1) {
      iVar10 = 0;
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar10 = 0;
      iVar11 = 0;
      do {
        sVar4 = FUN_06f6fafc();
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar5);
          lVar5 = *(long *)puVar3;
        }
        lVar7 = *(long *)(lVar5 + 0xb8);
        if (*(short *)(lVar7 + 10) == sVar4) {
LAB_0708d568:
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar5);
            lVar5 = *(long *)puVar3;
          }
          sVar2 = *(short *)(*(long *)(lVar5 + 0xb8) + 8);
          if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) != sVar2) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar5);
              sVar2 = *(short *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            }
            if (sVar2 == sVar4) {
              iVar10 = iVar10 + 1;
            }
          }
          if (iVar11 + 1 != unaff_w24) {
            sVar4 = FUN_06f6fafc();
            lVar5 = *(long *)puVar3;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar5);
              lVar5 = *(long *)puVar3;
            }
            lVar7 = *(long *)(lVar5 + 0xb8);
            if (*(short *)(lVar7 + 10) != sVar4) {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_03cd7500(lVar5);
                lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
              }
              if (*(short *)(lVar7 + 8) != sVar4) goto LAB_0708d62c;
            }
          }
          iVar13 = iVar13 + 1;
        }
        else {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar5);
            lVar5 = *(long *)puVar3;
            lVar7 = *(long *)(lVar5 + 0xb8);
          }
          if (*(short *)(lVar7 + 8) == sVar4) goto LAB_0708d568;
        }
LAB_0708d62c:
        iVar11 = iVar11 + 1;
      } while (iVar11 != unaff_w24);
    }
    if (iVar10 != 0 || iVar13 != 0) {
      lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e7de80,unaff_w24 - iVar13);
      puVar3 = PTR_DAT_08e69920;
      if (0 < unaff_w24) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        iVar13 = unaff_w24 + -1;
        uVar12 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= (int)uVar12) break;
          sVar4 = FUN_06f6fafc();
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar7);
            lVar7 = *(long *)puVar3;
          }
          lVar8 = *(long *)(lVar7 + 0xb8);
          if (*(short *)(lVar8 + 10) == sVar4) {
LAB_0708d70c:
            uVar6 = *(uint *)(lVar5 + 0x18);
            uVar1 = uVar12 + 1;
            if (uVar1 != uVar6) {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_03cd7500(lVar7);
                uVar6 = *(uint *)(lVar5 + 0x18);
              }
              if (uVar6 <= uVar12) {
LAB_0708d83c:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              *(undefined2 *)(lVar5 + (long)(int)uVar12 * 2 + 0x20) =
                   *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 10);
              iVar10 = iVar9;
              uVar12 = uVar1;
              if (iVar9 < iVar13) {
                do {
                  iVar11 = iVar10 + 1;
                  sVar4 = FUN_06f6fafc();
                  lVar7 = *(long *)puVar3;
                  if (*(int *)(lVar7 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(lVar7);
                    lVar7 = *(long *)puVar3;
                  }
                  lVar8 = *(long *)(lVar7 + 0xb8);
                  if (*(short *)(lVar8 + 10) != sVar4) {
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(lVar7);
                      lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                    }
                    iVar9 = iVar10;
                    if (*(short *)(lVar8 + 8) != sVar4) break;
                  }
                  iVar9 = iVar13;
                  iVar10 = iVar11;
                } while (iVar13 != iVar11);
              }
            }
          }
          else {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar7);
              lVar7 = *(long *)puVar3;
              lVar8 = *(long *)(lVar7 + 0xb8);
            }
            if (*(short *)(lVar8 + 8) == sVar4) goto LAB_0708d70c;
            if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_0708d83c;
            *(short *)(lVar5 + (long)(int)uVar12 * 2 + 0x20) = sVar4;
            uVar12 = uVar12 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < unaff_w24);
      }
      FUN_06f7296c(0,lVar5,0);
      return;
    }
  }
  return;
}


