/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshDelegate$$EndInvoke
ENTRY_POINT: 014742ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
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
  
  if ((param_1 != 0) &&
     (lVar2 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_014747f8:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  if ((int)unaff_x20[3] == 0) {
LAB_014747f4:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  unaff_x20[4] = param_1;
  plVar3 = *(long **)(unaff_x19 + 0x40);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x228))(plVar3,0);
    plVar3 = *(long **)(unaff_x19 + 0x40);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
      uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar1 = 
      Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetRightControllerTransformDelegate_TypeInfo
      ;
      FUN_0268c114(uVar7,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar1,0);
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      lVar8 = *unaff_x22;
      lVar2 = *(long *)(lVar8 + 0x38);
      if (lVar2 == 0) {
        FUN_00d59478(lVar8);
        lVar2 = *(long *)(lVar8 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar1 = Method_Unity_Collections_NativeArray<Vector2>_GetHashCode__;
      lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c();
      }
      uVar4 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar2 + 0xb8),0);
      if ((uVar4 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_0268b4e0(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
          plVar3 = *(long **)(unaff_x19 + 0x40);
          FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24);
          if ((in_stack_00000008 == 0) ||
             (uVar7 = FUN_0268fd4c(in_stack_00000008,0), plVar3 == (long *)0x0)) goto LAB_014747f0;
          uVar4 = (**(code **)(*plVar3 + 0x268))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x270));
          if ((uVar4 & 1) == 0) {
            return;
          }
          plVar3 = (long *)FUN_00da4fb8(*unaff_x23,1);
          if (((*(long *)(unaff_x19 + 0x50) == 0) ||
              (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
              in_stack_00000008 == 0)) ||
             (lVar2 = FUN_0268fd4c(in_stack_00000008,0), plVar3 == (long *)0x0)) goto LAB_014747f0;
          if ((lVar2 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
          goto LAB_014747f8;
          if ((int)plVar3[3] == 0) goto LAB_014747f4;
          plVar3[4] = lVar2;
          plVar5 = *(long **)(unaff_x19 + 0x40);
          if (plVar5 == (long *)0x0) goto LAB_014747f0;
          (**(code **)(*plVar5 + 0x228))(plVar5,0,plVar3,1,*(undefined8 *)(*plVar5 + 0x230));
          plVar3 = *(long **)(unaff_x19 + 0x40);
          if (plVar3 == (long *)0x0) goto LAB_014747f0;
          (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
          uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar1 = Method_UnityEngine_Component_GetComponentInChildren<Grabbable>__;
          FUN_0268c114(uVar7,0);
          *(undefined8 *)(unaff_x19 + 0x50) = 0;
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = *(undefined8 *)puVar1;
        }
        else {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_014747f0;
          UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                    (*(long *)(unaff_x19 + 0x38),0);
          uVar7 = FUN_01474804();
          uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x27);
          }
          lVar2 = FUN_0112fd4c(uVar9,*(undefined8 *)
                                      Method_System_Collections_Generic_List<TMP_Character>_Clear__)
          ;
          *(long *)(unaff_x19 + 0x50) = lVar2;
          if ((lVar2 == 0) ||
             (lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (lVar2,0), lVar2 == 0)) goto LAB_014747f0;
          FUN_0269fea8(lVar2,uVar7,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
          lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x19 + 0x50),0);
          if (*(char *)(unaff_x28 + 0xd76) == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            *(undefined1 *)(unaff_x28 + 0xd76) = 1;
          }
          if (lVar2 == 0) goto LAB_014747f0;
          puVar6 = *(undefined4 **)(*unaff_x25 + 0xb8);
          FUN_0269f750(*puVar6,puVar6[1],puVar6[2],lVar2,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
          lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x19 + 0x50),0);
          if (*(char *)(unaff_x29 + 0xf00) == '\0') {
            thunk_FUN_00d48444(
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                              );
            *(undefined1 *)(unaff_x29 + 0xf00) = 1;
          }
          if (lVar2 == 0) goto LAB_014747f0;
          puVar6 = *(undefined4 **)
                    (*(long *)
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
                    0xb8);
          FUN_0269f994(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar2,0);
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
          lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x19 + 0x50),0);
          if (*(char *)(unaff_x26 + 0xe1c) == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            *(undefined1 *)(unaff_x26 + 0xe1c) = 1;
          }
          if (lVar2 == 0) goto LAB_014747f0;
          lVar8 = *(long *)(*unaff_x25 + 0xb8);
          FUN_0269fd98(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                       *(undefined4 *)(lVar8 + 0x14),lVar2,0);
          if (((*(long *)(unaff_x19 + 0x50) == 0) ||
              (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
              lVar2 = in_stack_00000008, in_stack_00000008 == 0)) ||
             (lVar8 = FUN_0268fd4c(in_stack_00000008,0), lVar8 == 0)) goto LAB_014747f0;
          FUN_0268b75c(lVar8,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__,0);
          plVar3 = (long *)FUN_00da4fb8(*unaff_x23,1);
          lVar2 = FUN_0268fd4c(lVar2,0);
          if (plVar3 == (long *)0x0) goto LAB_014747f0;
          if ((lVar2 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
          goto LAB_014747f8;
          if ((int)plVar3[3] == 0) goto LAB_014747f4;
          plVar3[4] = lVar2;
          plVar5 = *(long **)(unaff_x19 + 0x40);
          if (plVar5 == (long *)0x0) goto LAB_014747f0;
          (**(code **)(*plVar5 + 0x228))(plVar5,plVar3,0,1,*(undefined8 *)(*plVar5 + 0x230));
          puVar1 = Method_System_Array_Resize<Transform>__;
          plVar3 = *(long **)(unaff_x19 + 0x40);
          if (plVar3 == (long *)0x0) goto LAB_014747f0;
          (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar7 = *(undefined8 *)puVar1;
        }
        FUN_02660dac(uVar7,0);
      }
      return;
    }
  }
LAB_014747f0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


