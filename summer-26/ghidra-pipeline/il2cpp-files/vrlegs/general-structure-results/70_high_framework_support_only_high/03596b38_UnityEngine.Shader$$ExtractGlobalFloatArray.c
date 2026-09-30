/*
FUNCTION_NAME: UnityEngine.Shader$$ExtractGlobalFloatArray
ENTRY_POINT: 03596b38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Shader__ExtractGlobalFloatArray(ulong param_1,long param_2)

{
  undefined *puVar1;
  int unaff_w20;
  int iVar2;
  int iVar3;
  long unaff_x21;
  int iVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x9a) = 1;
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  if (unaff_w20 == 1) {
    iVar2 = *(int *)(param_2 + 8);
    iVar4 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    if (3 < iVar2) {
      iVar4 = iVar4 >> 2;
      iVar3 = iVar4 * 4;
      iVar2 = 0;
      do {
        iVar3 = iVar3 + -4;
        if (iVar2 < iVar3) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_03596bd4(param_2,iVar2,iVar3);
        }
        iVar4 = iVar4 + -1;
        iVar2 = iVar2 + 4;
      } while (iVar4 != 0);
    }
  }
                    /* try { // try from 03596bc4 to 03696de3 has its CatchHandler @ 03596bc4
                       catch() { ... } // from try @ 03596bc4 with catch @ 03596bc4
                       catch() { ... } // from try @ 03596e98 with catch @ 03596bc4
                       catch() { ... } // from try @ 03596fa8 with catch @ 03596bc4
                       catch() { ... } // from try @ 035970dc with catch @ 03596bc4
                       catch() { ... } // from try @ 035971f0 with catch @ 03596bc4
                       catch() { ... } // from try @ 0359723c with catch @ 03596bc4
                       catch() { ... } // from try @ 035972c0 with catch @ 03596bc4
                       catch() { ... } // from try @ 03597310 with catch @ 03596bc4
                       catch() { ... } // from try @ 03597324 with catch @ 03596bc4
                       catch() { ... } // from try @ 03597370 with catch @ 03596bc4
                       catch() { ... } // from try @ 03597394 with catch @ 03596bc4
                       catch() { ... } // from try @ 035973e0 with catch @ 03596bc4
                       catch() { ... } // from try @ 03597404 with catch @ 03596bc4
                       catch() { ... } // from try @ 03597448 with catch @ 03596bc4 */
  return;
}


