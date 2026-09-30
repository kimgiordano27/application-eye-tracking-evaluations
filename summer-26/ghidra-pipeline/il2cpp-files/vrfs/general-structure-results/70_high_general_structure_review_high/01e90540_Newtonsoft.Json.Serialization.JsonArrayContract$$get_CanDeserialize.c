/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_CanDeserialize
ENTRY_POINT: 01e90540
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01e905d4) */

undefined4 Newtonsoft_Json_Serialization_JsonArrayContract__get_CanDeserialize(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar2;
  float unaff_s8;
  float fVar3;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  fVar3 = *(float *)(unaff_x19 + 0x28);
  (**(code **)(*unaff_x20 + 0x228))();
  if (unaff_s8 < fVar3) {
    fVar3 = *(float *)(unaff_x19 + 0x50) / *(float *)(unaff_x19 + 0x28);
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    uVar2 = 1;
    (**(code **)(*unaff_x20 + 0x208))
              (*(undefined4 *)(unaff_x19 + 0x2c),*(undefined4 *)(unaff_x19 + 0x30),
               *(undefined4 *)(unaff_x19 + 0x34),*(undefined4 *)(unaff_x19 + 0x38),
               *(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40),fVar3);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x18),0);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  else {
    (**(code **)(*unaff_x20 + 0x208))
              (*(undefined4 *)(unaff_x19 + 0x2c),*(undefined4 *)(unaff_x19 + 0x30),
               *(undefined4 *)(unaff_x19 + 0x34),*(undefined4 *)(unaff_x19 + 0x38),
               *(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40),0x3f800000);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
    uVar2 = 0;
  }
  return uVar2;
}


