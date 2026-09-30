/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$get_RotateOverride
ENTRY_POINT: 01453920
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__get_RotateOverride
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float4>__;
  if ((DAT_03776a79 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float4>__);
    DAT_03776a79 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    FUN_014532d8(param_1,param_2,param_4,param_3,param_5 & 1,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


