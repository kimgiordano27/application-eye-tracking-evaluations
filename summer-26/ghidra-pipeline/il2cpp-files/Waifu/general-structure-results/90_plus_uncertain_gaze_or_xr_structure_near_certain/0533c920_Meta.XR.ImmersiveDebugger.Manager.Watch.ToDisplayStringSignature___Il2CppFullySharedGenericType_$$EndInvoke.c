/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 0533c920
PROGRAM: Waifu-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
          (long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar6 = *(int *)(param_1 + 0x18) - 1;
  if (uVar6 < *(uint *)(lVar8 + 0x18)) {
    lVar9 = lVar8 + (long)(int)uVar6 * 0x10;
    *(uint *)(param_1 + 0x18) = uVar6;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    auVar12 = *(undefined1 (*) [16])(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    if (DAT_08908cd0 != 0) {
      uVar2 = lVar8 + (long)(int)uVar6 * 0x10 + 0x20;
      puVar3 = &DAT_0873ccb0 + (uVar2 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = *puVar3 | 1L << (uVar2 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return auVar12;
  }
  auVar12 = Meta_Voice_TranscriptionRequest<object,_object,_object,_object>__get_IsListening
                      (param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
  lVar8 = auVar12._0_8_;
  lVar9 = *(long *)(lVar8 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar6 = *(uint *)(lVar9 + 0x18);
  uVar7 = *(int *)(lVar8 + 0x18) - 1;
  if (uVar7 < uVar6) {
    lVar1 = lVar9 + (long)(int)uVar7 * 0x10;
    *(uint *)(lVar8 + 0x18) = uVar7;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar10 = (undefined8 *)(lVar1 + 0x20);
    uVar11 = *puVar10;
    auVar12._8_8_[1] = *(undefined8 *)(lVar1 + 0x28);
    *auVar12._8_8_ = uVar11;
    if (DAT_08908cd0 == 0) {
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_0533cab8;
      *puVar10 = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    else {
      puVar3 = &DAT_0873ccb0 + ((ulong)auVar12._8_8_ >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = *puVar3 | 1L << ((ulong)auVar12._8_8_ >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_0533cab8:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      uVar2 = lVar9 + (long)(int)uVar7 * 0x10 + 0x20;
      *puVar10 = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar3 = &DAT_0873ccb0 + (uVar2 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = *puVar3 | 1L << (uVar2 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    *auVar12._8_8_ = 0;
    auVar12._8_8_[1] = 0;
  }
  auVar12._1_7_ = 0;
  auVar12[0] = uVar7 < uVar6;
  return auVar12;
}


