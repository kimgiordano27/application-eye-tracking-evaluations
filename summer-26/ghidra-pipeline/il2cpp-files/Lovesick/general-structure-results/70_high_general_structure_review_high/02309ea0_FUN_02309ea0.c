/*
FUNCTION_NAME: FUN_02309ea0
ENTRY_POINT: 02309ea0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02309ea0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781ba1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033f43d0);
    thunk_FUN_00d48444(System_Func<Character,_uint>_TypeInfo);
    thunk_FUN_00d48444(Method_TinyJSON_Variant_ToDateTime__);
    thunk_FUN_00d48444(StringLiteral_5085);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_u16__);
    thunk_FUN_00d48444(
                      Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<object>_TypeInfo);
    thunk_FUN_00d48444(
                      OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Tasks_TaskFactory_StartNew<Task>__);
    thunk_FUN_00d48444(StringLiteral_3249);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputActionReference_Set__);
    thunk_FUN_00d48444(StringLiteral_1458);
    thunk_FUN_00d48444(PTR_DAT_033eb810);
    thunk_FUN_00d48444(System_Collections_Generic_List<bool>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5577);
    thunk_FUN_00d48444(Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    thunk_FUN_00d48444(Oculus_Platform_MessageWithAchievementDefinitions_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11403);
    thunk_FUN_00d48444(System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_763);
    thunk_FUN_00d48444(StringLiteral_1509);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulhq_s32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<XRReferenceObject>_get_Current__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<ScrollRect>__);
    thunk_FUN_00d48444(PTR_DAT_033f38c8);
    thunk_FUN_00d48444(StringLiteral_8067);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_FromException<int>__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<MeshId,_MeshTransform>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlByte_op_Multiply__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<AnimalObject>_GetEnumerator__);
    DAT_03781ba1 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_0268b4e0(param_1,0,0);
  if ((uVar11 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar21 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar22 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                               );
    FUN_016ec5b8(uVar21,uVar22,0);
    uVar22 = thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<int>_CopyFrom__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar21,uVar22);
  }
  plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                      );
  if ((plVar12 != (long *)0x0) &&
     (FUN_0160aa4c(plVar12,0), puVar3 = Method_TinyJSON_Variant_ToDateTime__, param_1 != 0)) {
    lVar13 = FUN_0266b978(param_1,0);
    lVar14 = FUN_0266ba24(param_1,0);
    lVar15 = FUN_0266c0dc(param_1,0);
    lVar16 = FUN_0266bad0(param_1,0);
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar1 = PTR_DAT_033f43d0;
    if (lVar17 != 0) {
      FUN_01320e50(lVar17,*(undefined8 *)PTR_DAT_033f43d0);
      lVar18 = FUN_0266bc28(param_1,0);
      lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar19 != 0) {
        FUN_01320e50(lVar19,*(undefined8 *)puVar1);
        lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar4 = StringLiteral_11403;
        puVar2 = Method_System_Threading_Tasks_Task_FromException<int>__;
        puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
        if (lVar20 != 0) {
          FUN_01320e50(lVar20,*(undefined8 *)puVar1);
          FUN_0266d0c4(param_1,0,lVar17,0);
          FUN_0266d0c4(param_1,2,lVar19,0);
          FUN_0266d0c4(param_1,3,lVar20,0);
          FUN_0160c8e8(plVar12,*(undefined8 *)puVar2,0);
          FUN_02308ee8(param_1);
          uVar21 = FUN_0230c3b0();
          FUN_0160c8e8(plVar12,uVar21,0);
          local_64 = FUN_02665480(param_1,0);
          uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
          uVar21 = FUN_015f6780(*(undefined8 *)puVar4,uVar21,0);
          FUN_0160c8e8(plVar12,uVar21,0);
          puVar4 = StringLiteral_3249;
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmulhq_s32__;
          puVar1 = System_Collections_Generic_List<object>_TypeInfo;
          if (lVar13 != 0) {
            local_68 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
            uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
            uVar21 = FUN_015f6780(*(undefined8 *)puVar4,uVar21,0);
            FUN_011226bc(plVar12,uVar21,lVar13,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
            puVar4 = StringLiteral_5577;
            puVar2 = System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo;
            if (lVar14 != 0) {
              local_6c = (undefined4)*(undefined8 *)(lVar14 + 0x18);
              uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_6c);
              uVar21 = FUN_015f6780(*(undefined8 *)puVar4,uVar21,0);
              FUN_011226bc(plVar12,uVar21,lVar14,*(undefined8 *)puVar2,*(undefined8 *)puVar1);
              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_u16__;
              puVar2 = 
              Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_get_Current__
              ;
              puVar1 = System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_TypeInfo;
              if (lVar15 != 0) {
                local_70 = (undefined4)*(undefined8 *)(lVar15 + 0x18);
                uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_70);
                uVar21 = FUN_015f6780(*(undefined8 *)puVar2,uVar21,0);
                FUN_011226bc(plVar12,uVar21,lVar15,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
                puVar6 = Method_System_Threading_Tasks_TaskFactory_StartNew<Task>__;
                puVar5 = Method_UnityEngine_InputSystem_InputActionReference_Set__;
                puVar4 = 
                OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo;
                puVar2 = Oculus_Platform_MessageWithAchievementDefinitions_TypeInfo;
                puVar1 = PTR_DAT_033eb810;
                if (lVar16 != 0) {
                  local_74 = (undefined4)*(undefined8 *)(lVar16 + 0x18);
                  uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_74);
                  uVar21 = FUN_015f6780(*(undefined8 *)puVar5,uVar21,0);
                  FUN_011226bc(plVar12,uVar21,lVar16,*(undefined8 *)puVar1,*(undefined8 *)puVar4);
                  local_78 = *(undefined4 *)(lVar17 + 0x18);
                  uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
                  uVar21 = FUN_015f6780(*(undefined8 *)puVar2,uVar21,0);
                  FUN_011226bc(plVar12,uVar21,lVar17,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
                  puVar7 = StringLiteral_8067;
                  puVar6 = StringLiteral_1509;
                  puVar5 = 
                  Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                  ;
                  puVar2 = 
                  Method_System_Collections_Generic_List_Enumerator<XRReferenceObject>_get_Current__
                  ;
                  puVar1 = 
                  Method_System_Collections_Generic_Dictionary<MeshId,_MeshTransform>__ctor__;
                  if (lVar18 != 0) {
                    local_7c = (undefined4)*(undefined8 *)(lVar18 + 0x18);
                    uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_7c);
                    uVar21 = FUN_015f6780(*(undefined8 *)puVar7,uVar21,0);
                    FUN_011226bc(plVar12,uVar21,lVar18,*(undefined8 *)puVar2,*(undefined8 *)puVar5);
                    local_80 = *(undefined4 *)(lVar19 + 0x18);
                    uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_80);
                    uVar21 = FUN_015f6780(*(undefined8 *)puVar1,uVar21,0);
                    FUN_011226bc(plVar12,uVar21,lVar19,*(undefined8 *)puVar6,*(undefined8 *)puVar4);
                    local_84 = *(undefined4 *)(lVar20 + 0x18);
                    uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_84);
                    uVar21 = FUN_015f6780(*(undefined8 *)
                                           Method_System_Data_SqlTypes_SqlByte_op_Multiply__,uVar21,
                                          0);
                    FUN_011226bc(plVar12,uVar21,lVar20,
                                 *(undefined8 *)System_Collections_Generic_List<bool>_TypeInfo,
                                 *(undefined8 *)puVar4);
                    FUN_0160c8e8(plVar12,*(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<ScrollRect>__,0
                                );
                    iVar8 = FUN_02666048(param_1,0);
                    puVar4 = StringLiteral_1458;
                    puVar2 = StringLiteral_763;
                    puVar1 = PTR_DAT_033f38c8;
                    if (0 < iVar8) {
                      iVar8 = 0;
                      do {
                        uVar9 = FUN_0266f260(param_1,iVar8,0);
                        lVar13 = FUN_0266dee8(param_1,iVar8,0);
                        local_64 = iVar8;
                        uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
                        local_68 = uVar9;
                        uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_5085,&local_68);
                        uVar21 = FUN_01600b5c(*(undefined8 *)
                                               Internal_Runtime_Augments_RuntimeAugments_TypeInfo,
                                              uVar21,uVar22,0);
                        FUN_0160c8e8(plVar12,uVar21,0);
                        switch(uVar9) {
                        case 0:
                          if (lVar13 == 0) goto LAB_0230aa08;
                          uVar27 = *(uint *)(lVar13 + 0x18);
                          if (0 < (int)uVar27) {
                            uVar26 = 2;
                            do {
                              if (uVar27 <= uVar26 - 2) {
LAB_0230a9f8:
                    /* WARNING: Subroutine does not return */
                                FUN_00da5194();
                              }
                              local_64 = *(int *)(lVar13 + (long)(int)(uVar26 - 2) * 4 + 0x20);
                              uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
                              if (*(uint *)(lVar13 + 0x18) <= uVar26 - 1) goto LAB_0230a9f8;
                              local_68 = *(undefined4 *)
                                          (lVar13 + (long)(int)(uVar26 - 1) * 4 + 0x20);
                              uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
                              if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_0230a9f8;
                              local_6c = *(undefined4 *)(lVar13 + (long)(int)uVar26 * 4 + 0x20);
                              uVar23 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_6c);
                              uVar21 = FUN_01600ba0(*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List<AnimalObject>_GetEnumerator__
                                                  ,uVar21,uVar22,uVar23,0);
                              FUN_0160c8e8(plVar12,uVar21,0);
                              uVar27 = *(uint *)(lVar13 + 0x18);
                              iVar10 = uVar26 + 1;
                              uVar26 = uVar26 + 3;
                            } while (iVar10 < (int)uVar27);
                          }
                          break;
                        case 2:
                          if (lVar13 == 0) goto LAB_0230aa08;
                          if (0 < *(int *)(lVar13 + 0x18)) {
                            uVar27 = 3;
                            do {
                              plVar24 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
                              if (*(uint *)(lVar13 + 0x18) <= uVar27 - 3) goto LAB_0230a9f8;
                              local_64 = *(int *)(lVar13 + (long)(int)(uVar27 - 3) * 4 + 0x20);
                              lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
                              if (plVar24 == (long *)0x0) goto LAB_0230aa08;
                              if ((lVar14 != 0) &&
                                 (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar24 + 0x40)),
                                 lVar15 == 0)) {
LAB_0230a9fc:
                                uVar21 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                FUN_00da5038(uVar21,0);
                              }
                              if (((int)plVar24[3] == 0) ||
                                 (plVar24[4] = lVar14, *(uint *)(lVar13 + 0x18) <= uVar27 - 2))
                              goto LAB_0230a9f8;
                              local_68 = *(undefined4 *)
                                          (lVar13 + (long)(int)(uVar27 - 2) * 4 + 0x20);
                              lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
                              if ((lVar14 != 0) &&
                                 (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar24 + 0x40)),
                                 lVar15 == 0)) goto LAB_0230a9fc;
                              if ((*(uint *)(plVar24 + 3) < 2) ||
                                 (plVar24[5] = lVar14, *(uint *)(lVar13 + 0x18) <= uVar27 - 1))
                              goto LAB_0230a9f8;
                              local_6c = *(undefined4 *)
                                          (lVar13 + (long)(int)(uVar27 - 1) * 4 + 0x20);
                              lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_6c);
                              if ((lVar14 != 0) &&
                                 (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar24 + 0x40)),
                                 lVar15 == 0)) goto LAB_0230a9fc;
                              if ((*(uint *)(plVar24 + 3) < 3) ||
                                 (plVar24[6] = lVar14, *(uint *)(lVar13 + 0x18) <= uVar27))
                              goto LAB_0230a9f8;
                              local_70 = *(undefined4 *)(lVar13 + (long)(int)uVar27 * 4 + 0x20);
                              lVar14 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_70);
                              if ((lVar14 != 0) &&
                                 (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)
                                                                      (*plVar24 + 0x40)),
                                 lVar15 == 0)) goto LAB_0230a9fc;
                              if (*(uint *)(plVar24 + 3) < 4) goto LAB_0230a9f8;
                              plVar24[7] = lVar14;
                              uVar21 = FUN_01600be4(*(undefined8 *)puVar2,plVar24,0);
                              FUN_0160c8e8(plVar12,uVar21,0);
                              iVar10 = uVar27 + 1;
                              uVar27 = uVar27 + 4;
                            } while (iVar10 < *(int *)(lVar13 + 0x18));
                          }
                          break;
                        case 3:
                          if (lVar13 == 0) goto LAB_0230aa08;
                          uVar27 = *(uint *)(lVar13 + 0x18);
                          if (0 < (int)uVar27) {
                            uVar26 = 1;
                            do {
                              if (uVar27 <= uVar26 - 1) goto LAB_0230a9f8;
                              local_64 = *(int *)(lVar13 + (long)(int)(uVar26 - 1) * 4 + 0x20);
                              uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
                              if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_0230a9f8;
                              local_68 = *(undefined4 *)(lVar13 + (long)(int)uVar26 * 4 + 0x20);
                              uVar22 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_68);
                              uVar21 = FUN_01600b5c(*(undefined8 *)puVar4,uVar21,uVar22,0);
                              FUN_0160c8e8(plVar12,uVar21,0);
                              uVar27 = *(uint *)(lVar13 + 0x18);
                              iVar10 = uVar26 + 1;
                              uVar26 = uVar26 + 2;
                            } while (iVar10 < (int)uVar27);
                          }
                          break;
                        case 5:
                          if (lVar13 == 0) goto LAB_0230aa08;
                          if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                            uVar11 = 0;
                            uVar25 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                            do {
                              if (uVar25 <= uVar11) goto LAB_0230a9f8;
                              local_64 = *(int *)(lVar13 + 0x20 + uVar11 * 4);
                              uVar21 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_64);
                              uVar21 = FUN_015f6780(*(undefined8 *)puVar1,uVar21,0);
                              FUN_0160c8e8(plVar12,uVar21,0);
                              uVar25 = (ulong)*(uint *)(lVar13 + 0x18);
                              uVar11 = uVar11 + 1;
                            } while ((long)uVar11 < (long)(int)*(uint *)(lVar13 + 0x18));
                          }
                        }
                        iVar8 = iVar8 + 1;
                        iVar10 = FUN_02666048(param_1,0);
                      } while (iVar8 < iVar10);
                    }
                    (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0230aa08:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


