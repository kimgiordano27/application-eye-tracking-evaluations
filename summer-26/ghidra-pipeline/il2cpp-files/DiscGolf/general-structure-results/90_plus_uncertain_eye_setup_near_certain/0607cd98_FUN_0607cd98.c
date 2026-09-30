/*
FUNCTION_NAME: FUN_0607cd98
ENTRY_POINT: 0607cd98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0607cd98(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_06dc4df6 & 1) == 0) {
    FUN_02d965b8(Method_System_Linq_Expressions_DebugInfoExpression_get_StartLine__);
    FUN_02d965b8(Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_<Awake>b__20_0__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_IsInspectorPanelVisible__
                );
    FUN_02d965b8(Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_ToggleDistances__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_16__);
    FUN_02d965b8(PTR_DAT_06a10380);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__);
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_ToggleFollowRotation__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_19__);
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_ToggleFollowTranslation__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_21__);
    FUN_02d965b8(Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_UpdateVisibility__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_4__);
    FUN_02d965b8(Method_UnityEngine_DebugLogHandler_LogException__);
    FUN_02d965b8(
                Method_Meta_XR_ImmersiveDebugger_Manager_DebugManager_RegisterManager<ActionManager>__
                );
    DAT_06dc4df6 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar9 = *(long *)(param_1 + 8);
  local_38 = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_0607d15c;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar11 = *(long **)(lVar9 + 0x18);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0607cf48;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_17__
                          ,0);
LAB_0607cf48:
    lVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_38 = FUN_0481d028(lVar6,*(undefined8 *)
                                   Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_4__
                           );
    uVar7 = FUN_047e6248(&local_38,
                         *(undefined8 *)
                          Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_21__)
    ;
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      LeanTween__value(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031fb5f0(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_<Awake>b__20_0__);
      return;
    }
  }
  lVar6 = FUN_047e6288(&local_38,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_19__);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
  LeanTween__value();
  uVar10 = FUN_0607d358(*(undefined8 *)(param_1 + 10));
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_IsInspectorPanelVisible__
                            );
  FUN_0607d3f8(uVar5,uVar10);
  plVar11 = *(long **)(lVar9 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a10380) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0607d07c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a10380,0);
LAB_0607d07c:
  plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_ToggleDistances__
                             );
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_16__) {
        lVar6 = lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138;
        goto LAB_0607d0fc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02dd004c(plVar11,*(long *)
                                Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_16__
                       ,1);
LAB_0607d0fc:
  FUN_03b804ec(uVar10,plVar11,*(undefined8 *)(lVar6 + 8),0);
  lVar9 = FUN_038ba5a4(lVar9,uVar10,uVar5,
                       *(undefined8 *)
                        Method_Meta_XR_ImmersiveDebugger_Manager_DebugManager_RegisterManager<ActionManager>__
                      );
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_48 = FUN_0481d028(lVar9,*(undefined8 *)Method_UnityEngine_DebugLogHandler_LogException__);
  uVar7 = FUN_047e6248(&local_48,
                       *(undefined8 *)
                        Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_UpdateVisibility__
                      );
  if ((uVar7 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xe) = local_48;
    LeanTween__value(param_1 + 0xe,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031fb5f0(param_1 + 2,&local_48,param_1,
                 *(undefined8 *)Method_System_Linq_Expressions_DebugInfoExpression_get_StartLine__);
    return;
  }
LAB_0607d15c:
  lVar9 = FUN_047e6288(&local_48,
                       *(undefined8 *)
                        Method_Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface_ToggleFollowTranslation__
                      );
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(lVar9 + 0x20) != 0) {
    uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 0x10);
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(param_1 + 2,uVar10,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


