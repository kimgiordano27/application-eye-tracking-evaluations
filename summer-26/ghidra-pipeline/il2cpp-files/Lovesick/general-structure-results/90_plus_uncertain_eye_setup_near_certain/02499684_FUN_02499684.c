/*
FUNCTION_NAME: FUN_02499684
ENTRY_POINT: 02499684
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02499684(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = StringLiteral_13859;
  if ((DAT_037825e5 & 1) == 0) {
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector4>_ResizeUninitialized__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Controls_TouchPressControl_FinishSetup__);
    thunk_FUN_00d48444(StringLiteral_12675);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_12__
                      );
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__);
    thunk_FUN_00d48444(Method_System_Char_System_IConvertible_ToDecimal__);
    thunk_FUN_00d48444(Mono_Security_Interface_MonoTlsProvider_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13859);
    DAT_037825e5 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__;
  if (lVar2 != 0) {
    FUN_01298da0(lVar2,*(undefined8 *)
                        Method_UnityEngine_InputSystem_Controls_TouchPressControl_FinishSetup__);
    *(long *)(param_1 + 0x10) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Char_System_IConvertible_ToDecimal__;
    if (lVar2 != 0) {
      FUN_01298da0(lVar2,*(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_12__
                  );
      *(long *)(param_1 + 0x18) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Mono_Security_Interface_MonoTlsProvider_TypeInfo;
      if (lVar2 != 0) {
        FUN_01298da0(lVar2,*(undefined8 *)StringLiteral_12675);
        *(long *)(param_1 + 0x20) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_01298da0(lVar2,*(undefined8 *)Method_Obi_ObiNativeList<Vector4>_ResizeUninitialized__)
          ;
          *(long *)(param_1 + 0x28) = lVar2;
          FUN_017b46ec(param_1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


