/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 02c33d90
PROGRAM: sharks-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar2 = PTR_DAT_0380bfa0;
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 02c33da0 to 02d33e83 has its CatchHandler @ 02c33da0
                       catch() { ... } // from try @ 02c33da0 with catch @ 02c33da0
                       catch() { ... } // from try @ 02c3418c with catch @ 02c33da0
                       catch() { ... } // from try @ 02c3428c with catch @ 02c33da0
                       catch() { ... } // from try @ 02c34300 with catch @ 02c33da0
                       catch() { ... } // from try @ 02c34368 with catch @ 02c33da0 */
    thunk_FUN_01843fdc();
  }
  puVar1 = PTR_DAT_037f9758;
  thunk_FUN_0181f594();
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  FUN_02c108e4();
  thunk_FUN_0181f594();
  *(undefined4 *)(unaff_x19 + 0x20) = 1;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar3 = *(long *)puVar2;
  }
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar1);
  }
  FUN_02c30798(&stack0x00000018,&stack0x00000038,uVar4);
  *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000018;
  thunk_FUN_0188fd20(unaff_x19 + 0x40,0);
  FUN_02c30798(&stack0x00000030,**(undefined8 **)(*(long *)puVar2 + 0xb8));
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000000;
  thunk_FUN_0188fd20(unaff_x19 + 0x58,0);
  return;
}


