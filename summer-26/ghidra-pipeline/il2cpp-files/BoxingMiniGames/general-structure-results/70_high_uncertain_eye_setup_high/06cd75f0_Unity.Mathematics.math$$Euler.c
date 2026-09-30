/*
FUNCTION_NAME: Unity.Mathematics.math$$Euler
ENTRY_POINT: 06cd75f0
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


int Unity_Mathematics_math__Euler(ulong param_1)

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
  long unaff_x19;
  int iVar11;
  long unaff_x20;
  long *unaff_x21;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_TypeInfo)
    ;
    FUN_03642964(Oculus_Interaction_Input_OneEuroFilter___TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x58a) = 1;
  }
  lVar5 = *unaff_x21;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *unaff_x21;
  }
  iVar1 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (iVar1 < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    iVar12 = 0;
    do {
      lVar5 = *unaff_x21;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *unaff_x21;
      }
      uVar6 = FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar12,
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
          bVar3 = *(byte *)(*unaff_x21 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x21)) {
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
              lVar14 = *(long *)(lVar5 + uVar6 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_06cd7880;
              uVar8 = FUN_06cb61d4(lVar14,0);
              if ((uVar8 & 1) != 0) {
                lVar13 = *(long *)(lVar14 + 0x28);
                if (lVar13 == 0) goto LAB_06cd7880;
                uVar8 = *(ulong *)(lVar13 + 0x18);
                iVar16 = (int)uVar8;
                if (*(int *)(lVar14 + 0x48) == iVar16) {
                  if (unaff_x19 == 0) goto LAB_06cd7880;
                  FUN_0459f24c();
                  iVar11 = iVar11 + iVar16;
                }
                else {
                  piVar10 = (int *)(plVar7[0x17] + (long)*(int *)(lVar14 + 0x58) * 0x30);
                  if (piVar10 == (int *)0x0) goto LAB_06cd7880;
                  if (0 < iVar16) {
                    iVar16 = *piVar10;
                    uVar15 = 0;
                    do {
                      if (*(char *)((long)(iVar16 + (int)uVar15) * 0x44 + plVar7[0xc]) != '\0') {
                        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_06cd7884;
                        if (unaff_x19 == 0) goto LAB_06cd7880;
                        lVar14 = *(long *)(unaff_x19 + 0x10);
                        uVar9 = *(undefined8 *)(lVar13 + 0x20 + uVar15 * 8);
                        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
                        if (lVar14 == 0) goto LAB_06cd7880;
                        uVar4 = *(uint *)(unaff_x19 + 0x18);
                        if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(unaff_x19 + 0x18) = uVar4 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20) = uVar9;
                          thunk_FUN_036b7ad0();
                        }
                        else {
                          FUN_0459f03c();
                        }
                        iVar11 = iVar11 + 1;
                      }
                      uVar15 = uVar15 + 1;
                    } while ((uVar8 & 0xffffffff) != uVar15);
                  }
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar2);
          }
        }
      }
      iVar12 = iVar12 + 1;
      unaff_x21 = (long *)UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
    } while (iVar12 != iVar1);
  }
  return iVar11;
}


