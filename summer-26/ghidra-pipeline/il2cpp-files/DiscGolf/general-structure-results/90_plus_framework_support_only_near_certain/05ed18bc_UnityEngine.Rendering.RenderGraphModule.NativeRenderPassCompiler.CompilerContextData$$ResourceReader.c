/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData$$ResourceReader
ENTRY_POINT: 05ed18bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 187
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__ResourceReader
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 uVar12;
  ulong unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  
  do {
    lVar3 = in_stack_00000040;
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_05e6ffe8(in_stack_00000040,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = FUN_0634bb04(lVar3,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = thunk_FUN_0635e320(lVar6,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_0634eb94(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_0634bb04(lVar3,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = thunk_FUN_0635e320(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = FUN_035ab08c(lVar6,*unaff_x22);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_0634eb94(lVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((*(long *)(lVar6 + 0x88) == *(long *)(lVar3 + 0x88)) &&
             ((uVar5 = FUN_05e6ffdc(lVar3,0), (uVar5 & 1) != 0 ||
              (uVar5 = FUN_05e70000(lVar3,0), (uVar5 & 1) != 0)))) goto LAB_05ed18ac;
        }
      }
      uVar5 = FUN_05e6ffdc(lVar3,0);
      if (((uVar5 & 1) != 0) && (uVar5 = FUN_05e6fff4(lVar3,0), (uVar5 & 1) == 0)) {
        if (*(long *)(lVar3 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_03c5ecb0(*(long *)(lVar3 + 0xd0),unaff_x21,*unaff_x20);
        if ((uVar5 & 1) != 0) {
          in_stack_00000028._4_2_ = *(ushort *)(lVar3 + 0x9c);
          if ((in_stack_00000028._4_2_ & 0xff) == 0) {

            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__AddToFragmentList
            :
            puVar8 = (undefined4 *)(lVar3 + 0x20);
          }
          else {
            uVar5 = FUN_0432a760((long)&stack0x00000028 + 4,*(undefined8 *)PTR_DAT_06a16e48);
            if ((uVar5 & 1) == 0)
            goto 
            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__AddToFragmentList
            ;
            puVar8 = (undefined4 *)(lVar3 + 0x28);
          }
          if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar1 = *puVar8;
          uVar5 = FUN_04f7fa44(*unaff_x19,uVar1,*unaff_x29);
          if ((uVar5 & 1) == 0) {
            if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04f7f858(*unaff_x19,uVar1,0,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeReference<RelayNetworkParameter>_Dispose__)
            ;
          }
          lVar6 = *unaff_x19;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar4 = FUN_04f7f7bc(lVar6,uVar1,
                               *(undefined8 *)
                                Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                              );
          FUN_04f7f844(lVar6,uVar1,iVar4 + 1,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                      );
          if (((unaff_x27 & 1) == 0) || (uVar5 = FUN_05e70b60(lVar3,0), (uVar5 & 1) != 0)) {
            if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar5 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                              (*in_stack_00000008,uVar1,
                               *(undefined8 *)
                                Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
            if ((uVar5 & 1) == 0) {
              lVar6 = *in_stack_00000008;
              uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Nullable<DateTimeOffset>_get_Value__);
              FUN_04ff0cf0(uVar7,*(undefined8 *)
                                  Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04f94b94(lVar6,uVar1,uVar7,
                           *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
            }
            if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = FUN_04f94af4(*in_stack_00000008,uVar1,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                                );
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            unaff_x27 = unaff_x27 & 0xffffffff;
            uVar5 = FUN_04ff1c80(lVar6,*(undefined8 *)(lVar3 + 0x88),
                                 *(undefined8 *)Method_Unity_Collections_NativeArray<uint>__ctor__);
            if ((uVar5 & 1) == 0) {
              if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar6 = FUN_04f94af4(*in_stack_00000008,uVar1,
                                   *(undefined8 *)
                                    Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                                  );
              uVar12 = *(undefined8 *)(lVar3 + 0x88);
              uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                                        );
              FUN_0400f984(uVar7,*(undefined8 *)
                                  Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
                          );
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_04ff1a8c(lVar6,uVar12,uVar7,
                           *(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__);
            }
            if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = FUN_04f94af4(*in_stack_00000008,uVar1,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                                );
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = FUN_04ff19ec(lVar6,*(undefined8 *)(lVar3 + 0x88),
                                 *(undefined8 *)Method_Unity_Collections_NativeArray<uint>_Dispose__
                                );
            if (lVar6 == 0) {
LAB_05ed1cf0:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)Method_Oculus_Platform_Message<DestinationList>_get_Data__;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_05ed1cf0;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar10 = lVar3;
              LeanTween__value(plVar10,lVar3);
              unaff_x26 = (undefined8 *)
                          Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__
              ;
              unaff_x29 = (undefined8 *)
                          Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__
              ;
            }
            else {
              FUN_040101ec(lVar6,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              unaff_x26 = (undefined8 *)
                          Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__
              ;
              unaff_x29 = (undefined8 *)
                          Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__
              ;
            }
          }
        }
      }
    }
LAB_05ed18ac:
    uVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                      (&stack0x00000030,*unaff_x26);
    if ((uVar5 & 1) == 0) {
      FUN_05156050(&stack0x00000030,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_RemoveAt__);
      return;
    }
  } while( true );
}


