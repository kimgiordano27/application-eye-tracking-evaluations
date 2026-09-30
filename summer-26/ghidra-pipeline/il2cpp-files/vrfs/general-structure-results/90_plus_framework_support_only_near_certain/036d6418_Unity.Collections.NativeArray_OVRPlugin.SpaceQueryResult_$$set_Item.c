/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 036d6418
PROGRAM: vrfs-libil2cpp.so
SCORE: 102
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
               (long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *in_x9;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x240));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_036ef950();
  uVar4 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode();
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar4;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0xb8),uVar4);
  iVar1 = FUN_036d7f44();
  if ((iVar1 == 1) && (iVar1 = FUN_036f2cf8(), iVar1 == 0)) {
    *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x22 + 0x68);
    thunk_FUN_01656ef8();
    iVar1 = 0;
  }
  *(int *)(unaff_x20 + 0x90) = iVar1;
  iVar1 = FUN_036f2cf8();
  if (iVar1 != 1) {
    iVar1 = FUN_036f2cf8();
    iVar2 = FUN_036f2cf8();
    if (iVar1 != iVar2) {
      FUN_01fbafc0();
      return;
    }
  }
  *(long *)(unaff_x20 + 0x60) = unaff_x22;
  thunk_FUN_01656ef8((long *)(unaff_x20 + 0x60));
  *(undefined4 *)(unaff_x20 + 0x5c) = 2;
  return;
}


