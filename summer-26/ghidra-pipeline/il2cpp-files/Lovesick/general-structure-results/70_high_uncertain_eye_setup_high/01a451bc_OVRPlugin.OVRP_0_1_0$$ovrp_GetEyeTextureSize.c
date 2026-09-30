/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$ovrp_GetEyeTextureSize
ENTRY_POINT: 01a451bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *unaff_x25;
  undefined8 uVar10;
  long lVar11;
  
  uVar4 = thunk_FUN_00d62a48();
  if (unaff_x19 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    pvVar5 = malloc(uVar8 * 0x28);
    if (0 < (int)uVar8) {
      lVar11 = 0;
      uVar8 = uVar8 & 0xffffffff;
      do {
        lVar1 = unaff_x19 + lVar11;
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar9 = *(undefined8 *)(lVar1 + 0x30);
        uVar3 = *(undefined4 *)(lVar1 + 0x38);
        uVar10 = *(undefined8 *)(lVar1 + 0x40);
        uVar6 = thunk_FUN_00d62a48(*(undefined8 *)(lVar1 + 0x20));
        puVar7 = (undefined8 *)((long)pvVar5 + lVar11);
        *puVar7 = uVar6;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        uVar6 = thunk_FUN_00d62a48(uVar9);
        uVar8 = uVar8 - 1;
        lVar11 = lVar11 + 0x28;
        puVar7[2] = uVar6;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        puVar7[4] = uVar10;
      } while (uVar8 != 0);
      unaff_x25 = &DAT_0377a000;
    }
  }
  uVar6 = (**(code **)(unaff_x25 + 0xca8))();
  thunk_FUN_00d62a3c(uVar4);
  if (pvVar5 != (void *)0x0) {
    if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
      uVar8 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)((long)pvVar5 + 0x10);
      do {
        thunk_FUN_00d62a3c(puVar7[-2]);
        puVar7[-2] = 0;
        thunk_FUN_00d62a3c(*puVar7);
        *puVar7 = 0;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar8 != 0);
    }
    thunk_FUN_00d62a3c(pvVar5);
  }
  return uVar6;
}


