/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePositionTracked
ENTRY_POINT: 0316b0c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePositionTracked(undefined8 *param_1,undefined1 param_2 [16])

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(long *)(unaff_x19 + 0x158) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x150) = param_2._0_8_;
  param_1[1] = in_stack_00000028;
  *param_1 = in_stack_00000020;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d808a8);
    FUN_02518fa8(lVar3,uVar4,*(undefined8 *)PTR_DAT_03d808f0,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_01b4f09c(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x168) = lVar3;
  thunk_FUN_01b4f09c(unaff_x19 + 0x168,lVar3);
  FUN_029be098();
  return;
}


