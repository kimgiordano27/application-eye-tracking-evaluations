/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData$$GetPassName
ENTRY_POINT: 05ed1b9c
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


void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__GetPassName
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined8 *puVar10;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puVar11;
  long *unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  
code_r0x05ed1b9c:
  FUN_0400f984(param_1,param_2);
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04ff1a8c(unaff_x25,unaff_x26,unaff_x27,
               *(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__);
LAB_05ed1bc0:
  if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = FUN_04f94af4(*in_stack_00000008,unaff_w24,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                      );
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = FUN_04ff19ec(lVar5,*(undefined8 *)(unaff_x23 + 0x88),
                       *(undefined8 *)Method_Unity_Collections_NativeArray<uint>_Dispose__);
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)Method_Oculus_Platform_Message<DestinationList>_get_Data__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = unaff_x23;
        LeanTween__value(plVar8,unaff_x23);
        puVar10 = (undefined8 *)
                  Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__;
        puVar11 = (undefined8 *)
                  Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__
        ;
      }
      else {
        FUN_040101ec(lVar5,unaff_x23,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        puVar10 = (undefined8 *)
                  Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__;
        puVar11 = (undefined8 *)
                  Method_Unity_Collections_NativeReference<SecureNetworkProtocolParameter>_Dispose__
        ;
      }
LAB_05ed18ac:
      do {
        uVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                          (&stack0x00000030,*puVar10);
        unaff_x23 = in_stack_00000040;
        if ((uVar3 & 1) == 0) {
          FUN_05156050(&stack0x00000030,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_RemoveAt__)
          ;
          return;
        }
        if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar3 = FUN_05e6ffe8(in_stack_00000040,0);
      } while ((uVar3 & 1) != 0);
      lVar5 = FUN_0634bb04(unaff_x23,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar4 = thunk_FUN_0635e320(lVar5,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_0634eb94(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = FUN_0634bb04(unaff_x23,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = thunk_FUN_0635e320(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar5 = FUN_035ab08c(lVar5,*unaff_x20);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar3 = FUN_0634eb94(lVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((*(long *)(lVar5 + 0x88) == *(long *)(unaff_x23 + 0x88)) &&
             ((uVar3 = FUN_05e6ffdc(unaff_x23,0), (uVar3 & 1) != 0 ||
              (uVar3 = FUN_05e70000(unaff_x23,0), (uVar3 & 1) != 0)))) goto LAB_05ed18ac;
        }
      }
      uVar3 = FUN_05e6ffdc(unaff_x23,0);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_05e6fff4(unaff_x23,0), (uVar3 & 1) == 0)) {
        if (*(long *)(unaff_x23 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar3 = FUN_03c5ecb0(*(long *)(unaff_x23 + 0xd0),unaff_x19,*unaff_x28);
        if ((uVar3 & 1) != 0) {
          in_stack_00000028._4_2_ = *(ushort *)(unaff_x23 + 0x9c);
          if ((in_stack_00000028._4_2_ & 0xff) == 0) {

            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__AddToFragmentList
            :
            puVar6 = (undefined4 *)(unaff_x23 + 0x20);
          }
          else {
            uVar3 = FUN_0432a760((long)&stack0x00000028 + 4,*(undefined8 *)PTR_DAT_06a16e48);
            if ((uVar3 & 1) == 0)
            goto 
            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__AddToFragmentList
            ;
            puVar6 = (undefined4 *)(unaff_x23 + 0x28);
          }
          if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          unaff_w24 = *puVar6;
          uVar3 = FUN_04f7fa44(*unaff_x22,unaff_w24,*puVar11);
          if ((uVar3 & 1) == 0) {
            if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04f7f858(*unaff_x22,unaff_w24,0,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeReference<RelayNetworkParameter>_Dispose__)
            ;
          }
          lVar5 = *unaff_x22;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          iVar2 = FUN_04f7f7bc(lVar5,unaff_w24,
                               *(undefined8 *)
                                Method_Unity_Collections_NativeReference<Binding_unitytls_client_config>_get_IsCreated__
                              );
          FUN_04f7f844(lVar5,unaff_w24,iVar2 + 1,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                      );
          if (((unaff_x21 & 1) == 0) || (uVar3 = FUN_05e70b60(unaff_x23,0), (uVar3 & 1) != 0))
          goto LAB_05ed1a90;
        }
      }
      goto LAB_05ed18ac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_05ed1a90:
  if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                    (*in_stack_00000008,unaff_w24,
                     *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
  if ((uVar3 & 1) == 0) {
    lVar5 = *in_stack_00000008;
    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Nullable<DateTimeOffset>_get_Value__);
    FUN_04ff0cf0(uVar4,*(undefined8 *)Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04f94b94(lVar5,unaff_w24,uVar4,
                 *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
  }
  if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = FUN_04f94af4(*in_stack_00000008,unaff_w24,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                      );
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  unaff_x21 = unaff_x21 & 0xffffffff;
  uVar3 = FUN_04ff1c80(lVar5,*(undefined8 *)(unaff_x23 + 0x88),
                       *(undefined8 *)Method_Unity_Collections_NativeArray<uint>__ctor__);
  if ((uVar3 & 1) == 0) goto code_r0x05ed1b54;
  goto LAB_05ed1bc0;
code_r0x05ed1b54:
  if (*in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  unaff_x25 = FUN_04f94af4(*in_stack_00000008,unaff_w24,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                          );
  unaff_x26 = *(undefined8 *)(unaff_x23 + 0x88);
  param_1 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                              );
  param_2 = *(undefined8 *)
             Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__;
  unaff_x27 = param_1;
  goto code_r0x05ed1b9c;
}


