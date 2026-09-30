/*
FUNCTION_NAME: FUN_070e94e4
ENTRY_POINT: 070e94e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x070e98d0) */

void FUN_070e94e4(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long local_78;
  undefined8 local_70;
  
  if ((DAT_08267cc0 & 1) == 0) {
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
                );
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
                );
    FUN_0373b518(PTR_DAT_07d974b0);
    FUN_0373b518(PTR_DAT_07d974b8);
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80_var
                );
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84_var
                );
    FUN_0373b518(PTR_DAT_07d974c0);
    FUN_0373b518(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_0373b518(PTR_DAT_07d95dc8);
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_92_var
                );
    FUN_0373b518(PTR_DAT_07d86c78);
    FUN_0373b518(PTR_DAT_07d87700);
    FUN_0373b518(PTR_DAT_07d974c8);
    FUN_0373b518(UnityEngine_ParticleSystem_CollisionModule_var);
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARFaceManager,_ARFace>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARHumanBodyManager,_ARHumanBody>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                );
    DAT_08267cc0 = 1;
  }
  local_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    puVar4 = 
    UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARFaceManager,_ARFace>_TypeInfo
    ;
    puVar3 = UnityEngine_ParticleSystem_CollisionModule_var;
    puVar2 = PTR_DAT_07d974b8;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_05a39084(&local_d8,*(long *)(param_1 + 0x10),
                   *(undefined8 *)
                    DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
                  );
      uStack_88 = uStack_d0;
      local_90 = local_d8;
      local_78 = lStack_c0;
      uStack_80 = local_c8;
      local_70 = local_b8;
      do {
        uVar6 = FUN_05e1f4a8(&local_90,
                             *(undefined8 *)
                              DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80_var
                            );
        lVar10 = local_78;
        if ((uVar6 & 1) == 0) {
          FUN_05e1f5cc(&local_90,
                       *(undefined8 *)
                        DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
                      );
          return;
        }
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar7 = (long *)FUN_052c1e24(local_78,*(undefined8 *)
                                                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARHumanBodyManager,_ARHumanBody>_TypeInfo
                                     );
        plVar8 = (long *)FUN_052c1e64(lVar10,*(undefined8 *)
                                              UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                                     );
        if (0 < *(int *)(lVar10 + 0x20)) {
          iVar14 = 0;
          do {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar11 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)OVRPlugin_Qpl_Annotation_Builder_var) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_070e971c;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_0377596c(plVar8,*(long *)OVRPlugin_Qpl_Annotation_Builder_var,0);
LAB_070e971c:
            auVar16 = (*(code *)*puVar9)(plVar8,iVar14,puVar9[1]);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar6 = FUN_070e9470(auVar16._8_8_ & 0xffffffff,param_2);
            if ((uVar6 & 1) != 0) {
              if (auVar16._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              FUN_06f91fa0(auVar16._0_8_,0);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar11 = *plVar7;
              lVar15 = *(long *)(param_1 + 0x18);
              uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d95dc8) {
                    puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_070e97c0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d95dc8,0);
LAB_070e97c0:
              uVar5 = (*(code *)*puVar9)(plVar7,iVar14,puVar9[1]);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar11 = *(long *)(lVar15 + 0x10);
              lVar12 = *(long *)PTR_DAT_07d86c78;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar1 = *(uint *)(lVar15 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
              }
              else {
                FUN_04976584(lVar15,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *(long *)puVar3;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar11 = *(long *)puVar3;
              }
              **(int **)(lVar11 + 0xb8) = **(int **)(lVar11 + 0xb8) + -1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(lVar10 + 0x20));
        }
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_04976f7c(&local_d8,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_07d974c8);
        uStack_a8 = uStack_d0;
        local_b0 = local_d8;
        local_a0 = local_c8;
        while (uVar6 = FUN_05d50890(&local_b0,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          FUN_052c3440(lVar10,local_a0 & 0xffffffff,*(undefined8 *)puVar4);
        }
        FUN_05d5088c(&local_b0,*(undefined8 *)PTR_DAT_07d974b0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


