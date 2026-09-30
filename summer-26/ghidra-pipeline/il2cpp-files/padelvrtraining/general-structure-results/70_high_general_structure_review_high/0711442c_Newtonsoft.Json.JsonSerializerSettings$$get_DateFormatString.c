/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatString
ENTRY_POINT: 0711442c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatString(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w26;
  long *plVar5;
  int unaff_w28;
  long unaff_x29;
  
  while ((param_1 & 1) == 0) {
    do {
      unaff_w24 = unaff_w24 + unaff_w28;
      unaff_w26 = unaff_w26 + 1;
      if (0xc6 < (int)unaff_w24) {
        unaff_w24 = unaff_w24 - 199;
      }
      if (unaff_w26 == 199) {
        return;
      }
      if (*(uint *)(unaff_x21 + 3) <= unaff_w24) {
LAB_07114564:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      plVar5 = unaff_x21 + (long)(int)unaff_w24 + 4;
      unaff_x29 = *plVar5;
      if (unaff_x29 == 0) {
        lVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0920ff20);
        FUN_071bc31c(lVar2,0);
        *(long *)(lVar2 + 0x10) = unaff_x22;
        thunk_FUN_03d1023c();
        *(uint *)(lVar2 + 0x18) = unaff_w20;
        *(int *)(lVar2 + 0x1c) = unaff_w19;
        lVar3 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar3 == 0) {
          uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
          FUN_03d2d414(uVar4,0);
        }
        if (unaff_w24 < *(uint *)(unaff_x21 + 3)) {
          *plVar5 = lVar2;
          thunk_FUN_03d1023c(plVar5,lVar2);
          return;
        }
        goto LAB_07114564;
      }
      if (*(long *)(unaff_x29 + 0x10) == 0) goto LAB_07114560;
    } while (*(int *)(unaff_x22 + 0x10) < *(int *)(*(long *)(unaff_x29 + 0x10) + 0x10));
    param_1 = FUN_07116010();
  }
  if (*(long *)(unaff_x29 + 0x10) != 0) {
    if (*(int *)(*(long *)(unaff_x29 + 0x10) + 0x10) < *(int *)(unaff_x22 + 0x10)) {
      FUN_07115df8();
    }
    else {
      uVar1 = *(uint *)(unaff_x29 + 0x18);
      if (((((unaff_w20 & 0xff) != 0) && ((uVar1 & 0xff) == 0)) ||
          (((unaff_w20 & 0xff00) != 0 && ((uVar1 & 0xff00) == 0)))) &&
         (*(uint *)(unaff_x29 + 0x18) = uVar1 | unaff_w20, unaff_w19 != 0)) {
        *(int *)(unaff_x29 + 0x1c) = unaff_w19;
      }
    }
    return;
  }
LAB_07114560:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


