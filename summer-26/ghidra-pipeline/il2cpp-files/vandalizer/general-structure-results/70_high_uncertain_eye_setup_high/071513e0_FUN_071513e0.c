/*
FUNCTION_NAME: FUN_071513e0
ENTRY_POINT: 071513e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_071513e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  puVar3 = OVRMixedReality_TypeInfo;
  if ((DAT_07a5b292 & 1) == 0) {
    FUN_031f20f4(OVRManager_TypeInfo);
    FUN_031f20f4(OVRMeshRenderer_TypeInfo);
    FUN_031f20f4(OVRMixedReality_TypeInfo);
    FUN_031f20f4(IngameDebugConsole_ConsoleMethodAttribute_var);
    FUN_031f20f4(PTR_DAT_076361e8);
    FUN_031f20f4(PTR_DAT_076361f0);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a5b292 = 1;
  }
  puVar1 = OVRManager_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar4 = FUN_054e0254(*(undefined8 *)puVar1);
  if ((param_1 != 0) &&
     (FUN_03d79e3c(param_1,0,lVar4,*(undefined8 *)IngameDebugConsole_ConsoleMethodAttribute_var),
     puVar1 = PTR_DAT_076361f0, lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x18) < 1) {
      lVar5 = 0;
    }
    else {
      iVar8 = 0;
      do {
        lVar5 = FUN_047af170(lVar4,iVar8,*(undefined8 *)puVar1);
        if (lVar5 == 0) goto LAB_0715157c;
        uVar6 = FUN_0713d86c(lVar5,0);
      } while (((uVar6 & 1) == 0) && (iVar8 = iVar8 + 1, iVar8 < *(int *)(lVar4 + 0x18)));
    }
    puVar2 = OVRMeshRenderer_TypeInfo;
    puVar1 = PTR_DAT_0759b2a8;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_054e0394(lVar4,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_06e587d8(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (lVar5 != 0) {
      uVar7 = FUN_06e5502c(lVar5,0);
      return uVar7;
    }
  }
LAB_0715157c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


