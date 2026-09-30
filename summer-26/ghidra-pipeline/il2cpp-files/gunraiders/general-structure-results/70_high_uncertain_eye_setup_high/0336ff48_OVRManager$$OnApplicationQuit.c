/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 0336ff48
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__OnApplicationQuit(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar5 = unaff_x21;
  if (param_1 != *(long *)PTR_DAT_0422fc38) {
    plVar5 = (long *)0x0;
  }
  if (plVar5 == (long *)0x0) {
LAB_0337024c:
    uVar8 = *(undefined8 *)PTR_DAT_0422fb30;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032e04b8(uVar8,0);
    uVar3 = FUN_032e935c();
    puVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ((uVar3 & 1) == 0) {
      if (*unaff_x21 == *(long *)PTR_DAT_04230358) {
        puVar6 = (undefined8 *)thunk_FUN_01c49834();
        uVar8 = *puVar6;
        uVar1 = puVar6[1];
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        in_stack_00000028 = FUN_0336f360(uVar8,uVar1);
      }
      else {
        if (*(int *)(*(long *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar5 = (long *)FUN_039cd330();
        if ((plVar5 == (long *)0x0) || (uVar3 = FUN_039c320c(), (uVar3 & 1) == 0)) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar5 = (long *)FUN_039cd330();
          if ((plVar5 == (long *)0x0) || (uVar3 = FUN_039c3170(), (uVar3 & 1) == 0)) {
            puVar2 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
            lVar7 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar7 = *(long *)puVar2;
            }
            if ((long *)**(long **)(lVar7 + 0xb8) != unaff_x21) {
              if (unaff_x20 == (long *)0x0) {
LAB_033704d0:
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4a4();
              }
              uVar3 = FUN_032ea6e0();
              if ((((uVar3 & 1) != 0) ||
                  (uVar3 = (**(code **)(*unaff_x20 + 0x3c8))(), (uVar3 & 1) != 0)) ||
                 (uVar3 = FUN_032eb3c4(), (uVar3 & 1) != 0)) {
                *unaff_x19 = 0;
                return 2;
              }
LAB_03370470:
              *unaff_x19 = 0;
              return 3;
            }
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar3 = FUN_03370750();
            if ((uVar3 & 1) == 0) {
              *unaff_x19 = 0;
              return 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            in_stack_00000028 = FUN_033707ec(0);
          }
          else {
            in_stack_00000028 = (**(code **)(*plVar5 + 0x198))(plVar5,0);
          }
        }
        else {
          in_stack_00000028 = (**(code **)(*plVar5 + 0x1a8))(plVar5,0);
        }
      }
      goto LAB_0336ffc8;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    _in_stack_00000018 = FUN_0336ef48();
    puVar6 = (undefined8 *)PTR_DAT_04230358;
LAB_033702ac:
    uVar8 = *puVar6;
  }
  else {
    uVar8 = *(undefined8 *)
             Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
    ;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032e04b8(uVar8,0);
    uVar3 = FUN_032e935c();
    if ((uVar3 & 1) == 0) {
      uVar8 = *(undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_get_Current__
      ;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032e04b8(uVar8,0);
      uVar3 = FUN_032e935c();
      if ((uVar3 & 1) != 0) {
        uVar8 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230e70);
        FUN_038f5a24(uVar8,plVar5,0,0);
        *unaff_x19 = uVar8;
        return 0;
      }
      uVar8 = *(undefined8 *)System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032e04b8(uVar8,0);
      uVar3 = FUN_032e935c();
      if ((uVar3 & 1) == 0) {
        uVar8 = *(undefined8 *)PTR_DAT_0422fb40;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar8,0);
        uVar3 = FUN_032e935c();
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          in_stack_00000028 = FUN_032556a4(plVar5,0);
          goto LAB_0336ffc8;
        }
        uVar8 = *(undefined8 *)
                 Photon_Voice_Unity_UtilityScripts_SaveIncomingStreamToFile_<>c__DisplayClass5_0_TypeInfo
        ;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar8,0);
        uVar3 = FUN_032e935c();
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = FUN_032f14b4(plVar5,&stack0x00000028,0);
          if ((uVar3 & 1) != 0) goto LAB_0336ffc8;
          goto LAB_03370470;
        }
        uVar8 = *(undefined8 *)
                 UnityEngine_Experimental_Rendering_Universal_RenderObjects_RenderObjectsSettings_TypeInfo
        ;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar4 = (long *)FUN_032e04b8(uVar8,0);
        if (plVar4 == (long *)0x0) goto LAB_033704d0;
        uVar3 = (**(code **)(*plVar4 + 0x298))();
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          in_stack_00000028 =
               FUN_01c5d624(plVar5,1,*(undefined8 *)
                                      UnityEngine_UIElements_NavigationSubmitEvent_TypeInfo,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_get_Current__
                           );
          goto LAB_0336ffc8;
        }
        goto LAB_0337024c;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_0336ec78(plVar5);
      in_stack_00000018 = uVar8;
      puVar6 = (undefined8 *)PTR_DAT_04230a80;
      goto LAB_033702ac;
    }
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_032ca18c(&stack0x00000018,plVar5,0);
    uVar8 = *unaff_x29;
  }
  in_stack_00000028 = thunk_FUN_01c49334(uVar8);
LAB_0336ffc8:
  *unaff_x19 = in_stack_00000028;
  return 0;
}


