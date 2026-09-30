/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 064784f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy(long param_1)

{
  long lVar1;
  long in_x9;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
    in_x9 = *(long *)(unaff_x21 + 0x20);
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) {
    (*(code *)**(undefined8 **)(*(long *)(in_x9 + 0xc0) + 0x30))();
    in_x9 = *(long *)(unaff_x21 + 0x20);
  }
  lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
    in_x9 = *(long *)(unaff_x21 + 0x20);
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
      in_x9 = *(long *)(unaff_x21 + 0x20);
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) != 0) {
      lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03ac4090();
      }
      if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x064785cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68))();
        return;
      }
      goto LAB_0647861c;
    }
  }
  lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x06478618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40))();
    return;
  }
LAB_0647861c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


