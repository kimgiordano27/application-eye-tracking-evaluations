/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshDelegate$$.ctor
ENTRY_POINT: 01474178
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate___ctor(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long unaff_x19;
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
  
  FUN_010e5b20(param_1,&stack0x00000008,*unaff_x24);
  lVar4 = in_stack_00000008;
  if ((in_stack_00000008 != 0) && (lVar2 = FUN_0268fd4c(in_stack_00000008,0), lVar2 != 0)) {
    FUN_0268b75c(lVar2,*(undefined8 *)StringLiteral_10350,0);
    plVar3 = (long *)FUN_00da4fb8(*unaff_x23,1);
    lVar4 = FUN_0268fd4c(lVar4,0);
    if (plVar3 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
LAB_014747f8:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
      if ((int)plVar3[3] == 0) {
LAB_014747f4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3[4] = lVar4;
      plVar5 = *(long **)(unaff_x19 + 0x40);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 01474208 to 0157425b has its CatchHandler @ 014749f0 */
        (**(code **)(*plVar5 + 0x228))(plVar5,plVar3,0,1,*(undefined8 *)(*plVar5 + 0x230));
        puVar1 = 
        Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
        ;
        plVar3 = *(long **)(unaff_x19 + 0x40);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)puVar1,0);
          lVar2 = *unaff_x22;
          lVar4 = *(long *)(lVar2 + 0x38);
          if (lVar4 == 0) {
            FUN_00d59478(lVar2);
            lVar4 = *(long *)(lVar2 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          puVar1 = Method_Unity_Collections_NativeArray<Vector2>_GetHashCode__;
          lVar4 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          uVar6 = FUN_026df230(*(undefined8 *)puVar1,**(undefined8 **)(lVar4 + 0xb8),0);
          if ((uVar6 & 1) != 0) {
            uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_0268b4e0(uVar8,0,0);
            if ((uVar6 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
              plVar3 = *(long **)(unaff_x19 + 0x40);
              FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24);
              if ((in_stack_00000008 == 0) ||
                 (uVar8 = FUN_0268fd4c(in_stack_00000008,0), plVar3 == (long *)0x0))
              goto LAB_014747f0;
              uVar6 = (**(code **)(*plVar3 + 0x268))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x270));
              if ((uVar6 & 1) == 0) {
                return;
              }
              plVar3 = (long *)FUN_00da4fb8(*unaff_x23,1);
              if (((*(long *)(unaff_x19 + 0x50) == 0) ||
                  (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
                  in_stack_00000008 == 0)) ||
                 (lVar4 = FUN_0268fd4c(in_stack_00000008,0), plVar3 == (long *)0x0))
              goto LAB_014747f0;
              if ((lVar4 != 0) &&
                 (lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
              goto LAB_014747f8;
              if ((int)plVar3[3] == 0) goto LAB_014747f4;
              plVar3[4] = lVar4;
              plVar5 = *(long **)(unaff_x19 + 0x40);
              if (plVar5 == (long *)0x0) goto LAB_014747f0;
              (**(code **)(*plVar5 + 0x228))(plVar5,0,plVar3,1,*(undefined8 *)(*plVar5 + 0x230));
              plVar3 = *(long **)(unaff_x19 + 0x40);
              if (plVar3 == (long *)0x0) goto LAB_014747f0;
              (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
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
              if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_014747f0;
              UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(unaff_x19 + 0x38),0);
              uVar8 = FUN_01474804();
              uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_00d32864(*unaff_x27);
              }
              lVar4 = FUN_0112fd4c(uVar9,*(undefined8 *)
                                          Method_System_Collections_Generic_List<TMP_Character>_Clear__
                                  );
              *(long *)(unaff_x19 + 0x50) = lVar4;
              if ((lVar4 == 0) ||
                 (lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                    (lVar4,0), lVar4 == 0)) goto LAB_014747f0;
              FUN_0269fea8(lVar4,uVar8,0);
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
              lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (*(long *)(unaff_x19 + 0x50),0);
              if (*(char *)(unaff_x28 + 0xd76) == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                *(undefined1 *)(unaff_x28 + 0xd76) = 1;
              }
              if (lVar4 == 0) goto LAB_014747f0;
              puVar7 = *(undefined4 **)(*unaff_x25 + 0xb8);
              FUN_0269f750(*puVar7,puVar7[1],puVar7[2],lVar4,0);
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
              lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (*(long *)(unaff_x19 + 0x50),0);
              if (*(char *)(unaff_x29 + 0xf00) == '\0') {
                thunk_FUN_00d48444(
                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                  );
                *(undefined1 *)(unaff_x29 + 0xf00) = 1;
              }
              if (lVar4 == 0) goto LAB_014747f0;
              puVar7 = *(undefined4 **)
                        (*(long *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                        + 0xb8);
              FUN_0269f994(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar4,0);
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_014747f0;
              lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (*(long *)(unaff_x19 + 0x50),0);
              if (*(char *)(unaff_x26 + 0xe1c) == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                *(undefined1 *)(unaff_x26 + 0xe1c) = 1;
              }
              if (lVar4 == 0) goto LAB_014747f0;
              lVar2 = *(long *)(*unaff_x25 + 0xb8);
              FUN_0269fd98(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                           *(undefined4 *)(lVar2 + 0x14),lVar4,0);
              if (((*(long *)(unaff_x19 + 0x50) == 0) ||
                  (FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24),
                  lVar4 = in_stack_00000008, in_stack_00000008 == 0)) ||
                 (lVar2 = FUN_0268fd4c(in_stack_00000008,0), lVar2 == 0)) goto LAB_014747f0;
              FUN_0268b75c(lVar2,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__
                           ,0);
              plVar3 = (long *)FUN_00da4fb8(*unaff_x23,1);
              lVar4 = FUN_0268fd4c(lVar4,0);
              if (plVar3 == (long *)0x0) goto LAB_014747f0;
              if ((lVar4 != 0) &&
                 (lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
              goto LAB_014747f8;
              if ((int)plVar3[3] == 0) goto LAB_014747f4;
              plVar3[4] = lVar4;
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
              uVar8 = *(undefined8 *)puVar1;
            }
            FUN_02660dac(uVar8,0);
          }
          return;
        }
      }
    }
  }
LAB_014747f0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


