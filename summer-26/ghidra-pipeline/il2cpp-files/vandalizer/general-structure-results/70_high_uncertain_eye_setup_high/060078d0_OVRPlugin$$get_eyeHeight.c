/*
FUNCTION_NAME: OVRPlugin$$get_eyeHeight
ENTRY_POINT: 060078d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeHeight(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong unaff_x29;
  
  while( true ) {
    lVar3 = *unaff_x20;
    uVar2 = thunk_FUN_0322f148(*unaff_x25);
    FUN_04d1da94(uVar2,unaff_x21,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_047afcfc(), lVar3 == 0)) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x29) {
LAB_06007940:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined4 *)(lVar3 + unaff_x28 * 4) = uVar1;
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x23;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) break;
    unaff_x29 = unaff_x28 - 7;
    if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)unaff_x29) {
      return;
    }
    unaff_x21 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7288);
    FUN_05e44034(unaff_x21,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x29) goto LAB_06007940;
    if (unaff_x21 == 0) break;
    *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(lVar3 + (unaff_x28 + 1) * 4);
    unaff_x28 = unaff_x28 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


