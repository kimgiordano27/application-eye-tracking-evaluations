/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.ctor
ENTRY_POINT: 01465180
PROGRAM: Lovesick-libil2cpp.so
SCORE: 264
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_7;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014654e4) */
/* WARNING: Removing unreachable block (ram,0x014654a4) */

undefined8 Meta_XR_EnvironmentDepthRaycaster___ctor(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  int iVar14;
  undefined8 *puVar15;
  long *unaff_x22;
  long unaff_x23;
  long lVar16;
  long lVar17;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
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
  
  if (param_2 == 1) {
    plVar10 = (long *)__cxa_begin_catch(param_1);
    lVar16 = *plVar10;
    __cxa_end_catch();
    iVar14 = 0;
code_r0x01465068:
    FUN_012b8948(&stack0x00000070,
                 *(undefined8 *)Method_System_Linq_Enumerable_ToList<PlayableDirector>__);
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00dbe778(lVar16);
    }
    if ((iVar14 != 0xb) && (iVar14 != 0)) {
      FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
      return in_stack_00000028;
    }
    uVar6 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
      FUN_01299bc0(in_stack_00000020,uVar7,&stack0x000000e8,
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
        uVar6 = FUN_012b894c(&stack0x00000070,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Stack<TextureId>__ctor__);
        if ((uVar6 & 1) == 0) goto LAB_01465060;
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                     System_Collections_Generic_List<ProbeBrickIndex_Brick>_TypeInfo
                                   );
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_017b46ec(lVar16,0);
        uVar8 = FUN_00ac3018(&stack0x00000070,*(undefined8 *)ToggledScriptData_TypeInfo);
        *(undefined8 *)(lVar16 + 0x10) = uVar8;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_0268b4e0(uVar8,0,0);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_010c31a0(*(long *)(lVar16 + 0x10),&stack0x000000f0,
                       *(undefined8 *)
                        Method_UnityEngine_ProBuilder_MeshOperations_VertexEditing_WeldVertices__);
          lVar9 = in_stack_000000f0;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_02681b9c(lVar9,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar9 = FUN_0267b53c(lVar9,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
              bVar1 = false;
            }
            else {
              bVar1 = false;
              uVar6 = 0;
              uVar13 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
              puVar15 = (undefined8 *)(lVar9 + 0x28);
              do {
                if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar17 = *(long *)(lVar16 + 0x18);
                uVar8 = *puVar15;
                if (lVar17 == 0) {
                  lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_JsonSchema>>_get_Current__
                                             );
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_0136b58c(lVar17,lVar16,*(undefined8 *)System_Func<GameObject,_uint>_TypeInfo,0
                              );
                  *(long *)(lVar16 + 0x18) = lVar17;
                }
                FUN_010ad028(uVar8,lVar17,&stack0x000000f8,*unaff_x19);
                uVar8 = in_stack_000000f8;
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = FUN_02681b9c(uVar8,0,0);
                if ((uVar13 & 1) != 0) {
                  uStack0000000000000048 = (undefined4)uVar6;
                  uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                             ,&stack0x00000048);
                  FUN_01600b5c(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_E2AA696710083FEFF382491A86DF649DB1E8EE6AA4ECF99E8D98CFBF871BFCE4
                               ,uVar7,uVar8,0);
                  uVar13 = FUN_0129eff4();
                  if ((uVar13 & 1) == 0) {
                    lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo
                                               );
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01320e50(lVar17,*(undefined8 *)
                                         Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                                );
                    in_stack_00000068 = lVar17;
                    FUN_0129a054();
                  }
                  if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  uVar13 = FUN_01322618(in_stack_00000068,*(undefined8 *)(lVar16 + 0x10),
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__
                                       );
                  if ((uVar13 & 1) == 0) {
                    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_00ad61c4(in_stack_00000068,*(undefined8 *)(lVar16 + 0x10),
                                 *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__
                                );
                  }
                  bVar1 = true;
                }
                uVar13 = (ulong)*(uint *)(lVar9 + 0x18);
                uVar6 = uVar6 + 1;
                puVar15 = puVar15 + 2;
              } while ((long)uVar6 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
            if (bVar1) goto LAB_01464d10;
          }
          FUN_015f6780(*(undefined8 *)Method_System_Collections_Generic_Queue<Transform>_Dequeue__,
                       uVar7,0);
          uVar6 = FUN_0129eff4();
          if ((uVar6 & 1) == 0) {
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                        Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01320e50(lVar9,*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                        );
            in_stack_00000060 = lVar9;
            FUN_0129a054();
          }
          if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar6 = FUN_01322618(in_stack_00000060,*(undefined8 *)(lVar16 + 0x10),
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__
                              );
          if ((uVar6 & 1) == 0) {
            if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ad61c4(in_stack_00000060,*(undefined8 *)(lVar16 + 0x10),
                         *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
          }
        }
      } while( true );
    }
    FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
    plVar10 = (long *)StringLiteral_302;
    puVar15 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfmas_laneq_f32__;
    goto code_r0x01465204;
  }
  FUN_012b8948(&stack0x00000070,
               *(undefined8 *)Method_System_Linq_Enumerable_ToList<PlayableDirector>__);
  plVar10 = (long *)StringLiteral_302;
  puVar15 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfmas_laneq_f32__;
  if (param_2 != 1) {
    FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar12 = (long *)__cxa_begin_catch(param_1);
  lVar16 = *plVar12;
  __cxa_end_catch();
  FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
  if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar16);
  }
