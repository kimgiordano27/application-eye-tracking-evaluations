/*
FUNCTION_NAME: FUN_062c87d4
ENTRY_POINT: 062c87d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_062c87d4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_06dc77ec & 1) == 0) {
    FUN_02d965b8(Method_LipSyncMicInput_StartMicrophone_Internal__);
    FUN_02d965b8(Method_CsvHelper_LinkedListExtensions_Drop<Type>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_InputType>__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_LineType>__);
    FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<AnimationTriggers>__);
    FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<Graphic>__);
    FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<RectTransform>__);
    FUN_02d965b8(Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__);
    FUN_02d965b8(Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__);
    FUN_02d965b8(PTR_DAT_06a09680);
    FUN_02d965b8(Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__);
    FUN_02d965b8(Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPath_get_Item__);
    FUN_02d965b8(Method_System_MonoCustomAttrs_IsDefined__);
    FUN_02d965b8(Method_Unity_Properties_PropertyPathPart_CheckKind__);
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
    FUN_02d965b8(
                Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                );
    FUN_02d965b8(Method_Unity_Networking_QoS_QosRequest_Send__);
    FUN_02d965b8(Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                );
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__
                );
    FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    FUN_02d965b8(Method_Unity_Networking_QoS_QosRequest_set_Title__);
    FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<Sprite>__);
    FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<Text>__);
    DAT_06dc77ec = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  FUN_062c3fdc(param_1,0);
  if ((char)param_1[0x18] != '\0') {
    plVar14 = (long *)param_1[0x12];
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_CsvHelper_LinkedListExtensions_Drop<Type>__);
    FUN_04be213c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x260),0);
    puVar2 = Method_LipSyncMicInput_StartMicrophone_Internal__;
    puVar1 = PTR_DAT_06a09680;
    if (plVar14 == (long *)0x0) goto LAB_062c8f7c;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06a09680) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto UnityEngine_PhysicsScene__Internal_RaycastNonAlloc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_06a09680,1);
UnityEngine_PhysicsScene__Internal_RaycastNonAlloc:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    plVar14 = (long *)param_1[0x12];
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_04be213c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x270),0);
    if (plVar14 == (long *)0x0) goto LAB_062c8f7c;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_062c8a68;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)puVar1,3);
LAB_062c8a68:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    puVar1 = Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__;
    if (*(char *)((long)param_1 + 0xc3) != '\0') {
      plVar14 = (long *)param_1[0x13];
      if (plVar14 == (long *)0x0) goto LAB_062c8f7c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__
             ) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_062c8adc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02dd004c(plVar14,*(long *)
                                     Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__
                            ,0);
LAB_062c8adc:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPath_get_Item__);
      FUN_0494d298(uVar8,param_1,*(undefined8 *)(*param_1 + 0x280),0);
      if (lVar10 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar10,uVar8,*(undefined8 *)Method_Unity_Networking_QoS_QosRequest_Send__);
      plVar14 = (long *)param_1[0x13];
      if (plVar14 == (long *)0x0) goto LAB_062c8f7c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_062c8b8c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)puVar1,1);
LAB_062c8b8c:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPathPart_CheckKind__
                                );
      FUN_0494d298(uVar8,param_1,*(undefined8 *)(*param_1 + 0x290),0);
      if (lVar10 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar10,uVar8,*(undefined8 *)Method_Unity_Networking_QoS_QosRequest_set_Title__);
    }
    puVar1 = Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__;
    if (*(char *)((long)param_1 + 0xc4) != '\0') {
      plVar14 = (long *)param_1[0x14];
      if (plVar14 == (long *)0x0) goto LAB_062c8f7c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_062c8c48;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02dd004c(plVar14,*(long *)
                                     Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__
                            ,0);
LAB_062c8c48:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__);
      FUN_0494d298(uVar8,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
      if (lVar10 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar10,uVar8,
                   *(undefined8 *)
                    Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                  );
      plVar14 = (long *)param_1[0x14];
      if (plVar14 == (long *)0x0) goto LAB_062c8f7c;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_062c8cf8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)puVar1,1);
LAB_062c8cf8:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
      FUN_0494d298(uVar8,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
      if (lVar10 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar10,uVar8,
                   *(undefined8 *)
                    Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                  );
    }
  }
  puVar7 = Method_UnityEngine_UI_SetPropertyUtility_SetClass<Text>__;
  puVar6 = Method_UnityEngine_UI_SetPropertyUtility_SetClass<Sprite>__;
  puVar5 = Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_LineType>__;
  puVar4 = Method_TMPro_SetPropertyUtility_SetStruct<bool>__;
  puVar3 = Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__;
  puVar2 = Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__;
  puVar1 = Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__;
  if (param_1[0x1c] != 0) {
    FUN_03c23590(&local_98,param_1[0x1c],
                 *(undefined8 *)Method_UnityEngine_UI_SetPropertyUtility_SetClass<RectTransform>__);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                              (&local_80,*(undefined8 *)puVar5), plVar14 = local_70,
          (uVar12 & 1) != 0) {
      if (local_70 != (long *)0x0) {
        lVar11 = *local_70;
        lVar10 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_062c8e20;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(local_70,lVar10,0);
LAB_062c8e20:
        lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
        FUN_0494d298(uVar8,param_1,*(undefined8 *)puVar6,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0495040c(lVar10,uVar8,*(undefined8 *)puVar3);
        lVar11 = *plVar14;
        lVar10 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_062c8eb8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(plVar14,lVar10,1);
LAB_062c8eb8:
        lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_0494d298(uVar8,param_1,*(undefined8 *)puVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0495040c(lVar10,uVar8,*(undefined8 *)puVar4);
      }
    }
    FUN_05156050(&local_80,
                 *(undefined8 *)
                  Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_InputType>__);
    if (param_1[0x1c] != 0) {
      FUN_03c230bc(param_1[0x1c],
                   *(undefined8 *)Method_UnityEngine_UI_SetPropertyUtility_SetClass<Graphic>__);
      lVar10 = param_1[0x1e];
      *(undefined1 *)(param_1 + 0x18) = 0;
      if (lVar10 != 0) {
        FUN_063513c4(param_1,lVar10,0);
        param_1[0x1e] = 0;
        LeanTween__value(param_1 + 0x1e,0);
      }
      return;
    }
  }
LAB_062c8f7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


