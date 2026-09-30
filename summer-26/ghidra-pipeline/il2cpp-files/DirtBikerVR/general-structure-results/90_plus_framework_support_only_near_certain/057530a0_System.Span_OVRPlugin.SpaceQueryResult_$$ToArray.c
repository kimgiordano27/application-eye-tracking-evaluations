/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 057530a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  code *pcVar2;
  long unaff_x23;
  long unaff_x29;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))
            (unaff_x29 + -0x20);
                    /* try { // try from 057530dc to 05853403 has its CatchHandler @ 057530dc
                       catch() { ... } // from try @ 057530dc with catch @ 057530dc
                       catch() { ... } // from try @ 05753514 with catch @ 057530dc
                       catch() { ... } // from try @ 05753560 with catch @ 057530dc
                       catch() { ... } // from try @ 057535b8 with catch @ 057530dc */
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x10);
  FUN_0351987c();
  FUN_03515348();
  FUN_03515348();
  FUN_035198d0();
  pcVar2 = (code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0);
  thunk_FUN_03ae913c();
  (*pcVar2)();
  pcVar2 = (code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
  uVar1 = thunk_FUN_03ae913c();
  (*pcVar2)(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


