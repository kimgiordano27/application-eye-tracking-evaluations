/*
FUNCTION_NAME: AlterEyes.Common.Math.VectorHelper$$GetClosestRaycastHit
ENTRY_POINT: 03fadea8
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;keyword_support
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;strong_file_logging_hits_2;eye_or_gaze_keyword_boost_only
*/


void AlterEyes_Common_Math_VectorHelper__GetClosestRaycastHit(long *param_1)

{
  undefined1 uVar1;
  long in_x9;
  undefined8 *in_x10;
  undefined8 *in_x11;
  long in_x12;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x90) = in_x11[1];
  uVar1 = *(undefined1 *)(in_x11 + 3);
  *(undefined8 *)(unaff_x19 + 0x98) = in_x11[2];
  *(undefined1 *)(unaff_x19 + 0xa0) = uVar1;
  *(undefined2 *)(unaff_x19 + 0xa1) = *(undefined2 *)((long)in_x11 + 0x19);
  lVar3 = in_x11[-0xc];
  if (lVar3 == 0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x18) - lVar3;
      lVar2 = *(long *)(unaff_x20 + 0x20) - lVar3;
      if (lVar3 == *(long *)(unaff_x20 + 0x68)) {
        *(long *)(unaff_x19 + 0x10) = in_x12;
        *(long *)(unaff_x19 + 0x18) = in_x12 + lVar4;
        *(long *)(unaff_x19 + 0x20) = in_x12 + lVar2;
      }
      else {
        *(long *)(unaff_x19 + 0x10) = in_x9;
        *(long *)(unaff_x19 + 0x18) = in_x9 + lVar4;
        *(long *)(unaff_x19 + 0x20) = in_x9 + lVar2;
      }
    }
  }
  else {
    if (lVar3 != *(long *)(unaff_x20 + 0x68)) {
      in_x12 = in_x9;
    }
    lVar2 = *(long *)(unaff_x20 + 0x38);
    *(long *)(unaff_x19 + 0x28) = in_x12;
    *(long *)(unaff_x19 + 0x30) = in_x12;
    *(long *)(unaff_x19 + 0x30) =
         in_x12 + (*(long *)(unaff_x20 + 0x30) - *(long *)(unaff_x20 + 0x28));
    *(long *)(unaff_x19 + 0x38) = in_x12 + (lVar2 - lVar3);
  }
  param_1[8] = 0;
  in_x11[1] = 0;
  in_x11[2] = 0;
  *in_x11 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  in_x10[1] = 0;
  *in_x10 = 0;
  in_x10[3] = 0;
  in_x10[2] = 0;
  *(undefined2 *)(in_x11 + 3) = 0;
  return;
}


