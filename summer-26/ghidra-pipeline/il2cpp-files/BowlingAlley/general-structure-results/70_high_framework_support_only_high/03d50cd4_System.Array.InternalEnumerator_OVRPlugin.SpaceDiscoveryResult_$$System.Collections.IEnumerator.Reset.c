/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03d50cd4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  uVar1 = FUN_03896268(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80));
  if (0 < *param_2) {
    iVar5 = 0;
    do {
      lVar4 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8();
      }
      uVar2 = FUN_03d4fc64(param_2,iVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x78));
      lVar4 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8(lVar4);
      }
      uVar3 = FUN_03d50bb0(param_1,uVar2,uVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf0));
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)(param_3 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
        }
        FUN_03d50078(param_1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xb0));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
  }
  return;
}


