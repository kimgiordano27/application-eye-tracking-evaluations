/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClampRayOriginToCamFrustumPlanes
ENTRY_POINT: 01464f6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 261
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0146508c) */
/* WARNING: Removing unreachable block (ram,0x01465090) */
/* WARNING: Removing unreachable block (ram,0x01465490) */

undefined8
Meta_XR_EnvironmentDepthRaycaster__ClampRayOriginToCamFrustumPlanes
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  int iVar11;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
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
  
  do {
    FUN_00ad61c4(param_2,param_3,*param_1);
    do {
      bVar1 = true;
      do {
        uVar10 = (ulong)*(uint *)(unaff_x26 + 0x18);
        unaff_x20 = unaff_x20 + 1;
        unaff_x21 = unaff_x21 + 2;
        if ((long)(int)*(uint *)(unaff_x26 + 0x18) <= (long)unaff_x20) {
          while( true ) {
            if (bVar1) goto LAB_01464d10;
            do {
              FUN_015f6780(*(undefined8 *)
                            Method_System_Collections_Generic_Queue<Transform>_Dequeue__,unaff_x24,0
                          );
              uVar10 = FUN_0129eff4();
              if ((uVar10 & 1) == 0) {
                lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                            Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_01320e50(lVar7,*(undefined8 *)
                                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                            );
                in_stack_00000060 = lVar7;
                FUN_0129a054();
              }
              if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar10 = FUN_01322618(in_stack_00000060,*(undefined8 *)(unaff_x25 + 0x10),
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__
                                   );
              if ((uVar10 & 1) == 0) {
                if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ad61c4(in_stack_00000060,*(undefined8 *)(unaff_x25 + 0x10),
                             *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
              }
LAB_01464d10:
              do {
                while (uVar10 = FUN_012b894c(&stack0x00000070,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Stack<TextureId>__ctor__
                                            ), (uVar10 & 1) == 0) {
                  FUN_012b8948(&stack0x00000070,
                               *(undefined8 *)
                                Method_System_Linq_Enumerable_ToList<PlayableDirector>__);
                  uVar10 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
                  if ((uVar10 & 1) == 0) {
                    FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
                    puVar5 = StringLiteral_302;
                    puVar3 = 
                    UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerable_TypeInfo;
                    if ((unaff_x23 == 0) ||
                       (lVar7 = FUN_012998a8(),
                       puVar4 = Method_UnityEngine_Networking_UnityWebRequest_InternalSetUrl__,
                       puVar2 = PTR_DAT_033f4398, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_01311764(lVar7,&stack0x00000048,*(undefined8 *)puVar3);
                    in_stack_000000b0 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
                    iVar11 = 0;
                    in_stack_000000b8 = in_stack_00000050;
                    in_stack_000000c0 = in_stack_00000058;
                    goto LAB_0146525c;
                  }
                  unaff_x24 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
                  FUN_01299bc0(in_stack_00000020,unaff_x24,&stack0x000000e8,
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
                }
                unaff_x25 = thunk_FUN_00d62348(*(undefined8 *)
                                                System_Collections_Generic_List<ProbeBrickIndex_Brick>_TypeInfo
                                              );
                if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_017b46ec(unaff_x25,0);
                uVar6 = FUN_00ac3018(&stack0x00000070,*(undefined8 *)ToggledScriptData_TypeInfo);
                *(undefined8 *)(unaff_x25 + 0x10) = uVar6;
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_0268b4e0(uVar6,0,0);
              } while ((uVar10 & 1) != 0);
              if (*(long *)(unaff_x25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_010c31a0(*(long *)(unaff_x25 + 0x10),&stack0x000000f0,
                           *(undefined8 *)
                            Method_UnityEngine_ProBuilder_MeshOperations_VertexEditing_WeldVertices__
                          );
              lVar7 = in_stack_000000f0;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_02681b9c(lVar7,0,0);
            } while ((uVar10 & 1) == 0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            unaff_x26 = FUN_0267b53c(lVar7,0);
            if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (0 < (int)*(ulong *)(unaff_x26 + 0x18)) break;
            bVar1 = false;
          }
          bVar1 = false;
          unaff_x20 = 0;
          uVar10 = *(ulong *)(unaff_x26 + 0x18) & 0xffffffff;
          unaff_x21 = (undefined8 *)(unaff_x26 + 0x28);
        }
        if (uVar10 <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar7 = *(long *)(unaff_x25 + 0x18);
        uVar6 = *unaff_x21;
        if (lVar7 == 0) {
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_JsonSchema>>_get_Current__
                                    );
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0136b58c(lVar7,unaff_x25,*(undefined8 *)System_Func<GameObject,_uint>_TypeInfo,0);
          *(long *)(unaff_x25 + 0x18) = lVar7;
        }
        FUN_010ad028(uVar6,lVar7,&stack0x000000f8,*unaff_x19);
        uVar6 = in_stack_000000f8;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar6,0,0);
      } while ((uVar10 & 1) == 0);
      uStack0000000000000048 = (undefined4)unaff_x20;
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                 ,&stack0x00000048);
      FUN_01600b5c(*(undefined8 *)
                    Field_<PrivateImplementationDetails>_E2AA696710083FEFF382491A86DF649DB1E8EE6AA4ECF99E8D98CFBF871BFCE4
                   ,unaff_x24,uVar6,0);
      uVar10 = FUN_0129eff4();
      if ((uVar10 & 1) == 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                    Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(lVar7,*(undefined8 *)
                            Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                    );
        in_stack_00000068 = lVar7;
        FUN_0129a054();
      }
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = FUN_01322618(in_stack_00000068,*(undefined8 *)(unaff_x25 + 0x10),
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__);
    } while ((uVar10 & 1) != 0);
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_3 = *(undefined8 *)(unaff_x25 + 0x10);
    param_2 = in_stack_00000068;
    param_1 = (undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__;
  } while( true );
LAB_0146525c:
  uVar10 = FUN_012c2b80(&stack0x000000b0,*(undefined8 *)StringLiteral_6131);
  if ((uVar10 & 1) == 0) {
    FUN_012c2b7c(&stack0x000000b0,*(undefined8 *)MB_MultiMaterial_TypeInfo);
    uStack0000000000000044 =
         GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                   ();
    puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&stack0x00000044);
    in_stack_00000040 = iVar11;
    uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000040);
    iStack000000000000003c =
         GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                   ();
    iStack000000000000003c = iStack000000000000003c - iVar11;
    uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x0000003c);
    uVar6 = FUN_01600ba0(*(undefined8 *)puVar4,uVar6,uVar8,uVar9,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    FUN_02660dac(uVar6,0);
    return in_stack_00000028;
  }
  uVar6 = FUN_00bc1490(&stack0x000000b0,*(undefined8 *)StringLiteral_9910);
  uVar8 = FUN_01299bc0();
  if (CONCAT44(uStack000000000000004c,uStack0000000000000048) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (1 < *(int *)(CONCAT44(uStack000000000000004c,uStack0000000000000048) + 0x18)) {
LAB_014652d0:
    uVar6 = FUN_014658c0(uVar8,in_stack_00000030,in_stack_00000018,uVar6);
    FUN_00bc16a0(in_stack_00000028,uVar6,*(undefined8 *)puVar2);
    goto LAB_0146525c;
  }
  if (*(long *)(in_stack_00000030 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(*(long *)(in_stack_00000030 + 0x30) + 0x41) != '\0') goto LAB_014652d0;
  iVar11 = iVar11 + 1;
  goto LAB_0146525c;
}


