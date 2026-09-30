/*
FUNCTION_NAME: FUN_027a4e08
ENTRY_POINT: 027a4e08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027a4e08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_FromFailure__;
  if ((DAT_03788773 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentQueue_<Enumerate>d__28<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_6050);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_<_ctor>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Face,_bool>_GetEnumerator__);
    thunk_FUN_00d48444(Method_OVRResult<ulong,_OVRPlugin_Result>_FromFailure__);
    thunk_FUN_00d48444(PTR_DAT_033ed600);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_InitSerialize__
                      );
    thunk_FUN_00d48444(StringLiteral_12463);
    thunk_FUN_00d48444(System_Collections_Generic_List<MeshRenderer>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Hide__);
    thunk_FUN_00d48444(Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_9__);
    DAT_03788773 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar4 = Method_Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_<_ctor>b__0__;
  puVar1 = Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_9__;
  puVar3 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Hide__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Face,_bool>_GetEnumerator__);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar5;
    lVar5 = *(long *)puVar3;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_027a52a4;
    FUN_016f27fc(lVar5,uVar9,*(undefined8 *)PTR_DAT_033ed600,0);
    plVar6 = (long *)FUN_017b76bc(uVar8,lVar5,0);
    lVar5 = *(long *)puVar2;
    if (plVar6 == (long *)0x0) {
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      *(undefined8 *)(lVar7 + 0x10) = 0;
    }
    else {
      if (*plVar6 != lVar5) goto LAB_027a5280;
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long **)(lVar7 + 0x10) = plVar6;
      if (*plVar6 != lVar5) goto LAB_027a5280;
    }
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    uVar9 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar5 = thunk_FUN_00d62348(lVar5);
    if (lVar5 == 0) goto LAB_027a52a4;
    FUN_016f27fc(lVar5,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_GroupBoxUtility_OnOptionSelected<RadioButton>__,0);
    plVar6 = (long *)FUN_017b76bc(uVar8,lVar5,0);
    if (plVar6 == (long *)0x0) {
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    else {
      lVar7 = *(long *)puVar2;
      if (*plVar6 != lVar7) goto LAB_027a5280;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long **)(lVar5 + 0x18) = plVar6;
      if (*plVar6 != lVar7) goto LAB_027a5280;
    }
    puVar1 = StringLiteral_6050;
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    uVar9 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_6050);
    if (lVar5 == 0) goto LAB_027a52a4;
    FUN_012d24b0(lVar5,uVar9,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_InitSerialize__
                 ,0);
    lVar5 = FUN_017b76bc(uVar8,lVar5,0);
    if (lVar5 == 0) {
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
    else {
      uVar8 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_00d6225c(lVar5,uVar8);
      if (lVar7 == 0) goto LAB_027a52a8;
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar7;
      uVar8 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_00d6225c(lVar5,uVar8);
      if (lVar7 == 0) goto LAB_027a52a8;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    uVar9 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_027a52a4;
    FUN_016f27fc(lVar5,uVar9,*(undefined8 *)StringLiteral_12463,0);
    plVar6 = (long *)FUN_017b76bc(uVar8,lVar5,0);
    if (plVar6 == (long *)0x0) {
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(undefined8 *)(lVar5 + 0x28) = 0;
    }
    else {
      lVar7 = *(long *)puVar2;
      if (*plVar6 != lVar7) goto LAB_027a5280;
      lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      *(long **)(lVar5 + 0x28) = plVar6;
      if (*plVar6 != lVar7) goto LAB_027a5280;
    }
    puVar1 = 
    Method_System_Collections_Concurrent_ConcurrentQueue_<Enumerate>d__28<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
    ;
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Concurrent_ConcurrentQueue_<Enumerate>d__28<__Il2CppFullySharedGenericType>_System_Collections_IEnumerator_Reset__
                              );
    if (lVar5 != 0) {
      FUN_012d239c(lVar5,uVar9,*(undefined8 *)System_Collections_Generic_List<MeshRenderer>_TypeInfo
                   ,0);
      lVar5 = FUN_017b76bc(uVar8,lVar5,0);
      if (lVar5 == 0) {
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(undefined8 *)(lVar5 + 0x30) = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar1;
        lVar7 = thunk_FUN_00d6225c(lVar5,uVar8);
        if (lVar7 == 0) {
LAB_027a52a8:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(lVar5,uVar8);
        }
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = lVar7;
        uVar8 = *(undefined8 *)puVar1;
        lVar7 = thunk_FUN_00d6225c(lVar5,uVar8);
        if (lVar7 == 0) goto LAB_027a52a8;
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      uVar8 = *(undefined8 *)(lVar5 + 0x38);
      uVar9 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        FUN_016f27fc(lVar5,uVar9,
                     *(undefined8 *)Method_System_Collections_Generic_List_Enumerator<int>_Dispose__
                     ,0);
        plVar6 = (long *)FUN_017b76bc(uVar8,lVar5,0);
        if (plVar6 == (long *)0x0) {
          *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = 0;
        }
        else {
          lVar5 = *(long *)puVar2;
          if ((*plVar6 != lVar5) ||
             (*(long **)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = plVar6, *plVar6 != lVar5)) {
LAB_027a5280:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
        }
        return;
      }
    }
  }
LAB_027a52a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


