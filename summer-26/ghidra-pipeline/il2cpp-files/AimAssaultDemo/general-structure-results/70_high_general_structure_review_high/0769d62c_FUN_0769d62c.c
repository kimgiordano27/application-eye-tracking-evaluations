/*
FUNCTION_NAME: FUN_0769d62c
ENTRY_POINT: 0769d62c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_0769d62c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_07d86398;
  if ((DAT_0827107b & 1) == 0) {
    FUN_0373b518(
                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
                );
    FUN_0373b518(
                UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_get_Task__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_Start<JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_Create__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetException__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetResult__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_get_Task__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsInt32Async>d__53>__
                );
    FUN_0373b518(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
                );
    DAT_0827107b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar4 = FUN_075ac5e0(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_1 == 0) goto LAB_0769dee8;
  uVar5 = thunk_FUN_075b0210(param_1,0);
  uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                    (uVar5,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_Create__
                     ,0);
  if ((uVar4 & 1) == 0) {
    uVar5 = thunk_FUN_075b0210(param_1,0);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar5,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_get_Task__
                       ,0);
    if ((uVar4 & 1) != 0) goto LAB_0769d7d4;
    uVar5 = thunk_FUN_075b0210(param_1,0);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar5,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsInt32Async>d__53>__
                       ,0);
    if ((uVar4 & 1) != 0) goto LAB_0769d7d4;
    uVar5 = thunk_FUN_075b0210(param_1,0);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar5,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_Start<JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                       ,0);
    if ((uVar4 & 1) != 0) goto LAB_0769d7d4;
    uVar5 = thunk_FUN_075b0210(param_1,0);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar5,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetException__
                       ,0);
    if ((uVar4 & 1) != 0) {
LAB_0769db6c:
      puVar3 = 
      UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
      ;
      lVar6 = *(long *)
               UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
      ;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar3;
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
      if (*(int *)(*(long *)
                    UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)
                            UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                          );
      }
      lVar6 = FUN_0766dc5c(uVar5,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
                           ,0x5a,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)puVar1);
      }
      uVar4 = FUN_075aa744(lVar6,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0xac) = 1;
          goto LAB_0769dac0;
        }
        goto LAB_0769dee8;
      }
      goto LAB_0769dac0;
    }
    uVar5 = thunk_FUN_075b0210(param_1,0);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar5,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_get_Task__
                       ,0);
    if ((uVar4 & 1) != 0) goto LAB_0769db6c;
    uVar5 = thunk_FUN_075b0210(param_1,0);
    uVar4 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                      (uVar5,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>__
                       ,0);
    puVar3 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
    if (*(int *)(*(long *)
                  UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)
                          UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                        );
    }
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
    ;
    if ((uVar4 & 1) == 0) {
LAB_0769deb0:
      lVar6 = FUN_0766ec1c(param_1,0x5a,9,0x1045,0x400,0x400,param_2,1,1,0);
      goto LAB_0769dac0;
    }
    lVar6 = FUN_0766dc5c(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
                         ,*(undefined8 *)
                           UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      goto LAB_0769deb0;
    }
    if (lVar6 == 0) goto LAB_0769dee8;
    *(undefined1 *)(lVar6 + 0xac) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = FUN_0766dc5c(*(undefined8 *)puVar2,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_0769dee8;
      *(undefined1 *)(lVar7 + 0xac) = 1;
      lVar8 = FUN_0766d9e4(lVar6,0);
      if (lVar8 == 0) goto LAB_0769dee8;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_0769deec;
      *(long *)(lVar8 + 0x90) = lVar7;
      thunk_FUN_037aeb94((long *)(lVar8 + 0x90),lVar7);
      if (*(int *)(*(long *)
                    UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0769def0(lVar7,param_2);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = FUN_0766dc5c(*(undefined8 *)puVar2,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_0769dee8;
      *(undefined1 *)(lVar7 + 0xac) = 1;
      lVar8 = FUN_0766d9e4(lVar6,0);
      if (lVar8 == 0) goto LAB_0769dee8;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0769deec;
      *(long *)(lVar8 + 0x68) = lVar7;
      thunk_FUN_037aeb94((long *)(lVar8 + 0x68),lVar7);
      if (*(int *)(*(long *)
                    UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0769def0(lVar7,param_2);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = FUN_0766dc5c(*(undefined8 *)puVar2,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetResult__
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar7,0,0);
    if ((uVar4 & 1) == 0) goto LAB_0769dac0;
    if (lVar7 == 0) goto LAB_0769dee8;
    *(undefined1 *)(lVar7 + 0xac) = 1;
    lVar8 = FUN_0766d9e4(lVar6,0);
    if (lVar8 == 0) goto LAB_0769dee8;
    if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_0769deec;
    *(long *)(lVar8 + 0x98) = lVar7;
    thunk_FUN_037aeb94((long *)(lVar8 + 0x98),lVar7);
    lVar8 = *(long *)
             UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
    ;
  }
  else {
LAB_0769d7d4:
    puVar3 = 
    UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
    ;
    lVar6 = *(long *)
             UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
    ;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar3;
    }
    puVar2 = UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo;
    uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    if (*(int *)(*(long *)
                  UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)
                          UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                        );
    }
    lVar6 = FUN_0766dc5c(uVar5,*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar6,0,0);
    if ((uVar4 & 1) == 0) goto LAB_0769dac0;
    if (lVar6 == 0) goto LAB_0769dee8;
    *(undefined1 *)(lVar6 + 0xac) = 1;
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar7 = *(long *)puVar3;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar2);
    }
    lVar7 = FUN_0766dc5c(uVar5,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetStateMachine__
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_0769dee8;
      *(undefined1 *)(lVar7 + 0xac) = 1;
      lVar8 = FUN_0766d9e4(lVar6,0);
      if (lVar8 == 0) goto LAB_0769dee8;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_0769deec;
      *(long *)(lVar8 + 0x90) = lVar7;
      thunk_FUN_037aeb94((long *)(lVar8 + 0x90),lVar7);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0769def0(lVar7,param_2);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar7 = *(long *)puVar3;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar2);
    }
    lVar7 = FUN_0766dc5c(uVar5,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_SetResult__
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_0769dee8;
      *(undefined1 *)(lVar7 + 0xac) = 1;
      lVar8 = FUN_0766d9e4(lVar6,0);
      if (lVar8 == 0) goto LAB_0769dee8;
      if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_0769deec;
      *(long *)(lVar8 + 0x98) = lVar7;
      thunk_FUN_037aeb94((long *)(lVar8 + 0x98),lVar7);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0769def0(lVar7,param_2);
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar7 = *(long *)puVar3;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar2);
    }
    lVar7 = FUN_0766dc5c(uVar5,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                         ,0x5a,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    uVar4 = FUN_075aa744(lVar7,0,0);
    if ((uVar4 & 1) == 0) goto LAB_0769dac0;
    if (lVar7 == 0) {
LAB_0769dee8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined1 *)(lVar7 + 0xac) = 1;
    lVar8 = FUN_0766d9e4(lVar6,0);
    if (lVar8 == 0) goto LAB_0769dee8;
    if (*(uint *)(lVar8 + 0x18) < 5) {
LAB_0769deec:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(long *)(lVar8 + 0x68) = lVar7;
    thunk_FUN_037aeb94((long *)(lVar8 + 0x68),lVar7);
    lVar8 = *(long *)puVar3;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_0769def0(lVar7,param_2);
LAB_0769dac0:
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar4 = FUN_075aa744(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0769def0(lVar6,param_2);
  }
  return lVar6;
}