code_r0x01465204:
  puVar3 = UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerable_TypeInfo;
  if ((unaff_x23 == 0) ||
     (lVar16 = FUN_012998a8(unaff_x23,*puVar15), puVar5 = StringLiteral_10243,
     puVar4 = Method_UnityEngine_Networking_UnityWebRequest_InternalSetUrl__,
     puVar2 = PTR_DAT_033f4398, lVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01311764(lVar16,&stack0x00000048,*(undefined8 *)puVar3);
  in_stack_000000b0 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  iVar14 = 0;
  in_stack_000000b8 = in_stack_00000050;
  in_stack_000000c0 = in_stack_00000058;
LAB_0146525c:
  do {
    uVar6 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
    if ((uVar6 & 1) == 0) {
      FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
      uStack0000000000000044 =
           GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                     (unaff_x23,*(undefined8 *)puVar5);
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000044);
      in_stack_00000040 = iVar14;
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000040);
      iStack000000000000003c =
           GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                     (unaff_x23,*(undefined8 *)puVar5);
      iStack000000000000003c = iStack000000000000003c - iVar14;
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x0000003c);
      uVar7 = FUN_01600ba0(*(undefined8 *)puVar4,uVar7,uVar8,uVar11,0);
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar10);
      }
      FUN_02660dac(uVar7,0);
      return in_stack_00000028;
    }
    uVar7 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
    uVar8 = FUN_01299bc0(unaff_x23,uVar7,&stack0x00000048,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_ProbeReferenceVolume_CellChunkInfo>_ContainsKey__
                        );
    if (CONCAT44(uStack000000000000004c,uStack0000000000000048) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x18) < 2) {
      if (*(long *)(in_stack_00000030 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(char *)(*(long *)(in_stack_00000030 + 0x30) + 0x41) == '\0') {
        iVar14 = iVar14 + 1;
        goto LAB_0146525c;
      }
    }
    uVar7 = FUN_014658c0(uVar8,in_stack_00000030,in_stack_00000018,uVar7);
    FUN_00bc16a0(in_stack_00000028,uVar7,*(undefined8 *)puVar2);
  } while( true );
LAB_01465060:
  lVar16 = 0;
  iVar14 = 0xb;
  goto code_r0x01465068;
}


