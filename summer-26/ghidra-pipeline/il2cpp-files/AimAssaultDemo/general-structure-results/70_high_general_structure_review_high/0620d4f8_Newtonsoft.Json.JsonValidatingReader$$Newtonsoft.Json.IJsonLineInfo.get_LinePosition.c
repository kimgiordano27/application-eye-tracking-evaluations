/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 0620d4f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
          (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint unaff_w24;
  long unaff_x26;
  long *unaff_x29;
  
  FUN_044a4038();
  puVar1 = (undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x30);
  *puVar1 = param_1;
  thunk_FUN_037aeb94(puVar1,param_1);
                    /* try { // try from 0620d52c to 0630d5af has its CatchHandler @ 0620d52c
                       catch() { ... } // from try @ 0620d52c with catch @ 0620d52c
                       catch() { ... } // from try @ 0620d63c with catch @ 0620d52c
                       catch() { ... } // from try @ 0620d6c4 with catch @ 0620d52c
                       catch() { ... } // from try @ 0620d768 with catch @ 0620d52c */
  uVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dadd80);
  FUN_0620c6a4(uVar2,0,unaff_w24 & 1,param_1);
  if (unaff_x26 == 0) {
    FUN_0620c9b0();
  }
  else {
    FUN_0620c828();
  }
  return uVar2;
}


