/*
FUNCTION_NAME: FUN_055d187c
ENTRY_POINT: 055d187c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055d3a64) */
/* WARNING: Removing unreachable block (ram,0x055d3a78) */
/* WARNING: Removing unreachable block (ram,0x055d2f5c) */
/* WARNING: Removing unreachable block (ram,0x055d3f2c) */
/* WARNING: Removing unreachable block (ram,0x055d3f40) */
/* WARNING: Removing unreachable block (ram,0x055d3818) */
/* WARNING: Removing unreachable block (ram,0x055d3e20) */
/* WARNING: Removing unreachable block (ram,0x055d3e34) */
/* WARNING: Removing unreachable block (ram,0x055d3e54) */
/* WARNING: Removing unreachable block (ram,0x055d3e68) */
/* WARNING: Removing unreachable block (ram,0x055d38dc) */
/* WARNING: Removing unreachable block (ram,0x055d1d44) */
/* WARNING: Removing unreachable block (ram,0x055d3cb0) */
/* WARNING: Removing unreachable block (ram,0x055d3cb4) */
/* WARNING: Removing unreachable block (ram,0x055d3f64) */
/* WARNING: Removing unreachable block (ram,0x055d3f78) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_055d187c(long param_1,long *param_2,long *param_3,long param_4,long param_5,uint param_6)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 extraout_x1;
  uint uVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  long *local_a8;
  undefined4 local_9c;
  long *local_98;
  long *local_90;
  char local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar4 = PTR_DAT_067d78c8;
  puVar5 = PTR_DAT_067d4730;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bbfba5 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d4730);
    FUN_02f08768(
                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_0000018C_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                );
    FUN_02f08768(System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9990);
    FUN_02f08768(PTR_DAT_067d78c8);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067cb558);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    FUN_02f08768(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
    FUN_02f08768(System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo);
    FUN_02f08768(Method_System_Xml_ArrayHelper<string,_Guid>__ctor__);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                );
    FUN_02f08768(PTR_DAT_067cb360);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_SubscribeAndUpdate__
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
    FUN_02f08768(PTR_DAT_067d0878);
    FUN_02f08768(PTR_DAT_067d7c28);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                );
    FUN_02f08768(PTR_DAT_067ce970);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02f08768(PTR_DAT_067cb550);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_BroadcastValue__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                );
    FUN_02f08768(System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_InvokeDismissedEventHandlers__);
    FUN_02f08768(System_Collections_Generic_IEnumerator<Substring>_TypeInfo);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                );
    DAT_06bbfba5 = 1;
  }
  local_84 = 0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_9c = 0;
  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
  FUN_05079bb8(uVar15,0);
  uVar16 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar15;
  uVar15 = thunk_FUN_02f45270(uVar16);
  FUN_0508402c(uVar15,0);
  *(undefined8 *)(param_1 + 0x20) = uVar15;
  puVar6 = System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo;
  puVar5 = PTR_DAT_067c91b8;
  local_84 = *(long *)(param_1 + 0x60) != 0;
  if (param_2 != (long *)0x0) {
    uVar15 = (**(code **)(*param_2 + 0x5f8))
                       (param_2,*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                        ,*(undefined8 *)PTR_DAT_067cb360,*(undefined8 *)PTR_DAT_067cd6c0,
                        *(undefined8 *)(*param_2 + 0x600));
    *(undefined8 *)(param_1 + 0x78) = uVar15;
    if (param_4 == 0) {
      if (param_5 != 0) {
        if (*(long *)(param_5 + 0x20) != 0) {
          *(long *)(param_1 + 0x30) = *(long *)(param_5 + 0x20);
        }
        plVar17 = *(long **)(param_1 + 0x38);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x308))(plVar17,param_5,*(undefined8 *)(*plVar17 + 0x310));
          if ((param_6 & 1) != 0) {
            FUN_055d0f18(param_1,param_5);
          }
          goto LAB_055d1d88;
        }
      }
    }
    else {
      *(long *)(param_1 + 0x30) = param_4;
      plVar17 = *(long **)(param_4 + 0x28);
      if (plVar17 != (long *)0x0) {
        local_90 = (long *)(**(code **)(*plVar17 + 0x1e8))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
        while (plVar17 = local_90, local_90 != (long *)0x0) {
          lVar24 = *local_90;
          uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
                puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
                goto LAB_055d1bdc;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar18 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar5,0);
LAB_055d1bdc:
          uVar27 = (*(code *)*puVar18)(plVar17,puVar18[1]);
          plVar17 = local_90;
          if ((uVar27 & 1) == 0) {
            plVar17 = (long *)thunk_FUN_02f45174(local_90,*(undefined8 *)PTR_DAT_067c91b0);
            local_98 = plVar17;
            if (plVar17 == (long *)0x0) goto LAB_055d1d88;
            lVar24 = *plVar17;
            uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar27 == 0) goto LAB_055d1d0c;
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            goto LAB_055d1cf4;
          }
          if (local_90 == (long *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          lVar24 = *local_90;
          uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar27 != 0) {
            piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
                puVar18 = (undefined8 *)(lVar24 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                goto LAB_055d1c44;
              }
              uVar27 = uVar27 - 1;
              piVar29 = piVar29 + 4;
            } while (uVar27 != 0);
          }
          puVar18 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar5,1);
LAB_055d1c44:
          plVar17 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
          if (plVar17 != (long *)0x0) {
            bVar9 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar9) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar6)) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar17);
              }
              goto LAB_055d4150;
            }
          }
          plVar19 = *(long **)(param_1 + 0x38);
          if (plVar19 == (long *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          (**(code **)(*plVar19 + 0x308))(plVar19,plVar17,*(undefined8 *)(*plVar19 + 0x310));
        }
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_055d4150;
      }
    }
  }
  goto LAB_055d2934;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_055d1cf4:
    if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_055d1d28;
    }
  }
LAB_055d1d0c:
  puVar18 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)PTR_DAT_067c91b0,0);
LAB_055d1d28:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_055d1d88:
  puVar6 = System_Collections_Generic_IEnumerator<Substring>_TypeInfo;
  uVar15 = *(undefined8 *)puVar4;
  *(long **)(param_1 + 0x48) = param_2;
  uVar15 = thunk_FUN_02f45270(uVar15);
  FUN_0508402c(uVar15,0);
  uVar16 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar15;
  uVar15 = thunk_FUN_02f45270(uVar16);
  FUN_0508402c(uVar15,0);
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  plVar17 = (long *)(**(code **)(*param_2 + 0x5f8))
                              (param_2,*(undefined8 *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                               ,*(undefined8 *)puVar6,*(undefined8 *)PTR_DAT_067cd6c0,
                               *(undefined8 *)(*param_2 + 0x600));
  *(long **)(param_1 + 0x50) = plVar17;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar15 = *(undefined8 *)
              Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_InvokeDismissedEventHandlers__;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
  }
  uVar15 = FUN_05819fc8(uVar15,0);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x518))
              (plVar17,*(undefined8 *)PTR_DAT_067cb550,uVar15,*(undefined8 *)(*plVar17 + 0x520));
    if (*(long *)(param_1 + 0x30) == 0) {
      if (param_5 == 0) goto LAB_055d2934;
      auVar35 = FUN_05546520(param_5,0);
    }
    else {
      auVar35._8_8_ = extraout_x1;
      auVar35._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
    }
    FUN_055cf8e4(param_1,auVar35._8_8_,plVar17,auVar35._0_8_);
    if (*(int *)(param_1 + 0x5c) == 2) {
      plVar19 = *(long **)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x30) == 0) {
        if ((param_5 != 0) && (uVar15 = FUN_05546520(param_5,0), plVar19 != (long *)0x0))
        goto LAB_055d1eec;
      }
      else if (plVar19 != (long *)0x0) {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
LAB_055d1eec:
        (**(code **)(*plVar19 + 0x318))(plVar19,uVar15,plVar17,*(undefined8 *)(*plVar19 + 800));
        if (*(int *)(param_1 + 0x5c) != 2) goto LAB_055d1f10;
        goto joined_r0x055d1ffc;
      }
    }
    else {
LAB_055d1f10:
      if (*(long *)(param_1 + 0x30) == 0) goto joined_r0x055d1ffc;
      plVar19 = *(long **)(param_1 + 0x18);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x318))
                  (plVar19,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),plVar17,
                   *(undefined8 *)(*plVar19 + 800));
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar24 = *(long *)(*(long *)(param_1 + 0x30) + 0x50), lVar24 != 0)) {
          if (*(int *)(lVar24 + 0x10) == 0) {
            plVar19 = *(long **)(param_1 + 0x28);
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x318))(plVar19,lVar24,0,*(undefined8 *)(*plVar19 + 800));
              goto joined_r0x055d1ffc;
            }
          }
          else {
            (**(code **)(*plVar17 + 0x518))
                      (plVar17,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_BroadcastValue__
                       ,lVar24,*(undefined8 *)(*plVar17 + 0x520));
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (plVar19 = *(long **)(param_1 + 0x28), plVar19 != (long *)0x0)) {
              (**(code **)(*plVar19 + 0x318))
                        (plVar19,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),
                         *(undefined8 *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_SubscribeAndUpdate__
                         ,*(undefined8 *)(*plVar19 + 800));
joined_r0x055d1ffc:
              if (param_4 == 0) {
                FUN_055cf394(param_1,*(undefined8 *)(param_1 + 0x38));
                if (*(int *)(param_1 + 0x5c) != 2) {
                  FUN_055d0848(param_1,*(undefined8 *)(param_1 + 0x38));
                }
                lVar24 = FUN_055d158c(param_1);
              }
              else {
                FUN_055cf48c(param_1,param_4);
                if (*(int *)(param_1 + 0x5c) != 2) {
                  FUN_055cfbd0(param_1,param_4);
                }
                lVar24 = FUN_05572efc(param_4,1,0);
              }
              if (lVar24 != 0) {
                if ((*(long *)(lVar24 + 0x18) == 0) ||
                   ((*(uint *)(param_1 + 0x5c) & 0xfffffffe) == 4)) {
                  FUN_055d4158(param_1,param_2,param_4,param_5);
                  (**(code **)(*plVar17 + 0x2d8))
                            (plVar17,*(undefined8 *)(param_1 + 0x78),
                             *(undefined8 *)(*plVar17 + 0x2e0));
                  FUN_055cd6cc(param_1,*(undefined8 *)(param_1 + 0x30),
                               *(undefined8 *)(param_1 + 0x78),param_2);
                  if (param_4 != 0) {
                    FUN_055ccff4(*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_1 + 0x78),0);
                    (**(code **)(*param_2 + 0x2d8))
                              (param_2,plVar17,*(undefined8 *)(*param_2 + 0x2e0));
                    (**(code **)(*param_2 + 0x638))
                              (param_2,param_3,*(undefined8 *)(*param_2 + 0x640));
                    if (param_3 != (long *)0x0) goto LAB_055d20d8;
                  }
                }
                else {
                  plVar19 = (long *)FUN_055d4158(param_1,param_2,param_4,param_5);
                  uVar15 = (**(code **)(*param_2 + 0x5f8))
                                     (param_2,*(undefined8 *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                      ,*(undefined8 *)
                                        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_BroadcastValue__
                                      ,*(undefined8 *)PTR_DAT_067cd6c0,
                                      *(undefined8 *)(*param_2 + 0x600));
                  plVar25 = *(long **)(param_1 + 0x78);
                  *(undefined8 *)(param_1 + 0x80) = uVar15;
                  if (plVar25 != (long *)0x0) {
                    (**(code **)(*plVar25 + 0x2d8))
                              (plVar25,uVar15,*(undefined8 *)(*plVar25 + 0x2e0));
                    if (*(long *)(param_1 + 0x30) != 0) {
                      FUN_055cd6cc(param_1,*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x78)
                                   ,param_2);
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_055d2934;
                      FUN_055ccff4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),
                                   *(undefined8 *)(param_1 + 0x78),0);
                    }
                    puVar4 = PTR_DAT_067c9990;
                    if (0 < (int)*(ulong *)(lVar24 + 0x18)) {
                      uVar27 = 0;
                      uVar26 = *(ulong *)(lVar24 + 0x18) & 0xffffffff;
                      lVar32 = lVar24 + 0x20;
                      do {
                        if (uVar26 <= uVar27) goto LAB_055d3cb8;
                        plVar25 = (long *)FUN_055d524c(param_1,*(undefined8 *)(lVar32 + uVar27 * 8),
                                                       param_2,plVar17,1);
                        if (*(long *)(param_1 + 0x30) == 0) {
LAB_055d224c:
                          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          uVar15 = FUN_05546520(lVar20,0);
                          uVar26 = FUN_04f6ebb4(uVar15,0);
                          if (((uVar26 & 1) != 0) || (*(int *)(param_1 + 0x5c) == 2))
                          goto LAB_055d2280;
                          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          auVar35 = FUN_05546520(lVar20,0);
                          FUN_055d4780(param_1,auVar35._8_8_,auVar35._0_8_,plVar25);
                          plVar25 = (long *)(**(code **)(*param_2 + 0x5f8))
                                                      (param_2,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)PTR_DAT_067cb360,
                                                  *(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*param_2 + 0x600));
                          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
LAB_055d2700:
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          plVar31 = *(long **)(param_1 + 0x28);
                          uVar15 = FUN_05546520(lVar20,0);
                          if (plVar31 == (long *)0x0) goto LAB_055d2934;
                          plVar31 = (long *)(**(code **)(*plVar31 + 0x308))
                                                      (plVar31,uVar15,
                                                       *(undefined8 *)(*plVar31 + 0x310));
                          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          uVar15 = FUN_0554de78(lVar20,0);
                          if ((plVar31 != (long *)0x0) &&
                             (*plVar31 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f08d48(plVar31,*(long *)(PTR_DAT_067c9338 + 0x90),uVar15);
                            }
                            goto LAB_055d4150;
                          }
                          uVar15 = FUN_04f6f6b4(plVar31,*(undefined8 *)PTR_DAT_067ce970,uVar15,0);
                          if (plVar25 == (long *)0x0) goto LAB_055d2934;
                          (**(code **)(*plVar25 + 0x518))
                                    (plVar25,*(undefined8 *)PTR_DAT_067d7c28,uVar15,
                                     *(undefined8 *)(*plVar25 + 0x520));
                        }
                        else {
                          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
                          uVar15 = FUN_05546520(lVar20,0);
                          uVar26 = thunk_FUN_04f6d944(uVar16,uVar15,0);
                          if ((uVar26 & 1) == 0) goto LAB_055d224c;
LAB_055d2280:
                          uVar26 = (ulong)*(uint *)(lVar24 + 0x18);
                          if (uVar26 <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          cVar1 = *(char *)(lVar20 + 0xb0);
                          bVar9 = cVar1 != '\0';
                          if (*(long *)(param_1 + 0x30) != 0) {
                            lVar28 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
                            if (lVar28 == 0) goto LAB_055d2934;
                            if (*(int *)(lVar28 + 0x10) != 0) {
                              uVar15 = FUN_05546520(lVar20,0);
                              bVar9 = FUN_04f6ebb4(uVar15,0);
                              uVar26 = (ulong)*(uint *)(lVar24 + 0x18);
                              bVar9 = cVar1 != '\0' | bVar9;
                            }
                          }
                          if (uVar26 <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          bVar12 = FUN_0554bba0(lVar20,0);
                          if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                          lVar20 = *(long *)(lVar32 + uVar27 * 8);
                          if (lVar20 == 0) goto LAB_055d2934;
                          iVar13 = FUN_0554d1c8(lVar20,0);
                          if ((iVar13 < 2 & (bVar12 ^ 1) & bVar9) == 1) {
                            if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                            lVar20 = *(long *)(lVar32 + uVar27 * 8);
                            if (lVar20 == 0) goto LAB_055d2934;
                            lVar28 = *(long *)puVar4;
                            uVar15 = *(undefined8 *)(lVar20 + 0x108);
                            uVar16 = *(undefined8 *)(lVar20 + 0x110);
                            if (*(int *)(lVar28 + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                              lVar28 = *(long *)puVar4;
                            }
                            uVar26 = FUN_05132de0(uVar15,uVar16,
                                                  *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x10),
                                                  *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x18),0
                                                 );
                            if ((uVar26 & 1) != 0) {
                              if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                              lVar20 = *(long *)(lVar32 + uVar27 * 8);
                              if (lVar20 == 0) goto LAB_055d2934;
                              uStack_78 = *(undefined8 *)(lVar20 + 0x110);
                              local_80 = *(undefined8 *)(lVar20 + 0x108);
                              if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                              }
                              uVar15 = FUN_050656a0(0);
                              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                thunk_FUN_02f6670c(*(long *)puVar4);
                              }
                              uVar15 = FUN_05130530(&local_80,uVar15,0);
                              if (plVar25 == (long *)0x0) goto LAB_055d2934;
                              (**(code **)(*plVar25 + 0x518))
                                        (plVar25,*(undefined8 *)
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                                         ,uVar15,*(undefined8 *)(*plVar25 + 0x520));
                            }
                            if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                            lVar20 = *(long *)(lVar32 + uVar27 * 8);
                            if (lVar20 == 0) goto LAB_055d2934;
                            lVar28 = *(long *)puVar4;
                            uVar15 = *(undefined8 *)(lVar20 + 0x118);
                            uVar16 = *(undefined8 *)(lVar20 + 0x120);
                            if (*(int *)(lVar28 + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                              lVar28 = *(long *)puVar4;
                            }
                            uVar26 = FUN_05132d50(uVar15,uVar16,
                                                  *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x20),
                                                  *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x28),0
                                                 );
                            if ((uVar26 & 1) == 0) {
                              if (uVar27 < *(uint *)(lVar24 + 0x18)) {
                                lVar20 = *(long *)(lVar32 + uVar27 * 8);
                                if (lVar20 == 0) goto LAB_055d2934;
                                lVar28 = *(long *)puVar4;
                                uVar15 = *(undefined8 *)(lVar20 + 0x118);
                                uVar16 = *(undefined8 *)(lVar20 + 0x120);
                                if (*(int *)(lVar28 + 0xe4) == 0) {
                                  thunk_FUN_02f6670c();
                                  lVar28 = *(long *)puVar4;
                                }
                                uVar26 = FUN_05132de0(uVar15,uVar16,
                                                      *(undefined8 *)
                                                       (*(long *)(lVar28 + 0xb8) + 0x10),
                                                      *(undefined8 *)
                                                       (*(long *)(lVar28 + 0xb8) + 0x18),0);
                                if ((uVar26 & 1) == 0) goto joined_r0x055d27b4;
                                if (uVar27 < *(uint *)(lVar24 + 0x18)) {
                                  lVar20 = *(long *)(lVar32 + uVar27 * 8);
                                  if (lVar20 != 0) {
                                    uStack_78 = *(undefined8 *)(lVar20 + 0x120);
                                    local_80 = *(undefined8 *)(lVar20 + 0x118);
                                    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
                                      thunk_FUN_02f6670c();
                                    }
                                    uVar15 = FUN_050656a0(0);
                                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                      thunk_FUN_02f6670c(*(long *)puVar4);
                                    }
                                    uVar15 = FUN_05130530(&local_80,uVar15,0);
                                    if (plVar25 != (long *)0x0) {
                                      lVar20 = *plVar25;
                                      puVar18 = (undefined8 *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                                      ;
                                      goto LAB_055d2638;
                                    }
                                  }
                                  goto LAB_055d2934;
                                }
                              }
                              goto LAB_055d3cb8;
                            }
                            if (plVar25 == (long *)0x0) goto LAB_055d2934;
                            lVar20 = *plVar25;
                            uVar16 = *(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                            ;
                            uVar15 = *(undefined8 *)
                                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_get_Value__
                            ;
                          }
                          else {
                            (**(code **)(*plVar17 + 0x2d8))
                                      (plVar17,plVar25,*(undefined8 *)(*plVar17 + 0x2e0));
                            plVar25 = (long *)(**(code **)(*param_2 + 0x5f8))
                                                        (param_2,*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)PTR_DAT_067cb360,
                                                  *(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*param_2 + 0x600));
                            if (*(long *)(param_1 + 0x30) == 0) {
LAB_055d2508:
                              if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                              lVar20 = *(long *)(lVar32 + uVar27 * 8);
                              if (lVar20 == 0) goto LAB_055d2934;
                              uVar15 = FUN_05546520(lVar20,0);
                              uVar26 = FUN_04f6ebb4(uVar15,0);
                              if (((uVar26 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
                                if (uVar27 < *(uint *)(lVar24 + 0x18)) goto LAB_055d2700;
                                goto LAB_055d3cb8;
                              }
                            }
                            else {
                              if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                              lVar20 = *(long *)(lVar32 + uVar27 * 8);
                              if (lVar20 == 0) goto LAB_055d2934;
                              uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
                              uVar15 = FUN_05546520(lVar20,0);
                              uVar26 = thunk_FUN_04f6d944(uVar16,uVar15,0);
                              if ((uVar26 & 1) == 0) goto LAB_055d2508;
                            }
                            if (*(uint *)(lVar24 + 0x18) <= uVar27) goto LAB_055d3cb8;
                            lVar20 = *(long *)(lVar32 + uVar27 * 8);
                            if ((lVar20 == 0) ||
                               (uVar15 = FUN_0554de78(lVar20,0), plVar25 == (long *)0x0))
                            goto LAB_055d2934;
                            lVar20 = *plVar25;
                            puVar18 = (undefined8 *)PTR_DAT_067d7c28;
LAB_055d2638:
                            uVar16 = *puVar18;
                          }
                          (**(code **)(lVar20 + 0x518))
                                    (plVar25,uVar16,uVar15,*(undefined8 *)(lVar20 + 0x520));
                        }
joined_r0x055d27b4:
                        if (plVar19 == (long *)0x0) goto LAB_055d2934;
                        (**(code **)(*plVar19 + 0x2d8))
                                  (plVar19,plVar25,*(undefined8 *)(*plVar19 + 0x2e0));
                        uVar26 = (ulong)*(uint *)(lVar24 + 0x18);
                        uVar27 = uVar27 + 1;
                      } while ((long)uVar27 < (long)(int)*(uint *)(lVar24 + 0x18));
                    }
                    plVar19 = *(long **)(param_1 + 0x78);
                    if ((plVar19 != (long *)0x0) &&
                       ((**(code **)(*plVar19 + 0x2b8))
                                  (plVar19,*(undefined8 *)(param_1 + 0x80),
                                   *(undefined8 *)(*plVar19 + 0x2c0)),
                       puVar4 = 
                       System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>_TypeInfo,
                       plVar17 != (long *)0x0)) {
                      (**(code **)(*plVar17 + 0x2d8))
                                (plVar17,*(undefined8 *)(param_1 + 0x78),
                                 *(undefined8 *)(*plVar17 + 0x2e0));
                      lVar32 = *(long *)
                                UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_0000018C_BurstDirectCall_TypeInfo
                      ;
                      lVar24 = *(long *)(lVar32 + 0x38);
                      if (lVar24 == 0) {
                        FUN_02f41ef8(lVar32);
                        lVar24 = *(long *)(lVar32 + 0x38);
                      }
                      lVar24 = *(long *)(lVar24 + 0x10);
                      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
                        lVar24 = FUN_02f41e9c();
                      }
                      if (*(int *)(lVar24 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      lVar24 = *(long *)(*(long *)(lVar32 + 0x38) + 0x10);
                      if ((*(ushort *)(lVar24 + 0x135) & 1) == 0) {
                        lVar24 = FUN_02f41e9c();
                      }
                      plVar19 = (long *)**(undefined8 **)(lVar24 + 0xb8);
                      if (param_4 == 0) {
LAB_055d294c:
                        if ((param_6 & 1) == 0) {
LAB_055d2a24:
                          puVar8 = 
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                          ;
                          puVar6 = 
                          System_Collections_Generic_List<NetSyncVoipAttenuationValue>_TypeInfo;
                          puVar4 = PTR_DAT_067cd6c0;
                          if (plVar19 != (long *)0x0) {
                            uVar23 = *(uint *)(plVar19 + 3);
                            if (0 < (int)uVar23) {
                              uVar30 = 0;
                              plVar31 = (long *)0x0;
                              plVar25 = (long *)0x0;
                              do {
                                if (uVar23 <= uVar30) goto LAB_055d3cb8;
                                plVar33 = (long *)plVar19[(long)(int)uVar30 + 4];
                                if (plVar33 == (long *)0x0) goto LAB_055d2934;
                                uVar27 = (**(code **)(*plVar33 + 0x1d8))
                                                   (plVar33,*(undefined8 *)(*plVar33 + 0x1e0));
                                if (((uVar27 & 1) == 0) &&
                                   (lVar24 = (**(code **)(*plVar33 + 0x208))
                                                       (plVar33,*(undefined8 *)(*plVar33 + 0x210)),
                                   puVar7 = 
                                   Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                   , lVar24 == 0)) {
                                  if (plVar25 == (long *)0x0) {
                                    plVar25 = (long *)(**(code **)(*param_2 + 0x5f8))
                                                                (param_2,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)puVar6,*(undefined8 *)puVar4,
                                                  *(undefined8 *)(*param_2 + 0x600));
                                    (**(code **)(*plVar17 + 0x2d8))
                                              (plVar17,plVar25,*(undefined8 *)(*plVar17 + 0x2e0));
                                    plVar31 = (long *)(**(code **)(*param_2 + 0x5f8))
                                                                (param_2,*(undefined8 *)puVar7,
                                                                 *(undefined8 *)puVar8,
                                                                 *(undefined8 *)puVar4,
                                                                 *(undefined8 *)(*param_2 + 0x600));
                                    if (plVar25 == (long *)0x0) goto LAB_055d2934;
                                    (**(code **)(*plVar25 + 0x2d8))
                                              (plVar25,plVar31,*(undefined8 *)(*plVar25 + 0x2e0));
                                  }
                                  uVar15 = FUN_055d4838(param_1,plVar33,param_2);
                                  if (plVar31 == (long *)0x0) goto LAB_055d2934;
                                  (**(code **)(*plVar31 + 0x2d8))
                                            (plVar31,uVar15,*(undefined8 *)(*plVar31 + 0x2e0));
                                }
                                uVar23 = *(uint *)(plVar19 + 3);
                                uVar30 = uVar30 + 1;
                              } while ((int)uVar30 < (int)uVar23);
                            }
                            plVar19 = *(long **)(param_1 + 0x18);
                            if (plVar19 != (long *)0x0) {
                              iVar13 = (**(code **)(*plVar19 + 0x3c8))
                                                 (plVar19,*(undefined8 *)(*plVar19 + 0x3d0));
                              bVar3 = 1 < iVar13;
                              bVar10 = local_84 == '\0';
                              if ((*(int *)(param_1 + 0x5c) == 2) || (*(int *)(param_1 + 0x5c) == 4)
                                 ) {
                                (**(code **)(*param_2 + 0x2d8))
                                          (param_2,plVar17,*(undefined8 *)(*param_2 + 0x2e0));
                                (**(code **)(*param_2 + 0x638))
                                          (param_2,param_3,*(undefined8 *)(*param_2 + 0x640));
                                goto LAB_055d2bd0;
                              }
                              plVar19 = *(long **)(param_1 + 0x18);
                              if ((plVar19 != (long *)0x0) &&
                                 (plVar19 = (long *)(**(code **)(*plVar19 + 0x388))
                                                              (plVar19,*(undefined8 *)
                                                                        (*plVar19 + 0x390)),
                                 puVar4 = PTR_DAT_067c91b0, plVar19 != (long *)0x0)) {
                                lVar24 = *plVar19;
                                uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                                if (uVar27 != 0) {
                                  piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_067cb558) {
                                      puVar18 = (undefined8 *)
                                                (lVar24 + (long)*piVar29 * 0x10 + 0x138);
                                      goto LAB_055d2c60;
                                    }
                                    uVar27 = uVar27 - 1;
                                    piVar29 = piVar29 + 4;
                                  } while (uVar27 != 0);
                                }
                                puVar18 = (undefined8 *)
                                          FUN_02f421d0(plVar19,*(long *)PTR_DAT_067cb558,0);
LAB_055d2c60:
                                local_90 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
                                puVar6 = PTR_DAT_067c9338;
                                while (plVar19 = local_90, local_90 != (long *)0x0) {
                                  lVar24 = *local_90;
                                  uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                                  if (uVar27 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
                                        puVar18 = (undefined8 *)
                                                  (lVar24 + (long)*piVar29 * 0x10 + 0x138);
                                        goto LAB_055d2cdc;
                                      }
                                      uVar27 = uVar27 - 1;
                                      piVar29 = piVar29 + 4;
                                    } while (uVar27 != 0);
                                  }
                                  puVar18 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar5,0);
LAB_055d2cdc:
                                  uVar27 = (*(code *)*puVar18)(plVar19,puVar18[1]);
                                  plVar19 = local_90;
                                  if ((uVar27 & 1) == 0) {
                                    plVar19 = (long *)thunk_FUN_02f45174(local_90,*(undefined8 *)
                                                                                   puVar4);
                                    local_98 = plVar19;
                                    if (plVar19 == (long *)0x0) goto LAB_055d2f4c;
                                    lVar32 = *plVar19;
                                    lVar24 = *(long *)puVar4;
                                    uVar27 = (ulong)*(ushort *)(lVar32 + 0x12e);
                                    if (uVar27 == 0) goto LAB_055d2f24;
                                    piVar29 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
                                    goto LAB_055d2f0c;
                                  }
                                  if (local_90 == (long *)0x0) {
                                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  lVar24 = *local_90;
                                  uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                                  if (uVar27 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
                                        puVar18 = (undefined8 *)
                                                  (lVar24 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                                        goto LAB_055d2d44;
                                      }
                                      uVar27 = uVar27 - 1;
                                      piVar29 = piVar29 + 4;
                                    } while (uVar27 != 0);
                                  }
                                  puVar18 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar5,1);
LAB_055d2d44:
                                  plVar19 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
                                  if ((plVar19 != (long *)0x0) &&
                                     (*plVar19 != *(long *)(puVar6 + 0x90))) {
                                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f08d48(plVar19);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  if (*(long *)(param_1 + 0x30) == 0) {
                                    if (param_5 == 0) {
                                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    uVar15 = FUN_05546520(param_5,0);
                                  }
                                  else {
                                    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
                                  }
                                  uVar27 = thunk_FUN_04f6d944(plVar19,uVar15,0);
                                  if (((uVar27 & 1) == 0) &&
                                     (uVar27 = FUN_04f6ebb4(plVar19,0), (uVar27 & 1) == 0)) {
                                    plVar25 = (long *)(**(code **)(*param_2 + 0x5f8))
                                                                (param_2,*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*param_2 + 0x600));
                                    if (plVar25 == (long *)0x0) {
                                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    (**(code **)(*plVar25 + 0x518))
                                              (plVar25,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                                               ,plVar19,*(undefined8 *)(*plVar25 + 0x520));
                                    if (*(int *)(param_1 + 0x5c) != 3 && (!bVar3 || !bVar10)) {
                                      plVar31 = *(long **)(param_1 + 0x28);
                                      if (plVar31 == (long *)0x0) {
                                        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      uVar16 = *(undefined8 *)(param_1 + 0x68);
                                      plVar19 = (long *)(**(code **)(*plVar31 + 0x308))
                                                                  (plVar31,plVar19,
                                                                   *(undefined8 *)(*plVar31 + 0x310)
                                                                  );
                                      uVar34 = *(undefined8 *)PTR_DAT_067d0878;
                                      uVar15 = *(undefined8 *)
                                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                      ;
                                      if (plVar19 == (long *)0x0) {
                                        uVar21 = 0;
                                      }
                                      else {
                                        uVar21 = (**(code **)(*plVar19 + 0x168))
                                                           (plVar19,*(undefined8 *)
                                                                     (*plVar19 + 0x170));
                                      }
                                      uVar16 = FUN_04f6fc18(uVar16,uVar34,uVar21,
                                                            *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                                  ,0);
                                      (**(code **)(*plVar25 + 0x518))
                                                (plVar25,uVar15,uVar16,
                                                 *(undefined8 *)(*plVar25 + 0x520));
                                    }
                                    (**(code **)(*plVar17 + 0x2c8))
                                              (plVar17,plVar25,*(undefined8 *)(*plVar17 + 0x2d0));
                                  }
                                }
                                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                  FUN_02f089c8();
                                }
                                goto LAB_055d4150;
                              }
                            }
                          }
                        }
                        else {
                          plVar25 = *(long **)(param_1 + 0x38);
                          if (plVar25 != (long *)0x0) {
                            iVar13 = (**(code **)(*plVar25 + 0x298))
                                               (plVar25,*(undefined8 *)(*plVar25 + 0x2a0));
                            if (iVar13 < 1) goto LAB_055d2a24;
                            plVar19 = *(long **)(param_1 + 0x38);
                            if (plVar19 != (long *)0x0) {
                              plVar19 = (long *)(**(code **)(*plVar19 + 0x2e8))
                                                          (plVar19,0,
                                                           *(undefined8 *)(*plVar19 + 0x2f0));
                              if (plVar19 != (long *)0x0) {
                                bVar9 = *(byte *)(*(long *)puVar4 + 0x130);
                                if ((*(byte *)(*plVar19 + 0x130) < bVar9) ||
                                   (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) !=
                                    *(long *)puVar4)) {
                                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02f08d48(plVar19);
                                  }
                                  goto LAB_055d4150;
                                }
                              }
                              FUN_055d1264(param_1,plVar19);
                              plVar19 = *(long **)(param_1 + 0x40);
                              if (plVar19 != (long *)0x0) {
                                uVar14 = (**(code **)(*plVar19 + 0x298))
                                                   (plVar19,*(undefined8 *)(*plVar19 + 0x2a0));
                                plVar19 = (long *)FUN_02f0880c(*(undefined8 *)
                                                                                                                                
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                                                  ,uVar14);
                                plVar25 = *(long **)(param_1 + 0x40);
                                if (plVar25 != (long *)0x0) {
                                  (**(code **)(*plVar25 + 0x368))
                                            (plVar25,plVar19,0,*(undefined8 *)(*plVar25 + 0x370));
                                  goto LAB_055d2a24;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        plVar25 = *(long **)(param_1 + 0x38);
                        if (plVar25 != (long *)0x0) {
                          iVar13 = (**(code **)(*plVar25 + 0x298))
                                             (plVar25,*(undefined8 *)(*plVar25 + 0x2a0));
                          if (iVar13 < 1) goto LAB_055d294c;
                          plVar19 = *(long **)(param_4 + 0x30);
                          if (plVar19 != (long *)0x0) {
                            uVar14 = (**(code **)(*plVar19 + 0x1c8))
                                               (plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
                            plVar19 = (long *)FUN_02f0880c(*(undefined8 *)
                                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float>_set_Value__
                                                  ,uVar14);
                            plVar25 = *(long **)(param_4 + 0x30);
                            if (plVar25 != (long *)0x0) {
                              uVar27 = 0;
                              do {
                                iVar13 = (**(code **)(*plVar25 + 0x1c8))
                                                   (plVar25,*(undefined8 *)(*plVar25 + 0x1d0));
                                if ((long)iVar13 <= (long)uVar27) goto LAB_055d2a24;
                                plVar25 = *(long **)(param_4 + 0x30);
                                if ((plVar25 == (long *)0x0) ||
                                   (lVar24 = (**(code **)(*plVar25 + 0x208))
                                                       (plVar25,uVar27 & 0xffffffff,
                                                        *(undefined8 *)(*plVar25 + 0x210)),
                                   plVar19 == (long *)0x0)) break;
                                if ((lVar24 != 0) &&
                                   (lVar32 = thunk_FUN_02f45174(lVar24,*(undefined8 *)
                                                                        (*plVar19 + 0x40)),
                                   lVar32 == 0)) {
                                  uVar15 = thunk_FUN_02f52b60();
                                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02f0888c(uVar15,0);
                                  }
                                  goto LAB_055d4150;
                                }
                                if (*(uint *)(plVar19 + 3) <= uVar27) goto LAB_055d3cb8;
                                plVar19[uVar27 + 4] = lVar24;
                                plVar25 = *(long **)(param_4 + 0x30);
                                uVar27 = uVar27 + 1;
                              } while (plVar25 != (long *)0x0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_055d2934;
LAB_055d378c:
  plVar17 = (long *)thunk_FUN_02f45174(plVar25,*(undefined8 *)puVar4);
  local_98 = plVar17;
  if (plVar17 != (long *)0x0) {
    lVar24 = *plVar17;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == *(long *)puVar4) {
          puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto FUN_055d3800;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar18 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar4,0);
FUN_055d3800:
    (*(code *)*puVar18)(plVar17,puVar18[1]);
  }
  plVar17 = *(long **)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x5c) == 3 || (!bVar3 || !bVar10)) {
    if (plVar17 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar17 + 0x638))(plVar17,local_a8,*(undefined8 *)(*plVar17 + 0x640));
  }
  else {
    if (plVar17 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*plVar17 + 0x3f8))(plVar17,local_a8,*(undefined8 *)(*plVar17 + 0x400));
  }
  plVar17 = *(long **)(param_1 + 0x48);
  if (plVar17 == (long *)0x0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
  (**(code **)(*plVar17 + 0x2b8))(plVar17,plVar19,*(undefined8 *)(*plVar17 + 0x2c0));
  if (local_84 != '\0') {
    if (local_a8 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*local_a8 + 0x1a8))(local_a8,*(undefined8 *)(*local_a8 + 0x1b0));
  }
  if (local_84 != '\0') {
    if (local_a8 == (long *)0x0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_055d4150;
    }
    (**(code **)(*local_a8 + 0x2f8))(local_a8,*(undefined8 *)(*local_a8 + 0x300));
  }
LAB_055d38e0:
  if (local_90 == (long *)0x0) goto LAB_055d3da0;
  goto LAB_055d3114;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_055d3c60:
    if (*(long *)(piVar29 + -2) == *(long *)puVar4) {
      puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_055d3c94;
    }
  }
LAB_055d3c78:
  puVar18 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)puVar4,0);
LAB_055d3c94:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_055d2bd0:
  if (local_84 == '\0') {
    if (param_3 == (long *)0x0) goto LAB_055d2934;
LAB_055d20d8:
    (**(code **)(*param_3 + 0x308))(param_3,*(undefined8 *)(*param_3 + 0x310));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
  goto LAB_055d4150;
LAB_055d3cb8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  goto LAB_055d4150;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar29 = piVar29 + 4;
    if (uVar27 == 0) break;
LAB_055d2f0c:
    if (*(long *)(piVar29 + -2) == lVar24) {
      puVar18 = (undefined8 *)(lVar32 + (long)*piVar29 * 0x10 + 0x138);
      goto LAB_055d2f40;
    }
  }
LAB_055d2f24:
  puVar18 = (undefined8 *)FUN_02f421d0(plVar19,lVar24,0);
LAB_055d2f40:
  (*(code *)*puVar18)(plVar19,puVar18[1]);
LAB_055d2f4c:
  puVar4 = PTR_DAT_067c91b0;
  if (*(int *)(param_1 + 0x5c) != 3 && (bVar3 && bVar10)) {
    plVar19 = *(long **)(param_1 + 0x18);
    if (plVar19 == (long *)0x0) goto LAB_055d2934;
    local_9c = (**(code **)(*plVar19 + 0x3c8))(plVar19,*(undefined8 *)(*plVar19 + 0x3d0));
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd8);
    }
    uVar15 = FUN_050656a0(0);
    uVar15 = FUN_050d2d8c(&local_9c,uVar15,0);
    (**(code **)(*plVar17 + 0x558))
              (plVar17,*(undefined8 *)Method_System_Xml_ArrayHelper<string,_Guid>__ctor__,
               *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
               ,uVar15,*(undefined8 *)(*plVar17 + 0x560));
  }
  (**(code **)(*param_2 + 0x2d8))(param_2,plVar17,*(undefined8 *)(*param_2 + 0x2e0));
  bVar11 = (!bVar3 || !bVar10) || *(int *)(param_1 + 0x5c) == 3;
  lVar24 = 0x400;
  if (bVar11) {
    lVar24 = 0x640;
  }
  lVar32 = 0x3f8;
  if (bVar11) {
    lVar32 = 0x638;
  }
  (**(code **)(*param_2 + lVar32))(param_2,param_3,*(undefined8 *)(*param_2 + lVar24));
  (**(code **)(*param_2 + 0x2b8))(param_2,plVar17,*(undefined8 *)(*param_2 + 0x2c0));
  plVar17 = *(long **)(param_1 + 0x18);
  if ((plVar17 != (long *)0x0) &&
     (plVar17 = (long *)(**(code **)(*plVar17 + 0x388))(plVar17,*(undefined8 *)(*plVar17 + 0x390)),
     plVar17 != (long *)0x0)) {
    lVar24 = *plVar17;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
          goto LAB_055d30ec;
        }
        uVar27 = uVar27 - 1;
        piVar29 = piVar29 + 4;
      } while (uVar27 != 0);
    }
    puVar18 = (undefined8 *)FUN_02f421d0(plVar17,*(long *)PTR_DAT_067cb558,0);
LAB_055d30ec:
    local_90 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
    if (local_90 != (long *)0x0) {
LAB_055d3114:
      plVar17 = local_90;
      lVar24 = *local_90;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
            puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138);
            goto LAB_055d3160;
          }
          uVar27 = uVar27 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar27 != 0);
      }
      puVar18 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar5,0);
LAB_055d3160:
      uVar27 = (*(code *)*puVar18)(plVar17,puVar18[1]);
      plVar17 = local_90;
      if ((uVar27 & 1) != 0) {
        if (local_90 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_055d4150;
        }
        lVar24 = *local_90;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 != 0) {
          piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
              puVar18 = (undefined8 *)(lVar24 + (long)(*piVar29 + 1) * 0x10 + 0x138);
              goto LAB_055d31c8;
            }
            uVar27 = uVar27 - 1;
            piVar29 = piVar29 + 4;
          } while (uVar27 != 0);
        }
        puVar18 = (undefined8 *)FUN_02f421d0(local_90,*(long *)puVar5,1);
LAB_055d31c8:
        plVar17 = (long *)(*(code *)*puVar18)(plVar17,puVar18[1]);
        if ((plVar17 != (long *)0x0) && (*plVar17 != *(long *)(puVar6 + 0x90))) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar17);
          }
          goto LAB_055d4150;
        }
        if (*(long *)(param_1 + 0x30) == 0) {
          if (param_5 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_055d4150;
          }
          uVar15 = FUN_05546520(param_5,0);
        }
        else {
          uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
        }
        uVar27 = thunk_FUN_04f6d944(plVar17,uVar15,0);
        if (((uVar27 & 1) != 0) || (uVar27 = FUN_04f6ebb4(plVar17,0), (uVar27 & 1) != 0))
        goto LAB_055d38e0;
        local_a8 = param_3;
        if (local_84 == '\0') goto LAB_055d33b4;
        lVar24 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9070,5);
        if (lVar24 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          uVar23 = *(uint *)(lVar24 + 0x18);
          if (uVar23 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
          else {
            *(undefined8 *)(lVar24 + 0x20) = *(undefined8 *)(param_1 + 0x60);
            if (uVar23 == 1) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
            }
            else {
              *(undefined8 *)(lVar24 + 0x28) = *(undefined8 *)(param_1 + 0x68);
              if (uVar23 < 3) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
              }
              else {
                *(undefined8 *)(lVar24 + 0x30) = *(undefined8 *)PTR_DAT_067d0878;
                plVar19 = *(long **)(param_1 + 0x28);
                if (plVar19 == (long *)0x0) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else {
                  plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                              (plVar19,plVar17,*(undefined8 *)(*plVar19 + 0x310));
                  uVar15 = 0;
                  if (plVar19 != (long *)0x0) {
                    uVar15 = (**(code **)(*plVar19 + 0x168))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                  }
                  if ((*(ulong *)(lVar24 + 0x18) & 0xfffffffc) == 0) {
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089d0();
                    }
                  }
                  else {
                    *(undefined8 *)(lVar24 + 0x38) = uVar15;
                    if ((uint)*(ulong *)(lVar24 + 0x18) < 5) {
                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                    }
                    else {
                      *(undefined8 *)(lVar24 + 0x40) =
                           *(undefined8 *)
                            Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                      ;
                      uVar15 = FUN_04f6fd20(lVar24,0);
                      local_a8 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                          
                                                  System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                                  );
                      FUN_057d753c(local_a8,uVar15,0,0);
                      if (local_84 == '\0') {
LAB_055d33b4:
                        plVar19 = *(long **)(param_1 + 0x18);
                        if (plVar19 == (long *)0x0) {
                          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                          goto LAB_055d4150;
                        }
                        plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                    (plVar19,plVar17,
                                                     *(undefined8 *)(*plVar19 + 0x310));
                        if (plVar19 != (long *)0x0) {
                          bVar9 = *(byte *)(*(long *)
                                             System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                                           + 0x130);
                          if ((*(byte *)(*plVar19 + 0x130) < bVar9) ||
                             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) !=
                              *(long *)
                               System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                             )) {
                            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f08d48(plVar19);
                            }
                            goto LAB_055d4150;
                          }
                        }
                        plVar25 = *(long **)(param_1 + 0x48);
                        if (plVar25 == (long *)0x0) {
                          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_02f089c8();
                          }
                        }
                        else {
                          (**(code **)(*plVar25 + 0x2d8))
                                    (plVar25,plVar19,*(undefined8 *)(*plVar25 + 0x2e0));
                          plVar25 = *(long **)(param_1 + 0x18);
                          if (plVar25 == (long *)0x0) {
                            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_02f089c8();
                            }
                          }
                          else {
                            plVar25 = (long *)(**(code **)(*plVar25 + 0x388))
                                                        (plVar25,*(undefined8 *)(*plVar25 + 0x390));
                            if (plVar25 == (long *)0x0) {
                              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_02f089c8();
                              }
                            }
                            else {
                              lVar24 = *plVar25;
                              uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                              if (uVar27 != 0) {
                                piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar29 + -2) == *(long *)PTR_DAT_067cb558) {
                                    puVar18 = (undefined8 *)(lVar24 + (long)*piVar29 * 0x10 + 0x138)
                                    ;
                                    goto LAB_055d349c;
                                  }
                                  uVar27 = uVar27 - 1;
                                  piVar29 = piVar29 + 4;
                                } while (uVar27 != 0);
                              }
                              puVar18 = (undefined8 *)
                                        FUN_02f421d0(plVar25,*(long *)PTR_DAT_067cb558,0);
LAB_055d349c:
                              plVar25 = (long *)(*(code *)*puVar18)(plVar25,puVar18[1]);
                              if (plVar25 != (long *)0x0) {
                                do {
                                  lVar24 = *plVar25;
                                  uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                                  if (uVar27 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
                                        puVar18 = (undefined8 *)
                                                  (lVar24 + (long)*piVar29 * 0x10 + 0x138);
                                        goto LAB_055d3510;
                                      }
                                      uVar27 = uVar27 - 1;
                                      piVar29 = piVar29 + 4;
                                    } while (uVar27 != 0);
                                  }
                                  puVar18 = (undefined8 *)FUN_02f421d0(plVar25,*(long *)puVar5,0);
LAB_055d3510:
                                  uVar27 = (*(code *)*puVar18)(plVar25,puVar18[1]);
                                  if ((uVar27 & 1) == 0) goto LAB_055d378c;
                                  if (plVar25 == (long *)0x0) {
                                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f089c8();
                                    }
                                    goto LAB_055d4150;
                                  }
                                  lVar24 = *plVar25;
                                  uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
                                  if (uVar27 != 0) {
                                    piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar29 + -2) == *(long *)puVar5) {
                                        puVar18 = (undefined8 *)
                                                  (lVar24 + (long)(*piVar29 + 1) * 0x10 + 0x138);
                                        goto LAB_055d3578;
                                      }
                                      uVar27 = uVar27 - 1;
                                      piVar29 = piVar29 + 4;
                                    } while (uVar27 != 0);
                                  }
                                  puVar18 = (undefined8 *)FUN_02f421d0(plVar25,*(long *)puVar5,1);
LAB_055d3578:
                                  plVar31 = (long *)(*(code *)*puVar18)(plVar25,puVar18[1]);
                                  if ((plVar31 != (long *)0x0) &&
                                     (*plVar31 != *(long *)(puVar6 + 0x90))) {
                                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                      FUN_02f08d48(plVar31);
                                    }
                                    goto LAB_055d4150;
                                  }
                                  uVar27 = thunk_FUN_04f6d944(plVar17,plVar31,0);
                                  if ((uVar27 & 1) == 0) {
                                    plVar33 = *(long **)(param_1 + 0x28);
                                    if (plVar33 == (long *)0x0) {
                                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                        FUN_02f089c8();
                                      }
                                      goto LAB_055d4150;
                                    }
                                    plVar33 = (long *)(**(code **)(*plVar33 + 0x308))
                                                                (plVar33,plVar31,
                                                                 *(undefined8 *)(*plVar33 + 0x310));
                                    if (plVar33 != (long *)0x0) {
                                      if (*plVar33 != *(long *)(puVar6 + 0x90)) {
                                        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f08d48(plVar33);
                                        }
                                        goto LAB_055d4150;
                                      }
                                      uVar15 = FUN_04f65260(*(undefined8 *)
                                                                                                                          
                                                  System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo
                                                  ,plVar33,0);
                                      if (plVar19 == (long *)0x0) {
                                        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8(uVar15,uVar15);
                                        }
                                        goto LAB_055d4150;
                                      }
                                      (**(code **)(*plVar19 + 0x518))
                                                (plVar19,uVar15,plVar31,
                                                 *(undefined8 *)(*plVar19 + 0x520));
                                      plVar22 = *(long **)(param_1 + 0x48);
                                      if (plVar22 == (long *)0x0) {
                                        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      plVar22 = (long *)(**(code **)(*plVar22 + 0x5f8))
                                                                  (plVar22,*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                                                  ,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_SetValueWithoutNotify__
                                                  ,*(undefined8 *)PTR_DAT_067cd6c0,
                                                  *(undefined8 *)(*plVar22 + 0x600));
                                      if (plVar22 == (long *)0x0) {
                                        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                          FUN_02f089c8();
                                        }
                                        goto LAB_055d4150;
                                      }
                                      (**(code **)(*plVar22 + 0x518))
                                                (plVar22,*(undefined8 *)
                                                                                                                    
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<NearFarInteractor_Region>_set_Value__
                                                 ,plVar31,*(undefined8 *)(*plVar22 + 0x520));
                                      if (*(int *)(param_1 + 0x5c) != 3 && (!bVar3 || !bVar10)) {
                                        if (*(long *)(param_1 + 0x30) == 0) {
                                          if (param_5 == 0) {
                                            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                              FUN_02f089c8();
                                            }
                                            goto LAB_055d4150;
                                          }
                                          uVar15 = FUN_05546520(param_5,0);
                                        }
                                        else {
                                          uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50)
                                          ;
                                        }
                                        uVar27 = thunk_FUN_04f6d944(plVar31,uVar15,0);
                                        if ((uVar27 & 1) == 0) {
                                          uVar15 = FUN_04f6fc18(*(undefined8 *)(param_1 + 0x68),
                                                                *(undefined8 *)PTR_DAT_067d0878,
                                                                plVar33,*(undefined8 *)
                                                                                                                                                  
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<float3>_Subscribe__
                                                  ,0);
                                          (**(code **)(*plVar22 + 0x518))
                                                    (plVar22,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                  ,uVar15,*(undefined8 *)(*plVar22 + 0x520));
                                        }
                                        else {
                                          uVar15 = FUN_04f65260(*(undefined8 *)(param_1 + 0x68),
                                                                *(undefined8 *)(param_1 + 0x70),0);
                                          (**(code **)(*plVar22 + 0x518))
                                                    (plVar22,*(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
                                                  ,uVar15,*(undefined8 *)(*plVar22 + 0x520));
                                        }
                                      }
                                      (**(code **)(*plVar19 + 0x2c8))
                                                (plVar19,plVar22,*(undefined8 *)(*plVar19 + 0x2d0));
                                    }
                                  }
                                  if (plVar25 == (long *)0x0) break;
                                } while( true );
                              }
                              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_02f089c8();
                              }
                            }
                          }
                        }
                        goto LAB_055d4150;
                      }
                      if (local_a8 != (long *)0x0) {
                        bVar9 = *(byte *)(*(long *)
                                           System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo
                                         + 0x130);
                        if (((*(byte *)(*local_a8 + 0x130) < bVar9) ||
                            (*(long *)(*(long *)(*local_a8 + 200) + (ulong)bVar9 * 8 + -8) !=
                             *(long *)System_Console_WindowsConsole_WindowsCancelHandler_TypeInfo))
                           || (FUN_057d7648(local_a8,1,0), local_a8 != (long *)0x0)) {
                          (**(code **)(*local_a8 + 0x198))
                                    (local_a8,1,*(undefined8 *)(*local_a8 + 0x1a0));
                          goto LAB_055d33b4;
                        }
                      }
                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_055d4150;
      }
      plVar17 = (long *)thunk_FUN_02f45174(local_90,*(undefined8 *)puVar4);
      local_98 = plVar17;
      if (plVar17 == (long *)0x0) goto LAB_055d2bd0;
      lVar24 = *plVar17;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 == 0) goto LAB_055d3c78;
      piVar29 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      goto LAB_055d3c60;
    }
LAB_055d3da0:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_055d4150;
  }
LAB_055d2934:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_055d4150:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


