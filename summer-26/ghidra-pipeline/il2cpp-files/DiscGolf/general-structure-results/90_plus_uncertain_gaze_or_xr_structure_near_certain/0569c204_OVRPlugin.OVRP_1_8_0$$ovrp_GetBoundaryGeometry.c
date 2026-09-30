/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 0569c204
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x780));
  FUN_02d965b8(Oculus_Platform_Request<CowatchingState>_TypeInfo);
  FUN_02d965b8(Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo);
  *(undefined1 *)(unaff_x27 + 0x87c) = 1;
  uVar1 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_0400f9fc(uVar1,0x10,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x10),uVar1);
  uVar1 = thunk_FUN_02dd3144(*unaff_x25);
  FUN_0400f9fc(uVar1,0x10,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x18),uVar1);
  uVar1 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_0400f9fc(uVar1,0x10,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x20),uVar1);
  FUN_0552aca4();
  if ((unaff_x20 & 1) != 0) {
    uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                Oculus_Platform_Request<InvitePanelResultInfo>_TypeInfo);
    FUN_055ee9cc(uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x28),uVar1);
    return;
  }
  return;
}


