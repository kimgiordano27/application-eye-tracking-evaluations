/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 05a9e19c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(void)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  uVar3 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4(lVar2);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  memcpy(&stack0x000000a0,(void *)(unaff_x20 + 0x20),0x48);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
  }
  uVar4 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&stack0x000000a0);
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  FUN_05da3e28(&stack0x00000110,uVar3,uVar4,0);
  in_stack_00000108 = in_stack_00000118;
  in_stack_00000100 = in_stack_00000110;
  thunk_FUN_0322ed78(*(undefined8 *)PTR_DAT_075a9098,&stack0x00000100);
  return;
}


