/*
FUNCTION_NAME: UnityEngine.UIElements.Slider$$SliderLerpUnclamped
ENTRY_POINT: 07e0c3fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_UIElements_Slider__SliderLerpUnclamped(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if ((param_1 == 0) || (param_1 == unaff_x19)) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexShrinkProperty_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexBasisProperty_TypeInfo
                        );
    if (lVar4 == unaff_x20) {
      lVar4 = *(long *)(unaff_x19 + 0x2a0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (lVar4 == 0) goto LAB_07e0c690;
      lVar4 = FUN_07f5c490(lVar4,*(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 8),0);
      if (lVar4 == unaff_x19) {
        plVar5 = *(long **)(unaff_x19 + 0x2a0);
        if (plVar5 != (long *)0x0) {
          plVar5 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
          FUN_07f6d914(&stack0x00000038,unaff_x19 + 0x198,0);
          uVar3 = in_stack_00000048;
          uVar2 = in_stack_00000040;
          uVar1 = in_stack_00000038;
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_07e0c594;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_03ac43c4(plVar5,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e0c594:
            in_stack_00000058 = uVar2;
            in_stack_00000050 = uVar1;
            in_stack_00000060 = uVar3;
            (*(code *)*puVar6)(plVar5,&stack0x00000050,puVar6[1]);
            return;
          }
        }
        goto LAB_07e0c690;
      }
    }
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexWrapProperty_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_0645fe94(*(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexDirectionProperty_TypeInfo
                        );
    if ((param_1 == 0) && (lVar4 == unaff_x20)) {
      plVar5 = *(long **)(unaff_x19 + 0x2a0);
      if ((plVar5 != (long *)0x0) &&
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
         plVar5 != (long *)0x0)) {
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07e0c5bc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,1)
        ;
LAB_07e0c5bc:
                    /* WARNING: Could not recover jumptable at 0x07e0c5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        return;
      }
LAB_07e0c690:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  return;
}


