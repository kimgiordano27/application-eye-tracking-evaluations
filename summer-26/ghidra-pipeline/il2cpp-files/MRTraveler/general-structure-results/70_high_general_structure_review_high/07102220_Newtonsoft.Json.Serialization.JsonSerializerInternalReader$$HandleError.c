/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HandleError
ENTRY_POINT: 07102220
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


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HandleError(undefined1 param_1 [16])

{
  undefined *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  if ((DAT_0941c198 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6bcb8);
    DAT_0941c198 = 1;
  }
  puVar1 = PTR_DAT_08e6bcb8;
  fVar4 = param_1._0_4_;
  fVar7 = -2.1474836e+09;
  if (fVar4 != INFINITY) {
    fVar7 = (float)(int)fVar4;
  }
  if (fVar7 != fVar4) {
    if (*(int *)(*(long *)PTR_DAT_08e6bcb8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar7 = (float)(int)(fVar4 + 0.5);
    if ((float)(int)fVar4 + 0.5 == fVar4) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      fVar2 = fmodf(fVar7,2.0);
      if (fVar2 != 0.0) {
        fVar7 = fVar7 + -1.0;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = (ulong)(uint)-fVar7;
    uVar6 = 0;
    if (-1 < (int)((uint)fVar7 ^ (uint)fVar4)) {
      uVar5 = (ulong)(uint)fVar7;
      uVar6 = 0;
    }
  }
  auVar3._8_8_ = uVar6;
  auVar3._0_8_ = uVar5;
  return auVar3;
}


