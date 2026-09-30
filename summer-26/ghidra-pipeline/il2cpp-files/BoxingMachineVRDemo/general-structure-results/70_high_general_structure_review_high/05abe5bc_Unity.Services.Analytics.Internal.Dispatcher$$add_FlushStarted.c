/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushStarted
ENTRY_POINT: 05abe5bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushStarted(void)

{
  undefined8 uVar1;
  long lVar2;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  undefined8 *unaff_x25;
  
  uVar1 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_06072818(uVar1,unaff_w22,4,1,0);
  *(undefined8 *)(unaff_x20 + 8) = uVar1;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 8),uVar1);
  *(undefined4 *)(unaff_x20 + 0x30) = unaff_w22;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (*(int *)(unaff_x20 + 0x34) < unaff_w21) {
    if (lVar2 != 0) {
      thunk_FUN_060724ec(lVar2,0);
    }
  }
  else if (lVar2 != 0) goto LAB_05abe658;
  uVar1 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_06072818(uVar1,unaff_w21,4,1,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x10),uVar1);
  *(int *)(unaff_x20 + 0x34) = unaff_w21;
LAB_05abe658:
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (*(int *)(unaff_x20 + 0x38) < unaff_w19) {
    if (lVar2 != 0) {
      thunk_FUN_060724ec(lVar2,0);
    }
  }
  else if (lVar2 != 0) {
    return;
  }
  uVar1 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_06072818(uVar1,unaff_w19,4,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x18),uVar1);
  *(int *)(unaff_x20 + 0x38) = unaff_w19;
  return;
}


