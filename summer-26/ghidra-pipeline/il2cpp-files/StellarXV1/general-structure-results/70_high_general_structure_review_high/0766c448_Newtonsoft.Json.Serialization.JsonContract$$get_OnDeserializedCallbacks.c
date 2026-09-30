/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 0766c448
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks
          (ulong param_1,undefined8 param_2)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 *unaff_x19;
  long unaff_x21;
  long *plVar5;
  long unaff_x22;
  
  plVar5 = *(long **)(unaff_x21 + 8);
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092d6008);
    *(undefined1 *)(unaff_x22 + 0x152) = 1;
  }
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_0766f658(param_2,0);
  if ((uVar2 & 1) == 0) {
LAB_0766c4c0:
    uVar3 = 0;
  }
  else {
    if (*(int *)(*plVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    sVar1 = FUN_07670824(param_2,0);
    if (sVar1 == 0x2b) {
      uVar4 = 1;
    }
    else {
      if (sVar1 != 0x2d) goto LAB_0766c4c0;
      uVar4 = 0;
    }
    uVar3 = 1;
    *unaff_x19 = uVar4;
  }
  return uVar3;
}


