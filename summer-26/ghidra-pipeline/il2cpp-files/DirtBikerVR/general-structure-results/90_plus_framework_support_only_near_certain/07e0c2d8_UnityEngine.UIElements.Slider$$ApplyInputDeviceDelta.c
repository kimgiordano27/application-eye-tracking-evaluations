/*
FUNCTION_NAME: UnityEngine.UIElements.Slider$$ApplyInputDeviceDelta
ENTRY_POINT: 07e0c2d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void UnityEngine_UIElements_Slider__ApplyInputDeviceDelta(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  puVar2 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_DisplayProperty_TypeInfo;
  puVar1 = PTR_DAT_08493d98;
  if (*(long *)(unaff_x19 + 0x2a0) == 0) {
    return;
  }
  if (*(int *)(*(long *)
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexGrowProperty_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar5 = FUN_0645fe94(*(undefined8 *)puVar2);
  lVar6 = *(long *)puVar1;
  lVar13 = *(long *)(unaff_x19 + 0x2a0);
  if (lVar5 == unaff_x20) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (lVar13 == 0) {
LAB_07e0c690:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = FUN_07f5c490(lVar13,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
    plVar7 = *(long **)(unaff_x19 + 0x2a0);
    if (lVar5 != 0) {
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        FUN_07f6d914(&stack0x00000038,lVar5 + 0x198,0);
        uVar4 = in_stack_00000048;
        uVar3 = in_stack_00000040;
        uVar9 = in_stack_00000038;
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
                puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_07e0c574;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_03ac43c4(plVar7,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e0c574:
          pcVar11 = (code *)*puVar8;
          in_stack_00000058 = uVar3;
          in_stack_00000050 = uVar9;
          in_stack_00000060 = uVar4;
          uVar9 = puVar8[1];
LAB_07e0c594:
          (*pcVar11)(plVar7,&stack0x00000050,uVar9);
          return;
        }
      }
      goto LAB_07e0c690;
    }
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0)),
       plVar7 == (long *)0x0)) goto LAB_07e0c690;
    lVar6 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo;
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar5) goto LAB_07e0c5ac;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar6 = *(long *)puVar1;
    }
    lVar5 = FUN_07f609d0(lVar13,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 8),0);
    if ((lVar5 != 0) && (lVar5 != unaff_x19)) {
      return;
    }
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexShrinkProperty_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar6 = FUN_0645fe94(*(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexBasisProperty_TypeInfo
                        );
    if (lVar6 == unaff_x20) {
      lVar6 = *(long *)(unaff_x19 + 0x2a0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (lVar6 == 0) goto LAB_07e0c690;
      lVar6 = FUN_07f5c490(lVar6,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      if (lVar6 == unaff_x19) {
        plVar7 = *(long **)(unaff_x19 + 0x2a0);
        if (plVar7 != (long *)0x0) {
          plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
          FUN_07f6d914(&stack0x00000038,unaff_x19 + 0x198,0);
          uVar4 = in_stack_00000048;
          uVar3 = in_stack_00000040;
          uVar9 = in_stack_00000038;
          if (plVar7 != (long *)0x0) {
            lVar5 = *plVar7;
            uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_07e0c66c;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_03ac43c4(plVar7,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
LAB_07e0c66c:
            in_stack_00000058 = uVar3;
            in_stack_00000050 = uVar9;
            in_stack_00000060 = uVar4;
            pcVar11 = (code *)*puVar8;
            uVar9 = puVar8[1];
            goto LAB_07e0c594;
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
    lVar6 = FUN_0645fe94(*(undefined8 *)
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FlexDirectionProperty_TypeInfo
                        );
    if ((lVar5 != 0) || (lVar6 != unaff_x20)) {
      return;
    }
    plVar7 = *(long **)(unaff_x19 + 0x2a0);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0)),
       plVar7 == (long *)0x0)) goto LAB_07e0c690;
    lVar6 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo;
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar5) goto LAB_07e0c5ac;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_03ac43c4(plVar7,lVar5,1);
LAB_07e0c5bc:
                    /* WARNING: Could not recover jumptable at 0x07e0c5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
LAB_07e0c5ac:
  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
  goto LAB_07e0c5bc;
}


