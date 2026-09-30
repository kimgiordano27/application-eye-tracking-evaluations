/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 05ac8a80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty(void)

{
  ulong uVar1;
  uint in_w8;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x23;
  
  if ((int)in_w8 < 1) {
    return;
  }
  lVar2 = (long)(int)in_w8;
  if (lVar2 - 1U < (ulong)in_w8) {
    lVar3 = unaff_x23 + lVar2 * 0x18 + 0x10;
    do {
      if ((*(long *)(lVar3 + -8) != 0) && (*(long *)(lVar3 + -8) != unaff_x23)) {
        (**(code **)(*unaff_x19 + 0x308))();
      }
      uVar1 = lVar2 - 2;
      if (lVar2 < 2) {
        return;
      }
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + -0x18;
    } while (uVar1 < *(uint *)(unaff_x23 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


