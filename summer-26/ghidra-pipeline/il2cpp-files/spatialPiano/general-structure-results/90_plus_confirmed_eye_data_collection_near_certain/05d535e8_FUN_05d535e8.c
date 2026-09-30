/*
FUNCTION_NAME: FUN_05d535e8
ENTRY_POINT: 05d535e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 285
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_5;functionality_possible_biometrics_hits_4
*/


void FUN_05d535e8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long local_a0;
  long lStack_98;
  undefined1 local_8c [4];
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *plStack_70;
  int local_68;
  byte local_64;
  undefined2 local_63;
  undefined1 local_61;
  
  if ((DAT_06bc38fd & 1) == 0) {
    FUN_02f08768(Method_OVRFaceExpressions_get_Item__);
    FUN_02f08768(Method_OVRExtensions_ToNonAlloc<Type>__);
    FUN_02f08768(Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__);
    FUN_02f08768(Method_OVRGLTFAccessor_ReadAsFloat__);
    FUN_02f08768(Method_OVRGLTFAccessor_ReadAsInt__);
    FUN_02f08768(Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__);
    FUN_02f08768(Method_OVRGLTFAnimatinonNode_CopyData<float>__);
    FUN_02f08768(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    FUN_02f08768(Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
    FUN_02f08768(Method_OVRGrabbable_Awake__);
    FUN_02f08768(Method_OVRCameraRig_<CheckForAnchorsInParent>g__Check_110_0<OVRSpatialAnchor>__);
    FUN_02f08768(Method_System_Globalization_NumberFormatInfo_ValidateParseStyleInteger__);
    FUN_02f08768(Method_OVRGrabber_<Awake>b__23_0__);
    FUN_02f08768(Method_System_Globalization_NumberFormatInfo_VerifyWritable__);
    FUN_02f08768(Method_System_Globalization_NumberFormatInfo_set_NaNSymbol__);
                    /* try { // try from 05d536cc to 05e5376b has its CatchHandler @ 05d536cc
                       catch() { ... } // from try @ 05d536cc with catch @ 05d536cc
                       catch() { ... } // from try @ 05d5378c with catch @ 05d536cc
                       catch() { ... } // from try @ 05d537bc with catch @ 05d536cc
                       catch() { ... } // from try @ 05d537e8 with catch @ 05d536cc
                       catch() { ... } // from try @ 05d5380c with catch @ 05d536cc */
    FUN_02f08768(Method_OVRHand_OnSceneChanged__);
    FUN_02f08768(Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
    FUN_02f08768(Method_OVRLocatable_ScheduleUpdateTransforms__);
    FUN_02f08768(Method_OVRLocatable_UpdateSceneAnchorTransforms__);
    FUN_02f08768(Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>__ctor__);
    FUN_02f08768(Method_OVRManager_OnPermissionGranted__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_OVRMarkerPayload_AsString__);
    FUN_02f08768(Method_OVRMarkerPayload_GetBytes__);
    DAT_06bc38fd = 1;
  }
  puVar4 = Method_System_Globalization_NumberFormatInfo_set_NaNSymbol__;
  local_8c[0] = 0;
  local_a0 = 0;
  lStack_98 = 0;
  FUN_05c5cb44(local_8c,*(undefined8 *)(param_1 + 0x48),0);
  puVar2 = PTR_DAT_067c8f20;
                    /* try { // try from 05d5376c to 05e53773 has its CatchHandler @ 05d537c8 */
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar14 = 0;
    do {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
                    /* try { // try from 05d53788 to 05e5378b has its CatchHandler @ 05d537c4 */
                    /* try { // try from 05d5378c to 05e537b7 has its CatchHandler @ 05d536cc */
      lVar6 = FUN_03abf644(*(long *)(param_1 + 0x10),iVar14,*(undefined8 *)puVar4);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar2);
      }
                    /* try { // try from 05d537b8 to 05e537bb has its CatchHandler @ 05d537c0 */
                    /* try { // try from 05d537bc to 05e537e3 has its CatchHandler @ 05d536cc */
      uVar7 = FUN_060f245c(uVar16,0,0);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d537b8 with catch @ 05d537c0
                        */
      if ((uVar7 & 1) != 0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d53788 with catch @ 05d537c4
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d5376c with catch @ 05d537c8
                        */
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = FUN_03abf644(*(long *)(param_1 + 0x10),iVar14,*(undefined8 *)puVar4);
        uVar16 = FUN_05d4dc00(param_1);
                    /* try { // try from 05d537e4 to 05e537e7 has its CatchHandler @ 05d53800 */
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
                    /* try { // try from 05d537e8 to 05e53803 has its CatchHandler @ 05d536cc */
        *(undefined8 *)(lVar6 + 0x28) = uVar16;
      }
      puVar5 = Method_OVRManager_OnPermissionGranted__;
      puVar3 = Method_System_Globalization_NumberFormatInfo_ValidateParseStyleInteger__;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x30));
                    /* catch() { ... } // from try @ 05d537e4 with catch @ 05d53800 */
    if (0 < *(int *)(param_1 + 0x30)) {
                    /* try { // try from 05d53804 to 05e5380b has its CatchHandler @ 05d53814 */
                    /* try { // try from 05d5380c to 05e53817 has its CatchHandler @ 05d536cc */
      iVar14 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d53804 with catch @ 05d53814
                        */
      do {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar6 = *(long *)(param_1 + 0x60);
        plVar8 = (long *)FUN_03abf644(*(long *)(param_1 + 0x10),iVar14,*(undefined8 *)puVar4);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar9 = (long *)FUN_03abf644(*(long *)(param_1 + 0x18),iVar14,
                                      *(undefined8 *)
                                       Method_System_Globalization_NumberFormatInfo_VerifyWritable__
                                     );
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar10 = (long *)FUN_03abf644(*(long *)(param_1 + 0x20),iVar14,
                                       *(undefined8 *)
                                        Method_OVRCameraRig_<CheckForAnchorsInParent>g__Check_110_0<OVRSpatialAnchor>__
                                      );
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar11 = (long *)FUN_03abf644(*(long *)(param_1 + 0x28),iVar14,*(undefined8 *)puVar3);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = FUN_03abf644(*(long *)(param_1 + 0x10),iVar14,*(undefined8 *)puVar4);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        local_64 = *(int *)(lVar12 + 0x10) != 0;
        local_63 = 0;
        local_61 = 0;
        local_88 = plVar8;
        plStack_80 = plVar9;
        local_78 = plVar10;
        plStack_70 = plVar11;
        local_68 = iVar14;
        FUN_03baeb80(lVar6,iVar14,&local_88,*(undefined8 *)puVar5);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_1 + 0x30));
    }
  }
  puVar2 = Method_OVRMarkerPayload_GetBytes__;
  lVar12 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)Method_OVRMarkerPayload_GetBytes__;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
  }
  puVar13 = *(undefined8 **)(lVar6 + 0xb8);
  lVar17 = puVar13[1];
  if (lVar17 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar13;
    lVar17 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRFaceExpressions_get_Item__);
    FUN_046f4aa4(lVar17,uVar16,*(undefined8 *)Method_OVRMarkerPayload_AsString__,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar17;
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_03bb0b48(lVar12,lVar17,*(undefined8 *)Method_OVRGrabbable_Awake__);
  puVar2 = Method_OVRGrabber_<Awake>b__23_0__;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar14 = 0;
    do {
      if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_03baeb18(&local_88,*(long *)(param_1 + 0x60),iVar14,*(undefined8 *)puVar2);
      if (iVar14 != local_68) {
LAB_05d539fc:
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0491c900(*(long *)(param_1 + 0x58),
                     *(undefined8 *)Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__);
        puVar3 = Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>__ctor__;
        if (0 < *(int *)(param_1 + 0x30)) {
          iVar14 = 0;
          iVar15 = 0;
          do {
            if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_03baeb18(&local_88,*(long *)(param_1 + 0x60),iVar15,*(undefined8 *)puVar2);
            iVar1 = local_68;
            plVar11 = plStack_70;
            plVar10 = local_78;
            plVar9 = plStack_80;
            plVar8 = local_88;
            if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_03baeb18(&local_88,*(long *)(param_1 + 0x60),iVar15,*(undefined8 *)puVar2);
            if ((local_64 & 1) == 0) {
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lStack_98 = plVar8[4];
              local_a0 = plVar8[3];
              FUN_0609937c(&local_a0,0);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lStack_98 = plVar9[4];
              local_a0 = plVar9[3];
              FUN_0609937c(&local_a0,0);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lStack_98 = plVar10[4];
              local_a0 = plVar10[3];
              FUN_0609937c(&local_a0,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lStack_98 = plVar11[4];
              local_a0 = plVar11[3];
              FUN_0609937c(&local_a0,0);
              (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                    /* try { // try from 05d53ae8 to 05e53d73 has its CatchHandler @ 05d53ae8
                       catch() { ... } // from try @ 05d53ae8 with catch @ 05d53ae8
                       catch() { ... } // from try @ 05d53e88 with catch @ 05d53ae8
                       catch() { ... } // from try @ 05d53fb0 with catch @ 05d53ae8
                       catch() { ... } // from try @ 05d54004 with catch @ 05d53ae8 */
              (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              uVar16 = extraout_x1;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_03abf698(*(long *)(param_1 + 0x10),iVar15,plVar8,
                           *(undefined8 *)
                            Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_03abf698(*(long *)(param_1 + 0x18),iVar15,plVar9,
                           *(undefined8 *)Method_OVRLocatable_UpdateSceneAnchorTransforms__);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_03abf698(*(long *)(param_1 + 0x20),iVar15,plVar10,
                           *(undefined8 *)Method_OVRLocatable_ScheduleUpdateTransforms__);
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_03abf698(*(long *)(param_1 + 0x28),iVar15,plVar11,
                           *(undefined8 *)Method_OVRHand_OnSceneChanged__);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar12 = *(long *)(param_1 + 0x58);
              lVar6 = FUN_03abf644(*(long *)(param_1 + 0x10),iVar15,*(undefined8 *)puVar4);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d53d74 to 05e53d9b has its CatchHandler @ 05d53fcc */
                FUN_02f089c8();
              }
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar7 = FUN_0491c96c(lVar12,*(undefined8 *)(lVar6 + 0x28),
                                   *(undefined8 *)Method_OVRGLTFAccessor_ReadAsFloat__);
              if ((uVar7 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar12 = *(long *)(param_1 + 0x58);
                lVar6 = FUN_03abf644(*(long *)(param_1 + 0x10),iVar15,*(undefined8 *)puVar4);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                FUN_0491c778(lVar12,*(undefined8 *)(lVar6 + 0x28),iVar15,
                             *(undefined8 *)Method_OVRExtensions_ToNonAlloc<Type>__);
              }
              if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_03a6bee8(*(long *)(param_1 + 0x68),iVar1,iVar15,*(undefined8 *)puVar3);
              iVar14 = iVar14 + 1;
              uVar16 = extraout_x1_00;
            }
            iVar1 = *(int *)(param_1 + 0x30);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar1);
          iVar15 = iVar1 - iVar14;
          if (iVar15 != 0 && iVar14 <= iVar1) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8(0,uVar16,iVar15);
            }
            FUN_03ac1008(*(long *)(param_1 + 0x10),iVar14,iVar15,
                         *(undefined8 *)Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_03ac1008(*(long *)(param_1 + 0x18),iVar14,*(int *)(param_1 + 0x30) - iVar14,
                         *(undefined8 *)Method_OVRGLTFAccessor_ReadAsInt__);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_03ac1008(*(long *)(param_1 + 0x20),iVar14,*(int *)(param_1 + 0x30) - iVar14,
                         *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__);
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_03ac1008(*(long *)(param_1 + 0x28),iVar14,*(int *)(param_1 + 0x30) - iVar14,
                         *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<float>__);
            if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_03bb08f0(*(long *)(param_1 + 0x60),iVar14,*(int *)(param_1 + 0x30) - iVar14,
                         *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
            *(int *)(param_1 + 0x30) = iVar14;
          }
        }
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_05d51ce4(*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x68));
        break;
      }
      if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_03baeb18(&local_88,*(long *)(param_1 + 0x60),iVar14,*(undefined8 *)puVar2);
      if ((local_64 & 1) == 0) goto LAB_05d539fc;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x30));
  }
  FUN_05c5cb50(local_8c,0);
  return;
}


