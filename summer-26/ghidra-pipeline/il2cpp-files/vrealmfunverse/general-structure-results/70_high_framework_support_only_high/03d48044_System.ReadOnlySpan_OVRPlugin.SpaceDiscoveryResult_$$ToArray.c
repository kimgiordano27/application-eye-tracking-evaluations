/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 03d48044
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__ToArray
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x21;
  
  uVar1 = FUN_03d47fd0(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x78));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
      thunk_FUN_02b7978c();
      uVar2 = FUN_03d474bc();
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


