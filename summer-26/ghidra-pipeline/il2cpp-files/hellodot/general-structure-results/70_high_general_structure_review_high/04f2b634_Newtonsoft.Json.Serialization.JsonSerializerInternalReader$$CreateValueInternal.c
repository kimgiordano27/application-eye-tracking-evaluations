/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 04f2b634
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal(long param_1)

{
  undefined4 uVar1;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  
  if (in_w8 == in_w9) {
    in_w8 = (uint)*(ushort *)(param_1 + 6);
    in_w9 = (uint)*(ushort *)(unaff_x19 + 6);
    if (in_w8 == in_w9) {
      in_w8 = (uint)*(byte *)(param_1 + 8);
      in_w9 = (uint)*(byte *)(unaff_x19 + 8);
      if (in_w8 == in_w9) {
        in_w8 = (uint)*(byte *)(param_1 + 9);
        in_w9 = (uint)*(byte *)(unaff_x19 + 9);
        if (in_w8 == in_w9) {
          in_w8 = (uint)*(byte *)(param_1 + 10);
          in_w9 = (uint)*(byte *)(unaff_x19 + 10);
          if (in_w8 == in_w9) {
            in_w8 = (uint)*(byte *)(param_1 + 0xb);
            in_w9 = (uint)*(byte *)(unaff_x19 + 0xb);
            if (in_w8 == in_w9) {
              in_w8 = (uint)*(byte *)(param_1 + 0xc);
              in_w9 = (uint)*(byte *)(unaff_x19 + 0xc);
              if (in_w8 == in_w9) {
                in_w8 = (uint)*(byte *)(param_1 + 0xd);
                in_w9 = (uint)*(byte *)(unaff_x19 + 0xd);
                if (in_w8 == in_w9) {
                  in_w8 = (uint)*(byte *)(param_1 + 0xe);
                  in_w9 = (uint)*(byte *)(unaff_x19 + 0xe);
                  if (in_w8 == in_w9) {
                    in_w8 = (uint)*(byte *)(param_1 + 0xf);
                    in_w9 = (uint)*(byte *)(unaff_x19 + 0xf);
                    if (in_w8 == in_w9) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 1;
  if (in_w9 < in_w8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


