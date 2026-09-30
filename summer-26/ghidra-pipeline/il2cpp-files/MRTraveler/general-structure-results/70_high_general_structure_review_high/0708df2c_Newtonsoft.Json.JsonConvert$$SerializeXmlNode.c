/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 0708df2c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXmlNode(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  int unaff_w20;
  undefined4 unaff_w21;
  undefined8 uVar4;
  long *unaff_x22;
  
  do {
    thunk_FUN_03cd7500(param_1);
    do {
      uVar1 = FUN_0708eaa8(unaff_w21);
      if ((uVar1 & 1) != 0) {
LAB_0708df48:
        lVar2 = *unaff_x22;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar2 = *unaff_x22;
        }
        uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
        lVar2 = FUN_06f764fc();
        if (lVar2 != 0) {
          uVar3 = FUN_06f76694(lVar2,*(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 8),
                               *(undefined2 *)(*(long *)(*unaff_x22 + 0xb8) + 10),0);
          FUN_06f7465c(uVar4,uVar4,uVar3,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      unaff_w20 = unaff_w20 + 1;
      if (*(int *)(unaff_x19 + 0x10) <= unaff_w20) goto LAB_0708df48;
      unaff_w21 = FUN_06f6fafc();
      param_1 = *unaff_x22;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
}


