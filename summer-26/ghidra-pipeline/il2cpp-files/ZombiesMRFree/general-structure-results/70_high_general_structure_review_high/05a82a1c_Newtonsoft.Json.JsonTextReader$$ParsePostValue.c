/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 05a82a1c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonTextReader__ParsePostValue(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *in_x9;
  undefined8 uVar4;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  uVar4 = *param_1;
  uVar1 = thunk_FUN_0301080c(*in_x9);
  FUN_057cb520(uVar1,uVar4,*(undefined8 *)PTR_DAT_06faa378,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_03048534(puVar2,uVar1);
  lVar3 = thunk_FUN_0301080c(*unaff_x27);
  Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnDestroy();
  uVar1 = thunk_FUN_0301080c(*unaff_x25);
  FUN_057cb398();
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    thunk_FUN_03048534((undefined8 *)(lVar3 + 0x30),uVar1);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


