/*
FUNCTION_NAME: System.Xml.XmlUtf8RawTextWriter$$WriteRaw
ENTRY_POINT: 055308a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_XmlUtf8RawTextWriter__WriteRaw(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x38);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    do {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x19 + 0x28)) {
        thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
        uVar1 = thunk_FUN_02d9d534();
        uVar2 = thunk_FUN_02dc61f4(
                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                  );
        FUN_05007004(uVar1,uVar2,0);
        uVar2 = thunk_FUN_02dc61f4(
                                  System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar1,uVar2);
      }
    } while (lVar4 != lVar3);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782488);
    FUN_0552a834();
  }
  FUN_0552ecc8();
  return;
}


