/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 090c93b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 unaff_s8;
  
  if ((DAT_0b3304d4 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac76fb8);
    DAT_0b3304d4 = 1;
  }
  puVar1 = PTR_DAT_0ac76fb8;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_090c9480:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = *param_2;
    if (lVar2 == 0) goto LAB_090c9480;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_090c9484:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar3 = *(long *)(param_1 + 0x140);
    if (lVar3 == 0) goto LAB_090c9480;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_090c9484;
    lVar2 = lVar2 + uVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + uVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar2 = *(long *)(param_1 + 0xd0);
    if (lVar2 == 0) goto LAB_090c9480;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_090c9484;
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(lVar2 + lVar3 + 0x20) = unaff_s8;
  } while( true );
}


