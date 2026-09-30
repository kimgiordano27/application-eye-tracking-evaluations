/*
FUNCTION_NAME: UnityEngine.Cubemap$$SmoothEdges_Injected
ENTRY_POINT: 068b4dfc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x068b51d4) */
/* WARNING: Removing unreachable block (ram,0x068b51c4) */

void UnityEngine_Cubemap__SmoothEdges_Injected(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x19;
  int iVar12;
  long unaff_x20;
  int iVar13;
  long *unaff_x22;
  float fVar14;
  float fVar15;
  
  FUN_03188a78();
  FUN_03188a78(OVRPlugin_OVRP_1_86_0_TypeInfo);
  FUN_03188a78(OVRPlugin_OVRP_1_78_0_TypeInfo);
  FUN_03188a78(OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
  FUN_03188a78(OVRSceneManager_<>c__DisplayClass50_0_TypeInfo);
  FUN_03188a78(OVRSceneManager_<>c__DisplayClass53_0_TypeInfo);
  FUN_03188a78(
              Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
              );
  FUN_03188a78(EnvironmentLoader_<Start>d__11_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x16a) = 1;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar5 = *unaff_x22;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    UnityEngine_TerrainData___cctor(lVar5,0);
  }
  puVar3 = OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo;
  puVar2 = OVR_OpenVR_IVROverlay__SetHighQualityOverlay_TypeInfo;
  puVar1 = 
  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo;
  if (*(char *)(unaff_x19 + 0xc0) == '\0') {
    if (*(char *)(unaff_x19 + 0xa8) == '\0') {
      if (*(char *)(unaff_x19 + 0xf0) == '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_04b02a90(0,*(long *)(unaff_x19 + 0xe8),
                     *(undefined8 *)OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
        *(undefined1 *)(unaff_x19 + 0xf0) = 1;
      }
      fVar15 = 0.0;
      iVar13 = 4;
      goto LAB_068b5100;
    }
    fVar15 = 0.0;
    *(undefined1 *)(unaff_x19 + 0xf0) = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0xf0) = 0;
    puVar4 = OVRSceneManager_<>c__DisplayClass50_0_TypeInfo;
    if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar13 = *(int *)(*(long *)(unaff_x19 + 0xb0) + 0x20);
    if (iVar13 < 1) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = 0.0;
      iVar12 = 0;
      do {
        if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar6 = FUN_03e39e04(*(long *)(unaff_x19 + 0xb0),iVar12,*(undefined8 *)puVar4);
        lVar7 = thunk_FUN_031c3cac(uVar6,*(undefined8 *)puVar1);
        if (lVar7 == 0) {
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          fVar15 = 1.0;
          FUN_0525b750(0x3f800000,*(long *)(unaff_x19 + 0x110),uVar6,*(undefined8 *)puVar2);
        }
        iVar12 = iVar12 + 1;
      } while (iVar13 != iVar12);
    }
  }
  puVar4 = OVRSceneManager_<>c__DisplayClass45_0_TypeInfo;
  if (*(char *)(unaff_x19 + 0xa8) != '\0') {
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar13 = *(int *)(*(long *)(unaff_x19 + 0xa0) + 0x20);
    if (0 < iVar13) {
      iVar12 = 0;
      do {
        if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar6 = FUN_03e39e04(*(long *)(unaff_x19 + 0xa0),iVar12,*(undefined8 *)puVar4);
        lVar7 = thunk_FUN_031c3cac(uVar6,*(undefined8 *)puVar1);
        if ((lVar7 == 0) && (uVar8 = FUN_068b25d8(), (uVar8 & 1) == 0)) {
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          FUN_0525b750(0,*(long *)(unaff_x19 + 0x110),uVar6,*(undefined8 *)puVar2);
        }
        iVar12 = iVar12 + 1;
      } while (iVar13 != iVar12);
    }
  }
  puVar4 = OVRSceneManager_<>c__DisplayClass53_0_TypeInfo;
  if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar13 = *(int *)(*(long *)(unaff_x19 + 0x108) + 0x20);
  if (iVar13 < 1) {
    iVar13 = 0xf;
  }
  else {
    iVar12 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar9 = (long *)FUN_03e39e04(*(long *)(unaff_x19 + 0x108),iVar12,*(undefined8 *)puVar4);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar7 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_068b5064;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,1);
LAB_068b5064:
      fVar14 = (float)(*(code *)*puVar10)(plVar9);
      if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_0525b750(*(long *)(unaff_x19 + 0x110),plVar9,*(undefined8 *)puVar2);
      iVar12 = iVar12 + 1;
      if (fVar15 <= fVar14) {
        fVar15 = fVar14;
      }
    } while (iVar12 != iVar13);
    iVar13 = 0xf;
  }
LAB_068b5100:
  if (lVar5 != 0) {
    FUN_069807c8(lVar5,0);
  }
  if ((iVar13 == 0xf) || (iVar13 == 0)) {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *unaff_x22;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      UnityEngine_TerrainData___cctor(lVar5,0);
    }
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_04b02a90(fVar15,*(long *)(unaff_x19 + 0xe8),*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      FUN_069807c8(lVar5,0);
    }
  }
  return;
}


