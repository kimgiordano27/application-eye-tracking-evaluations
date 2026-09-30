/*
FUNCTION_NAME: UnityEngine.Rendering.RenderPipelineGlobalSettings$$get_settingsMap
ENTRY_POINT: 07bd7cd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07bd8474) */
/* WARNING: Removing unreachable block (ram,0x07bd8620) */

void UnityEngine_Rendering_RenderPipelineGlobalSettings__get_settingsMap(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *puVar16;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  puVar17 = *(undefined8 **)(unaff_x21 + 0x8e0);
  puVar16 = *(undefined8 **)(unaff_x19 + 0x8e8);
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(OVRHandTest_TypeInfo);
    FUN_03a8a718(OVRHaptics_TypeInfo);
    FUN_03a8a718(OVRHapticsClip_TypeInfo);
    FUN_03a8a718(OVRHumanBodyBonesMappingsInterface_TypeInfo);
    FUN_03a8a718(OVRInput_TypeInfo);
    FUN_03a8a718(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
    FUN_03a8a718(OVRLocatable_TypeInfo);
    FUN_03a8a718(OVRManager_TypeInfo);
    FUN_03a8a718(OVRMeshRenderer_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(OVRMixedReality_TypeInfo);
    FUN_03a8a718(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(OVRNativeBuffer_TypeInfo);
    FUN_03a8a718(OVRNodeStateProperties_TypeInfo);
    FUN_03a8a718(OVROverlay_TypeInfo);
    FUN_03a8a718(OVROverlayCanvas_TypeInfo);
    FUN_03a8a718(OVRHandSkeletonVersion_TypeInfo);
    FUN_03a8a718(OVROverlayCanvasManager_TypeInfo);
    FUN_03a8a718(OVROverlayCanvasSettings_TypeInfo);
    FUN_03a8a718(OVROverlayCanvas_TMPChanged_TypeInfo);
    FUN_03a8a718(OVRGazePointer_TypeInfo);
    FUN_03a8a718(PTR_DAT_08499490);
    FUN_03a8a718(OVRPassthroughColorLut_TypeInfo);
    FUN_03a8a718(OVRPassthroughLayer_TypeInfo);
    FUN_03a8a718(OVRPermissionsRequester_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xd05) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  lVar9 = thunk_FUN_03ac74bc(*puVar17);
  FUN_04de7d48(lVar9,*puVar16);
  lVar10 = thunk_FUN_03ac74bc(*puVar17);
  FUN_04de7d48(lVar10,*puVar16);
  lVar11 = FUN_07bd1688(0);
  puVar4 = OVRPermissionsRequester_TypeInfo;
  if (lVar11 != 0) {
    uVar12 = FUN_044ce248(*(undefined8 *)(lVar11 + 0x18),
                          *(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo);
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar5 = OVRInput_TypeInfo;
    puVar16 = *(undefined8 **)(lVar11 + 0xb8);
    lVar19 = puVar16[1];
    if (lVar19 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar11);
        puVar16 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar20 = *puVar16;
      lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)OVRMeshRenderer_TypeInfo);
      FUN_04962b78(lVar19,uVar20,*(undefined8 *)OVRPassthroughColorLut_TypeInfo,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar13 = lVar19;
      thunk_FUN_03afed3c(plVar13,lVar19);
    }
    plVar13 = (long *)FUN_044e3520(uVar12,lVar19,*(undefined8 *)puVar5);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)OVRMixedReality_TypeInfo) {
            puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto UnityEngine_Rendering_RenderPipelineGlobalSettings___ctor;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)OVRMixedReality_TypeInfo,0);
UnityEngine_Rendering_RenderPipelineGlobalSettings___ctor:
      puVar5 = PTR_DAT_08499490;
      plVar13 = (long *)(*(code *)*puVar16)(plVar13,puVar16[1]);
      puVar8 = OVROverlayCanvas_TMPChanged_TypeInfo;
      puVar7 = OVROverlay_TypeInfo;
      puVar6 = OVRMixedRealityCaptureConfiguration_TypeInfo;
      puVar4 = PTR_DAT_08488568;
      in_stack_00000010 = &stack0x00000058;
      in_stack_00000008 = 0;
      do {
        in_stack_00000058 = plVar13;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07bd8004;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar16 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0);
LAB_07bd8004:
        uVar14 = (*(code *)*puVar16)(plVar13,puVar16[1]);
        plVar13 = in_stack_00000058;
        puVar3 = PTR_DAT_08488550;
        if ((uVar14 & 1) == 0) {
          if (in_stack_00000058 == (long *)0x0) goto LAB_07bd8168;
          lVar11 = *in_stack_00000058;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_07bd8140;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_07bd8128;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *in_stack_00000058;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07bd8068;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar16 = (undefined8 *)FUN_03ac43c4(in_stack_00000058,*(long *)puVar6,0);
LAB_07bd8068:
        lVar11 = (*(code *)*puVar16)(plVar13,puVar16[1]);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        iVar1 = *(int *)(lVar9 + 0x18);
        FUN_07bdd59c(lVar11,lVar9);
        iVar18 = *(int *)(lVar9 + 0x18);
        while (iVar18 = iVar18 + -1, plVar13 = in_stack_00000058, iVar1 <= iVar18) {
          uVar12 = FUN_04de82e0(lVar9,iVar18,*(undefined8 *)puVar8);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_07bdd448(lVar11,uVar12);
          if ((uVar14 & 1) == 0) {
            FUN_04de9d78(lVar9,iVar18,*(undefined8 *)puVar7);
          }
        }
      } while( true );
    }
  }
  goto LAB_07bd861c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_07bd8128:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08488550) {
      puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07bd815c;
    }
  }
