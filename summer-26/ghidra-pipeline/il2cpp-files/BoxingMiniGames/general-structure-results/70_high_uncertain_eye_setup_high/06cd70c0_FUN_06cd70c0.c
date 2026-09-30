/*
FUNCTION_NAME: FUN_06cd70c0
ENTRY_POINT: 06cd70c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06cd70c0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined8 local_48;
  
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  if ((DAT_07eea586 & 1) == 0) {
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(System_ComponentModel_AddingNewEventArgs_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    DAT_07eea586 = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = System_ComponentModel_AddingNewEventArgs_TypeInfo;
  puVar3 = OVRPlugin_BoneCapsule___TypeInfo;
  iVar1 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (iVar1 < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar9 = 0;
    do {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      uVar6 = FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar3);
      if (uVar6 == 0) {
LAB_06cd7220:
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar5 = *(long *)puVar2;
        }
        local_48 = 0;
        FUN_0427a6b8(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,0,*(undefined8 *)puVar4);
      }
      else {
        if ((uVar6 & 1) == 0) {
          plVar7 = (long *)FUN_05e63fd8(uVar6,0);
          lVar5 = *plVar7;
        }
        else {
          lVar5 = thunk_FUN_036447e0(uVar6,0);
        }
        if (lVar5 == 0) {
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar5 = *(long *)puVar2;
          }
          local_48 = FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar3);
          FUN_05d345c4(&local_48,0);
          goto LAB_06cd7220;
        }
        if (iVar9 != iVar8) {
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar5 = *(long *)puVar2;
          }
          FUN_0427a6b8(*(long *)(lVar5 + 0xb8) + 0x28,iVar8,uVar6,*(undefined8 *)puVar4);
        }
        iVar8 = iVar8 + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar2;
  }
  *(int *)(*(long *)(lVar5 + 0xb8) + 0x28) = iVar8;
  return;
}


