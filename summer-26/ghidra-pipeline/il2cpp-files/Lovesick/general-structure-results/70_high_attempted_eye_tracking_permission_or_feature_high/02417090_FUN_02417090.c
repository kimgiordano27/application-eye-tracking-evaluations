/*
FUNCTION_NAME: FUN_02417090
ENTRY_POINT: 02417090
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_02417090(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  long *plStack_c8;
  long *local_c0;
  long *plStack_b8;
  int local_b0;
  byte local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  long local_80;
  long lStack_78;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_68 [8];
  
  if ((DAT_0378231c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_ActiveStateGate_HandleOpenSelected__);
    thunk_FUN_00d48444(StringLiteral_9184);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConverter<Vector3>__ctor__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_GetXsdKatmaiTokenLength__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsriq_n_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformToUnitySpaceJob>__
                      );
    thunk_FUN_00d48444(Obi_IOniConstraintsImpl_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f49e0);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<SnapInteractor,_SnapInteractable>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_DigitalOpus_MB_Core_MB3_MeshCombinerSingle_<>c__DisplayClass76_0_<__AddToCombined>b__0__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_TileData_var);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_ComponentExtensions_ComponentCopyData>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Net_Configuration_PerformanceCountersElement__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ed750);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vnegq_f64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Pose>__ctor__);
    thunk_FUN_00d48444(StringLiteral_11707);
    thunk_FUN_00d48444(Method_OVRGrabbable_Awake__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<TeleportPoint>__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_Remoting_IChannelInfo_var);
    thunk_FUN_00d48444(Method_UnityEngine_ScriptableObject_CreateInstance<MB2_TextureBakeResults>__)
    ;
    DAT_0378231c = 1;
  }
  puVar6 = PTR_DAT_033ed750;
  local_68[0] = 0;
  local_6a = 0;
  local_6c = 0;
  local_80 = 0;
  lStack_78 = 0;
  FUN_023ae3ac(local_68,0,*(undefined8 *)(param_1 + 0x48),0);
  puVar8 = Method_UnityEngine_Component_GetComponentInChildren<TeleportPoint>__;
  puVar7 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(int *)(param_1 + 0x30) < 1) {
    lVar21 = *(long *)(param_1 + 0x60);
  }
  else {
    iVar20 = 0;
    do {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(param_1 + 0x10),iVar20,&local_d0,*(undefined8 *)puVar6);
      lVar21 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar23 = *(undefined8 *)(lVar21 + 0x28);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_0268b4e0(uVar23,0,0);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(*(long *)(param_1 + 0x10),iVar20,&local_d0,*(undefined8 *)puVar6);
        lVar21 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
        uVar23 = FUN_02415db0(param_1);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined8 *)(lVar21 + 0x28) = uVar23;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_1 + 0x30));
    lVar21 = *(long *)(param_1 + 0x60);
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar20 = 0;
      do {
        local_6a = 0;
        local_6c = 0;
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(*(long *)(param_1 + 0x10),iVar20,&local_d0,*(undefined8 *)puVar6);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar23 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
        FUN_0132138c(*(long *)(param_1 + 0x18),iVar20,&local_d0,
                     *(undefined8 *)
                      Method_System_Net_Configuration_PerformanceCountersElement__ctor__);
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar2 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
        FUN_0132138c(*(long *)(param_1 + 0x20),iVar20,&local_d0,
                     *(undefined8 *)
                      Method_DigitalOpus_MB_Core_MB3_MeshCombinerSingle_<>c__DisplayClass76_0_<__AddToCombined>b__0__
                    );
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar3 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
        FUN_0132138c(*(long *)(param_1 + 0x28),iVar20,&local_d0,
                     *(undefined8 *)UnityEngine_Rendering_Universal_TileData_var);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar4 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
        FUN_0132138c(*(long *)(param_1 + 0x10),iVar20,&local_d0,*(undefined8 *)puVar6);
        lVar19 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_d0 = local_6c;
        uStack_ce = local_6a;
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_84 = *(int *)(lVar19 + 0x10) != 0;
        local_81 = local_6a;
        local_83 = local_6c;
        local_a8 = uVar23;
        uStack_a0 = uVar2;
        local_98 = uVar3;
        uStack_90 = uVar4;
        local_88 = iVar20;
        FUN_0132149c(lVar21,iVar20,&local_a8,*(undefined8 *)puVar8);
        lVar21 = *(long *)(param_1 + 0x60);
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)(param_1 + 0x30));
    }
  }
  puVar7 = Method_UnityEngine_ScriptableObject_CreateInstance<MB2_TextureBakeResults>__;
  plVar25 = (long *)(param_1 + 0x60);
  lVar19 = *(long *)Method_UnityEngine_ScriptableObject_CreateInstance<MB2_TextureBakeResults>__;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar19);
    lVar19 = *(long *)puVar7;
  }
  lVar24 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
  if (lVar24 == 0) {
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar19);
      lVar19 = *(long *)puVar7;
    }
    uVar23 = **(undefined8 **)(lVar19 + 0xb8);
    lVar24 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__
                               );
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01267c10(lVar24,uVar23,*(undefined8 *)System_Runtime_Remoting_IChannelInfo_var,0);
    *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar24;
  }
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0132508c(lVar21,lVar24,
               *(undefined8 *)
                Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<SnapInteractor,_SnapInteractable>_Dispose__
              );
  puVar8 = StringLiteral_9184;
  puVar7 = 
  Method_System_Collections_Generic_Dictionary<Type,_ComponentExtensions_ComponentCopyData>__ctor__;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar20 = 0;
    do {
      if (*plVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*plVar25,iVar20,&local_d0,*(undefined8 *)puVar7);
      if (iVar20 != local_b0) {
LAB_02417510:
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a9f4(*(long *)(param_1 + 0x58),*(undefined8 *)puVar8);
        if (0 < *(int *)(param_1 + 0x30)) {
          iVar20 = 0;
          iVar22 = 0;
          do {
            if (*plVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0132138c(*plVar25,iVar22,&local_d0,*(undefined8 *)puVar7);
            iVar1 = local_b0;
            plVar17 = plStack_b8;
            plVar16 = local_c0;
            plVar15 = plStack_c8;
            if (*plVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar5 = (long *)CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
            FUN_0132138c(*plVar25,iVar22,&local_d0,*(undefined8 *)puVar7);
            if ((local_ac & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lStack_78 = plVar5[4];
              local_80 = plVar5[3];
              FUN_0265e038(&local_80,0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lStack_78 = plVar15[4];
              local_80 = plVar15[3];
              FUN_0265e038(&local_80,0);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lStack_78 = plVar16[4];
              local_80 = plVar16[3];
              FUN_0265e038(&local_80,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lStack_78 = plVar17[4];
              local_80 = plVar17[3];
              FUN_0265e038(&local_80,0);
              (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
              (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
              (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              uVar23 = extraout_x1;
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132149c(*(long *)(param_1 + 0x10),iVar22,plVar5,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_Pose>__ctor__);
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132149c(*(long *)(param_1 + 0x18),iVar22,plVar15,
                           *(undefined8 *)Method_OVRGrabbable_Awake__);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132149c(*(long *)(param_1 + 0x20),iVar22,plVar16,
                           *(undefined8 *)StringLiteral_11707);
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132149c(*(long *)(param_1 + 0x28),iVar22,plVar17,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vnegq_f64__);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar19 = *(long *)(param_1 + 0x58);
              FUN_0132138c(*(long *)(param_1 + 0x10),iVar22,&local_d0,*(undefined8 *)puVar6);
              lVar21 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar18 = FUN_0129aa60(lVar19,*(undefined8 *)(lVar21 + 0x28),
                                    *(undefined8 *)
                                     Method_Newtonsoft_Json_JsonConverter<Vector3>__ctor__);
              uVar13 = uStack_cd;
              uVar11 = uStack_ce;
              uVar9 = local_d0;
              uStack_ce = (undefined1)((uint)iVar22 >> 0x10);
              uVar12 = uStack_ce;
              uStack_cd = (undefined1)((uint)iVar22 >> 0x18);
              uVar14 = uStack_cd;
              local_d0 = (undefined2)iVar22;
              uVar10 = local_d0;
              local_d0 = uVar9;
              uStack_ce = uVar11;
              uStack_cd = uVar13;
              if ((uVar18 & 1) == 0) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                lVar19 = *(long *)(param_1 + 0x58);
                FUN_0132138c(*(long *)(param_1 + 0x10),iVar22,&local_d0,*(undefined8 *)puVar6);
                lVar21 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                local_d0 = uVar10;
                uStack_ce = uVar12;
                uStack_cd = uVar14;
                FUN_0129a054(lVar19,*(undefined8 *)(lVar21 + 0x28),&local_d0,
                             *(undefined8 *)
                              Method_Oculus_Interaction_ActiveStateGate_HandleOpenSelected__);
              }
              if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              local_d0 = uVar10;
              uStack_ce = uVar12;
              uStack_cd = uVar14;
              FUN_0132149c(*(long *)(param_1 + 0x68),iVar1,&local_d0,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo);
              iVar20 = iVar20 + 1;
              uVar23 = extraout_x1_00;
            }
            iVar1 = *(int *)(param_1 + 0x30);
            iVar22 = iVar22 + 1;
          } while (iVar22 < iVar1);
          iVar22 = iVar1 - iVar20;
          if (iVar22 != 0 && iVar20 <= iVar1) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(0,uVar23,iVar22);
            }
            FUN_01324c7c(*(long *)(param_1 + 0x10),iVar20,iVar22,*(undefined8 *)PTR_DAT_033f49e0);
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01324c7c(*(long *)(param_1 + 0x18),iVar20,*(int *)(param_1 + 0x30) - iVar20,
                         *(undefined8 *)
                          Method_System_Xml_XmlSqlBinaryReader_GetXsdKatmaiTokenLength__);
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01324c7c(*(long *)(param_1 + 0x20),iVar20,*(int *)(param_1 + 0x30) - iVar20,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsriq_n_u32__);
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01324c7c(*(long *)(param_1 + 0x28),iVar20,*(int *)(param_1 + 0x30) - iVar20,
                         *(undefined8 *)
                          Method_Unity_Jobs_IJobParallelForExtensions_Schedule<OVRMeshJobs_TransformToUnitySpaceJob>__
                        );
            if (*plVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01324c7c(*plVar25,iVar20,*(int *)(param_1 + 0x30) - iVar20,
                         *(undefined8 *)Obi_IOniConstraintsImpl_TypeInfo);
            *(int *)(param_1 + 0x30) = iVar20;
          }
        }
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_02414940(*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x68),0);
        break;
      }
      if (*plVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*plVar25,iVar20,&local_d0,*(undefined8 *)puVar7);
      if ((local_ac & 1) == 0) goto LAB_02417510;
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_1 + 0x30));
  }
  FUN_023ae3b0(local_68,0);
  return;
}


