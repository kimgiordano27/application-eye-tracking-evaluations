/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 03cb3bfc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int unaff_w21;
  
  FUN_05116b38(param_1,0);
  if (unaff_w21 < 0) {
    FUN_050f6004(0xc,4,0);
  }
  else if (unaff_w21 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
                    /* try { // try from 03cb3c4c to 03db3c4f has its CatchHandler @ 03cb3d00 */
                    /* try { // try from 03cb3c50 to 03db3cd7 has its CatchHandler @ 03cb39c8 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    uVar2 = **(undefined8 **)(lVar1 + 0xb8);
    goto LAB_03cb3c98;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  uVar2 = FUN_02f0880c(lVar1,unaff_w21);
LAB_03cb3c98:
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


