/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs$$UnloadNativeFunctions
ENTRY_POINT: 01473dc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs__UnloadNativeFunctions(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  if (*(long **)(unaff_x19 + 0x40) == (long *)0x0) goto LAB_014747f0;
  (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x228))();
  puVar1 = StringLiteral_3762;
  plVar2 = *(long **)(unaff_x19 + 0x40);
  if (plVar2 == (long *)0x0) goto LAB_014747f0;
  (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02660dac(*(undefined8 *)puVar1,0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsra_n_s32__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar3 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b4e0(uVar8,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      plVar2 = *(long **)(unaff_x19 + 0x40);
      FUN_010e5b20(*(long *)(unaff_x19 + 0x58),&stack0x00000008,*unaff_x24);
      if ((in_stack_00000008 == 0) ||
         (uVar8 = FUN_0268fd4c(in_stack_00000008,0), plVar2 == (long *)0x0)) goto LAB_014747f0;
      uVar3 = (**(code **)(*plVar2 + 0x268))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x270));
      if ((uVar3 & 1) != 0) {
        plVar2 = (long *)FUN_00da4fb8(*unaff_x23,1);
        if (((*(long *)(unaff_x19 + 0x58) == 0) ||
            (FUN_010e5b20(*(long *)(unaff_x19 + 0x58),&stack0x00000008,*unaff_x24),
            in_stack_00000008 == 0)) ||
           (lVar5 = FUN_0268fd4c(in_stack_00000008,0), plVar2 == (long *)0x0)) goto LAB_014747f0;
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
        goto LAB_014747f8;
        if ((int)plVar2[3] == 0) goto LAB_014747f4;
        plVar2[4] = lVar5;
        plVar4 = *(long **)(unaff_x19 + 0x40);
        if (plVar4 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar4 + 0x228))(plVar4,0,plVar2,1,*(undefined8 *)(*plVar4 + 0x230));
        plVar2 = *(long **)(unaff_x19 + 0x40);
        if (plVar2 == (long *)0x0) goto LAB_014747f0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
        uVar8 = *(undefined8 *)(unaff_x19 + 0x58);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar1 = 
        Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate_TypeInfo
        ;
        FUN_0268c114(uVar8,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar1,0);
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_014747f0;
      UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                (*(long *)(unaff_x19 + 0x38),0);
      uVar8 = FUN_01474804();
      uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x27);
      }
      lVar5 = FUN_0112fd4c(uVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(unaff_x19 + 0x58) = lVar5;
      if ((lVar5 == 0) ||
         (lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar5,0), lVar5 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar5,uVar8,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x58),0);
      if (*(char *)(unaff_x28 + 0xd76) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)(unaff_x28 + 0xd76) = 1;
      }
      if (lVar5 == 0) goto LAB_014747f0;
      puVar6 = *(undefined4 **)(*unaff_x25 + 0xb8);
      FUN_0269f750(*puVar6,puVar6[1],puVar6[2],lVar5,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x58),0);
      if (*(char *)(unaff_x29 + 0xf00) == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        *(undefined1 *)(unaff_x29 + 0xf00) = 1;
      }
      if (lVar5 == 0) goto LAB_014747f0;
      puVar6 = *(undefined4 **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
      FUN_0269f994(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_014747f0;
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x58),0);
      if (*(char *)(unaff_x26 + 0xe1c) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)(unaff_x26 + 0xe1c) = 1;
      }
      if (lVar5 == 0) goto LAB_014747f0;
      lVar7 = *(long *)(*unaff_x25 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar5,0);
      if (((*(long *)(unaff_x19 + 0x58) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x58),&stack0x00000008,*unaff_x24),
          lVar5 = in_stack_00000008, in_stack_00000008 == 0)) ||
         (lVar7 = FUN_0268fd4c(in_stack_00000008,0), lVar7 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar7,*(undefined8 *)StringLiteral_10350,0);
      plVar2 = (long *)FUN_00da4fb8(*unaff_x23,1);
      lVar5 = FUN_0268fd4c(lVar5,0);
      if (plVar2 == (long *)0x0) goto LAB_014747f0;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
      goto LAB_014747f8;
      if ((int)plVar2[3] == 0) goto LAB_014747f4;
      plVar2[4] = lVar5;
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar4 + 0x228))(plVar4,plVar2,0,1,*(undefined8 *)(*plVar4 + 0x230));
      puVar1 = 
      Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__;
      plVar2 = *(long **)(unaff_x19 + 0x40);
      if (plVar2 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar1,0);
    }
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_Unity_Collections_NativeArray<Vector2>_GetHashCode__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  uVar3 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b4e0(uVar8,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      plVar2 = *(long **)(unaff_x19 + 0x40);
      FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24);
      if ((in_stack_00000008 == 0) ||
         (uVar8 = FUN_0268fd4c(in_stack_00000008,0), plVar2 == (long *)0x0)) goto LAB_014747f0;
      uVar3 = (**(code **)(*plVar2 + 0x268))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x270));
      if ((uVar3 & 1) == 0) {
        return;
      }
      plVar2 = (long *)FUN_00da4fb8(*unaff_x23,1);
      if (((*(long *)(unaff_x19 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
          in_stack_00000008 == 0)) ||
         (lVar5 = FUN_0268fd4c(in_stack_00000008,0), plVar2 == (long *)0x0)) goto LAB_014747f0;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
LAB_014747f8:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if ((int)plVar2[3] == 0) {
LAB_014747f4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar2[4] = lVar5;
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar4 + 0x228))(plVar4,0,plVar2,1,*(undefined8 *)(*plVar4 + 0x230));
      plVar2 = *(long **)(unaff_x19 + 0x40);
      if (plVar2 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
      uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar1 = Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__;
      FUN_0268c114(uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = *(undefined8 *)puVar1;
    }
    else {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
LAB_014747f0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                (*(long *)(unaff_x19 + 0x38),0);
      uVar8 = FUN_01474804();
      uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x27);
      }
      lVar5 = FUN_0112fd4c(uVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<TMP_Character>_Clear__);
      *(long *)(unaff_x19 + 0x50) = lVar5;
      if ((lVar5 == 0) ||
         (lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar5,0), lVar5 == 0)) goto LAB_014747f0;
      FUN_0269fea8(lVar5,uVar8,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (*(char *)(unaff_x28 + 0xd76) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)(unaff_x28 + 0xd76) = 1;
      }
      if (lVar5 == 0) goto LAB_014747f0;
      puVar6 = *(undefined4 **)(*unaff_x25 + 0xb8);
      FUN_0269f750(*puVar6,puVar6[1],puVar6[2],lVar5,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (*(char *)(unaff_x29 + 0xf00) == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        *(undefined1 *)(unaff_x29 + 0xf00) = 1;
      }
      if (lVar5 == 0) goto LAB_014747f0;
      puVar6 = *(undefined4 **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
      FUN_0269f994(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x50),0);
      if (*(char *)(unaff_x26 + 0xe1c) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)(unaff_x26 + 0xe1c) = 1;
      }
      if (lVar5 == 0) goto LAB_014747f0;
      lVar7 = *(long *)(*unaff_x25 + 0xb8);
      FUN_0269fd98(*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar5,0);
      if (((*(long *)(unaff_x19 + 0x50) == 0) ||
          (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
          lVar5 = in_stack_00000008, in_stack_00000008 == 0)) ||
         (lVar7 = FUN_0268fd4c(in_stack_00000008,0), lVar7 == 0)) goto LAB_014747f0;
      FUN_0268b75c(lVar7,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__,0);
      plVar2 = (long *)FUN_00da4fb8(*unaff_x23,1);
      lVar5 = FUN_0268fd4c(lVar5,0);
      if (plVar2 == (long *)0x0) goto LAB_014747f0;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0))
      goto LAB_014747f8;
      if ((int)plVar2[3] == 0) goto LAB_014747f4;
      plVar2[4] = lVar5;
      plVar4 = *(long **)(unaff_x19 + 0x40);
      if (plVar4 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar4 + 0x228))(plVar4,plVar2,0,1,*(undefined8 *)(*plVar4 + 0x230));
      puVar1 = Method_System_Array_Resize<Transform>__;
      plVar2 = *(long **)(unaff_x19 + 0x40);
      if (plVar2 == (long *)0x0) goto LAB_014747f0;
      (**(code **)(*plVar2 + 0x248))(plVar2,0,*(undefined8 *)(*plVar2 + 0x250));
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = *(undefined8 *)puVar1;
    }
    FUN_02660dac(uVar8,0);
  }
  return;
}


