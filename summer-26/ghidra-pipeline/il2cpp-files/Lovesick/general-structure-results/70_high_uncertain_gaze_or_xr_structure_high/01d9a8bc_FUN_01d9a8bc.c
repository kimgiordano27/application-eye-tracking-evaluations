/*
FUNCTION_NAME: FUN_01d9a8bc
ENTRY_POINT: 01d9a8bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


uint FUN_01d9a8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_0377f6cc & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                      );
    thunk_FUN_00d48444(System_Buffers_ArrayPool<byte>_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__);
    DAT_0377f6cc = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar2 = FUN_01d98168(param_2,param_3);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) != 0)) {
    uVar3 = thunk_FUN_015fe514(lVar2,*(undefined8 *)System_Buffers_ArrayPool<byte>_TypeInfo,0);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = thunk_FUN_015fe514(lVar2,*(undefined8 *)
                                          Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__
                                   ,0), (uVar3 & 1) == 0)) {
      uVar3 = thunk_FUN_015fe514(lVar2,*(undefined8 *)
                                        DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                                 ,0);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = thunk_FUN_015fe514(lVar2,*(undefined8 *)
                                            Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__,0)
         , (uVar3 & 1) == 0)) {
        uVar4 = FUN_01d34814(param_3,lVar2,0);
        uVar5 = thunk_FUN_00d48444(
                                  Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar4,uVar5);
      }
      param_4 = 0;
    }
    else {
      param_4 = 1;
    }
  }
  return param_4 & 1;
}


