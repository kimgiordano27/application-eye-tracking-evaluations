/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 031784e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  undefined8 *puVar2;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  code *unaff_x23;
  
  if ((in_w9 & 1) == 0) {
    FUN_02f41e9c();
  }
  if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_02f45174(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  (*unaff_x23)();
  FUN_02f08788(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58) + 0x80) +
               0x20,8);
  puVar2 = (undefined8 *)thunk_FUN_02f66c64();
  *puVar2 = unaff_x21;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xf0))();
                    /* WARNING: Could not recover jumptable at 0x03178598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8))();
  return;
}


