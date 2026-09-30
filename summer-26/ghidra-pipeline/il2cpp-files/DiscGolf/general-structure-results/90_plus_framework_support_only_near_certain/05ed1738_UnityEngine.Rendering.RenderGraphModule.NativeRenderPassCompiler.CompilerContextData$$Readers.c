/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData$$Readers
ENTRY_POINT: 05ed1738
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__Readers
               (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  ushort uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x400));
  FUN_02d965b8(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
  FUN_02d965b8(Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__);
  FUN_02d965b8(Method_Unity_Collections_NativeArray<uint>_Dispose__);
  FUN_02d965b8(
              Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
              );
  FUN_02d965b8(
              Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
              );
  FUN_02d965b8(
              Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
              );
  FUN_02d965b8(Method_System_Nullable<DateTimeOffset>_get_Value__);
  FUN_02d965b8(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_RemoveAt__);
  FUN_02d965b8(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__);
  FUN_02d965b8(Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Item__);
  FUN_02d965b8(PTR_DAT_06a0e4b8);
  FUN_02d965b8(
              Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
              );
  FUN_02d965b8(Method_Oculus_Platform_Message<DestinationList>_get_Data__);
  FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__);
  FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__);
  FUN_02d965b8(PTR_DAT_06a0e698);
  FUN_02d965b8(PTR_DAT_06a16e48);
  FUN_02d965b8(PTR_DAT_069fb990);
  *(undefined1 *)(unaff_x23 + 0xeb4) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  uStack000000000000002c = 0;
  if (*(long *)(unaff_x22 + 0x50) == 0) {
LAB_05ed1ce4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar7 = FUN_05e5db2c(*(long *)(unaff_x22 + 0x50),0);
  puVar18 = (undefined8 *)
            Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__;
  puVar16 = (undefined8 *)
            Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__;
  puVar5 = PTR_DAT_06a0e4b8;
  puVar4 = PTR_DAT_06a00240;
  puVar3 = PTR_DAT_069fb990;
  if (((*(long *)(unaff_x22 + 0x50) == 0) ||
      (lVar11 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0xd0), lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x28), lVar11 == 0)) goto LAB_05ed1ce4;
  FUN_03c23590(&stack0x00000010,lVar11,
               *(undefined8 *)
                Method_System_Collections_Generic_List<StylePropertyAnimationSystem_Values>_Contains__
              );
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000010 = 0;
  in_stack_00000018 = &stack0x00000030;
LAB_05ed18ac:
  do {
    do {
      do {
        do {
          uVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                            (&stack0x00000030,*puVar16);
          lVar11 = in_stack_00000040;
          if ((uVar8 & 1) == 0) {
            FUN_05156050(&stack0x00000030,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_RemoveAt__
                        );
            return;
          }
          if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar8 = FUN_05e6ffe8(in_stack_00000040,0);
        } while ((uVar8 & 1) != 0);
        lVar9 = FUN_0634bb04(lVar11,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = thunk_FUN_0635e320(lVar9,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_0634eb94(uVar10,0,0);
        if ((uVar8 & 1) == 0) break;
        lVar9 = FUN_0634bb04(lVar11,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = thunk_FUN_0635e320(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = FUN_035ab08c(lVar9,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_0634eb94(lVar9,0,0);
        if ((uVar8 & 1) == 0) break;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      } while ((*(long *)(lVar9 + 0x88) == *(long *)(lVar11 + 0x88)) &&
              ((uVar8 = FUN_05e6ffdc(lVar11,0), (uVar8 & 1) != 0 ||
               (uVar8 = FUN_05e70000(lVar11,0), (uVar8 & 1) != 0))));
      uVar8 = FUN_05e6ffdc(lVar11,0);
    } while (((uVar8 & 1) == 0) || (uVar8 = FUN_05e6fff4(lVar11,0), (uVar8 & 1) != 0));
    if (*(long *)(lVar11 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_03c5ecb0(*(long *)(lVar11 + 0xd0),unaff_x21,*(undefined8 *)puVar5);
  } while ((uVar8 & 1) == 0);
  uStack000000000000002c = *(ushort *)(lVar11 + 0x9c);
  if ((uStack000000000000002c & 0xff) != 0) {
    uVar8 = FUN_0432a760(&stack0x0000002c,*(undefined8 *)PTR_DAT_06a16e48);
    if ((uVar8 & 1) != 0) {
      puVar12 = (undefined4 *)(lVar11 + 0x28);
      goto LAB_05ed1a04;
    }
  }
  puVar12 = (undefined4 *)(lVar11 + 0x20);
LAB_05ed1a04:
  if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar1 = *puVar12;
  uVar8 = FUN_04f7fa44(*unaff_x19,uVar1,*puVar18);
  if ((uVar8 & 1) == 0) {
    if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04f7f858(*unaff_x19,uVar1,0,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeReference<RelayNetworkParameter>_Dispose__);
  }
  lVar9 = *unaff_x19;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar6 = FUN_04f7f7bc(lVar9,uVar1,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                      );
  FUN_04f7f844(lVar9,uVar1,iVar6 + 1,
               *(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
              );
  if (((uVar7 & 1) == 0) || (uVar8 = FUN_05e70b60(lVar11,0), (uVar8 & 1) != 0)) {
    if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                      (*in_stack_00000008,uVar1,
                       *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    if ((uVar8 & 1) == 0) {
      lVar9 = *in_stack_00000008;
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Nullable<DateTimeOffset>_get_Value__)
      ;
      FUN_04ff0cf0(uVar10,*(undefined8 *)Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__)
      ;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04f94b94(lVar9,uVar1,uVar10,
                   *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    }
    if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_04f94af4(*in_stack_00000008,uVar1,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                        );
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_04ff1c80(lVar9,*(undefined8 *)(lVar11 + 0x88),
                         *(undefined8 *)Method_Unity_Collections_NativeArray<uint>__ctor__);
    if ((uVar8 & 1) == 0) {
      if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = FUN_04f94af4(*in_stack_00000008,uVar1,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                          );
      uVar17 = *(undefined8 *)(lVar11 + 0x88);
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                                 );
      FUN_0400f984(uVar10,*(undefined8 *)
                           Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
                  );
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04ff1a8c(lVar9,uVar17,uVar10,
                   *(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__);
    }
    if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_04f94af4(*in_stack_00000008,uVar1,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                        );
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_04ff19ec(lVar9,*(undefined8 *)(lVar11 + 0x88),
                         *(undefined8 *)Method_Unity_Collections_NativeArray<uint>_Dispose__);
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar15 = *(long *)Method_Oculus_Platform_Message<DestinationList>_get_Data__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          plVar14 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
          *plVar14 = lVar11;
          LeanTween__value(plVar14,lVar11);
          puVar16 = (undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__;
          puVar18 = (undefined8 *)
                    Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__
          ;
        }
        else {
          FUN_040101ec(lVar9,lVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          puVar16 = (undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__;
          puVar18 = (undefined8 *)
                    Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__
          ;
        }
        goto LAB_05ed18ac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_05ed18ac;
}


