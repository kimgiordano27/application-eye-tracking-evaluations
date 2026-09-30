/*
FUNCTION_NAME: FUN_09725660
ENTRY_POINT: 09725660
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_09725660(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  long *plVar22;
  bool bVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  int local_84;
  undefined4 local_74;
  undefined1 local_70 [16];
  
  plVar22 = (long *)
            UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var;
  if ((DAT_0a54754f & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fdd510);
    FUN_04447ba8(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
                );
    FUN_04447ba8(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
                );
    FUN_04447ba8(PTR_DAT_09f2a2c8);
    FUN_04447ba8(PTR_DAT_09f2a2c0);
    FUN_04447ba8(PTR_DAT_09fde118);
    FUN_04447ba8(PTR_DAT_09fde120);
    FUN_04447ba8(System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var)
    ;
    FUN_04447ba8(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
                );
    FUN_04447ba8(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_04447ba8(
                UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                );
    FUN_04447ba8(System_ArraySegment<T>_var);
    FUN_04447ba8(PTR_DAT_09f53bf0);
    DAT_0a54754f = 1;
  }
  lVar11 = *plVar22;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_74 = 0;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar11 = *plVar22;
  }
  auVar7._8_8_ = local_70._8_8_;
  auVar7._0_8_ = local_70._0_8_;
  auVar25._8_8_ = local_70._8_8_;
  auVar25._0_8_ = local_70._0_8_;
  plVar16 = *(long **)(lVar11 + 0xb8);
  lVar11 = *plVar16;
  if (lVar11 != 0) {
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    lVar11 = plVar16[1];
    local_70 = auVar25;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      lVar11 = plVar16[2];
      local_70 = auVar7;
      if (lVar11 != 0) {
        iVar10 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar10) {
          FUN_07a61000(*(undefined8 *)(lVar11 + 0x10),0,iVar10,0);
          plVar16 = *(long **)(*plVar22 + 0xb8);
        }
        auVar8._8_8_ = local_70._8_8_;
        auVar8._0_8_ = local_70._0_8_;
        lVar11 = plVar16[3];
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          local_70 = auVar8;
          if (param_1 != 0) {
            local_84 = 0;
            iVar1 = *(int *)(param_1 + 0x54);
            iVar10 = 0;
            bVar18 = false;
            plVar16 = (long *)PTR_DAT_09fdd510;
            puVar20 = (undefined8 *)
                      System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var
            ;
            puVar24 = (undefined8 *)
                      UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
            ;
            do {
              if (bVar18) goto LAB_09725c98;
              if (*(int *)(*plVar16 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar11 = FUN_097235a0();
              if (lVar11 == 0) goto LAB_09725d18;
              auVar25 = FUN_05c72008(lVar11,0,*puVar20);
              local_70 = auVar25;
              lVar11 = FUN_09723528();
              if (lVar11 == 0) goto LAB_09725d18;
              uVar12 = FUN_05cded08(lVar11,0,*puVar24);
              lVar11 = FUN_097234b0();
              if (lVar11 == 0) goto LAB_09725d18;
              uVar13 = FUN_05cded08(lVar11,0,*puVar24);
              lVar11 = FUN_09723618();
              if (lVar11 == 0) goto LAB_09725d18;
              uVar9 = FUN_05abf030(lVar11,0,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
              if (iVar10 < iVar1) {
                bVar23 = false;
                bVar3 = false;
                bVar6 = false;
                bVar5 = false;
                bVar4 = true;
                bVar18 = false;
                do {
                  iVar21 = iVar10;
                  iVar10 = FUN_0972d9d0(param_1,iVar21,0);
                  if (iVar10 < 4) {
                    if (iVar10 == 1) {
                      uVar15 = FUN_0972daec(param_1,iVar21,6,0);
                      if ((local_84 != 0) || ((uVar15 & 1) == 0)) goto LAB_097259c4;
                      FUN_096b5fac(local_70,*(undefined8 *)PTR_DAT_09f53bf0,0);
                      bVar6 = true;
                      bVar18 = true;
                    }
                    else if (iVar10 == 3) {
                      uVar14 = FUN_0972dfbc(param_1,iVar21,0);
                      if (bVar23) {
                        if (!bVar3) {
                          uVar13 = uVar14;
                        }
                        bVar4 = (bool)(bVar4 & (bVar3 ^ 1U));
                        bVar23 = true;
                        bVar3 = true;
                      }
                      else {
                        bVar23 = true;
                        uVar12 = uVar14;
                      }
                    }
                    else {
LAB_097259c4:
                      bVar4 = false;
                    }
                  }
                  else {
                    if (iVar10 != 7) {
                      if (iVar10 != 0xb) goto LAB_097259c4;
                      local_84 = local_84 + 1;
                      break;
                    }
                    uVar14 = FUN_0972db94(param_1,iVar21,0);
                    if (!bVar5) {
                      if (*(int *)(*(long *)System_ArraySegment<T>_var + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      uVar15 = FUN_09726058(5,uVar14,&local_74);
                      if ((uVar15 & 1) != 0) {
                        uVar9 = FUN_097fb3d0(local_74,0);
                        bVar5 = true;
                        goto LAB_097259ec;
                      }
                    }
                    if (bVar6) {
                      bVar4 = false;
                    }
                    else {
                      FUN_096b5fac(local_70,uVar14,0);
                    }
                    bVar6 = true;
                  }
LAB_097259ec:
                  iVar10 = iVar21 + 1;
                } while (iVar21 + 1 < iVar1);
                iVar10 = iVar21 + 1;
                bVar23 = iVar10 < iVar1;
                plVar16 = (long *)PTR_DAT_09fdd510;
                puVar20 = (undefined8 *)
                          System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var
                ;
                plVar22 = (long *)
                          UnityEngine_UIElements_UIR_RenderChain_VisualChangesProcessor_EntryProcessingInfo_var
                ;
                puVar24 = (undefined8 *)
                          UnityEngine_XR_Hands_ProviderImplementation_XRHandProviderUtility_SubsystemUpdater_XRHandSubsystemPlayerLoopRunnerUpdateSystem_var
                ;
              }
              else {
                bVar18 = false;
                bVar23 = false;
                bVar4 = true;
              }
              lVar11 = *plVar22;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar11 = *plVar22;
              }
              lVar11 = **(long **)(lVar11 + 0xb8);
              if (lVar11 == 0) goto LAB_09725d18;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)
                        DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
              ;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_09725d18;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
              }
              else {
                FUN_05cdeff8(lVar11,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *(long *)(*(long *)(*plVar22 + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_09725d18;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)
                        DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
              ;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_09725d18;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
              }
              else {
                FUN_05cdeff8(lVar11,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *(long *)(*(long *)(*plVar22 + 0xb8) + 0x10);
              if (lVar11 == 0) goto LAB_09725d18;
              lVar17 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_09725d18;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined1 (*) [16])(lVar17 + 0x20) = local_70;
                thunk_FUN_044bb4b4(lVar17 + 0x28,0);
              }
              else {
                FUN_05c72324();
              }
              lVar11 = *(long *)(*(long *)(*plVar22 + 0xb8) + 0x18);
              if (lVar11 == 0) goto LAB_09725d18;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)
                        DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
              ;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_09725d18;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = uVar9;
              }
              else {
                FUN_05abf324(lVar11,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            } while ((bool)(bVar23 & bVar4));
            if (bVar4) {
              lVar11 = *plVar22;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar11 = *plVar22;
              }
              *param_4 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
              thunk_FUN_044bb4b4(param_4);
              *param_2 = **(undefined8 **)(*plVar22 + 0xb8);
              thunk_FUN_044bb4b4(param_2);
              *param_3 = *(undefined8 *)(*(long *)(*plVar22 + 0xb8) + 8);
              thunk_FUN_044bb4b4(param_3);
              *param_5 = *(undefined8 *)(*(long *)(*plVar22 + 0xb8) + 0x18);
            }
            else {
LAB_09725c98:
              if (*(int *)(*plVar16 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar12 = FUN_097235a0();
              *param_4 = uVar12;
              thunk_FUN_044bb4b4();
              uVar12 = FUN_097234b0();
              *param_2 = uVar12;
              thunk_FUN_044bb4b4();
              uVar12 = FUN_09723528();
              *param_3 = uVar12;
              thunk_FUN_044bb4b4();
              uVar12 = FUN_09723618();
              *param_5 = uVar12;
            }
            thunk_FUN_044bb4b4(param_5);
            return;
          }
        }
      }
    }
  }
LAB_09725d18:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


