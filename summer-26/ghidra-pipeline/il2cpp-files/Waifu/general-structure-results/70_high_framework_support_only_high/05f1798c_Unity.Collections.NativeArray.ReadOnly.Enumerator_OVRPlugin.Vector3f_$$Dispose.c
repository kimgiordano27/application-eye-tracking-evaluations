/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 05f1798c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose(long param_1)

{
  ulong *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0338f618();
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  uVar5 = FUN_03398a84();
  lVar6 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_0338f618(lVar6);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_0338f618(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  **(undefined8 **)(lVar6 + 0xb8) = uVar5;
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  if (DAT_08908cd0 != 0) {
    uVar7 = *(ulong *)(lVar6 + 0xb8);
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


