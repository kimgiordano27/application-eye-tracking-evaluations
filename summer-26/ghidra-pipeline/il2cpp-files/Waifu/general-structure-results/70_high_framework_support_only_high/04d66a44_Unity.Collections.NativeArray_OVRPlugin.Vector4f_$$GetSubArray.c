/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetSubArray
ENTRY_POINT: 04d66a44
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetSubArray(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  uVar6 = FUN_03398a84();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(ushort *)(lVar7 + 0x135);
  if ((uVar3 & 1) == 0) {
    FUN_0338f618(lVar7);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar7 + 0x135);
  }
  if ((uVar3 & 1) == 0) {
    FUN_0338f618(lVar7);
  }
  FUN_05b89b78(uVar6);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10) = uVar6;
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618();
  }
  if (DAT_08908cd0 != 0) {
    uVar1 = *(long *)(lVar7 + 0xb8) + 0x10;
    puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(int *)(DAT_083cb4e8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  FUN_03f6d06c();
  return;
}


