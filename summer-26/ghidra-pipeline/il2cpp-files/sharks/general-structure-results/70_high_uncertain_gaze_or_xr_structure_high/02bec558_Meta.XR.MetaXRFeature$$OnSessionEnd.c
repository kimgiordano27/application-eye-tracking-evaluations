/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 02bec558
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionEnd(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  
  FUN_017fc350();
  *(undefined1 *)(unaff_x21 + 0xd1a) = 1;
  puVar2 = PTR_DAT_03806300;
  if (unaff_x20 != 0) {
    if (DAT_03a23d94 == '\0') {
      FUN_017fc350(PTR_DAT_037fb110);
      DAT_03a23d94 = '\x01';
    }
    uVar3 = FUN_02a4e620();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    uVar4 = FUN_02b844b4();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)puVar2);
    }
    FUN_02bda298(uVar3,uVar1,7,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02be0698(0x30);
}


