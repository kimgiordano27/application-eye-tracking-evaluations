/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilLevel
ENTRY_POINT: 0339a7e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilLevel(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar13;
  long lVar14;
  long *unaff_x28;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0339a808;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_01c72498();
LAB_0339a808:
  iVar4 = (*(code *)*puVar5)();
  if (2 < iVar4) {
    if (unaff_x19 == (long *)0x0) goto LAB_0339ab74;
    plVar13 = *(long **)(unaff_x21 + 0x28);
    uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
    }
    uVar7 = FUN_03295500(0);
    uVar7 = FUN_0336f2b8(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<IClippable>_Remove__,uVar7,
                         *(undefined8 *)(unaff_x20 + 0x60),0);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    uVar8 = thunk_FUN_01c495e4();
    uVar6 = FUN_03358c64(uVar8,uVar6,uVar7,0);
    if (plVar13 == (long *)0x0) goto LAB_0339ab74;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0339a918;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar13,*unaff_x28,1);
LAB_0339a918:
    (*(code *)*puVar5)(plVar13,3,uVar6,0,puVar5[1]);
  }
  puVar1 = System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<IClippable>_GetEnumerator__)
  ;
  FUN_03391edc();
  lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_031e667c(lVar10,uVar7,uVar6,0);
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
      plVar13 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar13 == (long *)0x0) goto LAB_0339ab74;
      uVar6 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar11 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar7 = FUN_03295500(0);
        uVar6 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
        goto LAB_0339aba8;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_033babe4();
      if (lVar10 == 0) goto LAB_0339ab74;
      FUN_031e6da0(lVar10,uVar6,uVar7,0);
    }
    else if (iVar4 != 5) {
      if (iVar4 == 0xd) goto LAB_0339aa68;
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
    uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
  } while ((uVar11 & 1) != 0);
  FUN_0339d160();
LAB_0339aa68:
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar7 = FUN_03295500(0);
    FUN_019b2708();
    uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
  }
  else {
    lVar14 = *(long *)(unaff_x20 + 0xc0);
    if (lVar14 != 0) {
      plVar13 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
      if (plVar13 != (long *)0x0) {
        if ((lVar10 != 0) &&
           (lVar9 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
LAB_0339ac40:
          uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,0);
        }
        if ((int)plVar13[3] != 0) {
          plVar13[4] = lVar10;
          if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339ab74;
          lVar10 = thunk_FUN_01c49334(*(undefined8 *)puVar3);
          if ((lVar10 != 0) &&
             (lVar9 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
          goto LAB_0339ac40;
          if (1 < *(uint *)(plVar13 + 3)) {
            plVar13[5] = lVar10;
            uVar6 = (**(code **)(lVar14 + 0x18))
                              (*(undefined8 *)(lVar14 + 0x40),plVar13,*(undefined8 *)(lVar14 + 0x28)
                              );
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
    uVar7 = FUN_03295500(0);
    uVar6 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                              );
  }
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


