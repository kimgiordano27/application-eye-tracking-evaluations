/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 07688030
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
               (long param_1,long param_2,uint param_3)

{
  undefined1 in_w8;
  
  *(undefined1 *)(param_2 + 8) = in_w8;
  if (param_3 != 9) {
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 9);
    if (10 < param_3) {
      *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 10);
      if (param_3 != 0xb) {
        *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_1 + 0xb);
        if (0xc < param_3) {
          *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_1 + 0xc);
          if (param_3 != 0xd) {
            *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
            if (0xe < param_3) {
              *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0xe);
              if (param_3 != 0xf) {
                *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_1 + 0xf);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


