/*
FUNCTION_NAME: OVRPlugin$$get_latency
ENTRY_POINT: 06007748
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


void OVRPlugin__get_latency(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  
  puVar1 = PTR_DAT_075f40e8;
  if ((bRam0000000007a46968 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f40e8);
    FUN_031f20f4(PTR_DAT_0759b6a8);
    FUN_031f20f4(PTR_DAT_075f7270);
    FUN_031f20f4(PTR_DAT_075f7278);
    FUN_031f20f4(PTR_DAT_075f7280);
    FUN_031f20f4(PTR_DAT_075f7288);
    bRam0000000007a46968 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_075f7280;
  puVar3 = PTR_DAT_075f7278;
  puVar2 = PTR_DAT_075f7270;
  if (**(long **)(lVar6 + 0xb8) == 0) {
LAB_0600793c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar6 = FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b6a8,
                       *(undefined4 *)(**(long **)(lVar6 + 0xb8) + 0x18));
  plVar10 = (long *)(param_1 + 0x10);
  *plVar10 = lVar6;
  thunk_FUN_0329bf60(plVar10,lVar6);
  FUN_05e44034(param_1,0);
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_0329bf60((long *)(param_1 + 0x18),param_2);
  lVar6 = 8;
  while( true ) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar1;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0600793c;
    uVar11 = lVar6 - 8;
    if ((long)*(int *)(**(long **)(lVar7 + 0xb8) + 0x18) <= (long)uVar11) {
      return;
    }
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7288);
    FUN_05e44034(lVar7,0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = **(long **)(lVar8 + 0xb8);
    if (lVar8 == 0) goto LAB_0600793c;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) break;
    if (lVar7 == 0) goto LAB_0600793c;
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar8 + lVar6 * 4);
    lVar8 = *plVar10;
    uVar9 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
    FUN_04d1da94(uVar9,lVar7,*(undefined8 *)puVar4,0);
    if ((param_2 == 0) || (uVar5 = FUN_047afcfc(param_2,uVar9,*(undefined8 *)puVar2), lVar8 == 0))
    goto LAB_0600793c;
    if (*(uint *)(lVar8 + 0x18) <= uVar11) break;
    *(undefined4 *)(lVar8 + lVar6 * 4) = uVar5;
    lVar6 = lVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


