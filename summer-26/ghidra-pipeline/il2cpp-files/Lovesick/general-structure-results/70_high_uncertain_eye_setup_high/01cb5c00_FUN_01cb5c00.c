/*
FUNCTION_NAME: FUN_01cb5c00
ENTRY_POINT: 01cb5c00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01cb5c00(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_0377ee34 & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_TransformFeature_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11668);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_Internal_ForwardLights_TypeInfo);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_9106);
    DAT_0377ee34 = 1;
  }
  if (param_2 != 0) {
    if (3 < *(uint *)(param_2 + 0x28)) {
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar1 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_0177134c(uVar1,0);
      uVar2 = thunk_FUN_00d48444(StringLiteral_3572);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar1,uVar2);
    }
    if (param_1[2] != 0) {
      FUN_0160c430(param_1[2],*(undefined8 *)(&PTR_DAT_0328c808)[(int)*(uint *)(param_2 + 0x28)],0);
      if (param_1[2] != 0) {
        FUN_0160cd0c(param_1[2],0x20,0);
        FUN_01cb5b40(param_1,*(undefined8 *)(param_2 + 0x20));
        if (*(long *)(param_2 + 0x18) == 0) {
          return param_2;
        }
        if (param_1[2] != 0) {
          FUN_0160c430(param_1[2],
                       *(undefined8 *)
                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__,0);
          (**(code **)(*param_1 + 0x178))
                    (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(*param_1 + 0x180));
          if (param_1[2] != 0) {
            FUN_0160c430(param_1[2],*(undefined8 *)StringLiteral_12935,0);
            return param_2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


