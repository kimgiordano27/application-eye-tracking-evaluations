/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetAppAsymmetricFov
ENTRY_POINT: 0339a9dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_21_0__ovrp_GetAppAsymmetricFov(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long lVar8;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  do {
    (**(code **)(param_1 + 0x168))(param_2,*(undefined8 *)(param_1 + 0x170));
    uVar2 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar2 & 1) == 0) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar7 = FUN_03295500(0);
      uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
LAB_0339aba8:
      FUN_0336f2b8(uVar6,uVar7);
LAB_0339ac10:
      uVar6 = FUN_0335cdc4();
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar7);
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033babe4();
    if (unaff_x24 == 0) {
LAB_0339ab74:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_031e6da0();
LAB_0339aa30:
    uVar2 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar2 & 1) == 0) {
      FUN_0339d160();
      goto LAB_0339aa68;
    }
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 != 4) break;
    param_2 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (param_2 == (long *)0x0) goto LAB_0339ab74;
    param_1 = *param_2;
  } while( true );
  if (iVar1 == 5) goto LAB_0339aa30;
  if (iVar1 != 0xd) {
    FUN_019b2708();
    (**(code **)(*unaff_x19 + 0x188))();
    thunk_FUN_01c273e8(PTR_DAT_042308a0);
    uVar6 = FUN_03307544();
    uVar7 = thunk_FUN_01c273e8(
                              Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                              );
    FUN_03146988(uVar7,uVar6,0);
    goto LAB_0339ac10;
  }
LAB_0339aa68:
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar7 = FUN_03295500(0);
    FUN_019b2708();
    uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
    goto LAB_0339aba8;
  }
  lVar8 = *(long *)(unaff_x20 + 0xc0);
  if (lVar8 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar7 = FUN_03295500(0);
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                              );
    goto LAB_0339aba8;
  }
  plVar3 = (long *)FUN_01c5d2fc(*unaff_x27,2);
  if (plVar3 == (long *)0x0) goto LAB_0339ab74;
  if ((unaff_x24 != 0) && (lVar4 = thunk_FUN_01c495e4(), lVar4 == 0)) {
LAB_0339ac40:
    uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = unaff_x24;
    if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339ab74;
    lVar4 = thunk_FUN_01c49334(*unaff_x26);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0339ac40;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      uVar6 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),plVar3,*(undefined8 *)(lVar8 + 0x28));
      if (unaff_x22 != 0) {
        FUN_0339c944();
      }
      FUN_0339cd08();
      FUN_0339cf34();
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


