/*
FUNCTION_NAME: FUN_068b4da8
ENTRY_POINT: 068b4da8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x068b51d4) */
/* WARNING: Removing unreachable block (ram,0x068b51c4) */

void FUN_068b4da8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  
  puVar1 = EnvironmentLoader_<Start>d__11_TypeInfo;
  if ((DAT_0755916a & 1) == 0) {
    FUN_03188a78(OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
    FUN_03188a78(OVR_OpenVR_IVROverlay__SetHighQualityOverlay_TypeInfo);
    FUN_03188a78(OVRSceneLoader_<onCheckSceneCoroutine>d__25_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_86_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_03188a78(OVRSceneManager_<>c__DisplayClass45_0_TypeInfo);
    FUN_03188a78(OVRSceneManager_<>c__DisplayClass50_0_TypeInfo);
    FUN_03188a78(OVRSceneManager_<>c__DisplayClass53_0_TypeInfo);
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo
                );
    FUN_03188a78(EnvironmentLoader_<Start>d__11_TypeInfo);
    DAT_0755916a = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    UnityEngine_TerrainData___cctor(lVar6,0);
  }
  puVar4 = OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo;
  puVar3 = OVR_OpenVR_IVROverlay__SetHighQualityOverlay_TypeInfo;
  puVar2 = 
  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_OppositionStateBuilder_TypeInfo;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      if (*(char *)(param_1 + 0xf0) == '\0') {
        if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_04b02a90(0,*(long *)(param_1 + 0xe8),
                     *(undefined8 *)OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
        *(undefined1 *)(param_1 + 0xf0) = 1;
      }
      fVar16 = 0.0;
      iVar14 = 4;
      goto LAB_068b5100;
    }
    fVar16 = 0.0;
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    puVar5 = OVRSceneManager_<>c__DisplayClass50_0_TypeInfo;
    if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar14 = *(int *)(*(long *)(param_1 + 0xb0) + 0x20);
    if (iVar14 < 1) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = 0.0;
      iVar13 = 0;
      do {
        if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar7 = FUN_03e39e04(*(long *)(param_1 + 0xb0),iVar13,*(undefined8 *)puVar5);
        lVar8 = thunk_FUN_031c3cac(uVar7,*(undefined8 *)puVar2);
        if (lVar8 == 0) {
          if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          fVar16 = 1.0;
          FUN_0525b750(0x3f800000,*(long *)(param_1 + 0x110),uVar7,*(undefined8 *)puVar3);
        }
        iVar13 = iVar13 + 1;
      } while (iVar14 != iVar13);
    }
  }
  puVar5 = OVRSceneManager_<>c__DisplayClass45_0_TypeInfo;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar14 = *(int *)(*(long *)(param_1 + 0xa0) + 0x20);
    if (0 < iVar14) {
      iVar13 = 0;
      do {
        if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar7 = FUN_03e39e04(*(long *)(param_1 + 0xa0),iVar13,*(undefined8 *)puVar5);
        lVar8 = thunk_FUN_031c3cac(uVar7,*(undefined8 *)puVar2);
        if ((lVar8 == 0) && (uVar9 = FUN_068b25d8(param_1,uVar7), (uVar9 & 1) == 0)) {
          if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          FUN_0525b750(0,*(long *)(param_1 + 0x110),uVar7,*(undefined8 *)puVar3);
        }
        iVar13 = iVar13 + 1;
      } while (iVar14 != iVar13);
    }
  }
  puVar5 = OVRSceneManager_<>c__DisplayClass53_0_TypeInfo;
  if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  iVar14 = *(int *)(*(long *)(param_1 + 0x108) + 0x20);
  if (iVar14 < 1) {
    iVar14 = 0xf;
  }
  else {
    iVar13 = 0;
    do {
      if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar10 = (long *)FUN_03e39e04(*(long *)(param_1 + 0x108),iVar13,*(undefined8 *)puVar5);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar8 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_068b5064;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,1);
LAB_068b5064:
      fVar15 = (float)(*(code *)*puVar11)(plVar10,param_1,puVar11[1]);
      if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      FUN_0525b750(*(long *)(param_1 + 0x110),plVar10,*(undefined8 *)puVar3);
      iVar13 = iVar13 + 1;
      if (fVar16 <= fVar15) {
        fVar16 = fVar15;
      }
    } while (iVar13 != iVar14);
    iVar14 = 0xf;
  }
LAB_068b5100:
  if (lVar6 != 0) {
    FUN_069807c8(lVar6,0);
  }
  if ((iVar14 == 0xf) || (iVar14 == 0)) {
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 != 0) {
      UnityEngine_TerrainData___cctor(lVar6,0);
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_04b02a90(fVar16,*(long *)(param_1 + 0xe8),*(undefined8 *)puVar4);
    if (lVar6 != 0) {
      FUN_069807c8(lVar6,0);
    }
  }
  return;
}


