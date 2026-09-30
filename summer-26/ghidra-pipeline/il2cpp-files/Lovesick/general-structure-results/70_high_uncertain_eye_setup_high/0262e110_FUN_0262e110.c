/*
FUNCTION_NAME: FUN_0262e110
ENTRY_POINT: 0262e110
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0262e110(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_03783567 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Schema_Datatype_union_TryParseValue__);
    thunk_FUN_00d48444(StringLiteral_8619);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleSheet>_Contains__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Remove__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRLocatable>_Dispose__);
    thunk_FUN_00d48444(Method_Mono_Xml_SmallXmlParser_ReadReference__);
    thunk_FUN_00d48444(Oculus_Platform_Models_SdkAccount_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__
                      );
    thunk_FUN_00d48444(Obi_GraphColoring_<Colorize>d__10_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_GetValue__);
    thunk_FUN_00d48444(System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                      );
    thunk_FUN_00d48444(STMTextInfo_TypeInfo);
    DAT_03783567 = 1;
  }
  FUN_0262a2ac(param_1);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  plVar12 = (long *)param_1[0x10];
  if (plVar12 != (long *)0x0) {
    lVar6 = *(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if ((*(byte *)(lVar6 + 300) <= *(byte *)(*plVar12 + 300)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 300) * 8 + -8) == lVar6)) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      bVar4 = FUN_02681b9c(plVar12,0,0);
      *(byte *)(param_1 + 0x15) = bVar4 & 1;
      if ((bVar4 & 1) == 0) goto LAB_0262e264;
      plVar12 = (long *)param_1[0x10];
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8619);
      if ((lVar6 == 0) ||
         (FUN_011c181c(lVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0),
         puVar3 = Method_System_Xml_Schema_Datatype_union_TryParseValue__,
         puVar1 = 
         Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__,
         plVar12 == (long *)0x0)) {
LAB_0262e8f8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
             ) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0262e34c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar12,*(long *)
                                     Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_Add__
                            ,0);
LAB_0262e34c:
      (*(code *)*puVar7)(plVar12,lVar6,puVar7[1]);
      plVar12 = (long *)param_1[0x10];
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if ((lVar6 == 0) ||
         (FUN_011c181c(lVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0), plVar12 == (long *)0x0))
      goto LAB_0262e8f8;
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_0262e3d8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,2);
LAB_0262e3d8:
      (*(code *)*puVar7)(plVar12,lVar6,puVar7[1]);
      puVar3 = Method_Mono_Xml_SmallXmlParser_ReadReference__;
      puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__;
      if (*(char *)((long)param_1 + 0xaa) != '\0') {
        plVar12 = (long *)param_1[0x11];
        if (plVar12 == (long *)0x0) goto LAB_0262e8f8;
        lVar6 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0262e454;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar12,*(long *)
                                       Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IMoveHandler>__
                              ,0);
LAB_0262e454:
        lVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar9 == 0) ||
           (FUN_013df2bc(lVar9,param_1,*(undefined8 *)(*param_1 + 0x280),0), lVar6 == 0))
        goto LAB_0262e8f8;
        FUN_013df780(lVar6,lVar9,*(undefined8 *)Method_System_Array_GetValue__);
        puVar3 = 
        Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__;
        plVar12 = (long *)param_1[0x11];
        if (plVar12 == (long *)0x0) goto LAB_0262e8f8;
        lVar6 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0262e508;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,1);
LAB_0262e508:
        lVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar9 == 0) ||
           (FUN_013df2bc(lVar9,param_1,*(undefined8 *)(*param_1 + 0x290),0), lVar6 == 0))
        goto LAB_0262e8f8;
        FUN_013df780(lVar6,lVar9,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
      }
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
      puVar1 = Method_OVRNativeList<OVRLocatable>_Dispose__;
      if (*(char *)((long)param_1 + 0xab) != '\0') {
        plVar12 = (long *)param_1[0x12];
        if (plVar12 == (long *)0x0) goto LAB_0262e8f8;
        lVar6 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__
               ) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0262e5c8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__,0);
LAB_0262e5c8:
        lVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar9 == 0) ||
           (FUN_013df2bc(lVar9,param_1,*(undefined8 *)(*param_1 + 0x2a0),0), lVar6 == 0))
        goto LAB_0262e8f8;
        FUN_013df780(lVar6,lVar9,
                     *(undefined8 *)
                      System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
        puVar1 = Oculus_Platform_Models_SdkAccount_TypeInfo;
        plVar12 = (long *)param_1[0x12];
        if (plVar12 == (long *)0x0) goto LAB_0262e8f8;
        lVar6 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0262e67c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_0262e67c:
        lVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar9 == 0) ||
           (FUN_013df2bc(lVar9,param_1,*(undefined8 *)(*param_1 + 0x2b0),0), lVar6 == 0))
        goto LAB_0262e8f8;
        FUN_013df780(lVar6,lVar9,
                     *(undefined8 *)
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                    );
      }
      puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
      if (*(char *)((long)param_1 + 0xac) != '\0') {
        plVar12 = (long *)param_1[0x13];
        if (plVar12 == (long *)0x0) goto LAB_0262e8f8;
        lVar6 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_Sirenix_Serialization_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Remove__
               ) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0262e73c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar12,*(long *)
                                       Method_Sirenix_Serialization_Utilities_ImmutableList<__Il2CppFullySharedGenericType>_System_Collections_Generic_ICollection<T>_Remove__
                              ,0);
LAB_0262e73c:
        plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar6 == 0) ||
           (FUN_011c181c(lVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0), plVar12 == (long *)0x0)
           ) goto LAB_0262e8f8;
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
               ) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0262e7cc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_00d59724(plVar12,*(long *)
                                       Method_System_Runtime_InteropServices_MemoryMarshal_GetNonNullPinnableReference<byte>__
                              ,0);
LAB_0262e7cc:
        uVar8 = (*(code *)*puVar7)(plVar12,lVar6,puVar7[1]);
        if (param_1[8] == 0) goto LAB_0262e8f8;
        FUN_025718f8(param_1[8],uVar8,0);
      }
      plVar12 = (long *)param_1[0x10];
      *(undefined1 *)(param_1 + 0x18) = 0;
      if (plVar12 == (long *)0x0) {
LAB_0262e860:
        bVar4 = 1;
      }
      else {
        lVar6 = *plVar12;
        bVar4 = *(byte *)(*(long *)STMTextInfo_TypeInfo + 300);
        if ((*(byte *)(lVar6 + 300) < bVar4) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)STMTextInfo_TypeInfo)) {
          bVar4 = *(byte *)(*(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__ +
                           300);
          if ((*(byte *)(lVar6 + 300) < bVar4) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_List<StyleSheet>_Contains__))
          goto LAB_0262e860;
          bVar4 = FUN_02689fe0(plVar12,0);
        }
        else {
          lVar6 = plVar12[5];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_02681b9c(lVar6,0,0);
          if ((uVar10 & 1) == 0) {
            bVar4 = 0;
          }
          else {
            if (plVar12[5] == 0) goto LAB_0262e8f8;
            bVar4 = FUN_025b8628(plVar12[5],param_1[0x10],0);
          }
        }
      }
      *(byte *)((long)param_1 + 0xc1) = bVar4 & 1;
      if (param_1[0x1b] != 0) {
        FUN_0268f0f0(param_1,param_1[0x1b],0);
      }
      uVar8 = FUN_0262e8fc(param_1);
      lVar6 = FUN_0268ee74(param_1,uVar8,0);
      param_1[0x1b] = lVar6;
      goto LAB_0262e264;
    }
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
LAB_0262e264:
  uVar5 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  FUN_0262a3b4(param_1,uVar5);
  return;
}


