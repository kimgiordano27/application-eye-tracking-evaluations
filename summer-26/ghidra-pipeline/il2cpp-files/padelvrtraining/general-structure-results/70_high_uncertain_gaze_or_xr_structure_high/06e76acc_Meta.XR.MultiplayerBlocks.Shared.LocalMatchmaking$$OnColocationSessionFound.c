/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 06e76acc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_03d8f26c();
  if (unaff_w22 == 1) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000028 = *(undefined8 *)(unaff_x21 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x30),&stack0x00000028);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_07143704(&stack0x00000010);
    uVar2 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_058164e8(&stack0x00000010);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar2);
  return;
}


