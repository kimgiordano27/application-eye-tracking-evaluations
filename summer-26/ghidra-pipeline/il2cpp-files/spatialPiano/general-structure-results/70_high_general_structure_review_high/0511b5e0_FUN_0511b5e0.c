/*
FUNCTION_NAME: FUN_0511b5e0
ENTRY_POINT: 0511b5e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x0511bcc0) */
/* WARNING: Removing unreachable block (ram,0x0511bcc4) */

long * FUN_0511b5e0(long param_1,long param_2,long param_3,uint param_4,uint param_5,
                   undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long local_b0;
  long *plStack_a8;
  long *local_a0;
  long local_98 [2];
  long *local_88;
  long local_80;
  long *plStack_78;
  long *local_70;
  
  if ((DAT_06bb9eca & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d8af0);
    FUN_02f08768(
                UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJsonNameAndDescriptorOnly_var
                );
    FUN_02f08768(UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var);
    FUN_02f08768(UnityEngine_InputSystem_InputControlPath_PathParser_var);
    FUN_02f08768(UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJson_var);
    FUN_02f08768(Unity_AppUI_UI_InputLabel_UxmlSerializedData_var);
    FUN_02f08768(UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var);
    FUN_02f08768(UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var);
    FUN_02f08768(UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice_var);
    FUN_02f08768(UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var);
    FUN_02f08768(UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var);
    FUN_02f08768(UnityEngine_InputSystem_Users_InputUser_GlobalState_var);
    FUN_02f08768(PTR_DAT_067c9a28);
    FUN_02f08768(UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var);
    FUN_02f08768(PTR_DAT_067ca1a8);
    DAT_06bb9eca = 1;
  }
  puVar2 = PTR_DAT_067c9a28;
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (long *)0x0;
  if (param_2 == 0 && param_3 == 0) {
    lVar15 = *(long *)(param_1 + 0x40);
    if (lVar15 == 0) {
      lVar15 = FUN_0512bdbc(param_1,0);
      *(long *)(param_1 + 0x40) = lVar15;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar5 = (long *)FUN_0510d264(lVar15,param_4 & 1,param_5 & 1,0,param_6,0);
    return plVar5;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  plVar5 = (long *)0x0;
  if (lVar15 != 0) {
    if (param_2 == 0) {
      plVar5 = (long *)FUN_0501e498(lVar15,0);
    }
    else {
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d8af0);
      FUN_0501ed08(uVar6,lVar15,0);
      plVar5 = (long *)(**(code **)(param_2 + 0x18))
                                 (*(undefined8 *)(param_2 + 0x40),uVar6,
                                  *(undefined8 *)(param_2 + 0x28));
    }
    uVar7 = FUN_0501ecac(plVar5,0,0);
    if ((uVar7 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        return (long *)0x0;
      }
      uVar13 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = thunk_FUN_02f6ef30(UnityEngine_InputSystem_Users_InputUser_UserData_var);
      uVar8 = thunk_FUN_02f6ef30(PTR_DAT_067c9b30);
      uVar6 = FUN_04f6f6b4(uVar6,uVar13,uVar8,0);
      thunk_FUN_02f6ef30(PTR_DAT_067d5358);
      uVar8 = thunk_FUN_02f45270();
      FUN_05089c5c(uVar8,uVar6,0);
      goto LAB_0511bdac;
    }
  }
  plVar16 = *(long **)(param_1 + 0x10);
  if (param_3 == 0) {
    if (plVar16 == (long *)0x0) goto LAB_0511bd20;
    lVar15 = *plVar16;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511b90c;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02f421d0(plVar16,*(long *)
                                   UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var
                          ,0);
LAB_0511b90c:
    uVar6 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if (plVar5 == (long *)0x0) goto LAB_0511bd20;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))
                               (plVar5,uVar6,0,param_5 & 1,*(undefined8 *)(*plVar5 + 0x2f0));
  }
  else {
    if (plVar16 == (long *)0x0) goto LAB_0511bd20;
    lVar15 = *plVar16;
    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0511b8d0;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_02f421d0(plVar16,*(long *)
                                   UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var
                          ,0);
LAB_0511b8d0:
    uVar6 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    plVar5 = (long *)(**(code **)(param_3 + 0x18))
                               (*(undefined8 *)(param_3 + 0x40),plVar5,uVar6,param_5 & 1,
                                *(undefined8 *)(param_3 + 0x28));
  }
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_050ed374(plVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      return (long *)0x0;
    }
    plVar5 = *(long **)(param_1 + 0x10);
LAB_0511bd44:
    uVar8 = thunk_FUN_02f6ef30(OVRSimpleJSON_JSONNode_Enumerator_var);
    uVar6 = 0;
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    uVar13 = thunk_FUN_02f6ef30(PTR_DAT_067c9b30);
    uVar6 = FUN_04f6f6b4(uVar8,uVar6,uVar13,0);
    thunk_FUN_02f6ef30(PTR_DAT_067d90a8);
    uVar8 = thunk_FUN_02f45270();
    FUN_0511740c(uVar8,uVar6);
