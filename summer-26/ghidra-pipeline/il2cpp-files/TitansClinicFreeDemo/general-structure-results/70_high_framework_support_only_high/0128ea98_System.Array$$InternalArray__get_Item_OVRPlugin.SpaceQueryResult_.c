/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0128ea98
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  int in_w4;
  long in_x5;
  int in_w8;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000050;
  
  uStack000000000000004c = 0;
  if ((uint)(in_w8 + in_w4) < 0x1f) {
    uStack0000000000000050 = in_x3;
                    /* WARNING: Could not recover jumptable at 0x0128eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((ulong)*(ushort *)(in_x5 + (ulong)(uint)(in_w8 + in_w4) * 2) * 4 + 0x128ead0)
            )(&DAT_00a80214);
    return uVar1;
  }
  return 0xfffffffe;
}


