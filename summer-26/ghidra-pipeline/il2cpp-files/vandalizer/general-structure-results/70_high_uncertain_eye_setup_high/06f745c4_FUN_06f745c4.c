/*
FUNCTION_NAME: FUN_06f745c4
ENTRY_POINT: 06f745c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06f745c4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = OVRMixedReality_TypeInfo;
  if ((DAT_07a599ea & 1) == 0) {
    FUN_031f20f4(OVRManager_TypeInfo);
    FUN_031f20f4(OVRMeshRenderer_TypeInfo);
    FUN_031f20f4(OVRMixedReality_TypeInfo);
    FUN_031f20f4(PTR_DAT_076361e0);
    FUN_031f20f4(PTR_DAT_076361e8);
    FUN_031f20f4(PTR_DAT_076361f0);
    DAT_07a599ea = 1;
  }
  puVar2 = OVRManager_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar4 = FUN_054e0254(*(undefined8 *)puVar2);
  lVar5 = FUN_06e550fc(param_1,0);
  if ((lVar5 != 0) &&
     (FUN_03e0e8fc(lVar5,0,lVar4,*(undefined8 *)PTR_DAT_076361e0), puVar2 = PTR_DAT_076361f0,
     lVar4 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
    if (*(int *)(lVar4 + 0x18) < 1) {
      uVar7 = 0;
      *puVar1 = 0;
LAB_06f74724:
      thunk_FUN_0329bf60(puVar1,uVar7);
    }
    else {
      iVar9 = 0;
      do {
        lVar5 = FUN_047af170(lVar4,iVar9,*(undefined8 *)puVar2);
        if (lVar5 == 0) goto LAB_06f74758;
        uVar6 = FUN_06e548ac(lVar5,0);
        if ((uVar6 & 1) != 0) {
          uVar7 = FUN_047af170(lVar4,iVar9,*(undefined8 *)puVar2);
          *puVar1 = uVar7;
          goto LAB_06f74724;
        }
        iVar8 = *(int *)(lVar4 + 0x18);
        if (iVar9 == iVar8 + -1) {
          *puVar1 = 0;
          thunk_FUN_0329bf60(puVar1,0);
          iVar8 = *(int *)(lVar4 + 0x18);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    puVar2 = OVRMeshRenderer_TypeInfo;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_054e0394(lVar4,*(undefined8 *)puVar2);
    return;
  }
LAB_06f74758:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


