/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_PreserveReferencesHandling
ENTRY_POINT: 0744d8e4
PROGRAM: cac-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializerSettings__set_PreserveReferencesHandling(long param_1)

{
  undefined1 in_CY;
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined1 unaff_w24;
  undefined8 *unaff_x25;
  
  do {
    if ((bool)in_CY) {
      FUN_056b08d0();
    }
    else {
      *(int *)(unaff_x21 + 0x18) = (int)in_x10 + 1;
      plVar2 = (long *)(param_1 + in_x10 * 8 + 0x20);
      *plVar2 = (long)unaff_x23;
      thunk_FUN_03f86000(plVar2,unaff_x23);
    }
    unaff_x23 = (long *)thunk_FUN_03f4e68c(*unaff_x25);
    FUN_0744d37c(unaff_x23,unaff_w22,unaff_w20 & 1);
    unaff_w22 = unaff_w22 + 1;
    if (unaff_x23 == (long *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling:
      uVar3 = FUN_056b23bc();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x10),uVar3);
      return;
    }
    uVar3 = (**(code **)(*unaff_x23 + 0x1b8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1c0));
    uVar1 = FUN_073dfe84(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w24;
      if (unaff_x21 != 0) goto Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling;
LAB_0744d984:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    if (unaff_x21 == 0) goto LAB_0744d984;
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_0744d984;
    in_x10 = (long)(int)*(uint *)(unaff_x21 + 0x18);
    in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x21 + 0x18);
  } while( true );
}


