/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Supported
ENTRY_POINT: 060451a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x27;
  long lVar10;
  undefined8 uVar11;
  
  pcVar5 = (code *)thunk_FUN_0322f404();
  *(code **)(unaff_x27 + 0x228) = pcVar5;
  if (unaff_x19 == 0) {
    uVar6 = (*pcVar5)();
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    pvVar4 = malloc(uVar8 * 0x28);
    if ((int)uVar8 < 1) {
      uVar6 = (**(code **)(unaff_x27 + 0x228))();
      if (pvVar4 == (void *)0x0) {
        return uVar6;
      }
    }
    else {
      lVar10 = 0;
      do {
        lVar1 = unaff_x19 + lVar10;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar11 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_0322f724(*(undefined8 *)(lVar1 + 0x20));
        puVar7 = (undefined8 *)((long)pvVar4 + lVar10);
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_0322f724(uVar9);
        lVar10 = lVar10 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar11;
      } while (((uVar8 & 0xffffffff) * 4 + (uVar8 & 0xffffffff)) * 8 - lVar10 != 0);
      uVar6 = (*DAT_07a47228)();
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_0322f718(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_0322f718(*puVar7);
        *puVar7 = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_0322f718(pvVar4);
  }
  return uVar6;
}


