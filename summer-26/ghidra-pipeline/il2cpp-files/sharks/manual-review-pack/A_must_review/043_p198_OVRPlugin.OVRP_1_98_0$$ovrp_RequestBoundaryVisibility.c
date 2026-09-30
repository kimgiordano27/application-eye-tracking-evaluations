/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 02c595e8
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong uVar5;
  long unaff_x21;
  undefined8 *puVar6;
  ulong unaff_x24;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = 0;
  do {
    lVar1 = unaff_x19 + lVar8;
    uVar2 = *(undefined4 *)(lVar1 + 0x28);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined4 *)(lVar1 + 0x38);
    uVar9 = *(undefined8 *)(lVar1 + 0x40);
    uVar4 = thunk_FUN_01862198(*(undefined8 *)(lVar1 + 0x20));
    puVar6 = (undefined8 *)(unaff_x21 + lVar8);
    *puVar6 = uVar4;
    *(undefined4 *)(puVar6 + 1) = uVar2;
    uVar4 = thunk_FUN_01862198(uVar7);
    lVar8 = lVar8 + 0x28;
    puVar6[2] = uVar4;
    *(undefined4 *)(puVar6 + 3) = uVar3;
    puVar6[4] = uVar9;
  } while ((param_1 * 4 + (unaff_x24 & 0xffffffff)) * 8 - lVar8 != 0);
  uVar4 = (*DAT_03a261c8)();
  thunk_FUN_0186218c();
  if (unaff_x21 != 0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)(unaff_x21 + 0x10);
      do {
        thunk_FUN_0186218c(puVar6[-2]);
        puVar6[-2] = 0;
        thunk_FUN_0186218c(*puVar6);
        *puVar6 = 0;
        uVar5 = uVar5 - 1;
        puVar6 = puVar6 + 5;
      } while (uVar5 != 0);
    }
    thunk_FUN_0186218c();
  }
  return uVar4;
}


