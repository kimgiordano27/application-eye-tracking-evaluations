/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.DecalEntityManager$$get_decalProjectorMesh
ENTRY_POINT: 06ea6018
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;strong_foveation_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


long UnityEngine_Rendering_Universal_DecalEntityManager__get_decalProjectorMesh(ulong param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
  ulong uVar14;
  
  if ((param_1 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f67f8);
    FUN_03642964(Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(Oculus_Platform_MessageWithUserProof_TypeInfo);
    FUN_03642964(UnityEngine_UI_Mask_TypeInfo);
    FUN_03642964(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xbc) = 1;
  }
  puVar5 = Oculus_Platform_MessageWithUserProof_TypeInfo;
  plVar13 = (long *)(unaff_x19 + 0x60);
  if (*plVar13 != 0) {
    return *plVar13;
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    iVar6 = FUN_04a78400(*(long *)(unaff_x19 + 0x50),
                         *(undefined8 *)Oculus_Platform_MessageWithUserProof_TypeInfo);
    puVar3 = UnityEngine_UI_Mask_TypeInfo;
    if (iVar6 == 0) {
      uVar14 = 0;
LAB_06ea618c:
      lVar11 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f67f8,uVar14);
      *plVar13 = lVar11;
      thunk_FUN_036b7ad0(plVar13,lVar11);
      lVar11 = *plVar13;
      if (0 < (int)uVar14) {
        if (lVar11 == 0) goto LAB_06ea6184;
        uVar7 = *(uint *)(lVar11 + 0x18);
        uVar12 = 0;
        do {
          if (uVar7 == uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          lVar1 = lVar11 + uVar12;
          uVar12 = uVar12 + 1;
          *(undefined1 *)(lVar1 + 0x20) = 1;
        } while (uVar14 != uVar12);
      }
      return lVar11;
    }
    if ((*(long *)(unaff_x19 + 0x50) != 0) &&
       (plVar10 = (long *)FUN_04a78338(*(long *)(unaff_x19 + 0x50),0,
                                       *(undefined8 *)UnityEngine_UI_Mask_TypeInfo),
       puVar4 = Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo, plVar10 != (long *)0x0))
    {
      bVar2 = *(byte *)(*(long *)Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo + 0x130)
      ;
      if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Oculus_Platform_MessageWithLaunchReportFlowResult_TypeInfo)) {
LAB_06ea6234:
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
      if (plVar10[10] != 0) {
        uVar7 = FUN_04a78400(plVar10[10],*(undefined8 *)puVar5);
        lVar11 = *(long *)(unaff_x19 + 0x50);
        if (lVar11 != 0) {
          uVar14 = (ulong)uVar7;
          iVar6 = 1;
          do {
            iVar8 = FUN_04a78400(lVar11,*(undefined8 *)puVar5);
            if (iVar8 <= iVar6) goto LAB_06ea618c;
            if ((*(long *)(unaff_x19 + 0x50) == 0) ||
               (plVar10 = (long *)FUN_04a78338(*(long *)(unaff_x19 + 0x50),iVar6,
                                               *(undefined8 *)puVar3), plVar10 == (long *)0x0))
            break;
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
            goto LAB_06ea6234;
            if (plVar10[10] == 0) break;
            uVar9 = FUN_04a78400(plVar10[10],*(undefined8 *)puVar5);
            if (uVar9 != uVar7) {
              if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_0717994c(*(undefined8 *)Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo,0);
              return 0;
            }
            lVar11 = *(long *)(unaff_x19 + 0x50);
            iVar6 = iVar6 + 1;
          } while (lVar11 != 0);
        }
      }
    }
  }
LAB_06ea6184:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


