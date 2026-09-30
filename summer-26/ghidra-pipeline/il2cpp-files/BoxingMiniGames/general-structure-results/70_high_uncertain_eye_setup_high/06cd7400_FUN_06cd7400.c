/*
FUNCTION_NAME: FUN_06cd7400
ENTRY_POINT: 06cd7400
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06cd7400(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 local_38;
  
  if ((DAT_07eea58e & 1) == 0) {
    FUN_03642964(OVRPlugin_Bone___TypeInfo);
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    DAT_07eea58e = 1;
  }
  puVar4 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar3 = OVRPlugin_Bone___TypeInfo;
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  local_38 = 0;
  do {
    while( true ) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      lVar8 = *(long *)(lVar5 + 0xb8);
      iVar9 = *(int *)(lVar8 + 0x28);
      if (iVar9 < 1) {
        return;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
        iVar9 = *(int *)(lVar8 + 0x28);
      }
      iVar9 = iVar9 + -1;
      uVar6 = FUN_0427a61c(lVar8 + 0x28,iVar9,*(undefined8 *)puVar4);
      if (uVar6 != 0) break;
LAB_06cd7578:
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      FUN_0427b10c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar3);
    }
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)FUN_05e63fd8(uVar6,0);
      if (*plVar7 == 0) {
LAB_06cd7540:
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar5 = *(long *)puVar2;
        }
        local_38 = FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar4);
        FUN_05d345c4(&local_38,0);
        goto LAB_06cd7578;
      }
      plVar7 = (long *)FUN_05e63fd8(uVar6,0);
      plVar7 = (long *)*plVar7;
    }
    else {
      lVar5 = thunk_FUN_036447e0(uVar6,0);
      if (lVar5 == 0) goto LAB_06cd7540;
      plVar7 = (long *)thunk_FUN_036447e0(uVar6,0);
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    FUN_06cd0be8(plVar7,0);
  } while( true );
}


