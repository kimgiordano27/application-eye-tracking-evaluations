/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$RefreshLayoutPostChildren
ENTRY_POINT: 04da9594
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__RefreshLayoutPostChildren(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar3;
  
  do {
    puVar1 = (undefined8 *)(unaff_x23 + unaff_x22 * 0x10);
    uVar3 = *puVar1;
    unaff_x22 = unaff_x22 + 1;
    unaff_x24[1] = puVar1[1];
    *unaff_x24 = uVar3;
    if ((long)*(int *)(unaff_x21 + 0x80) <= (long)unaff_x22) {
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    unaff_x24 = unaff_x24 + 2;
  } while (unaff_x22 < *(uint *)(unaff_x20 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


