/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 05abed6c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  
  lVar2 = *unaff_x21;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x1c) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x20));
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x10) + 0x20) == 0) {
        *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


