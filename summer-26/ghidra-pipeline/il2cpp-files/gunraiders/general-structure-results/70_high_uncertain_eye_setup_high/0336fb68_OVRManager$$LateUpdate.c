/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 0336fb68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__LateUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar12;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_Dispose__
              );
  FUN_01c5d288(UnityEngine_ISubsystemDescriptor_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422f960);
  FUN_01c5d288(PTR_DAT_04235e88);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
              );
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__);
  FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fc38);
  FUN_01c5d288(System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo);
  FUN_01c5d288(PTR_DAT_04230a80);
  FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  FUN_01c5d288(UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo);
  FUN_01c5d288(
              UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
              );
  FUN_01c5d288(PTR_DAT_0422fb28);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_get_Current__
              );
  FUN_01c5d288(PTR_DAT_04230e70);
  FUN_01c5d288(
              Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo
              );
  *(undefined1 *)(unaff_x23 + 0x588) = 1;
  puVar2 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar6 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<Weapon_ShotgunBulletBlockerPFX>_Dispose__
                              );
    FUN_0323fc78(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar7);
  }
  if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar1 = PTR_DAT_0422fb28;
  uVar5 = FUN_0336ea0c();
  if ((uVar5 & 1) != 0) {
    unaff_x20 = (long *)FUN_032d4240();
  }
  uVar6 = thunk_FUN_01c5d21c();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  uVar5 = FUN_032e935c(unaff_x20,uVar6,0);
  if ((uVar5 & 1) != 0) {
    *unaff_x19 = unaff_x21;
    return 0;
  }
  uVar7 = thunk_FUN_01c5d21c();
  puVar4 = Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
  ;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
                      );
  }
  uVar5 = FUN_0336ebe4(uVar7);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_0336ebe4(unaff_x20);
    if ((uVar5 & 1) != 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_033704d0;
      uVar5 = (**(code **)(*unaff_x20 + 0x588))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x590));
      if ((uVar5 & 1) != 0) {
        if (*unaff_x21 == *(long *)PTR_DAT_0422fc38) {
          uVar6 = (**(code **)(*(long *)PTR_DAT_0422fc38 + 0x168))();
          if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04235e88);
          }
          in_stack_00000028 = FUN_03304b08(unaff_x20,uVar6,1,0);
          goto LAB_0336ffc8;
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar5 = FUN_033706b8();
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          in_stack_00000028 = FUN_03305530(unaff_x20);
          goto LAB_0336ffc8;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      in_stack_00000028 = FUN_0324f628();
      goto LAB_0336ffc8;
    }
  }
  if (*unaff_x21 == *(long *)PTR_DAT_0422f960) {
    puVar8 = (undefined8 *)thunk_FUN_01c49834();
    uVar7 = *puVar8;
    uVar12 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_Dispose__
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_032e04b8(uVar12,0);
    uVar5 = FUN_032e935c(unaff_x20,uVar12,0);
    if ((uVar5 & 1) == 0) goto LAB_0336fe20;
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_032b5ff4(&stack0x00000018,uVar7,0);
    puVar8 = (undefined8 *)UnityEngine_ISubsystemDescriptor_TypeInfo;
LAB_0336fe98:
    uVar6 = *puVar8;
  }
  else {
LAB_0336fe20:
    lVar9 = thunk_FUN_01c495e4();
    if (lVar9 != 0) {
      uVar7 = *(undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        Newtonsoft_Json_Converters_XmlElementWrapper___ctor(&stack0x00000018,lVar9,0);
        puVar8 = (undefined8 *)
                 Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__;
        goto LAB_0336fe98;
      }
    }
    puVar3 = Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__;
    lVar9 = *unaff_x21;
    if (lVar9 == *(long *)Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__)
    {
      puVar8 = (undefined8 *)thunk_FUN_01c49834();
      in_stack_00000038 = puVar8[1];
      in_stack_00000030 = *puVar8;
      uVar7 = *(undefined8 *)PTR_DAT_0422fb40;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000028 = FUN_032cbea4(&stack0x00000030,0);
        goto LAB_0336ffc8;
      }
      lVar9 = *unaff_x21;
    }
    plVar11 = unaff_x21;
    if (lVar9 != *(long *)PTR_DAT_0422fc38) {
      plVar11 = (long *)0x0;
    }
    if (plVar11 == (long *)0x0) {
LAB_0337024c:
      uVar7 = *(undefined8 *)PTR_DAT_0422fb30;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
      puVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
      if ((uVar5 & 1) == 0) {
        if (*unaff_x21 == *(long *)PTR_DAT_04230358) {
          puVar8 = (undefined8 *)thunk_FUN_01c49834();
          uVar6 = *puVar8;
          uVar7 = puVar8[1];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          in_stack_00000028 = FUN_0336f360(uVar6,uVar7,unaff_x20);
        }
        else {
          if (*(int *)(*(long *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo + 0xe0) == 0)
          {
            thunk_FUN_01c1d1e8();
          }
          plVar11 = (long *)FUN_039cd330(uVar6,0);
          if ((plVar11 == (long *)0x0) ||
             (uVar5 = FUN_039c320c(plVar11,unaff_x20,0), (uVar5 & 1) == 0)) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            plVar11 = (long *)FUN_039cd330(unaff_x20,0);
            if ((plVar11 == (long *)0x0) ||
               (uVar5 = FUN_039c3170(plVar11,uVar6,0), (uVar5 & 1) == 0)) {
              puVar1 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
              lVar9 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar9 = *(long *)puVar1;
              }
              if ((long *)**(undefined8 **)(lVar9 + 0xb8) != unaff_x21) {
                if (unaff_x20 == (long *)0x0) {
LAB_033704d0:
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                uVar5 = FUN_032ea6e0(unaff_x20,0);
                if ((((uVar5 & 1) != 0) ||
                    (uVar5 = (**(code **)(*unaff_x20 + 0x3c8))
                                       (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3d0)),
                    (uVar5 & 1) != 0)) || (uVar5 = FUN_032eb3c4(unaff_x20,0), (uVar5 & 1) != 0)) {
                  *unaff_x19 = 0;
                  return 2;
                }
LAB_03370470:
                *unaff_x19 = 0;
                return 3;
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar5 = FUN_03370750(unaff_x20);
              if ((uVar5 & 1) == 0) {
                *unaff_x19 = 0;
                return 1;
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              in_stack_00000028 = FUN_033707ec(0,uVar6,unaff_x20);
            }
            else {
              in_stack_00000028 = (**(code **)(*plVar11 + 0x198))(plVar11,0);
            }
          }
          else {
            in_stack_00000028 = (**(code **)(*plVar11 + 0x1a8))(plVar11,0);
          }
        }
        goto LAB_0336ffc8;
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      _in_stack_00000018 = FUN_0336ef48();
      puVar8 = (undefined8 *)PTR_DAT_04230358;
    }
    else {
      uVar7 = *(undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_032ca18c(&stack0x00000018,plVar11,0);
        uVar6 = *(undefined8 *)puVar3;
        goto LAB_0336ffc0;
      }
      uVar7 = *(undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_get_Current__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230e70);
        FUN_038f5a24(uVar6,plVar11,0,0);
        *unaff_x19 = uVar6;
        return 0;
      }
      uVar7 = *(undefined8 *)System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_0422fb40;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_032e04b8(uVar7,0);
        uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          in_stack_00000028 = FUN_032556a4(plVar11,0);
          goto LAB_0336ffc8;
        }
        uVar7 = *(undefined8 *)
                 Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo
        ;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_032e04b8(uVar7,0);
        uVar5 = FUN_032e935c(unaff_x20,uVar7,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar5 = FUN_032f14b4(plVar11,&stack0x00000028,0);
          if ((uVar5 & 1) != 0) goto LAB_0336ffc8;
          goto LAB_03370470;
        }
        uVar7 = *(undefined8 *)
                 UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
        ;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar10 = (long *)FUN_032e04b8(uVar7,0);
        if (plVar10 == (long *)0x0) goto LAB_033704d0;
        uVar5 = (**(code **)(*plVar10 + 0x298))(plVar10,unaff_x20,*(undefined8 *)(*plVar10 + 0x2a0))
        ;
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          in_stack_00000028 =
               FUN_01c5d624(plVar11,1,
                            *(undefined8 *)UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_get_Current__
                           );
          goto LAB_0336ffc8;
        }
        goto LAB_0337024c;
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_0336ec78(plVar11);
      in_stack_00000018 = uVar6;
      puVar8 = (undefined8 *)PTR_DAT_04230a80;
    }
    uVar6 = *puVar8;
  }
LAB_0336ffc0:
  in_stack_00000028 = thunk_FUN_01c49334(uVar6);
LAB_0336ffc8:
  *unaff_x19 = in_stack_00000028;
  return 0;
}


