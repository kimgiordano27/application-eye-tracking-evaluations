/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 073d8250
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_useIPDInPositionTracking(undefined4 param_1)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong uVar4;
  
  while (!(bool)in_CY) {
    *(undefined4 *)(unaff_x24 + unaff_x28 * 4) = param_1;
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar1 = *unaff_x23;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) {
LAB_073d827c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar4 = unaff_x28 - 7;
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5b70);
    FUN_07145224(lVar1,0);
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *unaff_x23;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) goto LAB_073d827c;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) break;
    if (lVar1 == 0) goto LAB_073d827c;
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + (unaff_x28 + 1) * 4);
    unaff_x24 = *unaff_x20;
    uVar3 = thunk_FUN_03cf5234(*unaff_x25);
    FUN_05822d7c(uVar3,lVar1,*unaff_x26,0);
    if ((unaff_x19 == 0) || (param_1 = FUN_0521354c(), unaff_x24 == 0)) goto LAB_073d827c;
    unaff_x28 = unaff_x28 + 1;
    in_CY = *(uint *)(unaff_x24 + 0x18) <= uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


