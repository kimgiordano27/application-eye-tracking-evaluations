/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 01465540
PROGRAM: Lovesick-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01465490) */
/* WARNING: Removing unreachable block (ram,0x0146508c) */
/* WARNING: Removing unreachable block (ram,0x01465090) */
/* WARNING: Removing unreachable block (ram,0x014655dc) */

undefined8
Meta_XR_EnvironmentRaycastManager__EnsureDepthManagerIsPresent(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  long unaff_x25;
  long lVar17;
  long lVar18;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack000000000000003c;
  int in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  if (param_2 != 1) {
    FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar13 = (long *)__cxa_begin_catch(param_1);
  lVar17 = *plVar13;
  __cxa_end_catch();
  FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
  puVar3 = StringLiteral_10463;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vfmas_laneq_f32__;
  if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar17);
  }
  if (*(char *)(in_stack_00000010 + 0x11) == '\0') {
    if (unaff_x25 != 0) {
LAB_01465208:
      puVar5 = StringLiteral_302;
      puVar3 = UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerable_TypeInfo;
      lVar17 = FUN_012998a8(unaff_x25,
                            *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfmas_laneq_f32__)
      ;
      puVar6 = StringLiteral_10243;
      puVar4 = Method_UnityEngine_Networking_UnityWebRequest_InternalSetUrl__;
      puVar2 = PTR_DAT_033f4398;
      if (lVar17 != 0) {
        FUN_01311764(lVar17,&stack0x00000048,*(undefined8 *)puVar3);
        in_stack_000000b0 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        iVar16 = 0;
        in_stack_000000b8 = in_stack_00000050;
        in_stack_000000c0 = in_stack_00000058;
        do {
          while( true ) {
            uVar8 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
            if ((uVar8 & 1) == 0) {
              FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
              uStack0000000000000044 =
                   GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                             (unaff_x25,*(undefined8 *)puVar6);
              puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
              uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                         ,&stack0x00000044);
              in_stack_00000040 = iVar16;
              uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000040);
              iStack000000000000003c =
                   GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                             (unaff_x25,*(undefined8 *)puVar6);
              iStack000000000000003c = iStack000000000000003c - iVar16;
              uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x0000003c);
              uVar9 = FUN_01600ba0(*(undefined8 *)puVar4,uVar9,uVar10,uVar12,0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar5);
              }
              FUN_02660dac(uVar9,0);
              return in_stack_00000028;
            }
            uVar9 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
            uVar10 = FUN_01299bc0(unaff_x25,uVar9,&stack0x00000048,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_CellChunkInfo>_ContainsKey__
                                 );
            if (CONCAT44(uStack000000000000004c,uStack0000000000000048) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(int *)(CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x18) < 2) break;
LAB_014652d0:
            uVar9 = FUN_014658c0(uVar10,in_stack_00000030,in_stack_00000018,uVar9);
            FUN_00bc16a0(in_stack_00000028,uVar9,*(undefined8 *)puVar2);
          }
          if (*(long *)(in_stack_00000030 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(char *)(*(long *)(in_stack_00000030 + 0x30) + 0x41) != '\0') goto LAB_014652d0;
          iVar16 = iVar16 + 1;
        } while( true );
      }
    }
  }
  else {
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<Vertex>_Dispose__);
    if (((lVar17 != 0) && (FUN_01298da0(lVar17,*(undefined8 *)puVar3), unaff_x25 != 0)) &&
       (lVar7 = FUN_012998a8(unaff_x25,*(undefined8 *)puVar2),
       puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo,
       puVar2 = PTR_DAT_033eb348, lVar7 != 0)) {
      FUN_01311764(lVar7,&stack0x00000048,
                   *(undefined8 *)
                    UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerable_TypeInfo)
      ;
      in_stack_000000b0 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      in_stack_000000b8 = in_stack_00000050;
      in_stack_000000c0 = in_stack_00000058;
LAB_01464c94:
      uVar8 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
      if ((uVar8 & 1) != 0) {
        uVar9 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
        FUN_01299bc0(unaff_x25,uVar9,&stack0x000000e8,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_CellChunkInfo>_ContainsKey__
                    );
        if (in_stack_000000e8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01323390(in_stack_000000e8,&stack0x00000048,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_s8__);
        in_stack_00000070 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        in_stack_00000078 = in_stack_00000050;
        in_stack_00000080 = in_stack_00000058;
LAB_01464d10:
        do {
          uVar8 = FUN_012b894c(&stack0x00000070,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Stack<TextureId>__ctor__);
          if ((uVar8 & 1) == 0) goto LAB_01465060;
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      System_Collections_Generic_List<ProbeBrickIndex_Brick>_TypeInfo
                                    );
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_017b46ec(lVar7,0);
          uVar10 = FUN_00ac3018(&stack0x00000070,*(undefined8 *)ToggledScriptData_TypeInfo);
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_0268b4e0(uVar10,0,0);
          if ((uVar8 & 1) == 0) {
            if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_010c31a0(*(long *)(lVar7 + 0x10),&stack0x000000f0,
                         *(undefined8 *)
                          Method_UnityEngine_ProBuilder_MeshOperations_VertexEditing_WeldVertices__)
            ;
            lVar11 = in_stack_000000f0;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_02681b9c(lVar11,0,0);
            if ((uVar8 & 1) != 0) {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar11 = FUN_0267b53c(lVar11,0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
                bVar1 = false;
              }
              else {
                bVar1 = false;
                uVar8 = 0;
                uVar14 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                puVar15 = (undefined8 *)(lVar11 + 0x28);
                do {
                  if (uVar14 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar18 = *(long *)(lVar7 + 0x18);
                  uVar10 = *puVar15;
                  if (lVar18 == 0) {
                    lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_JsonSchema>>_get_Current__
                                               );
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_0136b58c(lVar18,lVar7,*(undefined8 *)System_Func<GameObject,_uint>_TypeInfo,
                                 0);
                    *(long *)(lVar7 + 0x18) = lVar18;
                  }
                  FUN_010ad028(uVar10,lVar18,&stack0x000000f8,*(undefined8 *)puVar2);
                  uVar10 = in_stack_000000f8;
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar14 = FUN_02681b9c(uVar10,0,0);
                  if ((uVar14 & 1) != 0) {
                    uStack0000000000000048 = (undefined4)uVar8;
                    uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                                ,&stack0x00000048);
                    uVar10 = FUN_01600b5c(*(undefined8 *)
                                           Field_<PrivateImplementationDetails>_E2AA696710083FEFF382491A86DF649DB1E8EE6AA4ECF99E8D98CFBF871BFCE4
                                          ,uVar9,uVar10,0);
                    uVar14 = FUN_0129eff4(lVar17,uVar10,&stack0x00000068,
                                          *(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__
                                         );
                    if ((uVar14 & 1) == 0) {
                      lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                      
                                                  Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo
                                                 );
                      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_01320e50(lVar18,*(undefined8 *)
                                           Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                                  );
                      in_stack_00000068 = lVar18;
                      FUN_0129a054(lVar17,uVar10,lVar18,
                                   *(undefined8 *)
                                    UnityEngine_Events_UnityAction<string,_string>_TypeInfo);
                    }
                    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    uVar14 = FUN_01322618(in_stack_00000068,*(undefined8 *)(lVar7 + 0x10),
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__
                                         );
                    if ((uVar14 & 1) == 0) {
                      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_00ad61c4(in_stack_00000068,*(undefined8 *)(lVar7 + 0x10),
                                   *(undefined8 *)
                                    Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
                    }
                    bVar1 = true;
                  }
                  uVar14 = (ulong)*(uint *)(lVar11 + 0x18);
                  uVar8 = uVar8 + 1;
                  puVar15 = puVar15 + 2;
                } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
              }
              if (bVar1) goto LAB_01464d10;
            }
            uVar10 = FUN_015f6780(*(undefined8 *)
                                   Method_System_Collections_Generic_Queue<Transform>_Dequeue__,
                                  uVar9,0);
            uVar8 = FUN_0129eff4(lVar17,uVar10,&stack0x00000060,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__
                                );
            if ((uVar8 & 1) == 0) {
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                           Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01320e50(lVar11,*(undefined8 *)
                                   Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                          );
              in_stack_00000060 = lVar11;
              FUN_0129a054(lVar17,uVar10,lVar11,
                           *(undefined8 *)UnityEngine_Events_UnityAction<string,_string>_TypeInfo);
            }
            if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar8 = FUN_01322618(in_stack_00000060,*(undefined8 *)(lVar7 + 0x10),
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__
                                );
            if ((uVar8 & 1) == 0) {
              if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ad61c4(in_stack_00000060,*(undefined8 *)(lVar7 + 0x10),
                           *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
            }
          }
        } while( true );
      }
      FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
      unaff_x25 = lVar17;
      if (lVar17 == 0) goto LAB_01465478;
      goto LAB_01465208;
    }
  }
LAB_01465478:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01465060:
  FUN_012b8948(&stack0x00000070,
               *(undefined8 *)Method_System_Linq_Enumerable_ToList<PlayableDirector>__);
  goto LAB_01464c94;
}


