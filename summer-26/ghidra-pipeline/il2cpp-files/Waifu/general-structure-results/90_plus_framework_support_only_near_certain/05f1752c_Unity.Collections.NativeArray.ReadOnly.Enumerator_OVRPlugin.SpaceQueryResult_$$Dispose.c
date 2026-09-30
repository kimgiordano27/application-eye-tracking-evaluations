/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 05f1752c
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (long param_1)

{
  ulong *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  uVar6 = FUN_03398a84();
  lVar5 = *(long *)(param_1 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_0338f618(lVar5);
    lVar5 = *(long *)(param_1 + 0x20);
    uVar2 = *(ushort *)(lVar5 + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_0338f618(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  **(undefined8 **)(lVar5 + 0xb8) = uVar6;
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  if (DAT_08908cd0 != 0) {
    uVar7 = *(ulong *)(lVar5 + 0xb8);
    puVar1 = &DAT_0873ccb0 + (uVar7 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}


