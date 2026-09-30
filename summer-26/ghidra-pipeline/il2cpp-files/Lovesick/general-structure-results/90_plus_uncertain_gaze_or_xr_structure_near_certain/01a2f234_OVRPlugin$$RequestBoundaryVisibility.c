/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 01a2f234
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  thunk_FUN_00d48444(StringLiteral_6246);
  thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
  *(undefined1 *)(unaff_x24 + 0xbd4) = 1;
  uVar1 = FUN_00da4fb8(*unaff_x25,0x1a);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  uVar1 = FUN_00da4fb8(*unaff_x21,0x1a);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  uVar1 = FUN_00da4fb8(*unaff_x23,0x1a);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  uVar1 = FUN_00da4fb8(*unaff_x22,5);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  uVar1 = FUN_00da4fb8(*unaff_x22,5);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  uVar1 = FUN_00da4fb8(*unaff_x21,5);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  lVar2 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(long *)(unaff_x19 + 0x98) = lVar2;
    FUN_017b46ec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


