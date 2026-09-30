/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03aec8f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x26;
  undefined8 *puVar4;
  long unaff_x27;
  undefined8 *puVar5;
  long unaff_x28;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  lVar1 = in_stack_00000028;
  auVar7._8_8_ = in_stack_00000018;
  auVar7._0_8_ = in_stack_00000010;
  puVar4 = *(undefined8 **)(unaff_x26 + 0x110);
  puVar5 = *(undefined8 **)(unaff_x27 + 0x108);
  puVar6 = *(undefined8 **)(unaff_x28 + 0x120);
  while( true ) {
    unaff_w21 = unaff_w21 + 1;
    _in_stack_00000010 = auVar7;
    iVar2 = FUN_04c3ea28(lVar1 + 0x1e0,*puVar4);
                    /* try { // try from 03aec918 to 03bec92b has its CatchHandler @ 03aecb2c */
    if (iVar2 <= unaff_w21) {
      FUN_04c3edfc(lVar1 + 0x1e0,*(undefined8 *)PTR_DAT_070f2100);
                    /* try { // try from 03aec940 to 03bec94f has its CatchHandler @ 03aecb20 */
      (**(code **)(*unaff_x20 + 0x288))();
      return;
    }
    lVar3 = FUN_04c3ea30(lVar1 + 0x1e0,unaff_w21,*puVar5);
    if (lVar3 == 0) break;
    auVar7 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
    if ((auVar7._0_8_ & 0xff) != 0) {
      _in_stack_00000010 = auVar7;
      FUN_04669604(&stack0x00000010,*puVar6);
      return;
    }
  }
  in_stack_00000028 = lVar1;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


