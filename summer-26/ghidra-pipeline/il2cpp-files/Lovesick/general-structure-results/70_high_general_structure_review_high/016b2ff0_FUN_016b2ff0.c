/*
FUNCTION_NAME: FUN_016b2ff0
ENTRY_POINT: 016b2ff0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_016b2ff0(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_03778640 & 1) == 0) {
    thunk_FUN_00d48444(System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_Nullable<Bounds>>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_1__);
    thunk_FUN_00d48444(StringLiteral_4078);
    thunk_FUN_00d48444(PTR_DAT_033eecd8);
    thunk_FUN_00d48444(StringLiteral_7334);
    thunk_FUN_00d48444(Method_System_Net_CookieContainer_CookieCutter__);
    DAT_03778640 = 1;
  }
  FUN_017b46ec(param_1,0);
  puVar3 = StringLiteral_7334;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(
                               DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                               );
    FUN_016ec5b8(uVar11,uVar12,0);
    uVar12 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_Item__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,uVar12);
  }
  lVar8 = FUN_01684938(param_2,*(undefined8 *)PTR_DAT_033eecd8,0);
  lVar9 = FUN_01684938(param_2,*(undefined8 *)puVar3,0);
  if ((lVar8 == 0) || (lVar9 == 0)) {
    uVar11 = thunk_FUN_00d48444(StringLiteral_11004);
    uVar11 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar11,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar12,uVar11,0);
    uVar11 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_set_Item__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar12,uVar11);
  }
  if (*(int *)(*(long *)System_Runtime_Remoting_Channels_CrossAppDomainSink_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar10 = (long *)FUN_0167d104(lVar8,0);
  puVar6 = StringLiteral_4078;
  puVar5 = Method_System_Net_CookieContainer_CookieCutter__;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x298))
                              (plVar10,lVar9,1,0,*(undefined8 *)(*plVar10 + 0x2a0));
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__ + 300);
    if (bVar1 <= *(byte *)(*plVar10 + 300)) {
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_1__) {
        plVar10 = (long *)0x0;
      }
      goto LAB_016b319c;
    }
  }
  plVar10 = (long *)0x0;
LAB_016b319c:
  *(long **)(param_1 + 0x18) = plVar10;
  puVar2 = Method_System_Collections_Generic_Dictionary<GameObject,_Nullable<Bounds>>_TryGetValue__;
  uVar11 = FUN_01684938(param_2,*(undefined8 *)puVar6,0);
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  uVar11 = FUN_01684938(param_2,*(undefined8 *)puVar5,0);
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  uVar11 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_01780344(uVar11,0);
  plVar10 = (long *)FUN_01682618(param_2,*(undefined8 *)puVar2,uVar11,0);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar8 = *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if ((*plVar10 != lVar8) || (*(long **)(param_1 + 0x28) = plVar10, *plVar10 != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
  }
  uVar7 = FUN_016844dc(param_2,*(undefined8 *)
                                Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_1__,0);
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(long *)(param_1 + 0x38) = param_2;
  return;
}


