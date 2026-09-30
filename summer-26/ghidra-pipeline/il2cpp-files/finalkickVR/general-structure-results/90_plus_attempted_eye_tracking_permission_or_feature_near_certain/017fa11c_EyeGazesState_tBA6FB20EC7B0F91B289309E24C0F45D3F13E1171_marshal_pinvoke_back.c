/*
FUNCTION_NAME: EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke_back
ENTRY_POINT: 017fa11c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke_back
               (long *param_1,void **param_2)

{
  undefined *puVar1;
  void **ppvVar2;
  void *pvVar3;
  EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC *pEVar4;
  long lVar5;
  undefined1 auStack_50 [36];
  int local_2c;
  undefined8 local_28;
  void **local_20;
  long *local_18;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_2F60A552A1E8068E1716EF882A4FAA8F6F70C4D7E0BEBCD31BC64C432CCE80B0
  ;
  local_20 = param_2;
  local_18 = param_1;
  if ((EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke_back::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2F60A552A1E8068E1716EF882A4FAA8F6F70C4D7E0BEBCD31BC64C432CCE80B0
              );
    EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke_back::
    s_Il2CppMethodInitialized = 1;
  }
  if (*local_18 != 0) {
    if (*local_20 == (void *)0x0) {
      pvVar3 = (void *)SZArrayNew(*(Il2CppClass **)puVar1,1);
      ppvVar2 = local_20;
      *local_20 = pvVar3;
      pvVar3 = (void *)SZArrayNew(*(Il2CppClass **)puVar1,1);
      Il2CppCodeGenWriteBarrier(ppvVar2,pvVar3);
    }
    local_28 = *(undefined8 *)((long)*local_20 + 0x18);
    for (local_2c = 0; local_2c < (int)local_28; local_2c = local_2c + 1) {
      pEVar4 = *local_20;
      lVar5 = (long)local_2c;
      memcpy(auStack_50,(void *)(*local_18 + (long)local_2c * 0x24),0x24);
      EyeGazeStateU5BU5D_t8F18F753F2C427FE1DE7C88ABF6910A7E73793FC::SetAtUnchecked
                (pEVar4,lVar5,auStack_50);
    }
  }
  local_20[1] = (void *)local_18[1];
  return;
}


