/*
FUNCTION_NAME: FUN_00e939e0
ENTRY_POINT: 00e939e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_00e939e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03775015 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_9110);
    thunk_FUN_00d48444(StringLiteral_9781);
    thunk_FUN_00d48444(Oculus_Platform_Models_NetSyncSession_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<ICanvasElement>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Texture2D_Internal_Create__);
    thunk_FUN_00d48444(StringLiteral_1764);
    thunk_FUN_00d48444(PTR_DAT_033ed360);
    thunk_FUN_00d48444(PTR_DAT_033ecbb8);
    thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<Toggle>__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_132>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConvert_ToString__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Oculus_Interaction_HandGrab_Visuals_JointCollection_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3dc8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__);
    thunk_FUN_00d48444(System_Data_SqlTypes_SqlInt16_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Count__
                      );
    DAT_03775015 = 1;
  }
  puVar7 = StringLiteral_9781;
  puVar6 = StringLiteral_9110;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  puVar4 = Method_UnityEngine_Object_Instantiate<Toggle>__;
  puVar3 = Method_Newtonsoft_Json_JsonConvert_ToString__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  puVar1 = Oculus_Platform_Models_NetSyncSession_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x88),&local_98,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                );
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar8 = FUN_012b894c(&local_80,*(undefined8 *)puVar7), (uVar8 & 1) != 0) {
      lVar9 = FUN_00ac6fa8(&local_80,*(undefined8 *)puVar1);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = *(undefined8 *)(lVar9 + 0x18);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026c8404(lVar10,param_1,*(undefined8 *)puVar4,0);
      plVar11 = (long *)FUN_017b76bc(uVar12,lVar10,0);
      if (plVar11 == (long *)0x0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
      }
      else {
        lVar10 = *(long *)puVar5;
        if (*plVar11 != lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        *(long **)(lVar9 + 0x18) = plVar11;
        if (*plVar11 != lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
      }
    }
    FUN_012b8948(&local_80,*(undefined8 *)puVar6);
    if (*(long *)(param_1 + 0x108) != 0) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x108) + 0x58);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if ((lVar9 != 0) &&
         (FUN_013df2bc(lVar9,param_1,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_132>_SliceWithStride<Vector3>__
                       ,0), lVar10 != 0)) {
        FUN_013df780(lVar10,lVar9,
                     *(undefined8 *)Oculus_Interaction_HandGrab_Visuals_JointCollection_TypeInfo);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar9 != 0) {
          FUN_016f27fc(lVar9,param_1,
                       *(undefined8 *)System_Collections_Generic_List<ICanvasElement>_TypeInfo,0);
          FUN_00fe0700(*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__,
                       lVar9,0);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar9 != 0) {
            FUN_016f27fc(lVar9,param_1,*(undefined8 *)Method_UnityEngine_Texture2D_Internal_Create__
                         ,0);
            FUN_00fe0700(*(undefined8 *)Method_UnityEngine_InputSystem_InputControl_GetDeviceIndex__
                         ,lVar9,0);
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar9 != 0) {
              FUN_016f27fc(lVar9,param_1,*(undefined8 *)PTR_DAT_033ed360,0);
              FUN_00fe0700(*(undefined8 *)System_Data_SqlTypes_SqlInt16_TypeInfo,lVar9,0);
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar9 != 0) {
                FUN_016f27fc(lVar9,param_1,*(undefined8 *)StringLiteral_1764,0);
                FUN_00fe0700(*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_get_Count__
                             ,lVar9,0);
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar9 != 0) {
                  FUN_016f27fc(lVar9,param_1,*(undefined8 *)PTR_DAT_033ecbb8,0);
                  FUN_00fe0700(*(undefined8 *)PTR_DAT_033f3dc8,lVar9,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


