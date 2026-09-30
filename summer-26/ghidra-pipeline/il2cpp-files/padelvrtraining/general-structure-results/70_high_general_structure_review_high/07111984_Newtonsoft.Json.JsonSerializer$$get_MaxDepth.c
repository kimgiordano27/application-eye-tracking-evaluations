/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MaxDepth
ENTRY_POINT: 07111984
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


undefined8
Newtonsoft_Json_JsonSerializer__get_MaxDepth(long param_1,ulong param_2,undefined8 param_3)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  int iVar4;
  ulong unaff_x22;
  short unaff_w23;
  byte unaff_w24;
  
  do {
    uVar1 = FUN_06fcd2c8(param_1,param_2,param_3);
    iVar4 = (int)unaff_x22;
    if (uVar1 < 0x26) {
      if (uVar1 == 0x25) goto LAB_071119bc;
      if (uVar1 != 0x22) goto LAB_071119c0;
LAB_071119dc:
      lVar3 = FUN_07111450();
      if ((unaff_w24 & 1) != 0) {
        if (lVar3 != 0) {
          sVar2 = FUN_06fcd2c8(lVar3,unaff_x22 & 0xffffffff,0);
          unaff_w24 = unaff_w23 != sVar2;
          goto LAB_071119c0;
        }
LAB_07111a30:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (lVar3 == 0) goto LAB_07111a30;
      unaff_w23 = FUN_06fcd2c8(lVar3,unaff_x22 & 0xffffffff,0);
      lVar3 = FUN_07111450();
      unaff_w24 = 1;
    }
    else {
      if (uVar1 != 0x5c) {
        if (uVar1 == 0x7a) {
          if ((unaff_w24 & 1) == 0) goto Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent;
        }
        else if (uVar1 == 0x27) goto LAB_071119dc;
        goto LAB_071119c0;
      }
LAB_071119bc:
      iVar4 = iVar4 + 1;
LAB_071119c0:
      lVar3 = FUN_07111450();
    }
    if (lVar3 == 0) goto LAB_07111a30;
    param_2 = (ulong)(iVar4 + 1U);
    if (*(int *)(lVar3 + 0x10) <= (int)(iVar4 + 1U)) {
      unaff_x21 = FUN_06fc5244();
Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent:
      *unaff_x19 = unaff_x21;
      thunk_FUN_03d1023c();
      return *unaff_x19;
    }
    param_1 = FUN_07111450();
    if (param_1 == 0) goto LAB_07111a30;
    param_3 = 0;
    unaff_x22 = param_2;
  } while( true );
}


