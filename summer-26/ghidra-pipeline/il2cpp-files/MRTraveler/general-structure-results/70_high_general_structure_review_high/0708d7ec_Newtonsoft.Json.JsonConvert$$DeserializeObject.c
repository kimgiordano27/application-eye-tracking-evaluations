/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0708d7ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(long param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int unaff_w20;
  long unaff_x21;
  short unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  
code_r0x0708d7ec:
  *(short *)(param_1 + 0x20) = unaff_w22;
LAB_0708d7f0:
  unaff_w20 = unaff_w20 + 1;
  if ((unaff_w24 <= unaff_w20) || (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w23)) {
    FUN_06f7296c(0);
    return;
  }
  unaff_w22 = FUN_06f6fafc();
  lVar4 = *unaff_x26;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar4);
    lVar4 = *unaff_x26;
  }
  lVar6 = *(long *)(lVar4 + 0xb8);
  if (*(short *)(lVar6 + 10) != unaff_w22) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar4);
      lVar4 = *unaff_x26;
      lVar6 = *(long *)(lVar4 + 0xb8);
    }
    if (*(short *)(lVar6 + 8) != unaff_w22) goto LAB_0708d7d8;
  }
  uVar5 = *(uint *)(unaff_x21 + 0x18);
  uVar1 = unaff_w23 + 1;
  if (uVar1 != uVar5) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar4);
      uVar5 = *(uint *)(unaff_x21 + 0x18);
    }
    if (uVar5 <= unaff_w23) goto LAB_0708d83c;
    *(undefined2 *)(unaff_x21 + (long)(int)unaff_w23 * 2 + 0x20) =
         *(undefined2 *)(*(long *)(*unaff_x26 + 0xb8) + 10);
    unaff_w23 = uVar1;
    iVar7 = unaff_w20;
    if (unaff_w20 < unaff_w25) {
      do {
        iVar2 = iVar7 + 1;
        sVar3 = FUN_06f6fafc();
        lVar4 = *unaff_x26;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar4);
          lVar4 = *unaff_x26;
        }
        lVar6 = *(long *)(lVar4 + 0xb8);
        if (*(short *)(lVar6 + 10) != sVar3) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar4);
            lVar6 = *(long *)(*unaff_x26 + 0xb8);
          }
          unaff_w20 = iVar7;
          if (*(short *)(lVar6 + 8) != sVar3) break;
        }
        iVar7 = iVar2;
        unaff_w20 = unaff_w25;
      } while (unaff_w25 != iVar2);
    }
  }
  goto LAB_0708d7f0;
LAB_0708d7d8:
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) {
LAB_0708d83c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  param_1 = unaff_x21 + (long)(int)unaff_w23 * 2;
  unaff_w23 = unaff_w23 + 1;
  goto code_r0x0708d7ec;
}


