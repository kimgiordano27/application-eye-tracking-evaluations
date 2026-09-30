/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 01995fa0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  long *unaff_x21;
  
  if (in_w9 == 0) {
    thunk_FUN_01220628(param_1);
  }
  uVar1 = FUN_01995958();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0122e748(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
      thunk_FUN_0124bcfc();
      uVar2 = FUN_01995f20();
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230f60();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


