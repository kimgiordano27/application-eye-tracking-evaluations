/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$SerializeInternal
ENTRY_POINT: 0718d474
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__SerializeInternal
          (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    FUN_03d2d2b0(PTR_DAT_091dad78);
    *(undefined1 *)(unaff_x25 + 0x68) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (DAT_09842bf7 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    DAT_09842bf7 = '\x01';
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar1 = *unaff_x24;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    uVar2 = FUN_0718d568(param_2,param_3);
    return uVar2;
  }
  if ((int)param_3 == 0) {
    return 0;
  }
  if (unaff_x22 != 0) {
    uVar2 = thunk_FUN_0710d31c();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


