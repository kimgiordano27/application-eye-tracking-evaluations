/*
FUNCTION_NAME: FUN_05ea2610
ENTRY_POINT: 05ea2610
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 FUN_05ea2610(long param_1,undefined4 param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_0988ba1b & 1) == 0) {
    FUN_04077588(PTR_DAT_09285a10);
    DAT_0988ba1b = 1;
  }
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item(param_1,param_2);
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar2 = 0;
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    uVar2 = 1;
  }
  else {
    plVar3 = *(long **)(*(long *)(param_1 + 0x30) + 0x10);
    if (plVar3 == (long *)0x0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      lVar4 = *plVar3;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09285a10 + 0x130);
      if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
         (uVar2 = 2,
         *(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_09285a10)) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}


