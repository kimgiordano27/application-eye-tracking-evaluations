/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 0740f954
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *unaff_x25;
  long lVar9;
  undefined8 uVar10;
  
  if (unaff_x19 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar7 = *(ulong *)(unaff_x19 + 0x18);
    pvVar4 = malloc(uVar7 * 0x28);
    if (0 < (int)uVar7) {
      lVar9 = 0;
      do {
        lVar1 = unaff_x19 + lVar9;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar8 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar10 = *(undefined8 *)(lVar1 + 0x40);
        uVar5 = thunk_FUN_03cf5810(*(undefined8 *)(lVar1 + 0x20));
        puVar6 = (undefined8 *)((long)pvVar4 + lVar9);
        *puVar6 = uVar5;
        *(undefined4 *)(puVar6 + 1) = uVar2;
        uVar5 = thunk_FUN_03cf5810(uVar8);
        lVar9 = lVar9 + 0x28;
        puVar6[2] = uVar5;
        *(undefined4 *)(puVar6 + 3) = uVar3;
        puVar6[4] = uVar10;
      } while (((uVar7 & 0xffffffff) * 4 + (uVar7 & 0xffffffff)) * 8 - lVar9 != 0);
      unaff_x25 = &DAT_0941e000;
    }
  }
  uVar5 = (**(code **)(unaff_x25 + 0xaa8))();
  thunk_FUN_03cf5804(param_1);
  if (pvVar4 != (void *)0x0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar7 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)((long)pvVar4 + 0x10);
      do {
        thunk_FUN_03cf5804(puVar6[-2]);
        puVar6[-2] = 0;
        thunk_FUN_03cf5804(*puVar6);
        *puVar6 = 0;
        uVar7 = uVar7 - 1;
        puVar6 = puVar6 + 5;
      } while (uVar7 != 0);
    }
    thunk_FUN_03cf5804(pvVar4);
  }
  return uVar5;
}


