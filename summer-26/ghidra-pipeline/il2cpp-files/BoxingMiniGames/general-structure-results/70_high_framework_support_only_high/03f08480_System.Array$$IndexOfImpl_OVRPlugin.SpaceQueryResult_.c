/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03f08480
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOfImpl<OVRPlugin_SpaceQueryResult>(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 unaff_x22;
  
  if (param_1 == (long *)0x0) {
    FUN_0367ca58();
    param_1 = *(long **)(unaff_x21 + 0x38);
  }
  if ((*(ushort *)(*param_1 + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar1 = thunk_FUN_0367fe20();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 8))();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x22;
    thunk_FUN_036b7ad0();
    uVar2 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f77f8);
    FUN_0554a400(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x18),0);
    FUN_037a07f4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


