/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 02341374
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  uint in_w8;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  
  if (in_w8 <= param_2) {
    FUN_033b35a8(0);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  uVar2 = in_w8 - 1;
  *(uint *)(unaff_x19 + 0x18) = uVar2;
  if (uVar2 - unaff_w20 != 0 && unaff_w20 <= (int)uVar2) {
    FUN_033b4f38(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,uVar2 - unaff_w20,0);
    uVar2 = *(uint *)(unaff_x19 + 0x18);
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + 0x20);
      *puVar1 = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      thunk_FUN_01e10808(puVar1,0);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


