/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 06c73958
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x06c73a1c) */

void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xc) * 0x10 + 0x138);
LAB_06c7398c:
      (*(code *)*puVar1)();
      if (unaff_x22 != 0) {
        FUN_06dd225c();
      }
      plVar2 = (long *)(unaff_x20 + 0x80);
      if (*plVar2 == unaff_x21) {
        *plVar2 = 0;
        thunk_FUN_0329bf60(plVar2,0);
      }
      lVar3 = *(long *)(unaff_x20 + 0x58);
      if (lVar3 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x06c739fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_0322c1e8();
      goto LAB_06c7398c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


