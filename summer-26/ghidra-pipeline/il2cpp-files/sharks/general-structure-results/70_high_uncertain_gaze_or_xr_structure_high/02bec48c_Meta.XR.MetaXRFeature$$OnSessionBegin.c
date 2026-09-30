/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 02bec48c
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


void Meta_XR_MetaXRFeature__OnSessionBegin(ulong param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03806300);
    *(undefined1 *)(unaff_x20 + 0xd19) = 1;
  }
  puVar2 = PTR_DAT_03806300;
  if (param_2 != 0) {
    if (DAT_03a23d94 == '\0') {
      FUN_017fc350(PTR_DAT_037fb110);
      DAT_03a23d94 = '\x01';
    }
    uVar3 = FUN_02a4e620(param_2,0);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    uVar4 = Oculus_Platform_Users__GetLinkedAccounts(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)puVar2);
    }
    FUN_02bda298(uVar3,uVar1,7,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02be0698(0x30);
}


