/*
FUNCTION_NAME: FUN_02578b24
ENTRY_POINT: 02578b24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_possible_biometrics_hits_1
*/


void FUN_02578b24(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *local_38;
  
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_lane_s16__;
  if ((DAT_03782e72 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshh_lane_s16__);
    thunk_FUN_00d48444(StringLiteral_898);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Composites_Vector2Composite_var);
    thunk_FUN_00d48444(Oculus_Interaction_ControllerSelector_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_OVRFaceExpressions_OnPermissionGranted__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__);
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
    thunk_FUN_00d48444(System_Xml_Serialization_XmlAttributeEventArgs_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_DerivedDictionaryFormatter<object,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_DeserializeImplementation__
                      );
    thunk_FUN_00d48444(StringLiteral_14181);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_lane_s16__);
    thunk_FUN_00d48444(PTR_DAT_033f3990);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerFast_<ConvertTexturesToReadableFormats>d__1_TypeInfo
                      );
    DAT_03782e72 = 1;
  }
  puVar5 = StringLiteral_302;
  puVar3 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  puVar2 = UnityEngine_InputSystem_Composites_Vector2Composite_var;
  FUN_010c2c5c(param_1,&local_38,*(undefined8 *)puVar1);
  param_1[7] = (long)local_38;
  if (local_38 == (long *)0x0) {
LAB_02578d80:
    puVar4 = 
    DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerFast_<ConvertTexturesToReadableFormats>d__1_TypeInfo
    ;
    puVar1 = PTR_DAT_033f3990;
    uVar10 = FUN_0268fd4c(param_1,0);
    uVar10 = FUN_015f6780(*(undefined8 *)puVar1,uVar10,0);
    uVar10 = FUN_015f5b28(uVar10,*(undefined8 *)puVar4,0);
    lVar7 = *(long *)puVar5;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
    }
    FUN_0266185c(uVar10,param_1,0);
  }
  else {
    lVar7 = *(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if ((*(byte *)(*local_38 + 300) < *(byte *)(lVar7 + 300)) ||
       (*(long *)(*(long *)(*local_38 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7))
    goto LAB_02578d80;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_02681b9c(local_38,0,0);
    if ((uVar8 & 1) == 0) goto LAB_02578d80;
    lVar12 = param_1[7];
    lVar7 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)puVar2);
    param_1[8] = lVar7;
    thunk_FUN_00d6225c(lVar12,*(undefined8 *)puVar2);
    lVar12 = param_1[7];
    lVar7 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)puVar3);
    param_1[9] = lVar7;
    thunk_FUN_00d6225c(lVar12,*(undefined8 *)puVar3);
    puVar1 = Method_Mono_Xml_SmallXmlParser_ReadReference__;
    plVar13 = (long *)param_1[8];
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02578fb8;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,0);
LAB_02578fb8:
      lVar7 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar12 == 0) ||
         (FUN_013df2bc(lVar12,param_1,
                       *(undefined8 *)System_Xml_Serialization_XmlAttributeEventArgs_TypeInfo,0),
         lVar7 == 0)) goto LAB_02579238;
      FUN_013df780(lVar7,lVar12,*(undefined8 *)Method_System_Array_GetValue__);
      puVar1 = 
      Method_System_Threading_Tasks_TaskFactory<__Il2CppFullySharedGenericType>_FromAsyncImpl__;
      plVar13 = (long *)param_1[8];
      if (plVar13 == (long *)0x0) goto LAB_02579238;
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto FUN_02579070;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,1);
FUN_02579070:
      lVar7 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar12 == 0) ||
         (FUN_013df2bc(lVar12,param_1,*(undefined8 *)StringLiteral_14181,0), lVar7 == 0))
      goto LAB_02579238;
      FUN_013df780(lVar7,lVar12,*(undefined8 *)Obi_GraphColoring_<Colorize>d__10_TypeInfo);
    }
    puVar1 = Method_OVRNativeList<OVRLocatable>_Dispose__;
    plVar13 = (long *)param_1[9];
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02579124;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,0);
LAB_02579124:
      lVar7 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar12 == 0) ||
         (FUN_013df2bc(lVar12,param_1,
                       *(undefined8 *)
                        Method_Sirenix_Serialization_DerivedDictionaryFormatter<object,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_DeserializeImplementation__
                       ,0), lVar7 == 0)) goto LAB_02579238;
      FUN_013df780(lVar7,lVar12,
                   *(undefined8 *)
                    System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
      puVar1 = Oculus_Platform_Models_SdkAccount_TypeInfo;
      plVar13 = (long *)param_1[9];
      if (plVar13 == (long *)0x0) goto LAB_02579238;
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_025791dc;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,1);
LAB_025791dc:
      lVar7 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar12 == 0) ||
         (FUN_013df2bc(lVar12,param_1,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_lane_s16__,0)
         , lVar7 == 0)) goto LAB_02579238;
      FUN_013df780(lVar7,lVar12,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                  );
    }
  }
  lVar7 = param_1[6];
  if (lVar7 == 0) {
LAB_02579238:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar7 + 0x18) == 0) {
    FUN_010c3384(param_1,lVar7,*(undefined8 *)StringLiteral_898);
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_TryGetValue__;
    if (param_1[6] == 0) goto LAB_02579238;
    if (*(int *)(param_1[6] + 0x18) == 0) {
      uVar10 = FUN_0268fd4c(param_1,0);
      uVar10 = FUN_015f6780(*(undefined8 *)puVar1,uVar10,0);
      lVar7 = *(long *)puVar5;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar7);
      }
      FUN_0266185c(uVar10,param_1,0);
    }
  }
  puVar1 = Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__;
  bVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  *(byte *)(param_1 + 0xb) = bVar6 & 1;
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar7 == 0) goto LAB_02579238;
  FUN_0267ba9c(lVar7,0);
  param_1[10] = lVar7;
  if (((char)param_1[5] != '\0') && (plVar13 = (long *)param_1[8], plVar13 != (long *)0x0)) {
    lVar7 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_02578f04;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,5);
LAB_02578f04:
    uVar8 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    if ((uVar8 & 1) != 0) goto LAB_02578f84;
  }
  if (*(char *)((long)param_1 + 0x29) == '\0') {
    return;
  }
  plVar13 = (long *)param_1[9];
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar13;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
        goto LAB_02578f74;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar3,6);
LAB_02578f74:
  uVar8 = (*(code *)*puVar9)(plVar13,puVar9[1]);
  if ((uVar8 & 1) == 0) {
    return;
  }
LAB_02578f84:
  (**(code **)(*param_1 + 0x178))(param_1,1,*(undefined8 *)(*param_1 + 0x180));
  return;
}


