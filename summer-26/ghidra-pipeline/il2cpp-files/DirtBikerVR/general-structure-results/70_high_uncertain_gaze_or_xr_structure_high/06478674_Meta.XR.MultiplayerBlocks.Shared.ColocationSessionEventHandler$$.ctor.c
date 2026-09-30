/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$.ctor
ENTRY_POINT: 06478674
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


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler___ctor(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long in_x9;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
    in_x9 = *(long *)(unaff_x21 + 0x20);
  }
  if (**(long **)(lVar1 + 0xb8) == 0) {
LAB_064786c0:
    (*(code *)**(undefined8 **)(*(long *)(in_x9 + 0xc0) + 0x30))();
    in_x9 = *(long *)(unaff_x21 + 0x20);
  }
  else {
    lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
      in_x9 = *(long *)(unaff_x21 + 0x20);
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x20) == 0) goto LAB_064786c0;
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
      if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) goto LAB_064787a8;
      puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70);
      goto LAB_0647878c;
    }
  }
  lVar1 = *(long *)(*(long *)(in_x9 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
LAB_064787a8:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
LAB_0647878c:
                    /* WARNING: Could not recover jumptable at 0x064787a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


