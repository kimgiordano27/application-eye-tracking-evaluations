/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MaxDepth
ENTRY_POINT: 0711198c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_MaxDepth(void)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  uint in_w8;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  int unaff_w22;
  short unaff_w23;
  byte unaff_w24;
  
  do {
    if (in_w8 < 0x26) {
      if (in_w8 == 0x25) goto LAB_071119bc;
      if (in_w8 != 0x22) goto LAB_071119c0;
LAB_071119dc:
      lVar3 = FUN_07111450();
      if ((unaff_w24 & 1) != 0) {
        if (lVar3 != 0) {
          sVar1 = FUN_06fcd2c8(lVar3,unaff_w22,0);
          unaff_w24 = unaff_w23 != sVar1;
          goto LAB_071119c0;
        }
LAB_07111a30:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (lVar3 == 0) goto LAB_07111a30;
      unaff_w23 = FUN_06fcd2c8(lVar3,unaff_w22,0);
      lVar3 = FUN_07111450();
      unaff_w24 = 1;
    }
    else {
      if (in_w8 != 0x5c) {
        if (in_w8 == 0x7a) {
          if ((unaff_w24 & 1) == 0) goto Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent;
        }
        else if (in_w8 == 0x27) goto LAB_071119dc;
        goto LAB_071119c0;
      }
LAB_071119bc:
      unaff_w22 = unaff_w22 + 1;
LAB_071119c0:
      lVar3 = FUN_07111450();
    }
    if (lVar3 == 0) goto LAB_07111a30;
    unaff_w22 = unaff_w22 + 1;
    if (*(int *)(lVar3 + 0x10) <= unaff_w22) {
      unaff_x21 = FUN_06fc5244();
Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent:
      *unaff_x19 = unaff_x21;
      thunk_FUN_03d1023c();
      return *unaff_x19;
    }
    lVar3 = FUN_07111450();
    if (lVar3 == 0) goto LAB_07111a30;
    uVar2 = FUN_06fcd2c8(lVar3,unaff_w22,0);
    in_w8 = uVar2 & 0xffff;
  } while( true );
}


