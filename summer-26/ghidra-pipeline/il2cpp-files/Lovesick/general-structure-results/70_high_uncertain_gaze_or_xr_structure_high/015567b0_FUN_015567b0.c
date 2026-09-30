/*
FUNCTION_NAME: FUN_015567b0
ENTRY_POINT: 015567b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_015567b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_03777b7e & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_Posef_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_IXRReticleDirectionProvider_TypeInfo);
    thunk_FUN_00d48444(System_Xml_BinXmlDateTime_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<RenderMode>__ctor__);
    DAT_03777b7e = 1;
  }
  puVar1 = UnityEngine_XR_Interaction_Toolkit_IXRReticleDirectionProvider_TypeInfo;
  if (DAT_03777bf4 == '\0') {
    thunk_FUN_00d48444(StringLiteral_7267);
    DAT_03777bf4 = '\x01';
  }
  **(long **)(*(long *)StringLiteral_7267 + 0xb8) = param_1;
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (FUN_011c181c(lVar2,param_1,*(undefined8 *)System_Xml_BinXmlDateTime_TypeInfo,0),
     puVar1 = OVRPlugin_Posef_TypeInfo, lVar3 != 0)) {
    FUN_0153f804(lVar3,lVar2,0);
    lVar3 = *(long *)(param_1 + 0x30);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar2 != 0) &&
       (FUN_011c181c(lVar2,param_1,*(undefined8 *)Method_System_Nullable<RenderMode>__ctor__,0),
       lVar3 != 0)) {
      FUN_0153fac4(lVar3,lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


