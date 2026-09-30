/*
FUNCTION_NAME: FUN_014739d8
ENTRY_POINT: 014739d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014739d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_68;
  
  puVar3 = System_Collections_Generic_ICollection<Group>_TypeInfo;
  if ((DAT_03776b13 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<Group>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Sensor_var);
    thunk_FUN_00d48444(PTR_DAT_033eef88);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__);
    thunk_FUN_00d48444(Method_System_Xml_XmlLoader_LoadNodeDirect__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_add_onDeviceCommand__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__);
    thunk_FUN_00d48444(StringLiteral_3762);
    thunk_FUN_00d48444(Method_System_Array_Resize<Transform>__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_PlayerInput_OnUserChange__);
    thunk_FUN_00d48444(
                      Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Abstract__);
    thunk_FUN_00d48444(StringLiteral_7953);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_XR_TrackedPoseDriver_OnPositionPerformed__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsra_n_s32__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vector2>_GetHashCode__);
    thunk_FUN_00d48444(StringLiteral_10350);
    DAT_03776b13 = 1;
  }
  lVar12 = *(long *)puVar3;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_00d59478(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = Method_System_Xml_XmlLoader_LoadNodeDirect__;
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar2 = UnityEngine_InputSystem_Sensor_var;
  puVar1 = PTR_DAT_033eef88;
  uVar7 = FUN_026df230(*(undefined8 *)puVar6,**(undefined8 **)(lVar10 + 0xb8),0);
  puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if ((uVar7 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b4e0(uVar13,0,0);
    puVar5 = StringLiteral_7953;
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_014747f0;
      plVar8 = *(long **)(param_1 + 0x40);
      FUN_010e5b20(*(long *)(param_1 + 0x48),&local_68,*(undefined8 *)puVar1);
      if ((local_68 == 0) || (uVar13 = FUN_0268fd4c(local_68,0), plVar8 == (long *)0x0))
      goto LAB_014747f0;
      uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar13,*(undefined8 *)(*plVar8 + 0x270));
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
        if (((*(long *)(param_1 + 0x48) == 0) ||
            (FUN_010e5b20(*(long *)(param_1 + 0x48),&local_68,*(undefined8 *)puVar1), local_68 == 0)
            ) || (lVar10 = FUN_0268fd4c(local_68,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
        if ((lVar10 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto LAB_014747f8;
        if ((int)plVar8[3] == 0) goto LAB_014747f4;
        plVar8[4] = lVar10;
        plVar9 = *(long **)(param_1 + 0x40);
        if (plVar9 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar9 + 0x228))(plVar9,0,plVar8,1,*(undefined8 *)(*plVar9 + 0x230));
        plVar8 = *(long **)(param_1 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
        uVar13 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar5 = Method_UnityEngine_InputSystem_InputSystem_add_onDeviceCommand__;
        FUN_0268c114(uVar13,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar5,0);
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_014747f0;
      uVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x38),0);
      uVar13 = FUN_01474804(param_1,uVar13,*(undefined8 *)puVar5);
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      lVar10 = FUN_0112fd4c(uVar14,*(undefined8 *)
                                    Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(param_1 + 0x48) = lVar10;
      if ((lVar10 == 0) ||
         (lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar10,0), lVar10 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar10,uVar13,0);
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x48),0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      puVar11 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
      FUN_0269f750(*puVar11,puVar11[1],puVar11[2],lVar10,0);
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x48),0);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      puVar11 = *(undefined4 **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      FUN_0269f994(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x48),0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      lVar12 = *(long *)(*(long *)puVar6 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                   *(undefined4 *)(lVar12 + 0x14),lVar10,0);
      if (((*(long *)(param_1 + 0x48) == 0) ||
          (FUN_010e5b20(*(long *)(param_1 + 0x48),&local_68,*(undefined8 *)puVar1),
          lVar10 = local_68, local_68 == 0)) || (lVar12 = FUN_0268fd4c(local_68,0), lVar12 == 0))
      goto LAB_014747f0;
      FUN_0268b75c(lVar12,*(undefined8 *)
                           Method_UnityEngine_InputSystem_XR_TrackedPoseDriver_OnPositionPerformed__
                   ,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar10 = FUN_0268fd4c(lVar10,0);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto LAB_014747f8;
      if ((int)plVar8[3] == 0) goto LAB_014747f4;
      plVar8[4] = lVar10;
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,plVar8,0,1,*(undefined8 *)(*plVar9 + 0x230));
      puVar5 = StringLiteral_3762;
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar5,0);
    }
  }
  lVar12 = *(long *)puVar3;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_00d59478(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsra_n_s32__;
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  uVar7 = FUN_026df230(*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0);
  if ((uVar7 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b4e0(uVar13,0,0);
    puVar5 = Method_System_Xml_Schema_XsdBuilder_BuildComplexType_Abstract__;
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_014747f0;
      plVar8 = *(long **)(param_1 + 0x40);
      FUN_010e5b20(*(long *)(param_1 + 0x58),&local_68,*(undefined8 *)puVar1);
      if ((local_68 == 0) || (uVar13 = FUN_0268fd4c(local_68,0), plVar8 == (long *)0x0))
      goto LAB_014747f0;
      uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar13,*(undefined8 *)(*plVar8 + 0x270));
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
        if (((*(long *)(param_1 + 0x58) == 0) ||
            (FUN_010e5b20(*(long *)(param_1 + 0x58),&local_68,*(undefined8 *)puVar1), local_68 == 0)
            ) || (lVar10 = FUN_0268fd4c(local_68,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
        if ((lVar10 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto LAB_014747f8;
        if ((int)plVar8[3] == 0) goto LAB_014747f4;
        plVar8[4] = lVar10;
        plVar9 = *(long **)(param_1 + 0x40);
        if (plVar9 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar9 + 0x228))(plVar9,0,plVar8,1,*(undefined8 *)(*plVar9 + 0x230));
        plVar8 = *(long **)(param_1 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
        uVar13 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar5 = 
        Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate_TypeInfo
        ;
        FUN_0268c114(uVar13,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar5,0);
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_014747f0;
      uVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x38),0);
      uVar13 = FUN_01474804(param_1,uVar13,*(undefined8 *)puVar5);
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      lVar10 = FUN_0112fd4c(uVar14,*(undefined8 *)
                                    Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(param_1 + 0x58) = lVar10;
      if ((lVar10 == 0) ||
         (lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar10,0), lVar10 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar10,uVar13,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x58),0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      puVar11 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
      FUN_0269f750(*puVar11,puVar11[1],puVar11[2],lVar10,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x58),0);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      puVar11 = *(undefined4 **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      FUN_0269f994(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x58),0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      lVar12 = *(long *)(*(long *)puVar6 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                   *(undefined4 *)(lVar12 + 0x14),lVar10,0);
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (FUN_010e5b20(*(long *)(param_1 + 0x58),&local_68,*(undefined8 *)puVar1),
          lVar10 = local_68, local_68 == 0)) || (lVar12 = FUN_0268fd4c(local_68,0), lVar12 == 0))
      goto LAB_014747f0;
      FUN_0268b75c(lVar12,*(undefined8 *)StringLiteral_10350,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar10 = FUN_0268fd4c(lVar10,0);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto LAB_014747f8;
      if ((int)plVar8[3] == 0) goto LAB_014747f4;
      plVar8[4] = lVar10;
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,plVar8,0,1,*(undefined8 *)(*plVar9 + 0x230));
      puVar5 = 
      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__;
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar5,0);
    }
  }
  lVar12 = *(long *)puVar3;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_00d59478(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = Method_Unity_Collections_NativeArray<Vector2>_GetHashCode__;
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  uVar7 = FUN_026df230(*(undefined8 *)puVar3,**(undefined8 **)(lVar10 + 0xb8),0);
  if ((uVar7 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b4e0(uVar13,0,0);
    puVar3 = Method_UnityEngine_InputSystem_PlayerInput_OnUserChange__;
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_014747f0;
      plVar8 = *(long **)(param_1 + 0x40);
      FUN_010e5b20(*(long *)(param_1 + 0x50),&local_68,*(undefined8 *)puVar1);
      if ((local_68 == 0) || (uVar13 = FUN_0268fd4c(local_68,0), plVar8 == (long *)0x0))
      goto LAB_014747f0;
      uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar13,*(undefined8 *)(*plVar8 + 0x270));
      if ((uVar7 & 1) == 0) {
        return;
      }
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      if (((*(long *)(param_1 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(param_1 + 0x50),&local_68,*(undefined8 *)puVar1), local_68 == 0))
         || (lVar10 = FUN_0268fd4c(local_68,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
LAB_014747f8:
        uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_014747f4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8[4] = lVar10;
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,0,plVar8,1,*(undefined8 *)(*plVar9 + 0x230));
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      uVar13 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__;
      FUN_0268c114(uVar13,0);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = *(undefined8 *)puVar3;
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_014747f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x38),0);
      uVar13 = FUN_01474804(param_1,uVar13,*(undefined8 *)puVar3);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      lVar10 = FUN_0112fd4c(uVar14,*(undefined8 *)
                                    Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(param_1 + 0x50) = lVar10;
      if ((lVar10 == 0) ||
         (lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar10,0), lVar10 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar10,uVar13,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x50),0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      puVar11 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
      FUN_0269f750(*puVar11,puVar11[1],puVar11[2],lVar10,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x50),0);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      puVar11 = *(undefined4 **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      FUN_0269f994(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_014747f0;
      lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (*(long *)(param_1 + 0x50),0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      if (lVar10 == 0) goto LAB_014747f0;
      lVar12 = *(long *)(*(long *)puVar6 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                   *(undefined4 *)(lVar12 + 0x14),lVar10,0);
      if (((*(long *)(param_1 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(param_1 + 0x50),&local_68,*(undefined8 *)puVar1), local_68 == 0))
         || (lVar10 = FUN_0268fd4c(local_68,0), lVar10 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar10,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar10 = FUN_0268fd4c(local_68,0);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      if ((lVar10 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto LAB_014747f8;
      if ((int)plVar8[3] == 0) goto LAB_014747f4;
      plVar8[4] = lVar10;
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,plVar8,0,1,*(undefined8 *)(*plVar9 + 0x230));
      puVar3 = Method_System_Array_Resize<Transform>__;
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = *(undefined8 *)puVar3;
    }
    FUN_02660dac(uVar13,0);
  }
  return;
}


