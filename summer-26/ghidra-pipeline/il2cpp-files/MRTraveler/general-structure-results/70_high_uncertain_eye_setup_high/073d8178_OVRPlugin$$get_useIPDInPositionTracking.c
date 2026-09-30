/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 073d8178
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar5;
  ulong uVar6;
  
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_03d233cc((long *)(unaff_x21 + 0x18));
  lVar5 = 8;
  do {
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_073d827c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = lVar5 - 8;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar6) {
      return;
    }
    lVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb5b70);
    FUN_07145224(lVar2,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) goto LAB_073d827c;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_073d8280:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (lVar2 == 0) goto LAB_073d827c;
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + lVar5 * 4);
    lVar3 = *unaff_x20;
    uVar4 = thunk_FUN_03cf5234(*unaff_x25);
    FUN_05822d7c(uVar4,lVar2,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_0521354c(), lVar3 == 0)) goto LAB_073d827c;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_073d8280;
    *(undefined4 *)(lVar3 + lVar5 * 4) = uVar1;
    lVar5 = lVar5 + 1;
  } while( true );
}


