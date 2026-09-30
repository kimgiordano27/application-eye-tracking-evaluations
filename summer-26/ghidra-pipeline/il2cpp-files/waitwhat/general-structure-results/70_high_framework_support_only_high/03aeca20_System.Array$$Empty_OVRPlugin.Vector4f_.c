/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4f>
ENTRY_POINT: 03aeca20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Vector4f>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
                    /* try { // try from 03aeca20 to 03beca87 has its CatchHandler @ 03aecab8 */
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_070f2120);
  *(undefined1 *)(unaff_x22 + 0x689) = 1;
  lVar6 = *unaff_x21;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar6 = *unaff_x21;
  }
  puVar2 = PTR_DAT_070f2110;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_04c3edf0(lVar6 + 0x1e0,*(undefined8 *)PTR_DAT_070f20f8);
  iVar4 = FUN_04c3ea28(lVar6 + 0x1e0,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_070f2120;
  puVar1 = PTR_DAT_070f2108;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      lVar7 = FUN_04c3ea30(lVar6 + 0x1e0,iVar4,*(undefined8 *)puVar1);
      if (lVar7 == 0) {
        in_stack_00000028 = lVar6;
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      auVar8 = (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
      _in_stack_00000010 = auVar8;
      if ((auVar8._0_8_ & 0xff) != 0) {
        FUN_04669604(&stack0x00000010,*(undefined8 *)puVar3);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_04c3ea28(lVar6 + 0x1e0,*(undefined8 *)puVar2);
    } while (iVar4 < iVar5);
  }
  FUN_04c3edfc(lVar6 + 0x1e0,*(undefined8 *)PTR_DAT_070f2100);
  (**(code **)(*unaff_x20 + 0x288))();
  return;
}


