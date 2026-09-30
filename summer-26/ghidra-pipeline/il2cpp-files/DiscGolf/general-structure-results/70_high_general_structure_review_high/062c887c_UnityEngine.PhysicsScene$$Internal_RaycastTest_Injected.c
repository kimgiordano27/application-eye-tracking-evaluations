/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_RaycastTest_Injected
ENTRY_POINT: 062c887c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_PhysicsScene__Internal_RaycastTest_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x6b8));
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
  FUN_02d965b8(Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__);
  FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__);
  FUN_02d965b8(Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
  FUN_02d965b8(Method_Unity_Networking_QoS_QosRequest_set_Title__);
  FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<Sprite>__);
  FUN_02d965b8(Method_UnityEngine_UI_SetPropertyUtility_SetClass<Text>__);
  *(undefined1 *)(unaff_x20 + 0x7ec) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = (long *)0x0;
  FUN_062c3fdc();
  if (*(char *)(unaff_x19 + 0xc0) != '\0') {
    plVar12 = *(long **)(unaff_x19 + 0x90);
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_CsvHelper_LinkedListExtensions_Drop<Type>__);
    FUN_04be213c();
    puVar2 = Method_LipSyncMicInput_StartMicrophone_Internal__;
    puVar1 = PTR_DAT_06a09680;
    if (plVar12 == (long *)0x0) goto LAB_062c8f7c;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06a09680) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto UnityEngine_PhysicsScene__Internal_RaycastNonAlloc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_06a09680,1);
UnityEngine_PhysicsScene__Internal_RaycastNonAlloc:
    (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
    plVar12 = *(long **)(unaff_x19 + 0x90);
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_04be213c();
    if (plVar12 == (long *)0x0) goto LAB_062c8f7c;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_062c8a68;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,3);
LAB_062c8a68:
    (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
    puVar1 = Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__;
    if (*(char *)(unaff_x19 + 0xc3) != '\0') {
      plVar12 = *(long **)(unaff_x19 + 0x98);
      if (plVar12 == (long *)0x0) goto LAB_062c8f7c;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__
             ) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_062c8adc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar12,*(long *)
                                     Method_System_Linq_Expressions_Interpreter_LightLambda_CreateCustomDelegate__
                            ,0);
LAB_062c8adc:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPath_get_Item__);
      FUN_0494d298();
      if (lVar8 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar8,uVar6,*(undefined8 *)Method_Unity_Networking_QoS_QosRequest_Send__);
      plVar12 = *(long **)(unaff_x19 + 0x98);
      if (plVar12 == (long *)0x0) goto LAB_062c8f7c;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_062c8b8c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,1);
LAB_062c8b8c:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_Unity_Properties_PropertyPathPart_CheckKind__
                                );
      FUN_0494d298();
      if (lVar8 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar8,uVar6,*(undefined8 *)Method_Unity_Networking_QoS_QosRequest_set_Title__);
    }
    puVar1 = Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__;
    if (*(char *)(unaff_x19 + 0xc4) != '\0') {
      plVar12 = *(long **)(unaff_x19 + 0xa0);
      if (plVar12 == (long *)0x0) goto LAB_062c8f7c;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_062c8c48;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar12,*(long *)
                                     Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__
                            ,0);
LAB_062c8c48:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_MonoCustomAttrs_GetCustomAttributesData__);
      FUN_0494d298();
      if (lVar8 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar8,uVar6,
                   *(undefined8 *)
                    Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                  );
      plVar12 = *(long **)(unaff_x19 + 0xa0);
      if (plVar12 == (long *)0x0) goto LAB_062c8f7c;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_062c8cf8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar1,1);
LAB_062c8cf8:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
      FUN_0494d298();
      if (lVar8 == 0) goto LAB_062c8f7c;
      FUN_0495040c(lVar8,uVar6,
                   *(undefined8 *)
                    Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                  );
    }
  }
  puVar5 = Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_LineType>__;
  puVar4 = Method_TMPro_SetPropertyUtility_SetStruct<bool>__;
  puVar3 = Method_TMPro_SetPropertyUtility_SetClass<TMP_InputField_TouchScreenKeyboardEvent>__;
  puVar2 = Method_TMPro_SetPropertyUtility_SetClass<Scrollbar>__;
  puVar1 = Method_System_Threading_LazyInitializer_EnsureInitialized<ManualResetEvent>__;
  if (*(long *)(unaff_x19 + 0xe0) != 0) {
    FUN_03c23590(&stack0x00000008,*(long *)(unaff_x19 + 0xe0),
                 *(undefined8 *)Method_UnityEngine_UI_SetPropertyUtility_SetClass<RectTransform>__);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                              (&stack0x00000020,*(undefined8 *)puVar5), plVar12 = in_stack_00000030,
          (uVar10 & 1) != 0) {
      if (in_stack_00000030 != (long *)0x0) {
        lVar9 = *in_stack_00000030;
        lVar8 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_062c8e20;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000030,lVar8,0);
LAB_062c8e20:
        lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_TMPro_SetPropertyUtility_SetClass<TMP_Text>__);
        FUN_0494d298();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0495040c(lVar8,uVar6,*(undefined8 *)puVar3);
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_062c8eb8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar12,lVar8,1);
LAB_062c8eb8:
        lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_0494d298();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0495040c(lVar8,uVar6,*(undefined8 *)puVar4);
      }
    }
    FUN_05156050(&stack0x00000020,
                 *(undefined8 *)
                  Method_TMPro_SetPropertyUtility_SetStruct<TMP_InputField_InputType>__);
    if (*(long *)(unaff_x19 + 0xe0) != 0) {
      FUN_03c230bc(*(long *)(unaff_x19 + 0xe0),
                   *(undefined8 *)Method_UnityEngine_UI_SetPropertyUtility_SetClass<Graphic>__);
      *(undefined1 *)(unaff_x19 + 0xc0) = 0;
      if (*(long *)(unaff_x19 + 0xf0) != 0) {
        FUN_063513c4();
        *(undefined8 *)(unaff_x19 + 0xf0) = 0;
        LeanTween__value((long *)(unaff_x19 + 0xf0),0);
      }
      return;
    }
  }
LAB_062c8f7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


