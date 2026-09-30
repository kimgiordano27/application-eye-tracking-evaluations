/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03aec890
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


void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  int unaff_w21;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  uVar6 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
  uVar7 = thunk_FUN_031edd38();
                    /* try { // try from 03aec8a8 to 03bec90f has its CatchHandler @ 03aecb38 */
  uVar6 = FUN_057b27f0(uVar6,uVar7,0);
  lVar8 = thunk_FUN_031edd38();
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f0e8(uVar6,0);
  FUN_06989004();
  lVar8 = in_stack_00000028;
  puVar3 = PTR_DAT_070f2120;
  puVar2 = PTR_DAT_070f2110;
  puVar1 = PTR_DAT_070f2108;
  auVar9._8_8_ = in_stack_00000018;
  auVar9._0_8_ = in_stack_00000010;
  while( true ) {
    unaff_w21 = unaff_w21 + 1;
    _in_stack_00000010 = auVar9;
    iVar4 = FUN_04c3ea28(lVar8 + 0x1e0,*(undefined8 *)puVar2);
    if (iVar4 <= unaff_w21) {
      FUN_04c3edfc(lVar8 + 0x1e0,*(undefined8 *)PTR_DAT_070f2100);
      (**(code **)(*unaff_x20 + 0x288))();
      return;
    }
    lVar5 = FUN_04c3ea30(lVar8 + 0x1e0,unaff_w21,*(undefined8 *)puVar1);
    if (lVar5 == 0) break;
    auVar9 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    if ((auVar9._0_8_ & 0xff) != 0) {
      _in_stack_00000010 = auVar9;
      FUN_04669604(&stack0x00000010,*(undefined8 *)puVar3);
      return;
    }
  }
  in_stack_00000028 = lVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


