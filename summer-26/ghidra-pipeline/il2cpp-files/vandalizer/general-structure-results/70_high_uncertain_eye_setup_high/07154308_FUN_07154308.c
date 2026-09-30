/*
FUNCTION_NAME: FUN_07154308
ENTRY_POINT: 07154308
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_07154308(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_0759b2a8;
  if ((DAT_07a5b2a1 & 1) == 0) {
    FUN_031f20f4(OVRManager_TypeInfo);
    FUN_031f20f4(OVRMeshRenderer_TypeInfo);
    FUN_031f20f4(OVRMixedReality_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e0);
    FUN_031f20f4(PTR_DAT_076361e8);
    FUN_031f20f4(PTR_DAT_076361f0);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    DAT_07a5b2a1 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x80);
  uVar7 = *puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = FUN_06e5ba28(uVar7,0,0);
  puVar2 = OVRMixedReality_TypeInfo;
  puVar1 = OVRManager_TypeInfo;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)OVRMixedReality_TypeInfo + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar4 = FUN_054e0254(*(undefined8 *)puVar1);
    lVar5 = FUN_06e550fc(param_1,0);
    if ((lVar5 == 0) || (FUN_03e0e8fc(lVar5,0,lVar4,*(undefined8 *)PTR_DAT_076361e0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(int *)(lVar4 + 0x18) < 1) {
      uVar7 = 0;
      *puVar6 = 0;
    }
    else {
      uVar7 = FUN_047af170(lVar4,*(int *)(lVar4 + 0x18) + -1,*(undefined8 *)PTR_DAT_076361f0);
      *puVar6 = uVar7;
    }
    thunk_FUN_0329bf60(puVar6,uVar7);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_054e0394(lVar4,*(undefined8 *)OVRMeshRenderer_TypeInfo);
  }
  return *puVar6;
}


