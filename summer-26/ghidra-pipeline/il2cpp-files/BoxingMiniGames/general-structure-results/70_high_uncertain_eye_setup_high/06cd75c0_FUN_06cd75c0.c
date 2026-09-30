/*
FUNCTION_NAME: FUN_06cd75c0
ENTRY_POINT: 06cd75c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


int FUN_06cd75c0(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  
  plVar13 = (long *)UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  if ((DAT_07eea58a & 1) == 0) {
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_TypeInfo)
    ;
    FUN_03642964(Oculus_Interaction_Input_OneEuroFilter___TypeInfo);
    DAT_07eea58a = 1;
  }
  lVar5 = *plVar13;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *plVar13;
  }
  iVar1 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (iVar1 < 1) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    iVar14 = 0;
    do {
      lVar5 = *plVar13;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *plVar13;
      }
      uVar6 = FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar14,
                           *(undefined8 *)OVRPlugin_BoneCapsule___TypeInfo);
      if (uVar6 != 0) {
        if ((uVar6 & 1) == 0) {
          plVar7 = (long *)FUN_05e63fd8();
          plVar7 = (long *)*plVar7;
        }
        else {
          plVar7 = (long *)thunk_FUN_036447e0(uVar6,0);
        }
        if (plVar7 != (long *)0x0) {
          bVar3 = *(byte *)(*plVar13 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *plVar13)) {
                    /* WARNING: Subroutine does not return */
            FUN_03643084(plVar7);
          }
          uVar2 = *(uint *)(plVar7 + 9);
          if (0 < (int)uVar2) {
            lVar5 = plVar7[2];
            if (lVar5 == 0) {
LAB_06cd7880:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar6 = 0;
            do {
              if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_06cd7884:
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              lVar16 = *(long *)(lVar5 + uVar6 * 8 + 0x20);
              if (lVar16 == 0) goto LAB_06cd7880;
              uVar8 = FUN_06cb61d4(lVar16,0);
              if ((uVar8 & 1) != 0) {
                lVar15 = *(long *)(lVar16 + 0x28);
                if (lVar15 == 0) goto LAB_06cd7880;
                uVar8 = *(ulong *)(lVar15 + 0x18);
                iVar18 = (int)uVar8;
                if (*(int *)(lVar16 + 0x48) == iVar18) {
                  if (param_1 == 0) goto LAB_06cd7880;
                  FUN_0459f24c(param_1,lVar15,
                               *(undefined8 *)
                                UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_TypeInfo
                              );
                  iVar12 = iVar12 + iVar18;
                }
                else {
                  piVar10 = (int *)(plVar7[0x17] + (long)*(int *)(lVar16 + 0x58) * 0x30);
                  if (piVar10 == (int *)0x0) goto LAB_06cd7880;
                  if (0 < iVar18) {
                    iVar18 = *piVar10;
                    uVar17 = 0;
                    do {
                      if (*(char *)((long)(iVar18 + (int)uVar17) * 0x44 + plVar7[0xc]) != '\0') {
                        if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_06cd7884;
                        if (param_1 == 0) goto LAB_06cd7880;
                        lVar16 = *(long *)(param_1 + 0x10);
                        uVar9 = *(undefined8 *)(lVar15 + 0x20 + uVar17 * 8);
                        lVar11 = *(long *)Oculus_Interaction_Input_OneEuroFilter___TypeInfo;
                        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                        if (lVar16 == 0) goto LAB_06cd7880;
                        uVar4 = *(uint *)(param_1 + 0x18);
                        if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                          *(uint *)(param_1 + 0x18) = uVar4 + 1;
                          *(undefined8 *)(lVar16 + (long)(int)uVar4 * 8 + 0x20) = uVar9;
                          thunk_FUN_036b7ad0();
                        }
                        else {
                          FUN_0459f03c(param_1,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        iVar12 = iVar12 + 1;
                      }
                      uVar17 = uVar17 + 1;
                    } while ((uVar8 & 0xffffffff) != uVar17);
                  }
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar2);
          }
        }
      }
      iVar14 = iVar14 + 1;
      plVar13 = (long *)UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
    } while (iVar14 != iVar1);
  }
  return iVar12;
}