LAB_07bd8140:
  puVar16 = (undefined8 *)FUN_03ac43c4(in_stack_00000058,*(long *)PTR_DAT_08488550,0);
LAB_07bd815c:
  (*(code *)*puVar16)(plVar13,puVar16[1]);
LAB_07bd8168:
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar14 = FUN_07bdd640(lVar9,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar11 = FUN_07bd1688(0);
  if (lVar11 != 0) {
    uVar12 = FUN_044ce248(*(undefined8 *)(lVar11 + 0x18),
                          *(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo);
    puVar4 = OVRPermissionsRequester_TypeInfo;
    lVar11 = *(long *)OVRPermissionsRequester_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(lVar11);
      lVar11 = *(long *)puVar4;
    }
    puVar16 = *(undefined8 **)(lVar11 + 0xb8);
    lVar19 = puVar16[2];
    if (lVar19 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar11);
        puVar16 = *(undefined8 **)(*(long *)OVRPermissionsRequester_TypeInfo + 0xb8);
      }
      uVar20 = *puVar16;
      lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)OVRMeshRenderer_TypeInfo);
      FUN_04962b78(lVar19,uVar20,*(undefined8 *)OVRPassthroughLayer_TypeInfo,0);
      plVar13 = (long *)(*(long *)(*(long *)OVRPermissionsRequester_TypeInfo + 0xb8) + 0x10);
      *plVar13 = lVar19;
      thunk_FUN_03afed3c(plVar13,lVar19);
    }
    plVar13 = (long *)FUN_044e3520(uVar12,lVar19,*(undefined8 *)OVRInput_TypeInfo);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)OVRMixedReality_TypeInfo) {
            puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07bd82bc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)OVRMixedReality_TypeInfo,0);
LAB_07bd82bc:
      in_stack_00000058 = (long *)(*(code *)*puVar16)(plVar13,puVar16[1]);
      puVar7 = OVROverlayCanvas_TMPChanged_TypeInfo;
      puVar6 = OVRMixedRealityCaptureConfiguration_TypeInfo;
      puVar4 = PTR_DAT_08488568;
      in_stack_00000010 = &stack0x00000058;
      in_stack_00000008 = 0;
      do {
        plVar13 = in_stack_00000058;
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *in_stack_00000058;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07bd8340;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar16 = (undefined8 *)FUN_03ac43c4(in_stack_00000058,*(long *)puVar4,0);
LAB_07bd8340:
        uVar14 = (*(code *)*puVar16)(plVar13,puVar16[1]);
        plVar13 = in_stack_00000058;
        if ((uVar14 & 1) == 0) {
          if (in_stack_00000058 == (long *)0x0) goto LAB_07bd8468;
          lVar11 = *in_stack_00000058;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_07bd8440;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_07bd8428;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *in_stack_00000058;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_07bd83a4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar16 = (undefined8 *)FUN_03ac43c4(in_stack_00000058,*(long *)puVar6,0);
LAB_07bd83a4:
        plVar13 = (long *)(*(code *)*puVar16)(plVar13,puVar16[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_07bdd59c(plVar13,lVar10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar12 = FUN_04de82e0(lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar7);
        (**(code **)(*plVar13 + 0x358))(plVar13,lVar9,uVar12,*(undefined8 *)(*plVar13 + 0x360));
      } while( true );
    }
  }
  goto LAB_07bd861c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_07bd8428:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar16 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07bd845c;
    }
  }
LAB_07bd8440:
  puVar16 = (undefined8 *)FUN_03ac43c4(in_stack_00000058,*(long *)puVar3,0);
LAB_07bd845c:
  (*(code *)*puVar16)(plVar13,puVar16[1]);
LAB_07bd8468:
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)OVRHapticsClip_TypeInfo);
  FUN_05f9f7c4(lVar11,*(undefined8 *)OVRHaptics_TypeInfo);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar14 = FUN_07bdd984(lVar9,lVar11);
  if ((uVar14 & 1) == 0) {
    return;
  }
  if (lVar10 != 0) {
    if (0 < *(int *)(lVar10 + 0x18)) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07bdd640(lVar10,1);
      FUN_07bdd984(lVar10,lVar11);
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07bde4e4();
    if (lVar11 != 0) {
      FUN_05fa0974(&stack0x00000008,lVar11,*(undefined8 *)OVRHandTest_TypeInfo);
      puVar6 = OVROverlayCanvas_TypeInfo;
      puVar4 = OVRLocatable_TypeInfo;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000030;
      while (uVar14 = FUN_06290cc0(&stack0x00000030,*(undefined8 *)puVar4),
            lVar9 = in_stack_00000048, uVar12 = in_stack_00000040, (uVar14 & 1) != 0) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar20 = FUN_04fc17e4(in_stack_00000048,*(undefined8 *)puVar6);
        uVar2 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar14 = FUN_07bde60c(uVar12,uVar20,uVar2);
        if ((uVar14 & 1) == 0) {
          FUN_07bdca08();
        }
      }
      FUN_06290de0(&stack0x00000030,*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo)
      ;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar14 = FUN_07bde754();
      if ((uVar14 & 1) != 0) {
        return;
      }
      FUN_07bdca08();
      return;
    }
  }
LAB_07bd861c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


