/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 02bec7c4
PROGRAM: sharks-libil2cpp.so
SCORE: 115
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXRFoveationFeature__OnSessionCreate(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03806300);
    *(undefined1 *)(unaff_x23 + 0xd1d) = 1;
  }
  FUN_02b84b0c(unaff_w20,0);
  puVar2 = PTR_DAT_03806300;
  if (unaff_x22 != 0) {
    if (DAT_03a23d94 == '\0') {
      FUN_017fc350(PTR_DAT_037fb110);
      DAT_03a23d94 = '\x01';
    }
    uVar3 = FUN_02a4e620();
    uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar4 = FUN_02b844b4();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)puVar2);
    }
    uVar3 = FUN_02bdb538(uVar3,uVar1,unaff_w20,uVar4);
    return uVar3;
  }
  *unaff_x19 = 0;
  return 0;
}


