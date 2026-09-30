/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 0469b0a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0x4db) = in_w8;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if (*unaff_x20 != 0) {
    if (0x3f < *(int *)((long)unaff_x20 + 0xc)) {
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar1 = thunk_FUN_0301080c();
      uVar2 = thunk_FUN_03037804(PTR_DAT_06f9b0c8);
      FUN_05aeefcc(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar1);
    }
    if (*(int *)((long)unaff_x20 + 0xc) < 2) {
      *unaff_x20 = 0;
    }
    else {
      FUN_03c8a1fc();
      *unaff_x20 = 0;
      *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
    }
  }
  return;
}


