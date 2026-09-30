/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03998540
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


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(param_1);
  }
  uVar1 = FUN_03997edc();
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    if (unaff_x21 != (long *)0x0) {
      if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar2 = (undefined4 *)thunk_FUN_02b7978c();
        uVar3 = FUN_039984d8(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  return 0;
}


