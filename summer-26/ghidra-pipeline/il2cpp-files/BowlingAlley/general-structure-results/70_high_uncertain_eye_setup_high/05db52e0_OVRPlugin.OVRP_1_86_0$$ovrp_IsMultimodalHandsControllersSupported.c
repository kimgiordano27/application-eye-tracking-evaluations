/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsMultimodalHandsControllersSupported
ENTRY_POINT: 05db52e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x22;
  ulong uVar10;
  uint unaff_w23;
  long lVar11;
  long *unaff_x26;
  
  FUN_041e24b4();
  plVar9 = (long *)(unaff_x19 + 0x10);
  *plVar9 = unaff_x22;
  thunk_FUN_0333a630(plVar9);
  puVar3 = PTR_DAT_072b2060;
  puVar2 = PTR_DAT_072b2058;
  if (0 < (int)unaff_w23) {
    uVar10 = 0;
    do {
      lVar11 = *plVar9;
      FUN_0597d8c0(uVar10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*unaff_x26);
      }
      uVar4 = FUN_05d9dfe4();
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_05dc85e8(uVar5,uVar4);
      if (lVar11 == 0) {
LAB_05db5414:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar7 = *(long *)(lVar11 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05db5414;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar5;
        thunk_FUN_0333a630(puVar6,uVar5);
      }
      else {
        FUN_041e2c78(lVar11,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (unaff_w23 != uVar10);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_05d9e068();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar4);
  return;
}


