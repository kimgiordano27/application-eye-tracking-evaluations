/*
FUNCTION_NAME: System.Array$$FindIndex<OVRPlugin.BoneCapsule>
ENTRY_POINT: 03aef25c
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


void System_Array__FindIndex<OVRPlugin_BoneCapsule>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x25;
  long lVar9;
  long unaff_x26;
  undefined1 auVar10 [16];
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  lVar9 = *unaff_x25;
  *(long *)(unaff_x26 + (long)in_stack_00000008 * 8) = lVar9;
  __cxa_end_catch();
  if ((lVar9 != 0) && (plVar5 = (long *)FUN_0596720c(lVar9,0), plVar5 != (long *)0x0)) {
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    uVar7 = thunk_FUN_031edd38();
    uVar6 = FUN_057b27f0(uVar6,uVar7,0);
    lVar8 = thunk_FUN_031edd38();
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
                    /* try { // try from 03aef2cc to 03bef2d3 has its CatchHandler @ 03aef3c4 */
    FUN_0698f0e8(uVar6,0);
    FUN_06989004(lVar9,0);
    lVar9 = in_stack_00000028;
    puVar3 = PTR_DAT_070f2120;
    puVar2 = PTR_DAT_070f2110;
    puVar1 = PTR_DAT_070f2108;
    auVar10._8_8_ = in_stack_00000018;
    auVar10._0_8_ = in_stack_00000010;
                    /* try { // try from 03aef2e8 to 03bef2eb has its CatchHandler @ 03aef2f0 */
                    /* try { // try from 03aef2ec to 03bef30f has its CatchHandler @ 03aeede8 */
                    /* catch() { ... } // from try @ 03aef258 with catch @ 03aef2f0
                       catch() { ... } // from try @ 03aef2e8 with catch @ 03aef2f0 */
    while( true ) {
      unaff_w21 = unaff_w21 + 1;
      _in_stack_00000010 = auVar10;
      iVar4 = FUN_04c3ea28(lVar9 + 0x1e0,*(undefined8 *)puVar2);
                    /* try { // try from 03aef310 to 03bef313 has its CatchHandler @ 03aef334 */
      if (iVar4 <= unaff_w21) {
                    /* try { // try from 03aef320 to 03bef327 has its CatchHandler @ 03aef3c8 */
                    /* try { // try from 03aef328 to 03bef32b has its CatchHandler @ 03aef35c */
        FUN_04c3edfc(lVar9 + 0x1e0,*(undefined8 *)PTR_DAT_070f2100);
                    /* try { // try from 03aef32c to 03bef32f has its CatchHandler @ 03aef370 */
                    /* try { // try from 03aef330 to 03bef333 has its CatchHandler @ 03aef354 */
                    /* catch() { ... } // from try @ 03aef310 with catch @ 03aef334 */
                    /* try { // try from 03aef33c to 03bef343 has its CatchHandler @ 03aef48c */
        (**(code **)(*unaff_x20 + 0x288))();
        return;
      }
      lVar8 = FUN_04c3ea30(lVar9 + 0x1e0,unaff_w21,*(undefined8 *)puVar1);
      if (lVar8 == 0) break;
      auVar10 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
      if ((auVar10._0_8_ & 0xff) != 0) {
        _in_stack_00000010 = auVar10;
        FUN_04669604(&stack0x00000010,*(undefined8 *)puVar3);
                    /* try { // try from 03aef344 to 03bef38f has its CatchHandler @ 03aeede8 */
                    /* catch() { ... } // from try @ 03aef06c with catch @ 03aef348 */
                    /* catch() { ... } // from try @ 03aef1bc with catch @ 03aef34c */
                    /* catch() { ... } // from try @ 03aef1d8 with catch @ 03aef350 */
                    /* catch() { ... } // from try @ 03aef330 with catch @ 03aef354 */
                    /* catch() { ... } // from try @ 03aeef90 with catch @ 03aef358
                       catch() { ... } // from try @ 03aef184 with catch @ 03aef358 */
                    /* catch() { ... } // from try @ 03aef328 with catch @ 03aef35c */
                    /* catch() { ... } // from try @ 03aeef5c with catch @ 03aef360 */
        return;
      }
    }
    in_stack_00000028 = lVar9;
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03aef15c with catch @ 03aef364 */
  FUN_03188cd8();
}


