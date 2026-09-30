/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetSystemDisplayAvailableFrequencies
ENTRY_POINT: 0339a8dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_21_0__ovrp_GetSystemDisplayAvailableFrequencies
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  long in_x10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  
  piVar11 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar11 + 1) * 0x10 + 0x138);
      goto LAB_0339a918;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_01c72498();
LAB_0339a918:
  (*(code *)*puVar5)();
  puVar1 = System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<IClippable>_GetEnumerator__)
  ;
  FUN_03391edc();
  lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_031e667c(lVar7,uVar12,uVar6,0);
  puVar3 = 
  VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass12_0_TypeInfo;
  puVar2 = PTR_DAT_042307f8;
  puVar1 = PTR_DAT_042305b8;
  if (unaff_x19 == (long *)0x0) {
LAB_0339ab74:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    iVar4 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar4 == 4) {
      plVar9 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar9 == (long *)0x0) goto LAB_0339ab74;
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar8 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar12 = FUN_03295500(0);
        uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
        goto LAB_0339aba8;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_033babe4();
      if (lVar7 == 0) goto LAB_0339ab74;
      FUN_031e6da0(lVar7,uVar6,uVar12,0);
    }
    else if (iVar4 != 5) {
      if (iVar4 == 0xd) goto LAB_0339aa68;
      FUN_019b2708();
      (**(code **)(*unaff_x19 + 0x188))();
      thunk_FUN_01c273e8(PTR_DAT_042308a0);
      uVar6 = FUN_03307544();
      uVar12 = thunk_FUN_01c273e8(
                                 Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                 );
      FUN_03146988(uVar12,uVar6,0);
      goto LAB_0339ac10;
    }
    uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar8 & 1) != 0);
  FUN_0339d160();
LAB_0339aa68:
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar12 = FUN_03295500(0);
    FUN_019b2708();
    uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
  }
  else {
    lVar13 = *(long *)(unaff_x20 + 0xc0);
    if (lVar13 != 0) {
      plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
      if (plVar9 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar10 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_0339ac40:
          uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,0);
        }
        if ((int)plVar9[3] != 0) {
          plVar9[4] = lVar7;
          if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339ab74;
          lVar7 = thunk_FUN_01c49334(*(undefined8 *)puVar3);
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_0339ac40;
          if (1 < *(uint *)(plVar9 + 3)) {
            plVar9[5] = lVar7;
            uVar6 = (**(code **)(lVar13 + 0x18))
                              (*(undefined8 *)(lVar13 + 0x40),plVar9,*(undefined8 *)(lVar13 + 0x28))
            ;
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
      goto LAB_0339ab74;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar12 = FUN_03295500(0);
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                              );
  }
LAB_0339aba8:
  FUN_0336f2b8(uVar6,uVar12);
LAB_0339ac10:
  uVar6 = FUN_0335cdc4();
  uVar12 = thunk_FUN_01c273e8(
                             Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar12);
}


