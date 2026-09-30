/*
FUNCTION_NAME: FUN_07bd7ca4
ENTRY_POINT: 07bd7ca4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 125
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07bd8474) */
/* WARNING: Removing unreachable block (ram,0x07bd8620) */

void FUN_07bd7ca4(void)

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
  undefined8 *puVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  long **pplStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long **pplStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar5 = OVRHandSkeletonVersion_TypeInfo;
  puVar4 = OVRGazePointer_TypeInfo;
  if ((DAT_08992d05 & 1) == 0) {
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
    DAT_08992d05 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_04de7d48(lVar9,*(undefined8 *)puVar5);
  lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_04de7d48(lVar10,*(undefined8 *)puVar5);
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
    puVar14 = *(undefined8 **)(lVar11 + 0xb8);
    lVar18 = puVar14[1];
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar11);
        puVar14 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar19 = *puVar14;
      lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)OVRMeshRenderer_TypeInfo);
      FUN_04962b78(lVar18,uVar19,*(undefined8 *)OVRPassthroughColorLut_TypeInfo,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar13 = lVar18;
      thunk_FUN_03afed3c(plVar13,lVar18);
    }
    plVar13 = (long *)FUN_044e3520(uVar12,lVar18,*(undefined8 *)puVar5);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)OVRMixedReality_TypeInfo) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto UnityEngine_Rendering_RenderPipelineGlobalSettings___ctor;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)OVRMixedReality_TypeInfo,0);
UnityEngine_Rendering_RenderPipelineGlobalSettings___ctor:
      puVar5 = PTR_DAT_08499490;
      plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar8 = OVROverlayCanvas_TMPChanged_TypeInfo;
      puVar7 = OVROverlay_TypeInfo;
      puVar6 = OVRMixedRealityCaptureConfiguration_TypeInfo;
      puVar4 = PTR_DAT_08488568;
      pplStack_b0 = &local_68;
      local_b8 = 0;
      do {
        local_68 = plVar13;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_07bd8004;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0);
LAB_07bd8004:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        plVar13 = local_68;
        puVar3 = PTR_DAT_08488550;
        if ((uVar15 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_07bd8168;
          lVar11 = *local_68;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_07bd8140;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_07bd8128;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_07bd8068;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_03ac43c4(local_68,*(long *)puVar6,0);
LAB_07bd8068:
        lVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
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
        iVar17 = *(int *)(lVar9 + 0x18);
        while (iVar17 = iVar17 + -1, plVar13 = local_68, iVar1 <= iVar17) {
          uVar12 = FUN_04de82e0(lVar9,iVar17,*(undefined8 *)puVar8);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_07bdd448(lVar11,uVar12);
          if ((uVar15 & 1) == 0) {
            FUN_04de9d78(lVar9,iVar17,*(undefined8 *)puVar7);
          }
        }
      } while( true );
    }
  }
  goto LAB_07bd861c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_07bd8128:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08488550) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07bd815c;
    }
  }
LAB_07bd8140:
  puVar14 = (undefined8 *)FUN_03ac43c4(local_68,*(long *)PTR_DAT_08488550,0);
LAB_07bd815c:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_07bd8168:
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar15 = FUN_07bdd640(lVar9,0);
  if ((uVar15 & 1) == 0) {
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
    puVar14 = *(undefined8 **)(lVar11 + 0xb8);
    lVar18 = puVar14[2];
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar11);
        puVar14 = *(undefined8 **)(*(long *)OVRPermissionsRequester_TypeInfo + 0xb8);
      }
      uVar19 = *puVar14;
      lVar18 = thunk_FUN_03ac74bc(*(undefined8 *)OVRMeshRenderer_TypeInfo);
      FUN_04962b78(lVar18,uVar19,*(undefined8 *)OVRPassthroughLayer_TypeInfo,0);
      plVar13 = (long *)(*(long *)(*(long *)OVRPermissionsRequester_TypeInfo + 0xb8) + 0x10);
      *plVar13 = lVar18;
      thunk_FUN_03afed3c(plVar13,lVar18);
    }
    plVar13 = (long *)FUN_044e3520(uVar12,lVar18,*(undefined8 *)OVRInput_TypeInfo);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)OVRMixedReality_TypeInfo) {
            puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_07bd82bc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar14 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)OVRMixedReality_TypeInfo,0);
LAB_07bd82bc:
      local_68 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar7 = OVROverlayCanvas_TMPChanged_TypeInfo;
      puVar6 = OVRMixedRealityCaptureConfiguration_TypeInfo;
      puVar4 = PTR_DAT_08488568;
      pplStack_b0 = &local_68;
      local_b8 = 0;
      do {
        plVar13 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_07bd8340;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_03ac43c4(local_68,*(long *)puVar4,0);
LAB_07bd8340:
        uVar15 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        plVar13 = local_68;
        if ((uVar15 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_07bd8468;
          lVar11 = *local_68;
          uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar15 == 0) goto LAB_07bd8440;
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_07bd8428;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_07bd83a4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar14 = (undefined8 *)FUN_03ac43c4(local_68,*(long *)puVar6,0);
LAB_07bd83a4:
        plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
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
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_07bd8428:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_07bd845c;
    }
  }
LAB_07bd8440:
  puVar14 = (undefined8 *)FUN_03ac43c4(local_68,*(long *)puVar3,0);
LAB_07bd845c:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_07bd8468:
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)OVRHapticsClip_TypeInfo);
  FUN_05f9f7c4(lVar11,*(undefined8 *)OVRHaptics_TypeInfo);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar15 = FUN_07bdd984(lVar9,lVar11);
  if ((uVar15 & 1) == 0) {
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
      FUN_05fa0974(&local_b8,lVar11,*(undefined8 *)OVRHandTest_TypeInfo);
      puVar6 = OVROverlayCanvas_TypeInfo;
      puVar4 = OVRLocatable_TypeInfo;
      pplStack_88 = pplStack_b0;
      local_90 = local_b8;
      local_78 = lStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      local_b8 = 0;
      pplStack_b0 = (long **)&local_90;
      while (uVar15 = FUN_06290cc0(&local_90,*(undefined8 *)puVar4), lVar9 = local_78,
            uVar12 = local_80, (uVar15 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar19 = FUN_04fc17e4(local_78,*(undefined8 *)puVar6);
        uVar2 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar15 = FUN_07bde60c(uVar12,uVar19,uVar2);
        if ((uVar15 & 1) == 0) {
          FUN_07bdca08();
        }
      }
      FUN_06290de0(&local_90,*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar15 = FUN_07bde754();
      if ((uVar15 & 1) != 0) {
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


