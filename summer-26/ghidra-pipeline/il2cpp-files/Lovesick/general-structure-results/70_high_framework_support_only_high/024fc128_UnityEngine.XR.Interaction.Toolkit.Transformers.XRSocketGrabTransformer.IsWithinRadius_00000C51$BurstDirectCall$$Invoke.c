/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer.IsWithinRadius_00000C51$BurstDirectCall$$Invoke
ENTRY_POINT: 024fc128
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x024fc300) */
/* WARNING: Removing unreachable block (ram,0x024fc718) */

undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000C51_BurstDirectCall__Invoke
          (long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  int *piVar8;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int iVar9;
  undefined8 uVar10;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
code_r0x024fc128:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar4 = (*(code *)*puVar5)(), (uVar4 & 1) != 0) {
    lVar7 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_024fc18c;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
LAB_024fc18c:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 == (long *)0x0) {
LAB_024fc1bc:
      plVar6 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)StringLiteral_4495 + 300);
      if (*(byte *)(*plVar6 + 300) < bVar1) goto LAB_024fc1bc;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_4495
         ) {
        plVar6 = (long *)0x0;
      }
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(plVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = (**(code **)(*plVar6 + 0x348))(plVar6,*(undefined8 *)(*plVar6 + 0x350));
      if ((uVar4 & 1) != 0) {
        uVar4 = FUN_024fb8a4(plVar6);
        FUN_024fb8a4(plVar6);
        if ((uVar4 & 1) != 0) {
          FUN_024fc9e0(plVar6);
        }
        FUN_00cb921c();
        if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
    param_1 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          in_x9 = (long)*piVar8;
          goto code_r0x024fc128;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
  }
  if (unaff_x24 != (long *)0x0) {
    lVar7 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_10310) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_024fc2e8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
LAB_024fc2e8:
    (*(code *)*puVar5)();
  }
  iVar3 = FUN_024fcc60();
  uVar2 = in_stack_00000038;
  uVar10 = in_stack_00000030;
  if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_4495);
  }
  _in_stack_00000020 = FUN_024fccd8(uVar10,uVar2);
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    iVar9 = 0;
    do {
      if (iVar3 != 0) {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        FUN_024fc9e0();
      }
      FUN_0132138c();
      if (in_stack_00000050 == 0) {
LAB_024fc6c0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = FUN_024fa748();
      if ((uVar4 & 1) == 0) {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        auVar12 = FUN_024fcd48(in_stack_00000050,in_stack_00000030,in_stack_00000038);
      }
      else {
        FUN_0132138c();
        auVar12 = FUN_024fb420();
      }
      _in_stack_00000050 = auVar12;
      _in_stack_00000040 = _in_stack_00000020;
      FUN_01132ae0(&stack0x00000030,&stack0x00000050,0,&stack0x00000040,iVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__);
      auVar12 = _in_stack_00000020;
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      uVar4 = FUN_024fa748();
      uVar11 = 0;
      if ((uVar4 & 1) == 0) {
        uVar11 = 0x3f800000;
      }
      _in_stack_00000050 = auVar12;
      FUN_0113224c(uVar11,&stack0x00000050,iVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>__ctor__
                  );
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      if (*(char *)(in_stack_00000050 + 0xf8) != '\0') {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        uVar10 = *(undefined8 *)(in_stack_00000050 + 0xf0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_02681b9c(uVar10,0,0);
        if ((uVar4 & 1) != 0) {
          FUN_0132138c();
          if (in_stack_00000050 == 0) goto LAB_024fc6c0;
          uVar10 = *(undefined8 *)(in_stack_00000050 + 0xf0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          UnityEngine_UIElements_VisualElement__UnityEngine_UIElements_IResolvedStyle_get_visibility
                    (&stack0x00000020,iVar9,uVar10,0);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x22 + 0x18));
  }
  uVar4 = FUN_024fd0cc();
  uVar2 = in_stack_00000028;
  uVar10 = in_stack_00000020;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
              + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      );
  }
  auVar12 = FUN_026565ec(uVar10,uVar2,0);
  uVar2 = in_stack_00000038;
  uVar10 = in_stack_00000030;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<TextMeshProUGUI>__ + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    auVar13 = FUN_0265720c(uVar10,uVar2,0);
    _in_stack_00000010 = auVar13;
    _in_stack_00000050 = auVar12;
    _in_stack_00000040 = auVar13;
    FUN_01132ae0(&stack0x00000030,&stack0x00000050,0,&stack0x00000040,0,
                 *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    _in_stack_00000050 = auVar13;
    FUN_0113224c(0x3f800000,&stack0x00000050,0,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
    if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02657630(&stack0x00000010,iVar3 != 2 && iVar3 != 4,0);
    auVar12 = FUN_02657514(in_stack_00000010,in_stack_00000018,0);
  }
  return auVar12;
}


