/*
FUNCTION_NAME: OVRPlugin$$set_monoscopic
ENTRY_POINT: 07a32aa4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_monoscopic(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long lVar5;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar6;
  ulong uVar7;
  
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x18));
  lVar6 = 8;
  do {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_07a32ba8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = lVar6 - 8;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar7) {
      return;
    }
    lVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092f03f8);
    FUN_076bca34(lVar2,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) goto LAB_07a32ba8;
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_07a32bac:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (lVar2 == 0) goto LAB_07a32ba8;
    uVar4 = *unaff_x25;
    lVar5 = *unaff_x20;
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + lVar6 * 4);
    uVar4 = thunk_FUN_040b4efc(uVar4);
    FUN_061da510(uVar4,lVar2,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_05c275dc(), lVar5 == 0)) goto LAB_07a32ba8;
    if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_07a32bac;
    *(undefined4 *)(lVar5 + lVar6 * 4) = uVar1;
    lVar6 = lVar6 + 1;
  } while( true );
}