LAB_0511bdac:
    uVar6 = thunk_FUN_02f6ef30(OVRSimpleJSON_JSONNode_KeyEnumerator_var);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar8,uVar6);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03ac039c(&local_b0,*(long *)(param_1 + 0x20),
                 *(undefined8 *)UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var);
    puVar3 = UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var;
    puVar2 = UnityEngine_InputSystem_InputControlPath_PathParser_var;
    plStack_78 = plStack_a8;
    local_80 = local_b0;
    local_70 = local_a0;
    local_b0 = 0;
    plVar16 = plVar5;
    plStack_a8 = &local_80;
    do {
      plVar5 = plVar16;
      uVar7 = FUN_04aff1b0(&local_80,*(undefined8 *)puVar2);
      plVar4 = local_70;
      if ((uVar7 & 1) == 0) {
        iVar14 = 0x11;
        goto LAB_0511babc;
      }
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar15 = *local_70;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0511ba48;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(local_70,*(long *)puVar3,0);
LAB_0511ba48:
      uVar6 = (*(code *)*puVar9)(plVar4,puVar9[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar6,uVar6);
      }
      plVar16 = (long *)(**(code **)(*plVar5 + 0x7a8))
                                  (plVar5,uVar6,0x30,*(undefined8 *)(*plVar5 + 0x7b0));
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050ed374(plVar16,0,0);
    } while ((uVar7 & 1) == 0);
    if ((param_4 & 1) != 0) {
      uVar6 = thunk_FUN_02f6ef30(OVRSimpleJSON_JSONNode_Enumerator_var);
      uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar13 = thunk_FUN_02f6ef30(PTR_DAT_067c9b30);
      uVar6 = FUN_04f6f6b4(uVar6,uVar8,uVar13,0);
      thunk_FUN_02f6ef30(PTR_DAT_067d90a8);
      uVar8 = thunk_FUN_02f45270();
      FUN_0511740c(uVar8,uVar6);
      uVar6 = thunk_FUN_02f6ef30(OVRSimpleJSON_JSONNode_KeyEnumerator_var);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar6);
    }
    iVar14 = 0x1a;
LAB_0511babc:
    lVar15 = local_b0;
    FUN_04aff1ac(plStack_a8,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJsonNameAndDescriptorOnly_var
                );
    if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(lVar15);
    }
    if ((iVar14 != 0x11) && (iVar14 != 0)) {
      return (long *)0x0;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar16 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,
                                   *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
    puVar2 = UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var;
    if (plVar16 == (long *)0x0) goto LAB_0511bd20;
    if (0 < (int)plVar16[3]) {
      uVar7 = 0;
      do {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar15 = FUN_03abf644(*(long *)(param_1 + 0x28),uVar7 & 0xffffffff,*(undefined8 *)puVar2
                                 ), lVar15 == 0)) goto LAB_0511bd20;
        lVar15 = FUN_0511b5e0(lVar15,param_2,param_3,param_4 & 1,param_5 & 1,param_6);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
        }
        uVar10 = FUN_050ed374(lVar15,0,0);
        if ((uVar10 & 1) != 0) {
          if ((param_4 & 1) == 0) {
            return (long *)0x0;
          }
          lVar15 = *(long *)(param_1 + 0x28);
          if (lVar15 == 0) goto LAB_0511bd20;
          uVar6 = thunk_FUN_02f6ef30(UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var);
          lVar15 = FUN_03abf644(lVar15,uVar7 & 0xffffffff,uVar6);
          if (lVar15 == 0) goto LAB_0511bd20;
          plVar5 = *(long **)(lVar15 + 0x10);
          goto LAB_0511bd44;
        }
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_02f45174(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)) {
          uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar6,0);
        }
        uVar1 = *(uint *)(plVar16 + 3);
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar10 = uVar7 + 1;
        plVar16[uVar7 + 4] = lVar15;
        uVar7 = uVar10;
      } while ((long)uVar10 < (long)(int)uVar1);
    }
    if (plVar5 == (long *)0x0) goto LAB_0511bd20;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x938))(plVar5,plVar16,*(undefined8 *)(*plVar5 + 0x940))
    ;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_03ac039c(local_98,*(long *)(param_1 + 0x30),
                 *(undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice_var);
    puVar3 = UnityEngine_InputSystem_Users_InputUser_GlobalState_var;
    puVar2 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJson_var;
    local_b0 = 0;
    plStack_a8 = local_98;
    while (uVar7 = FUN_04aff1b0(local_98,*(undefined8 *)puVar2), plVar16 = local_88,
          lVar15 = local_b0, (uVar7 & 1) != 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar15 = *local_88;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0511bc80;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(local_88,*(long *)puVar3,0);
LAB_0511bc80:
      plVar5 = (long *)(*(code *)*puVar9)(plVar16,plVar5,puVar9[1]);
    }
    FUN_04aff1ac(plStack_a8,
                 *(undefined8 *)UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_var);
    if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c0(lVar15);
    }
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return plVar5;
  }
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x928))(plVar5,*(undefined8 *)(*plVar5 + 0x930));
    return plVar5;
  }
LAB_0511bd20:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


