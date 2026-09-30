/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 05d7d008
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


void OVRPlugin__GetCurrentInteractionProfile(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  do {
    uVar2 = FUN_041e29a8(param_1,unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_05d7d05c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    FUN_059474bc(uVar2,*(undefined8 *)(unaff_x26 + unaff_x20 * 8),unaff_w21,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 8;
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar1 = *unaff_x22;
    }
    lVar3 = **(long **)(lVar1 + 0xb8);
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar3 == 0) break;
    }
    lVar1 = FUN_041e29a8(lVar3,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar1 == 0) break;
    unaff_w21 = *(int *)(lVar1 + 0x18) + -1;
    uVar2 = FUN_032d5d3c(*unaff_x24,unaff_w21);
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_05d7d05c;
    *(undefined8 *)(unaff_x26 + unaff_x20 * 8) = uVar2;
    thunk_FUN_0333a630(unaff_x26 + unaff_x25,uVar2);
    param_1 = **(long **)(*unaff_x22 + 0xb8);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


