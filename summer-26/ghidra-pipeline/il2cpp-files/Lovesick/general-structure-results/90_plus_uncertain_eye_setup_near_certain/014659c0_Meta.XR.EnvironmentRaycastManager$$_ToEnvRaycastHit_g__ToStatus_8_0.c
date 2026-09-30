/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$<ToEnvRaycastHit>g__ToStatus|8_0
ENTRY_POINT: 014659c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_EnvironmentRaycastManager__<ToEnvRaycastHit>g__ToStatus_8_0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w23;
  long unaff_x24;
  int unaff_w26;
  long *unaff_x27;
  long in_stack_00000008;
  
  do {
    thunk_FUN_00d32864(param_1);
    do {
      uVar3 = FUN_02681b9c(unaff_x24,0,0);
      if ((uVar3 & 1) != 0) {
        if (unaff_x24 == 0) goto LAB_01465bf0;
        iVar2 = FUN_02665480(unaff_x24,0);
        unaff_w26 = iVar2 + unaff_w26;
      }
      puVar1 = PTR_DAT_033f3868;
      unaff_w23 = unaff_w23 + 1;
      if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) {
        uVar4 = FUN_015f5b28(*(undefined8 *)
                              Method_Oculus_Platform_Message<PlatformInitialize>_get_Data__);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar5 == 0) goto LAB_01465bf0;
        FUN_0268afbc(lVar5,uVar4,0);
        lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                          (lVar5,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar6 == 0) goto LAB_01465bf0;
        puVar9 = *(undefined4 **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        FUN_0269f618(*puVar9,puVar9[1],puVar9[2],lVar6,0);
        puVar10 = (undefined8 *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass63_0_<DOPath>b__1__;
        if (unaff_w26 < 0xffff) {
          puVar10 = (undefined8 *)
                    Method_UnityEngine_InputSystem_InputControl_GetChildControl<AxisControl>__;
        }
        plVar7 = (long *)FUN_010e5800(lVar5,*puVar10);
        if ((plVar7 == (long *)0x0) || (*(undefined1 *)(plVar7 + 6) = 0, unaff_x21 == (long *)0x0))
        goto LAB_01465bf0;
        uVar4 = (**(code **)(*unaff_x21 + 0x178))();
        (**(code **)(*plVar7 + 0x188))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 400));
        lVar5 = FUN_0268fd10(plVar7,0);
        uVar4 = FUN_0268fd10();
        if (lVar5 == 0) goto LAB_01465bf0;
        FUN_0269fea8(lVar5,uVar4,0);
        plVar8 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        if (plVar8 == (long *)0x0) goto LAB_01465bf0;
        (**(code **)(*plVar8 + 0x528))();
        puVar1 = StringLiteral_1415;
        if (0 < *(int *)(unaff_x19 + 0x18)) {
          iVar2 = 0;
          do {
            lVar5 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
            FUN_0132138c();
            if ((in_stack_00000008 == 0) || (uVar4 = FUN_0268fd4c(in_stack_00000008,0), lVar5 == 0))
            {
LAB_01465bf0:
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ac8520(lVar5,uVar4,*(undefined8 *)puVar1);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(unaff_x19 + 0x18));
        }
        return plVar7;
      }
      FUN_0132138c();
      if (in_stack_00000008 == 0) goto LAB_01465bf0;
      uVar4 = FUN_0268fd4c(in_stack_00000008,0);
      unaff_x24 = FUN_0142fbb8(uVar4,0);
      param_1 = *unaff_x27;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
}


