/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Vector4f>
ENTRY_POINT: 020b8e34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Vector4f>(undefined8 param_1,long param_2)

{
  bool bVar1;
  int in_w9;
  long unaff_x19;
  float fVar2;
  undefined8 unaff_d8;
  float fVar3;
  float unaff_s9;
  undefined8 unaff_d10;
  float fVar4;
  
  fVar4 = *(float *)(unaff_x19 + 0x34);
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  fVar2 = (float)FUN_0375f364(1,2,0);
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  if (bVar1) {
    fVar2 = 0.0;
  }
  if (param_2 != 0) {
    fVar3 = (float)((ulong)unaff_d8 >> 0x20);
    FUN_0407d6c4((float)unaff_d8 + ((float)unaff_d10 - (float)unaff_d8) * fVar2,
                 fVar3 + ((float)((ulong)unaff_d10 >> 0x20) - fVar3) * fVar2,
                 unaff_s9 + (fVar4 - unaff_s9) * fVar2,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


