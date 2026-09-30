/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 0532fa40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  unaff_x21[7] = unaff_x22;
  lVar2 = thunk_FUN_02f45270(*unaff_x23);
  FUN_0532fadc(lVar2,4);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02f45174(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
    uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,0);
  }
  puVar1 = System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
  if (4 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21[8] = lVar2;
    *(long **)(unaff_x20 + 0x30) = unaff_x21;
    uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_05348478(uVar4,0);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
    FUN_05116b38();
    *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


