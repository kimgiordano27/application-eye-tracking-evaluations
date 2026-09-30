/*
FUNCTION_NAME: FUN_01ab5db8
ENTRY_POINT: 01ab5db8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 FUN_01ab5db8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_000009FD_PostfixBurstDelegate_var
  ;
  if ((DAT_0377cea1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_9__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ThenBy<KerningPair,_uint>__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_000009FD_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RendererList>__ctor__);
    DAT_0377cea1 = 1;
  }
  uVar3 = thunk_FUN_015fe514(param_2,*(undefined8 *)puVar1,0);
  puVar2 = StringLiteral_302;
  puVar1 = Method_System_Collections_Generic_List<RendererList>__ctor__;
  if ((uVar3 & 1) == 0) {
    uVar3 = thunk_FUN_015fe514(param_2,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_9__,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_015fe514(param_2,*(undefined8 *)
                                          Method_System_Linq_Enumerable_ThenBy<KerningPair,_uint>__,
                                 0);
      uVar4 = FUN_015f5b28(*(undefined8 *)puVar1,param_2,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
      }
      FUN_026610e4(uVar4,0);
      uVar5 = 3;
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar4 = FUN_015f5b28(*(undefined8 *)puVar1,param_2,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
      }
      FUN_026610e4(uVar4,0);
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


