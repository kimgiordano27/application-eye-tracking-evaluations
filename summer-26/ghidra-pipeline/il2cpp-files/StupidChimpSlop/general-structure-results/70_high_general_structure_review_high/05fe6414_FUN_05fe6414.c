/*
FUNCTION_NAME: FUN_05fe6414
ENTRY_POINT: 05fe6414
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_6
*/


undefined8 FUN_05fe6414(void *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long **pplVar15;
  code *pcVar16;
  undefined8 local_1c0;
  undefined8 auStack_1b8 [38];
  long *local_88;
  undefined4 local_80;
  undefined2 local_7c [2];
  long *local_78;
  undefined4 local_70;
  undefined1 local_6c [4];
  long *local_68;
  undefined4 local_60;
  undefined2 local_5c [2];
  long *local_58;
  undefined2 local_4c [2];
  undefined1 local_48 [4];
  undefined1 local_44;
  
  if ((DAT_06a5e1d6 & 1) == 0) {
    FUN_02d4dc40(Method_System_TimeZoneInfo_TZifHead__ctor__);
    FUN_02d4dc40(Method_System_TimeZoneInfo_TZifType__ctor__);
    FUN_02d4dc40(Method_System_TimeZoneInfo_TransitionTime__ctor__);
    FUN_02d4dc40(
                Method_System_TimeZoneInfo_TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                );
    FUN_02d4dc40(
                Method_System_TimeZoneInfo_TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData__
                );
    FUN_02d4dc40(Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__);
    FUN_02d4dc40(Method_System_Threading_Timer_Scheduler_SchedulerThread__);
    FUN_02d4dc40(Method_System_Threading_Timer_Scheduler_TimerCB__);
    FUN_02d4dc40(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    FUN_02d4dc40(Method_UnityEngine_UI_ToggleGroup_<>c_<AnyTogglesOn>b__13_0__);
    FUN_02d4dc40(Method_UnityEngine_UIElements_TooltipEvent_<>c_<_cctor>b__0_0__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_1__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_<>c_<SortedRaycastGraphics>b__25_0__
                );
    FUN_02d4dc40(Method_UnityEngine_UIElements_TransitionCancelEvent_<>c_<_cctor>b__0_0__);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(PTR_DAT_06648658);
    FUN_02d4dc40(Method_UnityEngine_UIElements_TransitionEndEvent_<>c_<_cctor>b__0_0__);
    DAT_06a5e1d6 = 1;
  }
  local_44 = 0;
  local_48[0] = 0;
  local_4c[0] = 0;
  local_58 = (long *)0x0;
  local_5c[0] = 0;
  local_60 = 0;
  local_68 = (long *)0x0;
  local_6c[0] = 0;
  local_70 = 0;
  local_78 = (long *)0x0;
  local_7c[0] = 0;
  local_80 = 0;
  local_88 = (long *)0x0;
  if ((param_3 != (long *)0x0) &&
     (plVar3 = (long *)thunk_FUN_02d5dae8(param_3,0), plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0));
    puVar1 = PTR_DAT_066462a0;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar2 = FUN_0501d838(plVar3,0);
      switch(uVar2) {
      case 3:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x28) + 0x40)) {
LAB_05fe6c30:
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(param_3);
        }
        puVar13 = (undefined1 *)thunk_FUN_02d8a780(param_3);
        local_44 = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_TimeZoneInfo_TransitionTime__ctor__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_44;
        break;
      case 4:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x88) + 0x40))
        goto LAB_05fe6c30;
        puVar12 = (undefined2 *)thunk_FUN_02d8a780(param_3);
        local_4c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_TimeZoneInfo_TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_4c;
        break;
      case 5:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x30) + 0x40))
        goto LAB_05fe6c30;
        puVar13 = (undefined1 *)thunk_FUN_02d8a780(param_3);
        local_6c[0] = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UI_ToggleGroup_<>c_<AnyTogglesOn>b__13_0__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_6c;
        break;
      case 6:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x18) + 0x40))
        goto LAB_05fe6c30;
        puVar13 = (undefined1 *)thunk_FUN_02d8a780(param_3);
        local_48[0] = *puVar13;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_TimeZoneInfo_TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_48;
        break;
      case 7:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x38) + 0x40))
        goto LAB_05fe6c30;
        puVar12 = (undefined2 *)thunk_FUN_02d8a780(param_3);
        local_5c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_Threading_Timer_Scheduler_SchedulerThread__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_5c;
        break;
      case 8:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x40) + 0x40))
        goto LAB_05fe6c30;
        puVar12 = (undefined2 *)thunk_FUN_02d8a780(param_3);
        local_7c[0] = *puVar12;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_1__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)local_7c;
        break;
      case 9:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40))
        goto LAB_05fe6c30;
        puVar11 = (undefined4 *)thunk_FUN_02d8a780(param_3);
        local_60 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_Threading_Timer_Scheduler_TimerCB__ +
                                             0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_60;
        break;
      case 10:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x50) + 0x40))
        goto LAB_05fe6c30;
        puVar11 = (undefined4 *)thunk_FUN_02d8a780(param_3);
        local_80 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_<>c_<SortedRaycastGraphics>b__25_0__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_80;
        break;
      case 0xb:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x68) + 0x40))
        goto LAB_05fe6c30;
        puVar10 = (undefined8 *)thunk_FUN_02d8a780(param_3);
        local_68 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_68;
        break;
      case 0xc:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x70) + 0x40))
        goto LAB_05fe6c30;
        puVar10 = (undefined8 *)thunk_FUN_02d8a780(param_3);
        local_88 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_TransitionCancelEvent_<>c_<_cctor>b__0_0__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_88;
        break;
      case 0xd:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x78) + 0x40))
        goto LAB_05fe6c30;
        puVar11 = (undefined4 *)thunk_FUN_02d8a780(param_3);
        local_70 = *puVar11;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_UIElements_TooltipEvent_<>c_<_cctor>b__0_0__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = (long **)&local_70;
        break;
      case 0xe:
        if (*(long *)(*param_3 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40))
        goto LAB_05fe6c30;
        puVar10 = (undefined8 *)thunk_FUN_02d8a780(param_3);
        local_58 = (long *)*puVar10;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_System_TimeZoneInfo_TransitionTime_ValidateTransitionTime__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_58;
        break;
      default:
        auStack_1b8[0] =
             *(undefined8 *)Method_UnityEngine_UIElements_TransitionEndEvent_<>c_<_cctor>b__0_0__;
        local_1c0 = 1;
        thunk_FUN_02dc1ef0(auStack_1b8);
        return local_1c0;
      case 0x12:
        if (*param_3 != *(long *)(puVar1 + 0x90)) goto LAB_05fe6c30;
        local_78 = param_3;
        if (param_2 == (long *)0x0) goto LAB_05fe6c18;
        lVar7 = thunk_FUN_02d6c7a8(*(undefined8 *)
                                    (*param_2 +
                                     (ulong)*(ushort *)
                                             (*(long *)
                                               Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_0__
                                             + 0x50) * 0x10 + 0x140));
        pcVar16 = *(code **)(lVar7 + 8);
        pplVar15 = &local_78;
      }
      uVar14 = (*pcVar16)(param_2,param_1,pplVar15,lVar7);
      return uVar14;
    }
    plVar5 = (long *)FUN_05fe71fc();
    plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,1);
    if (plVar6 != (long *)0x0) {
      lVar7 = thunk_FUN_02d8a53c(plVar3,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_05fe6c20;
      if ((int)plVar6[3] == 0) goto LAB_05fe6c1c;
      plVar6[4] = (long)plVar3;
      thunk_FUN_02dc1ef0(plVar6 + 4,plVar3);
      if (plVar5 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar5 + 0x3d8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x3e0));
        plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,2);
        memcpy(&local_1c0,param_1,0x138);
        lVar8 = thunk_FUN_02d8a270(*(undefined8 *)Method_System_TimeZoneInfo_TZifHead__ctor__,
                                   &local_1c0);
        if (plVar3 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02d8a53c(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar9 == 0)) {
LAB_05fe6c20:
            uVar14 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar14,0);
          }
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar8;
            thunk_FUN_02dc1ef0(plVar3 + 4,lVar8);
            lVar8 = thunk_FUN_02d8a53c(param_3,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar8 == 0) goto LAB_05fe6c20;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
              plVar3[5] = (long)param_3;
              thunk_FUN_02dc1ef0(plVar3 + 5,param_3);
              if ((lVar7 != 0) &&
                 (plVar3 = (long *)FUN_04f40208(lVar7,param_2,plVar3,0), plVar3 != (long *)0x0)) {
                if (*(long *)(*plVar3 + 0x40) ==
                    *(long *)(*(long *)Method_System_TimeZoneInfo_TZifType__ctor__ + 0x40)) {
                  puVar10 = (undefined8 *)thunk_FUN_02d8a780();
                  return *puVar10;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268();
              }
              goto LAB_05fe6c18;
            }
          }
LAB_05fe6c1c:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
    }
  }
LAB_05fe6c18:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


