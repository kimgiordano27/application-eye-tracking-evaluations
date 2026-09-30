/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 04dae24c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren
               (long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long in_stack_00000088;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x1b0));
  *(undefined1 *)(unaff_x24 + 0x9d0) = 1;
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x1f0);
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d3 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d3 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  memcpy(&stack0x00000000,unaff_x20,0x80);
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar1 = FUN_04dab938();
  iVar1 = FUN_0609d588((long)unaff_x20 + 2,unaff_x19 + 2,(long)iVar1,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000088) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


