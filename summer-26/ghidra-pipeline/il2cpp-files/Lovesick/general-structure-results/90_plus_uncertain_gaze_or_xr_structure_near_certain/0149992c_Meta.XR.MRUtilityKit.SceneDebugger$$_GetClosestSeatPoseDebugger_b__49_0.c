/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__49_0
ENTRY_POINT: 0149992c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_8;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__49_0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined2 uStack000000000000000c;
  
  if ((*(byte *)(unaff_x20 + 0xc66) & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_7073);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GlyphRect>__ctor__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                      );
    *(undefined1 *)(unaff_x20 + 0xc66) = 1;
  }
  uStack000000000000000c = 0;
  uVar3 = FUN_015ff8a0(param_1,0);
  puVar2 = StringLiteral_7073;
  puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_02020414(param_1,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
    puVar2 = Method_System_Collections_Generic_List<GlyphRect>__ctor__;
    puVar1 = Newtonsoft_Json_JsonReader_State_TypeInfo;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uStack000000000000000c = FUN_015fa29c(lVar5,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar4 = FUN_016e8b00(&stack0x0000000c,0);
    uVar3 = FUN_0201fbe8(uVar4,*(undefined8 *)puVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_015f5b28(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_TryGetValue__
                           ,lVar5,0);
    }
  }
  else {
    lVar5 = **(long **)(*(long *)
                         System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                       + 0xb8);
  }
  return lVar5;
}


