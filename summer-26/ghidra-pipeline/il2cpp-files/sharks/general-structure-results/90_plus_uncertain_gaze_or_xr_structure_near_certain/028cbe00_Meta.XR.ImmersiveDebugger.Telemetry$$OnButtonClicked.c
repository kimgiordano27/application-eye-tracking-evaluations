/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnButtonClicked
ENTRY_POINT: 028cbe00
PROGRAM: sharks-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnButtonClicked(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar3 = FUN_02171fa4();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 028cbe9c to 029cbec3 has its CatchHandler @ 028cc034 */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_028cbf38;
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 028cbedc to 029cbf3b has its CatchHandler @ 028cc038 */
      lVar5 = FUN_0185daa4();
    }
    FUN_02156a94(lVar4,uVar1,uVar2,in_stack_00000020,in_stack_00000028,
                 *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x168));
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_028cba88();
  }
  else {
    if (in_stack_00000008 == 0) {
LAB_028cbf38:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    (**(code **)(in_stack_00000008 + 0x18))
              (*(undefined8 *)(in_stack_00000008 + 0x40),uVar1,uVar2,in_stack_00000020,
               in_stack_00000028,*(undefined8 *)(in_stack_00000008 + 0x28));
  }
  return;
}


