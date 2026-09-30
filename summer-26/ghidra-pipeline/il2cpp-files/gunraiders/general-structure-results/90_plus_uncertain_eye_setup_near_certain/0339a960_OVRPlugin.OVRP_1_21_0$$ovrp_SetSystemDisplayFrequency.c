/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetSystemDisplayFrequency
ENTRY_POINT: 0339a960
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


undefined8 OVRPlugin_OVRP_1_21_0__ovrp_SetSystemDisplayFrequency(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar11;
  undefined8 *unaff_x27;
  
  lVar5 = thunk_FUN_01c496e0(*unaff_x27);
  FUN_031e667c();
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
      plVar7 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar7 == (long *)0x0) goto LAB_0339ab74;
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar6 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar10 = FUN_03295500(0);
        uVar9 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
        goto LAB_0339aba8;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_033babe4();
      if (lVar5 == 0) goto LAB_0339ab74;
      FUN_031e6da0(lVar5,uVar9,uVar10,0);
    }
    else if (iVar4 != 5) {
      if (iVar4 == 0xd) goto LAB_0339aa68;
      FUN_019b2708();
      (**(code **)(*unaff_x19 + 0x188))();
      thunk_FUN_01c273e8(PTR_DAT_042308a0);
      uVar9 = FUN_03307544();
      uVar10 = thunk_FUN_01c273e8(
                                 Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                 );
      FUN_03146988(uVar10,uVar9,0);
      goto LAB_0339ac10;
    }
    uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar6 & 1) != 0);
  FUN_0339d160();
LAB_0339aa68:
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar10 = FUN_03295500(0);
    FUN_019b2708();
    uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
  }
  else {
    lVar11 = *(long *)(unaff_x20 + 0xc0);
    if (lVar11 != 0) {
      plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
      if (plVar7 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_0339ac40:
          uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = lVar5;
          if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339ab74;
          lVar5 = thunk_FUN_01c49334(*(undefined8 *)puVar3);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_0339ac40;
          if (1 < *(uint *)(plVar7 + 3)) {
            plVar7[5] = lVar5;
            uVar9 = (**(code **)(lVar11 + 0x18))
                              (*(undefined8 *)(lVar11 + 0x40),plVar7,*(undefined8 *)(lVar11 + 0x28))
            ;
            if (unaff_x22 != 0) {
              FUN_0339c944();
            }
            FUN_0339cd08();
            FUN_0339cf34();
            return uVar9;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      goto LAB_0339ab74;
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar10 = FUN_03295500(0);
    uVar9 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                              );
  }
LAB_0339aba8:
  FUN_0336f2b8(uVar9,uVar10);
LAB_0339ac10:
  uVar9 = FUN_0335cdc4();
  uVar10 = thunk_FUN_01c273e8(
                             Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar9,uVar10);
}


