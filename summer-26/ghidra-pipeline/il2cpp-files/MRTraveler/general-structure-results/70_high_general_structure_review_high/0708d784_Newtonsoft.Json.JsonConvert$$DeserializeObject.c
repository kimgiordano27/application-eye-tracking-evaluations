/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0708d784
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(long param_1)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int unaff_w20;
  int iVar5;
  long unaff_x21;
  int unaff_w22;
  short unaff_w23;
  uint uVar6;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  uint unaff_w27;
  
  do {
    lVar4 = *(long *)(param_1 + 0xb8);
    uVar6 = unaff_w27;
    if (*(short *)(lVar4 + 10) == unaff_w23) {
LAB_0708d7b8:
      unaff_w20 = unaff_w22;
      iVar5 = unaff_w25;
      if (unaff_w25 == unaff_w22) goto LAB_0708d7f0;
    }
    else {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_03cd7500(param_1);
        lVar4 = *(long *)(*unaff_x26 + 0xb8);
      }
      iVar5 = unaff_w20;
      if (*(short *)(lVar4 + 8) == unaff_w23) goto LAB_0708d7b8;
LAB_0708d7f0:
      do {
        do {
          unaff_w20 = iVar5 + 1;
          if ((unaff_w24 <= unaff_w20) || (*(int *)(unaff_x21 + 0x18) <= (int)uVar6)) {
            FUN_06f7296c(0);
            return;
          }
          sVar1 = FUN_06f6fafc();
          lVar4 = *unaff_x26;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar4);
            lVar4 = *unaff_x26;
          }
          lVar3 = *(long *)(lVar4 + 0xb8);
          iVar5 = unaff_w20;
          if (*(short *)(lVar3 + 10) != sVar1) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar4);
              lVar4 = *unaff_x26;
              lVar3 = *(long *)(lVar4 + 0xb8);
            }
            if (*(short *)(lVar3 + 8) != sVar1) {
              if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_0708d83c;
              *(short *)(unaff_x21 + (long)(int)uVar6 * 2 + 0x20) = sVar1;
              uVar6 = uVar6 + 1;
              goto LAB_0708d7f0;
            }
          }
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          unaff_w27 = uVar6 + 1;
        } while (unaff_w27 == uVar2);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar4);
          uVar2 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar2 <= uVar6) {
LAB_0708d83c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *(undefined2 *)(unaff_x21 + (long)(int)uVar6 * 2 + 0x20) =
             *(undefined2 *)(*(long *)(*unaff_x26 + 0xb8) + 10);
        uVar6 = unaff_w27;
      } while (unaff_w25 <= unaff_w20);
    }
    unaff_w22 = unaff_w20 + 1;
    unaff_w23 = FUN_06f6fafc();
    param_1 = *unaff_x26;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(param_1);
      param_1 = *unaff_x26;
    }
  } while( true );
}


