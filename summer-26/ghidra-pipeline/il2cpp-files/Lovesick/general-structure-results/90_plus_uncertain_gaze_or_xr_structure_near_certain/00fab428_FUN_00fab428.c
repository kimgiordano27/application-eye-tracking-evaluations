/*
FUNCTION_NAME: FUN_00fab428
ENTRY_POINT: 00fab428
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_00fab428(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_28;
  
  puVar2 = StringLiteral_949;
  puVar1 = 
  Field_<PrivateImplementationDetails>_CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
  ;
  if ((DAT_037759eb & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_949);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Powers_Tune_TunePower_ButtonReleased__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Type>_Clear__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiBone_IgnoredBone>_get_Count__);
    thunk_FUN_00d48444(Meta_Voice_Logging_LoggerRegistry_<>c__DisplayClass35_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1588);
    thunk_FUN_00d48444(Method_UnityEngine_CubemapArray_ValidateIsNotCrunched__);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_DebugData_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
                      );
    DAT_037759eb = 1;
  }
  FUN_010c2c5c(param_1,&local_28,*(undefined8 *)puVar2);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (FUN_00f8f8b0(lVar3,param_1,
                   *(undefined8 *)Method_RCG_Lovesick_Powers_Tune_TunePower_ButtonReleased__,0),
     local_28 != 0)) {
    FUN_00f79df4(local_28,lVar3,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_00f8f8b0(lVar3,param_1,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<Type>_Clear__,0);
      FUN_00f79f34(local_28,lVar3,0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_00f8f8b0(lVar3,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<ObiBone_IgnoredBone>_get_Count__,0);
        FUN_00f7a2f4(local_28,lVar3,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          FUN_00f8f8b0(lVar3,param_1,
                       *(undefined8 *)
                        Meta_Voice_Logging_LoggerRegistry_<>c__DisplayClass35_0_TypeInfo,0);
          FUN_00f7aa74(local_28,lVar3,0);
          if (*(char *)(param_1 + 0x18) != '\0') {
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar3 == 0) goto LAB_00fab6dc;
            FUN_00f8f8b0(lVar3,param_1,*(undefined8 *)PTR_DAT_033f1588,0);
            FUN_00f7a434(local_28,lVar3,0);
            if (*(char *)(param_1 + 0x18) != '\0') {
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar3 == 0) goto LAB_00fab6dc;
              FUN_00f8f8b0(lVar3,param_1,
                           *(undefined8 *)Method_UnityEngine_CubemapArray_ValidateIsNotCrunched__,0)
              ;
              FUN_00f7a574(local_28,lVar3,0);
            }
          }
          if (*(char *)(param_1 + 0x19) != '\0') {
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar3 == 0) goto LAB_00fab6dc;
            FUN_00f8f8b0(lVar3,param_1,*(undefined8 *)Meta_XR_ImmersiveDebugger_DebugData_TypeInfo,0
                        );
            FUN_00f7a6b4(local_28,lVar3,0);
            if (*(char *)(param_1 + 0x19) != '\0') {
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar3 == 0) goto LAB_00fab6dc;
              FUN_00f8f8b0(lVar3,param_1,
                           *(undefined8 *)
                            Method_OVRTask<OVRPlugin_Result>_TryGetInternalData<IList<OVRAnchor>>__,
                           0);
              FUN_00f7a7f4(local_28,lVar3,0);
            }
          }
          return;
        }
      }
    }
  }
LAB_00fab6dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


