/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetTiledMultiResLevel
ENTRY_POINT: 0339a6ec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_21_0__ovrp_SetTiledMultiResLevel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x5b0));
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
  FUN_01c5d288(PTR_DAT_042307f8);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<IClippable>_GetEnumerator__);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              );
  FUN_01c5d288(UnityEngine_Splines_InterpolatorUtility_TypeInfo);
  FUN_01c5d288(PTR_DAT_042305b8);
  FUN_01c5d288(System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo);
  FUN_01c5d288(
              VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass12_0_TypeInfo
              );
  FUN_01c5d288(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<IClippable>_Remove__);
  *(undefined1 *)(unaff_x23 + 0x6c8) = 1;
  if (unaff_x20 == 0) goto LAB_0339ab74;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar5 = FUN_033a7cb8(0);
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((uVar5 & 1) == 0) {
    uVar7 = FUN_03317620(0);
    uVar8 = FUN_03317620(0);
    uVar9 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Add__
                              );
    uVar11 = thunk_FUN_01c273e8(
                               Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_Clear__
                               );
    uVar7 = FUN_031532c4(uVar9,uVar7,uVar11,uVar8,0);
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar8 = FUN_03295500(0);
  }
  else {
    plVar15 = *(long **)(unaff_x21 + 0x28);
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0339a808;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar15,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339a808:
      iVar4 = (*(code *)*puVar6)(plVar15,puVar6[1]);
      if (2 < iVar4) {
        if (unaff_x19 == (long *)0x0) goto LAB_0339ab74;
        plVar15 = *(long **)(unaff_x21 + 0x28);
        uVar7 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar8 = FUN_03295500(0);
        uVar8 = FUN_0336f2b8(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<IClippable>_Remove__,uVar8,
                             *(undefined8 *)(unaff_x20 + 0x60),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar9 = thunk_FUN_01c495e4();
        uVar7 = FUN_03358c64(uVar9,uVar7,uVar8,0);
        if (plVar15 == (long *)0x0) goto LAB_0339ab74;
        lVar12 = *plVar15;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0339a918;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar15,*(long *)puVar1,1);
LAB_0339a918:
        (*(code *)*puVar6)(plVar15,3,uVar7,0,puVar6[1]);
      }
    }
    puVar1 = System_Linq_Expressions_Interpreter_NegateInstruction_NegateSingle_TypeInfo;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<IClippable>_GetEnumerator__
                              );
    FUN_03391edc();
    lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_031e667c(lVar12,uVar8,uVar7,0);
    puVar3 = 
    VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass12_0_TypeInfo
    ;
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
        plVar15 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar15 == (long *)0x0) goto LAB_0339ab74;
        uVar9 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar5 & 1) == 0) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar8 = FUN_03295500(0);
          uVar7 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
          uVar14 = uVar9;
          goto LAB_0339aba8;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_033babe4();
        if (lVar12 == 0) goto LAB_0339ab74;
        FUN_031e6da0(lVar12,uVar9,uVar7,0);
      }
      else if (iVar4 != 5) {
        if (iVar4 == 0xd) goto LAB_0339aa68;
        FUN_019b2708();
        (**(code **)(*unaff_x19 + 0x188))();
        thunk_FUN_01c273e8(PTR_DAT_042308a0);
        uVar14 = FUN_03307544();
        uVar7 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                  );
        FUN_03146988(uVar7,uVar14,0);
        goto LAB_0339ac10;
      }
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar5 & 1) != 0);
    FUN_0339d160();
LAB_0339aa68:
    if (*(char *)(unaff_x20 + 0x2a) == '\0') {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar8 = FUN_03295500(0);
      FUN_019b2708();
      uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
      uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
    }
    else {
      lVar16 = *(long *)(unaff_x20 + 0xc0);
      if (lVar16 != 0) {
        plVar15 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,2);
        if (plVar15 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar10 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
LAB_0339ac40:
            uVar14 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar14,0);
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar12;
            if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339ab74;
            lVar12 = thunk_FUN_01c49334(*(undefined8 *)puVar3);
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0))
            goto LAB_0339ac40;
            if (1 < *(uint *)(plVar15 + 3)) {
              plVar15[5] = lVar12;
              uVar14 = (**(code **)(lVar16 + 0x18))
                                 (*(undefined8 *)(lVar16 + 0x40),plVar15,
                                  *(undefined8 *)(lVar16 + 0x28));
              if (unaff_x22 != 0) {
                FUN_0339c944();
              }
              FUN_0339cd08();
              FUN_0339cf34();
              return uVar14;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        goto LAB_0339ab74;
      }
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar8 = FUN_03295500(0);
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                                );
    }
  }
LAB_0339aba8:
  FUN_0336f2b8(uVar7,uVar8,uVar14,0);
LAB_0339ac10:
  uVar14 = FUN_0335cdc4();
  uVar7 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar14,uVar7);
}


