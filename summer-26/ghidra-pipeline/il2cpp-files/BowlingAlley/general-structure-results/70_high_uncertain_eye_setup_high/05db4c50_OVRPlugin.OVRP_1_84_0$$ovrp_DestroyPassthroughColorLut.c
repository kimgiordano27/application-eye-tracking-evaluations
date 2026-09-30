/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_DestroyPassthroughColorLut
ENTRY_POINT: 05db4c50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_DestroyPassthroughColorLut(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int in_w9;
  long lVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_032cd7c0(param_1);
    }
    uVar2 = FUN_05d9d5ac();
    uVar3 = thunk_FUN_032a56a0(*unaff_x27);
    FUN_05dc8528(uVar3,uVar2);
    if (unaff_x23 == 0) break;
    lVar5 = *(long *)(unaff_x23 + 0x10);
    lVar6 = *unaff_x28;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = uVar3;
      thunk_FUN_0333a630(puVar4,uVar3);
    }
    else {
      FUN_041e2c78(unaff_x23,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x29 == unaff_x22) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_05d9d630();
      *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
      thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar2);
      return;
    }
    unaff_x23 = *unaff_x21;
    FUN_0597d8c0(unaff_x22,0);
    param_1 = *unaff_x26;
    in_w9 = *(int *)(param_1 + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


