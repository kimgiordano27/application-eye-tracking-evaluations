/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 05db4924
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


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardModelAnimationStates(void)

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
  long *unaff_x21;
  ulong uVar9;
  uint unaff_w23;
  long lVar10;
  long *unaff_x26;
  
  thunk_FUN_0333a630();
  puVar3 = PTR_DAT_072b1fc0;
  puVar2 = PTR_DAT_072b1fb8;
  if (0 < (int)unaff_w23) {
    uVar9 = 0;
    do {
      lVar10 = *unaff_x21;
      FUN_0597d8c0(uVar9,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*unaff_x26);
      }
      uVar4 = FUN_05d9cfd8();
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
      FUN_05dc8484(uVar5,uVar4);
      if (lVar10 == 0) {
LAB_05db4a48:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05db4a48;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar5;
        thunk_FUN_0333a630(puVar6,uVar5);
      }
      else {
        FUN_041e2c78(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = uVar9 + 1;
    } while (unaff_w23 != uVar9);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar4 = FUN_05d9d05c();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar4);
  return;
}


