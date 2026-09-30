/*
FUNCTION_NAME: FUN_06cd7be0
ENTRY_POINT: 06cd7be0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06cd7be0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  if ((DAT_07eea58d & 1) == 0) {
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    DAT_07eea58d = 1;
  }
  puVar3 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  iVar9 = 0;
  do {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *(long *)puVar2;
    }
    lVar8 = *(long *)(lVar4 + 0xb8);
    if (*(int *)(lVar8 + 0x28) <= iVar9) {
      return;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    uVar5 = FUN_0427a61c(lVar8 + 0x28,iVar9,*(undefined8 *)puVar3);
    if (uVar5 != 0) {
      if ((uVar5 & 1) == 0) {
        plVar6 = (long *)FUN_05e63fd8(uVar5,0);
        if (*plVar6 != 0) {
          plVar6 = (long *)FUN_05e63fd8(uVar5,0);
          plVar6 = (long *)*plVar6;
LAB_06cd7cc8:
          if (plVar6 == (long *)0x0) {
LAB_06cd7d58:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_03643084();
          }
          lVar4 = plVar6[9];
          if (0 < (int)lVar4) {
            lVar8 = plVar6[2];
            if (lVar8 == 0) goto LAB_06cd7d58;
            lVar10 = 0;
            do {
              if (*(uint *)(lVar8 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar7 = *(long *)(lVar8 + 0x20 + lVar10 * 8);
              if (lVar7 == 0) goto LAB_06cd7d58;
              FUN_06cb8de0(lVar7,0);
              lVar10 = lVar10 + 1;
            } while ((int)lVar4 != (int)lVar10);
          }
        }
      }
      else {
        lVar4 = thunk_FUN_036447e0(uVar5,0);
        if (lVar4 != 0) {
          plVar6 = (long *)thunk_FUN_036447e0(uVar5,0);
          goto LAB_06cd7cc8;
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}


