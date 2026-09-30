/*
FUNCTION_NAME: FUN_024e88c8
ENTRY_POINT: 024e88c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024e88c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = StringLiteral_4863;
  if ((DAT_037827bb & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_12__
                      );
    thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__);
    thunk_FUN_00d48444(StringLiteral_5437);
    thunk_FUN_00d48444(StringLiteral_1259);
    thunk_FUN_00d48444(StringLiteral_4863);
    DAT_037827bb = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = StringLiteral_1259;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_OVRTask_FromResult<OVRResult<ulong,_OVRPlugin_Result>>__;
    if (lVar3 != 0) {
      FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_5437);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_01298da0(lVar3,*(undefined8 *)
                            Method_UnityEngine_Experimental_Rendering_ProbeReferenceVolume_<RegisterDebug>b__119_12__
                    );
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


