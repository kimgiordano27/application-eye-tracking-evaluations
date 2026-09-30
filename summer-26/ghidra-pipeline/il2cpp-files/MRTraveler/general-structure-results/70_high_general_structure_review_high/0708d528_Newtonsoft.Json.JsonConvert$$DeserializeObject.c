/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0708d528
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint unaff_w20;
  uint uVar8;
  int unaff_w21;
  short unaff_w22;
  uint uVar9;
  ulong unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x27;
  
  do {
    thunk_FUN_03cd7500(param_1);
    param_1 = *unaff_x27;
    do {
      lVar5 = *(long *)(param_1 + 0xb8);
      if (*(short *)(lVar5 + 10) == unaff_w22) {
LAB_0708d568:
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_03cd7500(param_1);
          param_1 = *unaff_x27;
        }
        sVar4 = *(short *)(*(long *)(param_1 + 0xb8) + 8);
        if (*(short *)(*(long *)(param_1 + 0xb8) + 10) != sVar4) {
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_03cd7500(param_1);
            sVar4 = *(short *)(*(long *)(*unaff_x27 + 0xb8) + 8);
          }
          if (sVar4 == unaff_w22) {
            unaff_w26 = unaff_w26 + 1;
          }
        }
        if (unaff_w21 + 1 != unaff_w24) {
          sVar4 = FUN_06f6fafc();
          lVar5 = *unaff_x27;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar5);
            lVar5 = *unaff_x27;
          }
          lVar6 = *(long *)(lVar5 + 0xb8);
          if (*(short *)(lVar6 + 10) != sVar4) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar5);
              lVar6 = *(long *)(*unaff_x27 + 0xb8);
            }
            if (*(short *)(lVar6 + 8) != sVar4) goto LAB_0708d62c;
          }
        }
        unaff_w25 = unaff_w25 + 1;
      }
      else {
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_03cd7500(param_1);
          param_1 = *unaff_x27;
          lVar5 = *(long *)(param_1 + 0xb8);
        }
        if (*(short *)(lVar5 + 8) == unaff_w22) goto LAB_0708d568;
      }
LAB_0708d62c:
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w21 == unaff_w24) {
        if (unaff_w26 == 0 && unaff_w25 == 0) {
          return;
        }
        lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e7de80,unaff_w24 - unaff_w25);
        if ((unaff_x23 & 1) == 0) {
          if (lVar5 == 0) goto LAB_0708d840;
          if ((*(int *)(lVar5 + 0x18) == 0) ||
             (*(undefined2 *)(lVar5 + 0x20) = 0x5c, *(int *)(lVar5 + 0x18) == 1)) goto LAB_0708d83c;
          *(undefined2 *)(lVar5 + 0x22) = 0x5c;
        }
        puVar3 = PTR_DAT_08e69920;
        if (unaff_w24 <= (int)unaff_w20) goto LAB_0708d7fc;
        if (lVar5 == 0) {
LAB_0708d840:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = unaff_w24 - 1;
        uVar9 = unaff_w20;
        goto LAB_0708d6a0;
      }
      unaff_w22 = FUN_06f6fafc();
      param_1 = *unaff_x27;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
LAB_0708d6a0:
  do {
    if (*(int *)(lVar5 + 0x18) <= (int)uVar9) break;
    sVar4 = FUN_06f6fafc();
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar6);
      lVar6 = *(long *)puVar3;
    }
    lVar7 = *(long *)(lVar6 + 0xb8);
    if (*(short *)(lVar7 + 10) == sVar4) {
LAB_0708d70c:
      uVar8 = *(uint *)(lVar5 + 0x18);
      uVar1 = uVar9 + 1;
      if (uVar1 != uVar8) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar6);
          uVar8 = *(uint *)(lVar5 + 0x18);
        }
        if (uVar8 <= uVar9) {
LAB_0708d83c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *(undefined2 *)(lVar5 + (long)(int)uVar9 * 2 + 0x20) =
             *(undefined2 *)(*(long *)(*(long *)puVar3 + 0xb8) + 10);
        uVar8 = unaff_w20;
        uVar9 = uVar1;
        if ((int)unaff_w20 < (int)uVar2) {
          do {
            uVar1 = uVar8 + 1;
            sVar4 = FUN_06f6fafc();
            lVar6 = *(long *)puVar3;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar6);
              lVar6 = *(long *)puVar3;
            }
            lVar7 = *(long *)(lVar6 + 0xb8);
            if (*(short *)(lVar7 + 10) != sVar4) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_03cd7500(lVar6);
                lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
              }
              unaff_w20 = uVar8;
              if (*(short *)(lVar7 + 8) != sVar4) break;
            }
            unaff_w20 = uVar2;
            uVar8 = uVar1;
          } while (uVar2 != uVar1);
        }
      }
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar6);
        lVar6 = *(long *)puVar3;
        lVar7 = *(long *)(lVar6 + 0xb8);
      }
      if (*(short *)(lVar7 + 8) == sVar4) goto LAB_0708d70c;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_0708d83c;
      *(short *)(lVar5 + (long)(int)uVar9 * 2 + 0x20) = sVar4;
      uVar9 = uVar9 + 1;
    }
    unaff_w20 = unaff_w20 + 1;
  } while ((int)unaff_w20 < unaff_w24);
LAB_0708d7fc:
  FUN_06f7296c(0,lVar5,0);
  return;
}


