/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 05a9edac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(void)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (in_w8 == *(int *)(in_x9 + 0x20) + 1) {
    FUN_05e22a2c(0);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x10);
  in_stack_00000058 = *(undefined8 *)(unaff_x19 + 0x18);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  uVar4 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&stack0x00000050);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4(lVar3);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  memcpy(&stack0x00000008,(void *)(unaff_x19 + 0x20),0x48);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  uVar5 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),&stack0x00000008);
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  FUN_05da3e28(&stack0x00000060,uVar4,uVar5,0);
  auVar2._8_8_ = in_stack_00000068;
  auVar2._0_8_ = in_stack_00000060;
  return auVar2;
}


