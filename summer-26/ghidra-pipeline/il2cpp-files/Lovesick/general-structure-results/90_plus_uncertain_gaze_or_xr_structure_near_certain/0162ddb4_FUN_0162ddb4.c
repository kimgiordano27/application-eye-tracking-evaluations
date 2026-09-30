/*
FUNCTION_NAME: FUN_0162ddb4
ENTRY_POINT: 0162ddb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


bool FUN_0162ddb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__;
  if ((DAT_037781d1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlEncodedRawTextWriter_InvalidXmlChar__);
    DAT_037781d1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) != 8)) {
    uVar2 = thunk_FUN_00d48444(Method_System_Xml_XmlWellFormedWriter_WriteStartAttribute__);
    uVar2 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar2,0);
    thunk_FUN_00d48444(StringLiteral_7308);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_0162d648(uVar3,uVar2);
    uVar2 = thunk_FUN_00d48444(
                              Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__67>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar2);
  }
  uVar2 = FUN_0163cc44(param_1,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
  }
  lVar4 = FUN_0162e314(uVar2);
  if (lVar4 < 0x11f011f010e010e) {
    if (lVar4 < -0x1f011f010e010e02) {
      if (lVar4 == -0x1ffe1ffe0efe0eff) {
        return true;
      }
      lVar5 = -0x1fe01fe00ef10ef2;
    }
    else {
      if (lVar4 == -0x1f011f010e010e02) {
        return true;
      }
      if (lVar4 == -0x1fe01fe01fe01ff) {
        return true;
      }
      lVar5 = -0x1e001e001f101f2;
    }
  }
  else if (lVar4 < 0x1f011f010e010e01) {
    if (lVar4 == 0x11f011f010e010e) {
      return true;
    }
    if (lVar4 == 0x1e001e001f101f1) {
      return true;
    }
    lVar5 = 0x1fe01fe01fe01fe;
  }
  else {
    if (lVar4 == 0x1f011f010e010e01) {
      return true;
    }
    if (lVar4 == 0x1fe01fe00ef10ef1) {
      return true;
    }
    lVar5 = 0x1ffe1ffe0efe0efe;
  }
  if (lVar4 == lVar5) {
    return true;
  }
  return lVar4 == -0x11f011f010e010f;
}


