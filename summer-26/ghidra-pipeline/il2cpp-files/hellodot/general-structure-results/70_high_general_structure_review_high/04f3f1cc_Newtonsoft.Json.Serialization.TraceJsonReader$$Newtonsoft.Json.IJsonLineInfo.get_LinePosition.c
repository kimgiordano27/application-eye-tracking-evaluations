/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.TraceJsonReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 04f3f1cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (long param_1,long param_2,uint param_3)

{
  bool in_ZR;
  undefined1 in_w8;
  
  *(undefined1 *)(param_2 + 6) = in_w8;
  if (!in_ZR) {
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 7);
    if (8 < param_3) {
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 8);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


