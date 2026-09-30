/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitialized
ENTRY_POINT: 033701dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__IsInsightPassthroughInitialized(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar7 = *param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar3 = (long *)FUN_032e04b8(uVar7,0);
  if (plVar3 == (long *)0x0) {
LAB_033704d0:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar4 = (**(code **)(*plVar3 + 0x298))();
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)PTR_DAT_0422fb30;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032e04b8(uVar7,0);
    uVar4 = FUN_032e935c();
    puVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    if ((uVar4 & 1) == 0) {
      if (*unaff_x21 == *(long *)PTR_DAT_04230358) {
        puVar5 = (undefined8 *)thunk_FUN_01c49834();
        uVar7 = *puVar5;
        uVar1 = puVar5[1];
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_0336f360(uVar7,uVar1);
      }
      else {
        if (*(int *)(*(long *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar3 = (long *)FUN_039cd330();
        if ((plVar3 == (long *)0x0) || (uVar4 = FUN_039c320c(), (uVar4 & 1) == 0)) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar3 = (long *)FUN_039cd330();
          if ((plVar3 == (long *)0x0) || (uVar4 = FUN_039c3170(), (uVar4 & 1) == 0)) {
            puVar2 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
            lVar6 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar6 = *(long *)puVar2;
            }
            if ((long *)**(long **)(lVar6 + 0xb8) != unaff_x21) {
              if (unaff_x20 != (long *)0x0) {
                uVar4 = FUN_032ea6e0();
                if ((((uVar4 & 1) == 0) &&
                    (uVar4 = (**(code **)(*unaff_x20 + 0x3c8))(), (uVar4 & 1) == 0)) &&
                   (uVar4 = FUN_032eb3c4(), (uVar4 & 1) == 0)) {
                  *unaff_x19 = 0;
                  return 3;
                }
                *unaff_x19 = 0;
                return 2;
              }
              goto LAB_033704d0;
            }
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar4 = FUN_03370750();
            if ((uVar4 & 1) == 0) {
              *unaff_x19 = 0;
              return 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_033707ec(0);
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x198))(plVar3,0);
          }
        }
        else {
          uVar7 = (**(code **)(*plVar3 + 0x1a8))(plVar3,0);
        }
      }
    }
    else {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      _in_stack_00000018 = FUN_0336ef48();
      uVar7 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230358,&stack0x00000018);
    }
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_01c5d624();
  }
  *unaff_x19 = uVar7;
  return 0;
}


