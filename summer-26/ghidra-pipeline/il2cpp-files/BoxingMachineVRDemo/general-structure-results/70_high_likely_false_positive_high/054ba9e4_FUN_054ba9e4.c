/*
FUNCTION_NAME: FUN_054ba9e4
ENTRY_POINT: 054ba9e4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_054ba9e4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  puVar5 = UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var;
  puVar4 = UnityEngine_XR_ARSubsystems_XRBoundingBoxSubsystemDescriptor_Cinfo_var;
  puVar3 = UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_var;
  puVar2 = System_ComponentModel_TypeDescriptor_TypeDescriptorComObject_var;
  if ((DAT_06b7eb31 & 1) == 0) {
    FUN_02d6084c(UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var);
    FUN_02d6084c(UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRBoundingBoxSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(PTR_DAT_06768cc8);
    FUN_02d6084c(PTR_DAT_0676bc60);
    FUN_02d6084c(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var);
    FUN_02d6084c(System_ComponentModel_TypeDescriptor_TypeDescriptorComObject_var);
    FUN_02d6084c(System_ComponentModel_TypeDescriptor_TypeDescriptorInterface_var);
    FUN_02d6084c(UnityEngine_UIElements_UIR_UIRenderDevice_AllocToUpdate_var);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(PTR_DAT_06768d08);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_02d6084c(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_var);
    DAT_06b7eb31 = 1;
  }
  plVar23 = *(long **)(param_1 + 0x10);
  FUN_054bbc14(param_1,plVar23);
  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_03aabc60(lVar8,*(undefined8 *)puVar2);
  uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_04894d4c(uVar9,*(undefined8 *)puVar5);
  if (plVar23 != (long *)0x0) {
    uVar18 = 0x36;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar18 = 0x16;
    }
    lVar10 = (**(code **)(*plVar23 + 0x728))(plVar23,uVar18,*(undefined8 *)(*plVar23 + 0x730));
    if (lVar10 != 0) {
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar21 = 0;
        uVar19 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
LAB_054bac04:
        if (uVar19 <= uVar21) goto LAB_054bbbf4;
        plVar24 = *(long **)(lVar10 + 0x20 + uVar21 * 8);
        if (*(char *)(param_1 + 0x95) == '\0') {
          if (plVar24 == (long *)0x0) {
            if (*(char *)(param_1 + 0x94) == '\0') {
              uVar19 = FUN_04f3af10(0,0,0);
              if ((uVar19 & 1) == 0) goto LAB_054bbb50;
              goto LAB_054bbbf0;
            }
            plVar12 = (long *)0x0;
            plVar15 = (long *)0x0;
          }
          else {
            lVar13 = *plVar24;
            bVar1 = *(byte *)(*(long *)PTR_DAT_06768cc8 + 0x130);
            if (*(byte *)(lVar13 + 0x130) < bVar1) {
              plVar12 = (long *)0x0;
            }
            else {
              plVar12 = plVar24;
              if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06768cc8) {
                plVar12 = (long *)0x0;
              }
            }
            if (*(char *)(param_1 + 0x94) == '\0') {
              uVar19 = FUN_04f3af10(plVar12,0,0);
              if ((uVar19 & 1) != 0) {
                if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
                uVar19 = FUN_04f3adfc(plVar12,0);
                if ((uVar19 & 1) != 0) goto LAB_054bbb50;
                lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                             UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_var
                                           );
                FUN_054d13d4(lVar13,plVar24,0);
                uVar22 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                uVar22 = FUN_054c2324(uVar22,0);
                if (lVar13 == 0) goto LAB_054bbbf0;
                FUN_054d14d4(lVar13,uVar22,0);
                if (*(int *)(*(long *)PTR_DAT_0676bc60 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar22 = FUN_054db2c4(0);
                lVar11 = (**(code **)(*plVar12 + 0x218))
                                   (plVar12,uVar22,0,*(undefined8 *)(*plVar12 + 0x220));
                if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) {
                  if (*(char *)(param_1 + 0x20) != '\0') {
                    plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,3);
                    uVar22 = (**(code **)(*plVar24 + 0x1c8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
                    lVar11 = FUN_054c2224(uVar22,0);
                    if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_054bbbf8;
                    if ((int)plVar12[3] == 0) goto LAB_054bbbf4;
                    plVar12[4] = lVar11;
                    thunk_FUN_02dd37b4(plVar12 + 4,lVar11);
                    lVar11 = (**(code **)(*plVar24 + 0x1b8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_054bbbf8;
                    if (*(uint *)(plVar12 + 3) < 2) goto LAB_054bbbf4;
                    plVar12[5] = lVar11;
                    thunk_FUN_02dd37b4(plVar12 + 5,lVar11);
                    local_68[0] = 1;
                    lVar11 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x28),local_68);
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar14 == 0)) goto LAB_054bbbf8;
                    if (*(uint *)(plVar12 + 3) < 3) goto LAB_054bbbf4;
                    plVar12[6] = lVar11;
                    thunk_FUN_02dd37b4(plVar12 + 6,lVar11);
                    uVar22 = FUN_054f97f0(*(undefined8 *)
                                           UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                                          ,plVar12,0);
                    if (*(int *)(*(long *)
                                  UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var +
                                0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)
                                          UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var
                                        );
                    }
                    FUN_054c60a0(uVar22,plVar23,0);
                  }
                  FUN_054d1544(lVar13,1,0);
                }
                uVar22 = FUN_054d1618(lVar13,0);
                uVar7 = FUN_054c2140(uVar22,0);
                FUN_054d15bc(lVar13,uVar7 & 1,0);
                goto LAB_054bbb48;
              }
              goto LAB_054bbb50;
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_06768d08 + 0x130);
            if (*(byte *)(lVar13 + 0x130) < bVar1) {
              plVar15 = (long *)0x0;
            }
            else {
              plVar15 = plVar24;
              if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06768d08) {
                plVar15 = (long *)0x0;
              }
            }
          }
          uVar19 = FUN_04f3aee4(plVar12,0,0);
          if (((uVar19 & 1) == 0) || (uVar19 = FUN_04f3dd04(plVar15,0,0), (uVar19 & 1) == 0)) {
            uVar19 = FUN_04f3af10(plVar12,0,0);
            if ((uVar19 & 1) != 0) {
              if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
              uVar19 = FUN_04f3adbc(plVar12,0);
              if ((uVar19 & 1) != 0) goto LAB_054bbb50;
            }
            uVar22 = *(undefined8 *)UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_var;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar22 = FUN_05015c2c(uVar22,0);
            if (plVar24 == (long *)0x0) goto LAB_054bbbf0;
            lVar13 = (**(code **)(*plVar24 + 0x218))
                               (plVar24,uVar22,0,*(undefined8 *)(*plVar24 + 0x220));
            if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
              if ((int)*(long *)(lVar13 + 0x18) < 2) goto LAB_054bbb50;
              plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
              uVar22 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
              lVar13 = FUN_054c2224(uVar22,0);
              if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
              if ((lVar13 != 0) &&
                 (lVar11 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) {
LAB_054bbbf8:
                uVar9 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                FUN_02d609b4(uVar9,0);
              }
              if ((int)plVar12[3] == 0) {
LAB_054bbbf4:
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              plVar12[4] = lVar13;
              thunk_FUN_02dd37b4(plVar12 + 4,lVar13);
              lVar13 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
              if ((lVar13 != 0) &&
                 (lVar11 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)
                 ) goto LAB_054bbbf8;
              if (*(uint *)(plVar12 + 3) < 2) goto LAB_054bbbf4;
              plVar12[5] = lVar13;
              thunk_FUN_02dd37b4(plVar12 + 5,lVar13);
              uVar22 = FUN_054f97f0(*(undefined8 *)
                                     UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var
                                    ,plVar12,0);
              FUN_054cf7b0(param_1,uVar22,0);
            }
            lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                         UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_var
                                       );
            FUN_054d13d4(lVar13,plVar24,0);
            uVar19 = FUN_04f3dd30(plVar15,0,0);
            if ((uVar19 & 1) == 0) goto LAB_054bbaf0;
            if (plVar15 == (long *)0x0) goto LAB_054bbbf0;
            plVar12 = (long *)FUN_04f3dc50(plVar15,0);
            uVar19 = FUN_04f3cc64(plVar12,0,0);
            if (((uVar19 & 1) == 0) && (uVar19 = FUN_054bbfe4(plVar12), (uVar19 & 1) == 0)) {
              if ((plVar12 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar12 + 0x238))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x240)), lVar11 == 0))
              goto LAB_054bbbf0;
              if (*(long *)(lVar11 + 0x18) == 0) {
                lVar11 = (**(code **)(*plVar15 + 0x2e8))
                                   (plVar15,1,*(undefined8 *)(*plVar15 + 0x2f0));
                uVar19 = FUN_04f3cc64(lVar11,0,0);
                if ((uVar19 & 1) == 0) {
                  if (lVar11 == 0) goto LAB_054bbbf0;
                  uVar19 = FUN_04f3c17c(lVar11,0);
                  if (((uVar19 & 1) != 0) && (uVar19 = FUN_054bbfe4(lVar11), (uVar19 & 1) == 0))
                  goto LAB_054bba54;
                }
                else {
                  uVar19 = FUN_054bc02c(uVar19,lVar13,1);
                  if ((uVar19 & 1) != 0) {
LAB_054bba54:
                    if (*(char *)(param_1 + 0x93) != '\0') {
                      if (lVar13 == 0) goto LAB_054bbbf0;
                      uVar22 = FUN_054d1618(lVar13,0);
                      if (*(int *)(*(long *)PTR_DAT_0676bc60 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0676bc60);
                      }
                      uVar17 = FUN_054dbe04(0);
                      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
                      }
                      uVar19 = FUN_0501ed54(uVar22,uVar17,0);
                      if ((uVar19 & 1) != 0) {
                        uVar22 = (**(code **)(*plVar24 + 0x1b8))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                        uVar19 = thunk_FUN_04e8bd3c(uVar22,*(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_var
                                                  ,0);
                        if ((uVar19 & 1) != 0) goto LAB_054bbb50;
                      }
                    }
LAB_054bbaf0:
                    uVar22 = (**(code **)(*plVar24 + 0x1b8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                    uVar22 = FUN_054c2324(uVar22,0);
                    if (lVar13 != 0) {
                      FUN_054d14d4(lVar13,uVar22,0);
                      uVar22 = FUN_054d1618(lVar13,0);
                      uVar7 = FUN_054c2140(uVar22,0);
                      FUN_054d15bc(lVar13,uVar7 & 1,0);
                      goto LAB_054bbb48;
                    }
                    goto LAB_054bbbf0;
                  }
                }
              }
            }
          }
        }
        else {
          uVar22 = *(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar22 = FUN_05015c2c(uVar22,0);
          if (plVar24 == (long *)0x0) goto LAB_054bbbf0;
          lVar11 = (**(code **)(*plVar24 + 0x218))
                             (plVar24,uVar22,0,*(undefined8 *)(*plVar24 + 0x220));
          if ((lVar11 != 0) && (*(long *)(lVar11 + 0x18) != 0)) {
            if (1 < (int)*(long *)(lVar11 + 0x18)) {
              plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
              uVar22 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
              lVar13 = FUN_054c2224(uVar22,0);
              if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)
                 ) goto LAB_054bbbf8;
              if ((int)plVar12[3] == 0) goto LAB_054bbbf4;
              plVar12[4] = lVar13;
              thunk_FUN_02dd37b4(plVar12 + 4,lVar13);
              lVar13 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)
                 ) goto LAB_054bbbf8;
              if (*(uint *)(plVar12 + 3) < 2) goto LAB_054bbbf4;
              plVar12[5] = lVar13;
              thunk_FUN_02dd37b4(plVar12 + 5,lVar13);
              uVar22 = FUN_054f97f0(*(undefined8 *)
                                     UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_var
                                    ,plVar12,0);
              FUN_054cf7b0(param_1,uVar22,0);
            }
            lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                         UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_var
                                       );
            FUN_054d13d4(lVar13,plVar24,0);
            iVar6 = (**(code **)(*plVar24 + 0x1a8))(plVar24,*(undefined8 *)(*plVar24 + 0x1b0));
            if (iVar6 == 0x10) {
              lVar14 = *plVar24;
              bVar1 = *(byte *)(*(long *)PTR_DAT_06768d08 + 0x130);
              if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_06768d08)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar24);
              }
              plVar12 = (long *)(**(code **)(lVar14 + 0x2b8))
                                          (plVar24,1,*(undefined8 *)(lVar14 + 0x2c0));
              uVar19 = FUN_04f3cc90(plVar12,0,0);
              if (((uVar19 & 1) == 0) || (uVar19 = FUN_054bbfe4(plVar12), (uVar19 & 1) == 0)) {
                uVar22 = (**(code **)(*plVar24 + 0x2e8))
                                   (plVar24,1,*(undefined8 *)(*plVar24 + 0x2f0));
                uVar19 = FUN_04f3cc90(uVar22,0,0);
                if (((uVar19 & 1) == 0) || (uVar19 = FUN_054bbfe4(uVar22), (uVar19 & 1) == 0)) {
                  uVar19 = FUN_04f3cc64(plVar12,0,0);
                  if ((uVar19 & 1) != 0) {
                    plVar15 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
                    lVar14 = (**(code **)(*plVar24 + 0x1c8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
                    if (plVar15 == (long *)0x0) goto LAB_054bbbf0;
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_054bbbf8;
                    if ((int)plVar15[3] == 0) goto LAB_054bbbf4;
                    plVar15[4] = lVar14;
                    thunk_FUN_02dd37b4(plVar15 + 4,lVar14);
                    lVar14 = (**(code **)(*plVar24 + 0x1b8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_054bbbf8;
                    if (*(uint *)(plVar15 + 3) < 2) goto LAB_054bbbf4;
                    plVar15[5] = lVar14;
                    thunk_FUN_02dd37b4(plVar15 + 5,lVar14);
                    uVar17 = FUN_054f97f0(*(undefined8 *)
                                           UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var
                                          ,plVar15,0);
                    FUN_054cf7b0(param_1,uVar17,0);
                  }
                  uVar19 = FUN_04f3cc64(uVar22,0,0);
                  if (((uVar19 & 1) != 0) &&
                     (uVar19 = FUN_054bc02c(uVar19,lVar13,0), (uVar19 & 1) == 0)) {
                    plVar15 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
                    lVar14 = (**(code **)(*plVar24 + 0x1c8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
                    if (plVar15 == (long *)0x0) goto LAB_054bbbf0;
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_054bbbf8;
                    if ((int)plVar15[3] == 0) goto LAB_054bbbf4;
                    plVar15[4] = lVar14;
                    thunk_FUN_02dd37b4(plVar15 + 4,lVar14);
                    lVar14 = (**(code **)(*plVar24 + 0x1b8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                    if ((lVar14 != 0) &&
                       (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar16 == 0)) goto LAB_054bbbf8;
                    if (*(uint *)(plVar15 + 3) < 2) goto LAB_054bbbf4;
                    plVar15[5] = lVar14;
                    thunk_FUN_02dd37b4(plVar15 + 5,lVar14);
                    uVar22 = FUN_054f97f0(*(undefined8 *)
                                           UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var
                                          ,plVar15,0);
                    *(undefined8 *)(param_1 + 0x88) = uVar22;
                    thunk_FUN_02dd37b4();
                  }
                  if ((plVar12 != (long *)0x0) &&
                     (lVar14 = (**(code **)(*plVar12 + 0x238))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x240)), lVar14 != 0))
                  {
                    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_054bb22c;
                    plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
                    lVar14 = (**(code **)(*plVar24 + 0x1c8))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
                    if (plVar12 != (long *)0x0) {
                      if ((lVar14 != 0) &&
                         (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar16 == 0)) goto LAB_054bbbf8;
                      if ((int)plVar12[3] == 0) goto LAB_054bbbf4;
                      plVar12[4] = lVar14;
                      thunk_FUN_02dd37b4(plVar12 + 4,lVar14);
                      lVar14 = (**(code **)(*plVar24 + 0x1b8))
                                         (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                      if ((lVar14 != 0) &&
                         (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar16 == 0)) goto LAB_054bbbf8;
                      if (*(uint *)(plVar12 + 3) < 2) goto LAB_054bbbf4;
                      plVar12[5] = lVar14;
                      thunk_FUN_02dd37b4(plVar12 + 5,lVar14);
                      puVar20 = (undefined8 *)
                                UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_var
                      ;
                      goto LAB_054bb210;
                    }
                  }
                  goto LAB_054bbbf0;
                }
              }
            }
            else {
              iVar6 = (**(code **)(*plVar24 + 0x1a8))(plVar24,*(undefined8 *)(*plVar24 + 0x1b0));
              if (iVar6 != 4) {
                plVar12 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
                lVar14 = FUN_054c2224(plVar23,0);
                if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
                if ((lVar14 != 0) &&
                   (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar16 == 0)) goto LAB_054bbbf8;
                if ((int)plVar12[3] == 0) goto LAB_054bbbf4;
                plVar12[4] = lVar14;
                thunk_FUN_02dd37b4(plVar12 + 4,lVar14);
                lVar14 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                if ((lVar14 != 0) &&
                   (lVar16 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar16 == 0)) goto LAB_054bbbf8;
                if (*(uint *)(plVar12 + 3) < 2) goto LAB_054bbbf4;
                plVar12[5] = lVar14;
                thunk_FUN_02dd37b4(plVar12 + 5,lVar14);
                puVar20 = (undefined8 *)
                          UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var;
LAB_054bb210:
                uVar22 = FUN_054f97f0(*puVar20,plVar12,0);
                FUN_054cf7b0(param_1,uVar22,0);
              }
LAB_054bb22c:
              if (*(int *)(lVar11 + 0x18) == 0) goto LAB_054bbbf4;
              plVar12 = *(long **)(lVar11 + 0x20);
              if (plVar12 == (long *)0x0) goto LAB_054bbbf0;
              if (*plVar12 !=
                  *(long *)UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_var) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar12);
              }
              if ((char)plVar12[3] == '\0') {
                lVar11 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                if (lVar13 == 0) goto LAB_054bbbf0;
              }
              else {
                if ((plVar12[2] == 0) || (*(int *)(plVar12[2] + 0x10) == 0)) {
                  plVar15 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
                  lVar11 = (**(code **)(*plVar24 + 0x1b8))
                                     (plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                  if (plVar15 == (long *)0x0) goto LAB_054bbbf0;
                  if ((lVar11 != 0) &&
                     (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar14 == 0)) goto LAB_054bbbf8;
                  if ((int)plVar15[3] == 0) goto LAB_054bbbf4;
                  plVar15[4] = lVar11;
                  thunk_FUN_02dd37b4(plVar15 + 4,lVar11);
                  lVar11 = FUN_054c2224(plVar23,0);
                  if ((lVar11 != 0) &&
                     (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar14 == 0)) goto LAB_054bbbf8;
                  if (*(uint *)(plVar15 + 3) < 2) goto LAB_054bbbf4;
                  plVar15[5] = lVar11;
                  thunk_FUN_02dd37b4(plVar15 + 5,lVar11);
                  uVar22 = FUN_054f97f0(*(undefined8 *)
                                         UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var
                                        ,plVar15,0);
                  FUN_054cf7b0(param_1,uVar22,0);
                }
                if (lVar13 == 0) goto LAB_054bbbf0;
                lVar11 = plVar12[2];
              }
              FUN_054d14d4(lVar13,lVar11,0);
              uVar22 = FUN_054d14b8(lVar13,0);
              uVar22 = FUN_054c2324(uVar22,0);
              FUN_054d14d4(lVar13,uVar22,0);
              uVar22 = FUN_054d1618(lVar13,0);
              uVar7 = FUN_054c2140(uVar22,0);
              FUN_054d15bc(lVar13,uVar7 & 1,0);
              FUN_054d1544(lVar13,(char)plVar12[4],0);
              if (((char)plVar12[4] != '\0') && (*(char *)(param_1 + 0x20) != '\0')) {
                plVar15 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,3);
                uVar22 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
                lVar11 = FUN_054c2224(uVar22,0);
                if (plVar15 == (long *)0x0) goto LAB_054bbbf0;
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_054bbbf8;
                if ((int)plVar15[3] == 0) goto LAB_054bbbf4;
                plVar15[4] = lVar11;
                thunk_FUN_02dd37b4(plVar15 + 4,lVar11);
                lVar11 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_054bbbf8;
                if (*(uint *)(plVar15 + 3) < 2) goto LAB_054bbbf4;
                plVar15[5] = lVar11;
                thunk_FUN_02dd37b4(plVar15 + 5,lVar11);
                local_64[0] = 1;
                lVar11 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x28),local_64);
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar15 + 0x40)),
                   lVar14 == 0)) goto LAB_054bbbf8;
                if (*(uint *)(plVar15 + 3) < 3) goto LAB_054bbbf4;
                plVar15[6] = lVar11;
                thunk_FUN_02dd37b4(plVar15 + 6,lVar11);
                uVar22 = FUN_054f97f0(*(undefined8 *)
                                       UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_var
                                      ,plVar15,0);
                if (*(int *)(*(long *)UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)
                                      UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_var)
                  ;
                }
                FUN_054c60a0(uVar22,plVar23,0);
              }
              FUN_054d1580(lVar13,*(undefined1 *)((long)plVar12 + 0x21),0);
              FUN_054d150c(lVar13,*(undefined4 *)((long)plVar12 + 0x1c),0);
LAB_054bbb48:
              FUN_054b92d0(lVar8,lVar13,uVar9);
            }
          }
        }
LAB_054bbb50:
        uVar19 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar21 = uVar21 + 1;
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar21) goto LAB_054bbb60;
        goto LAB_054bac04;
      }
LAB_054bbb60:
      puVar2 = UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_var;
      if (lVar8 != 0) {
        if (1 < *(int *)(lVar8 + 0x18)) {
          lVar10 = *(long *)
                    UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_var;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar10 = *(long *)puVar2;
          }
          FUN_03aaddb8(lVar8,**(undefined8 **)(lVar10 + 0xb8),
                       *(undefined8 *)UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var)
          ;
        }
        FUN_054bc0b4(param_1,lVar8);
        thunk_FUN_02d6f164(0);
        *(long *)(param_1 + 0x50) = lVar8;
        thunk_FUN_02dd37b4((long *)(param_1 + 0x50),lVar8);
        return;
      }
    }
  }
LAB_054bbbf0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


