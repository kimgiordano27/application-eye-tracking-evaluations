/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 060077e4
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


void OVRPlugin__get_eyeDepth(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar9;
  
  puVar2 = PTR_DAT_075f7280;
  puVar1 = PTR_DAT_075f7278;
  if (*param_1 == 0) {
LAB_0600793c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar4 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b6a8,*(undefined4 *)(*param_1 + 0x18));
  plVar8 = (long *)(unaff_x21 + 0x10);
  *plVar8 = lVar4;
  thunk_FUN_0329bf60(plVar8,lVar4);
  FUN_05e44034();
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_0329bf60((long *)(unaff_x21 + 0x18));
  lVar4 = 8;
  while( true ) {
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *unaff_x23;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_0600793c;
    uVar9 = lVar4 - 8;
    if ((long)*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (long)uVar9) {
      return;
    }
    lVar5 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7288);
    FUN_05e44034(lVar5,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar6 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_0600793c;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) break;
    if (lVar5 == 0) goto LAB_0600793c;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + lVar4 * 4);
    lVar6 = *plVar8;
    uVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04d1da94(uVar7,lVar5,*(undefined8 *)puVar2,0);
    if ((unaff_x19 == 0) || (uVar3 = FUN_047afcfc(), lVar6 == 0)) goto LAB_0600793c;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) break;
    *(undefined4 *)(lVar6 + lVar4 * 4) = uVar3;
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


