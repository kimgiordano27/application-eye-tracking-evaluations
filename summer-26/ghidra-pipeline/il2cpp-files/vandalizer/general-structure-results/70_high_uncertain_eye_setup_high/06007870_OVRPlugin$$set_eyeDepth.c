/*
FUNCTION_NAME: OVRPlugin$$set_eyeDepth
ENTRY_POINT: 06007870
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_eyeDepth(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong uVar5;
  
  do {
    uVar5 = unaff_x28 - 8;
    if (param_1 <= (long)uVar5) {
      return;
    }
    lVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7288);
    FUN_05e44034(lVar2,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) goto LAB_0600793c;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_06007940:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (lVar2 == 0) {
LAB_0600793c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + unaff_x28 * 4);
    lVar3 = *unaff_x20;
    uVar4 = thunk_FUN_0322f148(*unaff_x25);
    FUN_04d1da94(uVar4,lVar2,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_047afcfc(), lVar3 == 0)) goto LAB_0600793c;
    if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_06007940;
    *(undefined4 *)(lVar3 + unaff_x28 * 4) = uVar1;
    unaff_x28 = unaff_x28 + 1;
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *unaff_x23;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0600793c;
    param_1 = (long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18);
  } while( true );
}


