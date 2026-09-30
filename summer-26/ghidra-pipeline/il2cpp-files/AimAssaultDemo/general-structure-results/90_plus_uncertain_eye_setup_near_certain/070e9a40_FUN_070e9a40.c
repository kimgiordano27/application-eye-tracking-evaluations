/*
FUNCTION_NAME: FUN_070e9a40
ENTRY_POINT: 070e9a40
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_070e9a40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  undefined1 auVar17 [12];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  
  puVar2 = UnityEngine_ParticleSystem_CollisionModule_var;
  puVar1 = PTR_DAT_07d8c838;
  if ((DAT_08267cc1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
                );
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
                );
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80_var
                );
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84_var
                );
    FUN_0373b518(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_0373b518(
                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_92_var
                );
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(UnityEngine_ParticleSystem_CollisionModule_var);
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARHumanBodyManager,_ARHumanBody>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d8c838);
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARParticipantManager,_ARParticipant>_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARPlaneManager,_ARPlane>_TypeInfo
                );
    DAT_08267cc1 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_060cc728(lVar4,0);
  local_94 = FUN_075a6824(0);
  puVar1 = PTR_DAT_07d86548;
  uVar5 = thunk_FUN_037784fc(*(undefined8 *)(PTR_DAT_07d86548 + 0x48),&local_94);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar12);
    lVar12 = *(long *)puVar2;
  }
  local_98 = **(undefined4 **)(lVar12 + 0xb8);
  uVar6 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_98);
  if (lVar4 != 0) {
    FUN_060cff14(lVar4,*(undefined8 *)
                        UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARPlaneManager,_ARPlane>_TypeInfo
                 ,uVar5,uVar6,0);
    FUN_060ce548(lVar4,0);
    puVar3 = 
    UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARParticipantManager,_ARParticipant>_TypeInfo
    ;
    puVar2 = PTR_DAT_07d882c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_05a39084(&local_d0,*(long *)(param_1 + 0x10),
                   *(undefined8 *)
                    DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_76_var
                  );
      local_78 = lStack_b8;
      uStack_80 = uStack_c0;
      local_70 = local_b0;
      do {
        do {
          uVar7 = FUN_05e1f4a8(&local_90,
                               *(undefined8 *)
                                DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80_var
                              );
          lVar12 = local_78;
          if ((uVar7 & 1) == 0) {
            FUN_05e1f5cc(&local_90,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_8_var
                        );
            if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_0755d864(lVar4,0);
            return;
          }
          if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_052c1e24(local_78,*(undefined8 *)
                                 UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARHumanBodyManager,_ARHumanBody>_TypeInfo
                      );
          plVar8 = (long *)FUN_052c1e64(lVar12,*(undefined8 *)
                                                UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<AREnvironmentProbeManager,_AREnvironmentProbe>_TypeInfo
                                       );
        } while (*(int *)(lVar12 + 0x20) < 1);
        iVar15 = 0;
        do {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar13 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 != 0) {
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)OVRPlugin_Qpl_Annotation_Builder_var) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_070e9cd0;
              }
              uVar7 = uVar7 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_0377596c(plVar8,*(long *)OVRPlugin_Qpl_Annotation_Builder_var,0);
LAB_070e9cd0:
          auVar17 = (*(code *)*puVar9)(plVar8,iVar15,puVar9[1]);
          lVar13 = auVar17._0_8_;
          plVar10 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,5);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar16 = *(long *)(lVar13 + 0x58);
          if ((lVar16 != 0) &&
             (lVar11 = thunk_FUN_037787d0(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar10[4] = lVar16;
          thunk_FUN_037aeb94(plVar10 + 4,lVar16);
          local_94 = auVar17._8_4_;
          lVar16 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_94);
          if ((lVar16 != 0) &&
             (lVar11 = thunk_FUN_037787d0(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar10[5] = lVar16;
          thunk_FUN_037aeb94(plVar10 + 5,lVar16);
          if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_0758f2c0(&local_d0,*(long *)(lVar13 + 0x18),0);
          local_98 = local_d0;
          lVar16 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_98);
          if ((lVar16 != 0) &&
             (lVar11 = thunk_FUN_037787d0(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar10[6] = lVar16;
          thunk_FUN_037aeb94(plVar10 + 6,lVar16);
          if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_0758f2c0(&local_d0,*(long *)(lVar13 + 0x18),0);
          local_d4 = uStack_cc;
          lVar16 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_d4);
          if ((lVar16 != 0) &&
             (lVar11 = thunk_FUN_037787d0(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar10[7] = lVar16;
          thunk_FUN_037aeb94(plVar10 + 7,lVar16);
          if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_0758f2c0(&local_d0,*(long *)(lVar13 + 0x18),0);
          local_d0 = uStack_c4;
          lVar13 = thunk_FUN_037784fc(*(undefined8 *)(puVar1 + 0x48),&local_d0);
          if ((lVar13 != 0) &&
             (lVar16 = thunk_FUN_037787d0(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0)) {
            uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,0);
          }
          if (*(uint *)(plVar10 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar10[8] = lVar13;
          thunk_FUN_037aeb94(plVar10 + 8,lVar13);
          FUN_060cffd0(lVar4,*(undefined8 *)puVar3,plVar10,0);
          FUN_060ce548(lVar4,0);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(lVar12 + 0x20));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


