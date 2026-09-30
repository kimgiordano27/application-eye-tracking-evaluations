/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ToEnvRaycastHit
ENTRY_POINT: 0146595c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_EnvironmentRaycastManager__ToEnvRaycastHit(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long *unaff_x21;
  int iVar11;
  int iVar12;
  long in_stack_00000008;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x18) < 1) {
      iVar12 = 0;
    }
    else {
      iVar11 = 0;
      iVar12 = 0;
      do {
        FUN_0132138c();
        if (in_stack_00000008 == 0) goto LAB_01465bf0;
        uVar3 = FUN_0268fd4c(in_stack_00000008,0);
        lVar4 = FUN_0142fbb8(uVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uVar5 = FUN_02681b9c(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_01465bf0;
          iVar2 = FUN_02665480(lVar4,0);
          iVar12 = iVar2 + iVar12;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(unaff_x19 + 0x18));
    }
    puVar1 = PTR_DAT_033f3868;
    uVar3 = FUN_015f5b28(*(undefined8 *)
                          Method_Oculus_Platform_Message<PlatformInitialize>_get_Data__);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_0268afbc(lVar4,uVar3,0);
      lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar4,0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      if (lVar6 != 0) {
        puVar9 = *(undefined4 **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        FUN_0269f618(*puVar9,puVar9[1],puVar9[2],lVar6,0);
        puVar10 = (undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass63_0_<DOPath>b__1__;
        if (iVar12 < 0xffff) {
          puVar10 = (undefined8 *)
                    Method_UnityEngine_InputSystem_InputControl_GetChildControl<AxisControl>__;
        }
        plVar7 = (long *)FUN_010e5800(lVar4,*puVar10);
        if ((plVar7 != (long *)0x0) && (*(undefined1 *)(plVar7 + 6) = 0, unaff_x21 != (long *)0x0))
        {
          uVar3 = (**(code **)(*unaff_x21 + 0x178))();
          (**(code **)(*plVar7 + 0x188))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 400));
          lVar4 = FUN_0268fd10(plVar7,0);
          uVar3 = FUN_0268fd10();
          if (lVar4 != 0) {
            FUN_0269fea8(lVar4,uVar3,0);
            plVar8 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0))
            ;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x528))();
              puVar1 = StringLiteral_1415;
              if (0 < *(int *)(unaff_x19 + 0x18)) {
                iVar12 = 0;
                do {
                  lVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                  FUN_0132138c();
                  if ((in_stack_00000008 == 0) ||
                     (uVar3 = FUN_0268fd4c(in_stack_00000008,0), lVar4 == 0)) goto LAB_01465bf0;
                  FUN_00ac8520(lVar4,uVar3,*(undefined8 *)puVar1);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < *(int *)(unaff_x19 + 0x18));
              }
              return plVar7;
            }
          }
        }
      }
    }
  }
LAB_01465bf0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


