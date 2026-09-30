/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_UpdatePassthroughColorLut
ENTRY_POINT: 05db4ccc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_UpdatePassthroughColorLut(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x05db4ccc:
  FUN_041e2c78(unaff_x23,unaff_x24,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70)
              );
  do {
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x29 == unaff_x22) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar3 = FUN_05d9d630();
      *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
      thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar3);
      return;
    }
    unaff_x23 = *unaff_x21;
    FUN_0597d8c0(unaff_x22,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x26);
    }
    uVar3 = FUN_05d9d5ac();
    unaff_x24 = thunk_FUN_032a56a0(*unaff_x27);
    FUN_05dc8528(unaff_x24,uVar3);
    if (unaff_x23 == 0) {
LAB_05db4d30:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = *(long *)(unaff_x23 + 0x10);
    in_x9 = *unaff_x28;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_05db4d30;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto code_r0x05db4ccc;
    *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *puVar2 = unaff_x24;
    thunk_FUN_0333a630(puVar2,unaff_x24);
  } while( true );
}


