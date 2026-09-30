/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$<Start>b__11_0
ENTRY_POINT: 01473b24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_MRUtilityKit_FindSpawnPositions__<Start>b__11_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long in_stack_00000008;
  
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = Method_System_Xml_XmlLoader_LoadNodeDirect__;
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar2 = UnityEngine_InputSystem_Sensor_var;
  puVar1 = PTR_DAT_033eef88;
  uVar7 = FUN_026df230(*(undefined8 *)puVar5,**(undefined8 **)(lVar6 + 0xb8),0);
  puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if ((uVar7 & 1) != 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b4e0(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014747f0;
      plVar8 = *(long **)(unaff_x19 + 0x40);
      FUN_010e5b20(*(long *)(unaff_x19 + 0x48),&stack0x00000008,*(undefined8 *)puVar1);
      if ((in_stack_00000008 == 0) ||
         (uVar12 = FUN_0268fd4c(in_stack_00000008,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
      uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar12,*(undefined8 *)(*plVar8 + 0x270));
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
        if (((*(long *)(unaff_x19 + 0x48) == 0) ||
            (FUN_010e5b20(*(long *)(unaff_x19 + 0x48),&stack0x00000008,*(undefined8 *)puVar1),
            in_stack_00000008 == 0)) ||
           (lVar6 = FUN_0268fd4c(in_stack_00000008,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
        if ((lVar6 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_014747f8;
        if ((int)plVar8[3] == 0) goto LAB_014747f4;
        plVar8[4] = lVar6;
        plVar9 = *(long **)(unaff_x19 + 0x40);
        if (plVar9 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar9 + 0x228))(plVar9,0,plVar8,1,*(undefined8 *)(*plVar9 + 0x230));
        plVar8 = *(long **)(unaff_x19 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
        uVar12 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar4 = Method_UnityEngine_InputSystem_InputSystem_add_onDeviceCommand__;
        FUN_0268c114(uVar12,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar4,0);
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_014747f0;
      UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                (*(long *)(unaff_x19 + 0x38),0);
      uVar12 = FUN_01474804();
      uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      lVar6 = FUN_0112fd4c(uVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(unaff_x19 + 0x48) = lVar6;
      if ((lVar6 == 0) ||
         (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar6,0), lVar6 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar6,uVar12,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x48),0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      puVar10 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      FUN_0269f750(*puVar10,puVar10[1],puVar10[2],lVar6,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x48),0);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      puVar10 = *(undefined4 **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      FUN_0269f994(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar6,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x48),0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                   *(undefined4 *)(lVar11 + 0x14),lVar6,0);
      if (((*(long *)(unaff_x19 + 0x48) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x48),&stack0x00000008,*(undefined8 *)puVar1),
          lVar6 = in_stack_00000008, in_stack_00000008 == 0)) ||
         (lVar11 = FUN_0268fd4c(in_stack_00000008,0), lVar11 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar11,*(undefined8 *)
                           Method_UnityEngine_InputSystem_XR_TrackedPoseDriver_OnPositionPerformed__
                   ,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      if ((lVar6 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_014747f8;
      if ((int)plVar8[3] == 0) goto LAB_014747f4;
      plVar8[4] = lVar6;
      plVar9 = *(long **)(unaff_x19 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,plVar8,0,1,*(undefined8 *)(*plVar9 + 0x230));
      puVar4 = StringLiteral_3762;
      plVar8 = *(long **)(unaff_x19 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar4,0);
    }
  }
  lVar11 = *unaff_x22;
  lVar6 = *(long *)(lVar11 + 0x38);
  if (lVar6 == 0) {
    FUN_00d59478(lVar11);
    lVar6 = *(long *)(lVar11 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsra_n_s32__;
  lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  uVar7 = FUN_026df230(*(undefined8 *)puVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar7 & 1) != 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b4e0(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      plVar8 = *(long **)(unaff_x19 + 0x40);
      FUN_010e5b20(*(long *)(unaff_x19 + 0x58),&stack0x00000008,*(undefined8 *)puVar1);
      if ((in_stack_00000008 == 0) ||
         (uVar12 = FUN_0268fd4c(in_stack_00000008,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
      uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar12,*(undefined8 *)(*plVar8 + 0x270));
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
        if (((*(long *)(unaff_x19 + 0x58) == 0) ||
            (FUN_010e5b20(*(long *)(unaff_x19 + 0x58),&stack0x00000008,*(undefined8 *)puVar1),
            in_stack_00000008 == 0)) ||
           (lVar6 = FUN_0268fd4c(in_stack_00000008,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
        if ((lVar6 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_014747f8;
        if ((int)plVar8[3] == 0) goto LAB_014747f4;
        plVar8[4] = lVar6;
        plVar9 = *(long **)(unaff_x19 + 0x40);
        if (plVar9 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar9 + 0x228))(plVar9,0,plVar8,1,*(undefined8 *)(*plVar9 + 0x230));
        plVar8 = *(long **)(unaff_x19 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
        uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar4 = 
        Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate_TypeInfo
        ;
        FUN_0268c114(uVar12,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar4,0);
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_014747f0;
      UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                (*(long *)(unaff_x19 + 0x38),0);
      uVar12 = FUN_01474804();
      uVar13 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      lVar6 = FUN_0112fd4c(uVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(unaff_x19 + 0x58) = lVar6;
      if ((lVar6 == 0) ||
         (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar6,0), lVar6 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar6,uVar12,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x58),0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      puVar10 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      FUN_0269f750(*puVar10,puVar10[1],puVar10[2],lVar6,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x58),0);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      puVar10 = *(undefined4 **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      FUN_0269f994(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar6,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x58),0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                   *(undefined4 *)(lVar11 + 0x14),lVar6,0);
      if (((*(long *)(unaff_x19 + 0x58) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x58),&stack0x00000008,*(undefined8 *)puVar1),
          lVar6 = in_stack_00000008, in_stack_00000008 == 0)) ||
         (lVar11 = FUN_0268fd4c(in_stack_00000008,0), lVar11 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar11,*(undefined8 *)StringLiteral_10350,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      if ((lVar6 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_014747f8;
      if ((int)plVar8[3] == 0) goto LAB_014747f4;
      plVar8[4] = lVar6;
      plVar9 = *(long **)(unaff_x19 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,plVar8,0,1,*(undefined8 *)(*plVar9 + 0x230));
      puVar4 = 
      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__;
      plVar8 = *(long **)(unaff_x19 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar4,0);
    }
  }
  lVar11 = *unaff_x22;
  lVar6 = *(long *)(lVar11 + 0x38);
  if (lVar6 == 0) {
    FUN_00d59478(lVar11);
    lVar6 = *(long *)(lVar11 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar4 = Method_Unity_Collections_NativeArray<Vector2>_GetHashCode__;
  lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_00d5941c();
  }
  uVar7 = FUN_026df230(*(undefined8 *)puVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar7 & 1) != 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b4e0(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      plVar8 = *(long **)(unaff_x19 + 0x40);
      FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*(undefined8 *)puVar1);
      if ((in_stack_00000008 == 0) ||
         (uVar12 = FUN_0268fd4c(in_stack_00000008,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
      uVar7 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar12,*(undefined8 *)(*plVar8 + 0x270));
      if ((uVar7 & 1) == 0) {
        return;
      }
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      if (((*(long *)(unaff_x19 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*(undefined8 *)puVar1),
          in_stack_00000008 == 0)) ||
         (lVar6 = FUN_0268fd4c(in_stack_00000008,0), plVar8 == (long *)0x0)) goto LAB_014747f0;
      if ((lVar6 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_014747f8:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_014747f4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8[4] = lVar6;
      plVar9 = *(long **)(unaff_x19 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,0,plVar8,1,*(undefined8 *)(*plVar9 + 0x230));
      plVar8 = *(long **)(unaff_x19 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      uVar12 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar5 = Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__;
      FUN_0268c114(uVar12,0);
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = *(undefined8 *)puVar5;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
LAB_014747f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                (*(long *)(unaff_x19 + 0x38),0);
      uVar12 = FUN_01474804();
      uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      lVar6 = FUN_0112fd4c(uVar13,*(undefined8 *)
                                   Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(unaff_x19 + 0x50) = lVar6;
      if ((lVar6 == 0) ||
         (lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar6,0), lVar6 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar6,uVar12,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      puVar10 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      FUN_0269f750(*puVar10,puVar10[1],puVar10[2],lVar6,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      puVar10 = *(undefined4 **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      FUN_0269f994(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar6,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      if (lVar6 == 0) goto LAB_014747f0;
      lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                   *(undefined4 *)(lVar11 + 0x14),lVar6,0);
      if (((*(long *)(unaff_x19 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*(undefined8 *)puVar1),
          lVar6 = in_stack_00000008, in_stack_00000008 == 0)) ||
         (lVar11 = FUN_0268fd4c(in_stack_00000008,0), lVar11 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar11,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__,0);
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,1);
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      if ((lVar6 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_014747f8;
      if ((int)plVar8[3] == 0) goto LAB_014747f4;
      plVar8[4] = lVar6;
      plVar9 = *(long **)(unaff_x19 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar9 + 0x228))(plVar9,plVar8,0,1,*(undefined8 *)(*plVar9 + 0x230));
      puVar5 = Method_System_Array_Resize<Transform>__;
      plVar8 = *(long **)(unaff_x19 + 0x40);
      if (plVar8 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = *(undefined8 *)puVar5;
    }
    FUN_02660dac(uVar12,0);
  }
  return;
}


