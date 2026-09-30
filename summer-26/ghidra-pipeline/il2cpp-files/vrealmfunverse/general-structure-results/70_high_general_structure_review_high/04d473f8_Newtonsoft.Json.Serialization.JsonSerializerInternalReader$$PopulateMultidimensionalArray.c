/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 04d473f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack0000000000000008;
  
  puVar1 = PTR_DAT_06332540;
  if ((DAT_066c86b7 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06332620);
    FUN_02b3c81c(PTR_DAT_063325d0);
    FUN_02b3c81c(PTR_DAT_06332628);
    FUN_02b3c81c(PTR_DAT_06312bb0);
    FUN_02b3c81c(PTR_DAT_06332630);
    FUN_02b3c81c(PTR_DAT_06332638);
    FUN_02b3c81c(PTR_DAT_06332540);
    DAT_066c86b7 = 1;
  }
  thunk_FUN_02bb0e9c();
  lVar3 = *(long *)puVar1;
  uStack0000000000000008 = CONCAT44(param_4,param_3);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[8];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063325d0);
    FUN_049c9b50(lVar6,uVar7,*(undefined8 *)PTR_DAT_06332630,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    *plVar4 = lVar6;
    thunk_FUN_02bb0e9c(plVar4,lVar6);
    lVar3 = *(long *)puVar1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_06332628;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar5[9];
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06332620);
    FUN_049c6b90(lVar8,uVar7,*(undefined8 *)PTR_DAT_06332638,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
    *plVar4 = lVar8;
    thunk_FUN_02bb0e9c(plVar4,lVar8);
  }
  FUN_02e77b50(param_1,param_2,uStack0000000000000008,lVar6,lVar8,*(undefined8 *)puVar2);
  return;
}


