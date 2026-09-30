/*
FUNCTION_NAME: OVRTelemetryMarker$$get_IsBatchMode
ENTRY_POINT: 01a7b918
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryMarker__get_IsBatchMode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x24;
  
  thunk_FUN_00d32864();
  uVar4 = FUN_01a4ff0c();
  lVar5 = thunk_FUN_00d62348(*unaff_x21);
  puVar2 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (lVar5 != 0) {
    FUN_01a7e5c0(lVar5,uVar4,0);
    *(long *)(unaff_x19 + 0x18) = lVar5;
    uVar6 = FUN_017b4f64(uVar4,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0x18);
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    puVar1 = GoogleSheetsToUnity_GoogleAuthrisationHelper_TypeInfo;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01a4ff88();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
    bVar3 = FUN_01a50004();
    *(byte *)(unaff_x19 + 0x28) = bVar3 & 1;
    uVar4 = FUN_01a50088();
    *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
    uVar4 = OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming();
    *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
    uVar4 = FUN_01a50230();
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      FUN_01a7dbcc(lVar5,uVar4,0);
      *(long *)(unaff_x19 + 0x48) = lVar5;
      uVar6 = FUN_017b4f64(uVar4,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
      if ((uVar6 & 1) == 0) {
        *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x48);
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x40) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


