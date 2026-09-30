/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 05e74a7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
          (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c7838,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0xe99) = 1;
  if (*(int *)(DAT_083cc088 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_067f680c(unaff_w20,0);
  *(undefined4 *)(unaff_x19 + 0x24) = 0xffffffff;
  uVar5 = FUN_03398188(DAT_083c7838,uVar4);
  puVar7 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar7 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  uVar5 = FUN_03398188(lVar6,uVar4);
  puVar7 = (undefined8 *)(unaff_x19 + 0x18);
  *puVar7 = uVar5;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return uVar4;
}


