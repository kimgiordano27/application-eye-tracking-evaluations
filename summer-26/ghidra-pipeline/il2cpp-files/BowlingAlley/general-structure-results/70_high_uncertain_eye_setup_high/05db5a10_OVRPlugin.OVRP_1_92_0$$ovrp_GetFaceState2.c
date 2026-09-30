/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceState2
ENTRY_POINT: 05db5a10
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceState2(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  
  while( true ) {
    uVar2 = thunk_FUN_032a56a0(*unaff_x26);
    FUN_05db5680(uVar2,param_1);
    if (unaff_x22 == 0) break;
    lVar4 = *(long *)(unaff_x22 + 0x10);
    lVar5 = *unaff_x27;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_0333a630(puVar3,uVar2);
    }
    else {
      FUN_041e2c78(unaff_x22,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x28 == unaff_x21) {
      return;
    }
    unaff_x22 = *unaff_x20;
    FUN_0597d8c0(unaff_x21,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x25);
    }
    param_1 = FUN_05d9eb48();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


