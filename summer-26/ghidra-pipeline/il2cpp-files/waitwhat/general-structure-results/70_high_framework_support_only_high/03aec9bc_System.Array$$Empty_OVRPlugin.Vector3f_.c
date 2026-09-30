/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector3f>
ENTRY_POINT: 03aec9bc
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


void System_Array__Empty<OVRPlugin_Vector3f>(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  puVar1 = PTR_DAT_070f1fd0;
  if ((DAT_07547689 & 1) == 0) {
                    /* try { // try from 03aec9dc to 03bec9e3 has its CatchHandler @ 03aecb94 */
    FUN_03188a78(PTR_DAT_070f20f8);
                    /* try { // try from 03aec9f0 to 03bec9ff has its CatchHandler @ 03aecb88 */
    FUN_03188a78(PTR_DAT_070f2100);
    FUN_03188a78(PTR_DAT_070f2108);
    FUN_03188a78(PTR_DAT_070f2110);
    FUN_03188a78(PTR_DAT_070f1fd0);
    FUN_03188a78(PTR_DAT_070f2118);
    FUN_03188a78(PTR_DAT_070f2120);
    DAT_07547689 = 1;
  }
  lVar6 = *(long *)puVar1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar6 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_070f2110;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_04c3edf0(lVar6 + 0x1e0,*(undefined8 *)PTR_DAT_070f20f8);
  iVar4 = FUN_04c3ea28(lVar6 + 0x1e0,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_070f2120;
  puVar2 = PTR_DAT_070f2108;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      lVar7 = FUN_04c3ea30(lVar6 + 0x1e0,iVar4,*(undefined8 *)puVar2);
      if (lVar7 == 0) {
        in_stack_00000028 = lVar6;
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      auVar8 = (**(code **)(lVar7 + 0x18))
                         (*(undefined8 *)(lVar7 + 0x40),param_1,param_2,
                          *(undefined8 *)(lVar7 + 0x28));
      _in_stack_00000010 = auVar8;
      if ((auVar8._0_8_ & 0xff) != 0) {
        FUN_04669604(&stack0x00000010,*(undefined8 *)puVar3);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_04c3ea28(lVar6 + 0x1e0,*(undefined8 *)puVar1);
    } while (iVar4 < iVar5);
  }
  FUN_04c3edfc(lVar6 + 0x1e0,*(undefined8 *)PTR_DAT_070f2100);
  (**(code **)(*param_1 + 0x288))(param_1,param_2,*(undefined8 *)(*param_1 + 0x290));
  return;
}


