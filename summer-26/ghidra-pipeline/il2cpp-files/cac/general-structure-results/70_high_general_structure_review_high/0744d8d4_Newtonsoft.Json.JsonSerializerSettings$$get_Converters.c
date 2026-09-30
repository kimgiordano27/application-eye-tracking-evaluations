/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Converters
ENTRY_POINT: 0744d8d4
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Converters(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined1 unaff_w24;
  undefined8 *unaff_x25;
  
  do {
    if (param_1 == 0) {
LAB_0744d984:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = (long)unaff_x23;
      thunk_FUN_03f86000(plVar3,unaff_x23);
    }
    else {
      FUN_056b08d0();
    }
    unaff_x23 = (long *)thunk_FUN_03f4e68c(*unaff_x25);
    FUN_0744d37c(unaff_x23,unaff_w22,unaff_w20 & 1);
    unaff_w22 = unaff_w22 + 1;
    if (unaff_x23 == (long *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling:
      uVar4 = FUN_056b23bc();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
      thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x10),uVar4);
      return;
    }
    uVar4 = (**(code **)(*unaff_x23 + 0x1b8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1c0));
    uVar2 = FUN_073dfe84(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
      if (unaff_x21 != 0) goto Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling;
      goto LAB_0744d984;
    }
    if (unaff_x21 == 0) goto LAB_0744d984;
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  } while( true );
}


