/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer.CalculateScaleToFit_00000C52$BurstDirectCall$$Invoke
ENTRY_POINT: 024fc224
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x024fc300) */
/* WARNING: Removing unreachable block (ram,0x024fc718) */

undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000C52_BurstDirectCall__Invoke
          (void)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int iVar8;
  long *unaff_x25;
  ulong unaff_x26;
  undefined8 uVar9;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  
  do {
    FUN_024fb8a4(unaff_x25);
    if ((unaff_x26 & 1) != 0) {
      FUN_024fc9e0(unaff_x25);
    }
    FUN_00cb921c();
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      do {
        lVar5 = *unaff_x24;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x28) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_024fc130;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724();
LAB_024fc130:
        uVar6 = (*(code *)*puVar4)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x24 == (long *)0x0) goto LAB_024fc2f4;
          lVar5 = *unaff_x24;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar6 == 0) goto LAB_024fc2cc;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_024fc2b4;
        }
        lVar5 = *unaff_x24;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_024fc18c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724();
LAB_024fc18c:
        unaff_x25 = (long *)(*(code *)*puVar4)();
        if (unaff_x25 == (long *)0x0) {
LAB_024fc1bc:
          unaff_x25 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)StringLiteral_4495 + 300);
          if (*(byte *)(*unaff_x25 + 300) < bVar1) goto LAB_024fc1bc;
          if (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_4495) {
            unaff_x25 = (long *)0x0;
          }
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_02681b9c(unaff_x25,0,0);
      } while ((uVar6 & 1) == 0);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = (**(code **)(*unaff_x25 + 0x348))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x350));
    } while ((uVar6 & 1) == 0);
    uVar6 = FUN_024fb8a4(unaff_x25);
    unaff_x26 = uVar6 & 0xffffffff;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_024fc2b4:
    if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_10310) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_024fc2e8;
    }
  }
LAB_024fc2cc:
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_024fc2e8:
  (*(code *)*puVar4)();
LAB_024fc2f4:
  iVar3 = FUN_024fcc60();
  uVar2 = in_stack_00000038;
  uVar9 = in_stack_00000030;
  if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_4495);
  }
  _in_stack_00000020 = FUN_024fccd8(uVar9,uVar2);
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    iVar8 = 0;
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
      uVar6 = FUN_024fa748();
      if ((uVar6 & 1) == 0) {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        auVar11 = FUN_024fcd48(in_stack_00000050,in_stack_00000030,in_stack_00000038);
      }
      else {
        FUN_0132138c();
        auVar11 = FUN_024fb420();
      }
      _in_stack_00000050 = auVar11;
      _in_stack_00000040 = _in_stack_00000020;
      FUN_01132ae0(&stack0x00000030,&stack0x00000050,0,&stack0x00000040,iVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__);
      auVar11 = _in_stack_00000020;
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      uVar6 = FUN_024fa748();
      uVar10 = 0;
      if ((uVar6 & 1) == 0) {
        uVar10 = 0x3f800000;
      }
      _in_stack_00000050 = auVar11;
      FUN_0113224c(uVar10,&stack0x00000050,iVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>__ctor__
                  );
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      if (*(char *)(in_stack_00000050 + 0xf8) != '\0') {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        uVar9 = *(undefined8 *)(in_stack_00000050 + 0xf0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_02681b9c(uVar9,0,0);
        if ((uVar6 & 1) != 0) {
          FUN_0132138c();
          if (in_stack_00000050 == 0) goto LAB_024fc6c0;
          uVar9 = *(undefined8 *)(in_stack_00000050 + 0xf0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          UnityEngine_UIElements_VisualElement__UnityEngine_UIElements_IResolvedStyle_get_visibility
                    (&stack0x00000020,iVar8,uVar9,0);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(unaff_x22 + 0x18));
  }
  uVar6 = FUN_024fd0cc();
  uVar2 = in_stack_00000028;
  uVar9 = in_stack_00000020;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
              + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      );
  }
  auVar11 = FUN_026565ec(uVar9,uVar2,0);
  uVar2 = in_stack_00000038;
  uVar9 = in_stack_00000030;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<TextMeshProUGUI>__ + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    auVar12 = FUN_0265720c(uVar9,uVar2,0);
    _in_stack_00000010 = auVar12;
    _in_stack_00000050 = auVar11;
    _in_stack_00000040 = auVar12;
    FUN_01132ae0(&stack0x00000030,&stack0x00000050,0,&stack0x00000040,0,
                 *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    _in_stack_00000050 = auVar12;
    FUN_0113224c(0x3f800000,&stack0x00000050,0,
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
    if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02657630(&stack0x00000010,iVar3 != 2 && iVar3 != 4,0);
    auVar11 = FUN_02657514(in_stack_00000010,in_stack_00000018,0);
  }
  return auVar11;
}


